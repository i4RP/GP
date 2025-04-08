// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaMeshGenerator.h"

#include "DrawDebugHelpers.h"
#include "./../libs/mapbox/earcut.h"
#include "CoalaMeshActor.h"
#include "CoalaActor.h"
#include "CoalaAreaActor.h"
#include "CoalaArea.h"
#include "CoalaAreaController.h"
#include "CoalaCellMeshClipper.h"
#include "CoalaBlueprintUtility.h"
#include "CoalaStreet.h"
#include "CoalaProperties.h"
#include "CoalaCell.h"
#include "CoalaDevelopmentConfigurations.h"
#include "CoalaDevelopmentUtility.h"
#include "CoalaTile.h"
#include "CoalaController.h"

#include "KismetProceduralMeshLibrary.h"
#include "Engine/Engine.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Async/Async.h"
#include "HAL/ThreadManager.h"

#include <vector>

namespace mapbox
{
	namespace util
	{
		// template specialization for FVector
		template <>
		struct nth<0, FVector>
		{
			inline static auto get(const FVector& t)
			{
				return t.X;
			};
		};
		template <>
		struct nth<1, FVector>
		{
			inline static auto get(const FVector& t)
			{
				return t.Y;
			};
		};
	}
}

/*
// custom compare function for "Create Cells" logic
namespace std
{
	template <>
	struct less<std::pair<int, UMaterialInterface*>>
	{
		bool
		operator()( const std::pair<int, UMaterialInterface*>& lhs, const std::pair<int, UMaterialInterface*>& rhs ) const
		{
			return lhs.first < rhs.first;
		}
	};
}
*/

void
MeshGenerator::generateMesh(
	UProceduralMeshComponent*& out,
	TArray<FVector> basicShape,
	TArray<TArray<FVector>> holes,
	int segmentIndexToCreateMesh,
	float zOffset,
	bool generateUVs,
	bool generateCollisions,
	bool stretchUVs )
{
	TRACE_CPUPROFILER_EVENT_SCOPE( generateMesh );

	TArray<FVector> vertices;

	if( zOffset != 0 )
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( zOffseting );
		for( int i = 0; i < basicShape.Num(); ++i )
		{
			basicShape[i].Z = zOffset;
		}

		for( int i = 0; i < holes.Num(); ++i )
		{
			TArray<FVector> currentHole = holes[i];
			for( int b = 0; b < currentHole.Num(); ++b )
			{
				FVector current = currentHole[b];
				current.Z = zOffset;
				currentHole[b] = current;
			}
			holes[i] = currentHole;
		}
	}

	TArray<int32> triangles;
	TArray<FVector> normals;
	TArray<FVector2D> UV0;

	if( generateUVs )
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( generateUVs );

		double min_x = basicShape[0].X;
		double max_x = basicShape[0].X;

		double min_y = basicShape[0].Y;
		double max_y = basicShape[0].Y;

		for( int i = 0; i < basicShape.Num(); ++i )
		{
			FVector current = basicShape[i];

			if( current.X < min_x )
				min_x = current.X;
			if( current.X > max_x )
				max_x = current.X;
			if( current.Y < min_y )
				min_y = current.Y;
			if( current.Y > max_y )
				max_y = current.Y;
		}

		for( int i = 0; i < basicShape.Num(); ++i )
		{
			FVector current = basicShape[i];

			FVector2D uv;
			if( stretchUVs )
			{
				uv = FVector2D(
					((current.X - min_x) / (max_x - min_x)),
					((current.Y - min_y) / (max_y - min_y))
				);
			}
			else
			{
				// using tileset value as tiling value
				uv = FVector2D(
					(current.X - min_x) / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale()),
					(current.Y - min_y) / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale())
				);
			}

			//UE_LOG( LogTemp, Warning, TEXT( "uv: %s" ), *uv.ToString() );
			UV0.Add( uv );
		}

		for( int i = 0; i < holes.Num(); ++i )
		{
			TArray<FVector> currentHole = holes[i];
			for( int a = 0; a < currentHole.Num(); ++a )
			{
				FVector current = currentHole[a];

				FVector2D uv(
					(current.X - min_x) / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale()),
					(current.Y - min_y) / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale())
				);

				UV0.Add( uv );
			}
		}
	}

	TArray<FProcMeshTangent> tangents;
	{
		std::vector<std::vector<FVector>> polygon;
		{
			TRACE_CPUPROFILER_EVENT_SCOPE( convert to polygon );
			{
				TRACE_CPUPROFILER_EVENT_SCOPE( basicShape );
				// Fill polygon structure with actual data. Any winding order works.
				// The first polyline defines the main polygon.

				std::vector<FVector> vertices_converted;
				for( int i = 0; i < basicShape.Num(); ++i )
				{
					vertices_converted.push_back( basicShape[i] );
				}
				polygon.push_back( vertices_converted );
			}
			{
				TRACE_CPUPROFILER_EVENT_SCOPE( holes );
				// Following polylines define holes.
				// polygon.push_back( {{75, 25}, {75, 75}, {25, 75}, {25, 25}} );
				for( int i = 0; i < holes.Num(); ++i )
				{
					TArray<FVector> currentHole = holes[i];

					std::vector<FVector> vertices_current_hole;
					for( int a = 0; a < currentHole.Num(); ++a )
					{
						vertices_current_hole.push_back( currentHole[a] );
					}
					polygon.push_back( vertices_current_hole );
				}
			}
		}

		{
			TRACE_CPUPROFILER_EVENT_SCOPE( triangulation );

			// Run tessellation
			// Returns array of indices that refer to the vertices of the input polygon.
			// e.g: the index 6 would refer to {25, 75} in this example.
			// Three subsequent indices form a triangle. Output triangles are clockwise.
			std::vector<uint32_t> indices = mapbox::earcut<uint32_t>( polygon );

			for( size_t i = 0; i < indices.size(); ++i )
			{
				//UE_LOG( LogTemp, Warning, TEXT( "indices %d: %d" ), i, indices[i] );
				triangles.Insert( indices[i], 0 );
				//Triangles.Add( indices[i] );
				//debugString += FString::FromInt( i ) + "=" + FString::FromInt( indices[i] ) + FString( " " );
			}
			//UE_LOG( LogTemp, Warning, TEXT( "%s" ), *debugString );
		}
	}

	{
		TRACE_CPUPROFILER_EVENT_SCOPE( to vertices );
		{
			TRACE_CPUPROFILER_EVENT_SCOPE( shapes );
			for( int i = 0; i < basicShape.Num(); ++i )
				vertices.Add( basicShape[i] );
		}

		{
			TRACE_CPUPROFILER_EVENT_SCOPE( holes );
			for( int i = 0; i < holes.Num(); ++i )
			{
				TArray<FVector> currentHole = holes[i];
				for( int b = 0; b < currentHole.Num(); ++b )
				{
					vertices.Add( currentHole[b] );
				}
			}
		}
	}

	TArray<FLinearColor> vertexColors;
	_createMeshOnMainThread( out, segmentIndexToCreateMesh, vertices, triangles, normals, UV0, vertexColors, tangents, generateCollisions );

	MeshGenerator::verifyValidMesh( out );
}

void
MeshGenerator::generateMesh(
	TArray<TArray<FVector>> shapes, TArray<TArray<TArray<FVector>>> holes, TArray<int32> zOffset, TArray<FVector> normals, bool generateUVs, bool stretchUVs, bool weldVertices,
	TArray<FVector>& vertices, TArray<int>& triangles, TArray<FVector2D>& UV0 )
{
	TRACE_CPUPROFILER_EVENT_SCOPE( generateCombinedMeshs );

	int indicesOffset = 0;
	//UE_LOG(LogTemp, Warning, TEXT("amount shapes %d:"), shapes.Num());
	int heightArrayLength = zOffset.Num();
	if( heightArrayLength > 0 )
	{
		{
			TRACE_CPUPROFILER_EVENT_SCOPE( zOffsetting );
			{
				TRACE_CPUPROFILER_EVENT_SCOPE( shapes );
				for( int z = 0; z < shapes.Num(); ++z )
				{
					TArray<FVector> newHeightenedShape = shapes[z];
					for( int y = 0; y < newHeightenedShape.Num(); ++y )
					{
						FVector newHeightenedVert = newHeightenedShape[y];
						newHeightenedVert.Z = zOffset[z % heightArrayLength];
						newHeightenedShape[y] = newHeightenedVert;
					}
					shapes[z] = newHeightenedShape;
				}
			}
			{
				TRACE_CPUPROFILER_EVENT_SCOPE( holes );
				for( int z = 0; z < holes.Num(); ++z )
				{
					TArray<TArray<FVector>> newHeightenedBuilding = holes[z];
					for( int y = 0; y < newHeightenedBuilding.Num(); ++y )
					{
						TArray<FVector> newHeightenedHole = newHeightenedBuilding[y];
						for( int u = 0; u < newHeightenedHole.Num(); ++u )
						{
							FVector newHeightenedHoleVert = newHeightenedHole[u];
							newHeightenedHoleVert.Z = zOffset[z % heightArrayLength];
							newHeightenedHole[u] = newHeightenedHoleVert;
						}
						newHeightenedBuilding[y] = newHeightenedHole;
					}
					holes[z] = newHeightenedBuilding;
				}
			}
		}
	}

	TRACE_CPUPROFILER_EVENT_SCOPE( triangulate all shapes and her holes );
	for( int a = 0; a < shapes.Num(); ++a )
	{
		for( int b = 0; b < shapes[a].Num(); ++b )
			vertices.Add( shapes[a][b] );

		for( int b = 0; b < holes[a].Num(); ++b )
		{
			for( int d = 0; d < holes[a][b].Num(); ++d )
				vertices.Add( holes[a][b][d] );
		}

		TArray<uint32> indices = triangulate( shapes[a], holes[a] );
		for( int c = 0; c < indices.Num(); ++c )
			triangles.Add( indices[c] + indicesOffset );

		indicesOffset = vertices.Num();
	}

	if( generateUVs )
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( generateUVs );

		for( int i = 0; i < shapes.Num(); ++i )
		{
			float min_x = shapes[i][0].X;
			float max_x = shapes[i][0].X;

			float min_y = shapes[i][0].Y;
			float max_y = shapes[i][0].Y;

			for( int a = 0; a < shapes[i].Num(); ++a )
			{
				if( shapes[i][a].X < min_x )
					min_x = shapes[i][a].X;
				if( shapes[i][a].X > max_x )
					max_x = shapes[i][a].X;
				if( shapes[i][a].Y < min_y )
					min_y = shapes[i][a].Y;
				if( shapes[i][a].Y > max_y )
					max_y = shapes[i][a].Y;
			}

			for( int a = 0; a < shapes[i].Num(); ++a )
			{
				if( stretchUVs )
				{
					UV0.Add( FVector2D(
						((shapes[i][a].X - min_x) / (max_x - min_x)),
						((shapes[i][a].Y - min_y) / (max_y - min_y))
					) );
				}
				else
				{
					// using tileset value as tiling value
					UV0.Add( FVector2D(
						shapes[i][a].X / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale()),
						shapes[i][a].Y / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale())
					) );
				}
			}

			for( int a = 0; a < holes[i].Num(); ++a )
			{
				for( int b = 0; b < holes[i][a].Num(); ++b )
				{
					UV0.Add( FVector2D(
						holes[i][a][b].X / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale()),
						holes[i][a][b].Y / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale())
					) );
				}
			}
		}
	}

	TArray<FProcMeshTangent> tangents;
	TArray<FLinearColor> vertexColors;
	
	if( weldVertices )
		MeshGenerator::weldVertices( vertices, normals, UV0, triangles );
}

void
MeshGenerator::weldVertices(
	TArray<FVector>& vertices,
	TArray<FVector>& normals,
	TArray<FVector2D>& UV0,
	TArray<int>& triangles )
{
	float aMaxDelta = 0.01f;

	TArray<int> newVerts = TArray<int>();
	TArray<int> map = TArray<int>();
	map.Init( -1, vertices.Num() );

	for( int i = 0; i < vertices.Num(); i++ )
	{
		FVector p = vertices[i];

		bool duplicate = false;
		for( int i2 = 0; i2 < newVerts.Num(); i2++ )
		{
			int a = newVerts[i2];
			float delta = FVector::DistSquared( vertices[a], p );

			if( delta <= aMaxDelta )
			{
				map[i] = i2;
				duplicate = true;
				break;
			}
		}
		if( !duplicate )
		{
			map[i] = newVerts.Num();
			newVerts.Add( i );
		}
	}
	
	// create new vertices
	TArray<FVector> verts2 = TArray<FVector>();
	TArray<FVector> normals2 = TArray<FVector>();
	TArray<FVector2D> uvs2 = TArray<FVector2D>();
	for( int i = 0; i < newVerts.Num(); i++ )
	{
		int a = newVerts[i];
		verts2.Add( vertices[a] );
		if( normals.Num() > a )
		{
			normals2.Add( normals[a] );
		}
		if( UV0.Num() > a )
		{
			uvs2.Add( UV0[a] );
		}
	}
	
	// map the triangle to the new vertices
	TArray<int> triangles2 = TArray<int>();
	for( int i = 0; i < triangles.Num(); i++ )
	{
		triangles2.Add( triangles[i] );
	}

	for( int i = 0; i < triangles2.Num(); i++ )
	{
		triangles2[i] = map[triangles2[i]];
	}

	vertices = verts2;
	triangles = triangles2;
	normals = normals2;
	UV0 = uvs2;
}

FVector
MeshGenerator::calculateSurfaceNormal(
	FVector p1,
	FVector p2,
	FVector p3 )
{
	FVector u = p2 - p1;
	FVector v = p3 - p1;

	return FVector
	(
		u.Y * v.Z - u.Z * v.Y,
		u.Z * v.X - u.X * v.Z,
		u.X * v.Y - u.Y * v.X
	);
}

int
MeshGenerator::generateWallMesh(
	UProceduralMeshComponent*& out,
	TArray<FVector> basicShape,
	TArray<TArray<FVector>> holes,
	float buildingHight,
	int meshSegmentStartIndex,
	bool generateUVs,
	bool generateCollisions )
{
	TArray<FVector> vertices;

	int meshSegmentIndex = 0;
	for( int i = 0; i < basicShape.Num() - 1; ++i )
	{
		generateWallMeshSegment( out, meshSegmentStartIndex + meshSegmentIndex, basicShape[i], basicShape[i + 1], buildingHight, generateUVs, generateCollisions );
		++meshSegmentIndex;
	}

	for( int a = 0; a < holes.Num(); ++a )
	{
		TArray<FVector> currentHole = holes[a];
		for( int b = 1; b < currentHole.Num(); ++b )
		{
			FVector current = currentHole[b];
			FVector prev = currentHole[b - 1];

			generateWallMeshSegment( out, meshSegmentStartIndex + meshSegmentIndex, prev, current, buildingHight, generateUVs, generateCollisions );
			++meshSegmentIndex;
		}
	}

	return meshSegmentIndex;
}

void
MeshGenerator::generateBuildingMesh(
	UProceduralMeshComponent*& out,
	TArray<FVector> basicShape,
	TArray<TArray<FVector>> holes,
	float buildingHight,
	bool generateUVs,
	bool generateCollisions )
{
	//1 floor
	generateMesh( out, basicShape, holes, 0, 0, generateUVs, generateCollisions, false );
	// 2 - all walls
	int countCreatedWalls = generateWallMesh( out, basicShape, holes, buildingHight, 1, generateUVs, generateCollisions );
	// 3 - roof
	generateMesh( out, basicShape, holes, countCreatedWalls + 2, buildingHight, generateUVs, generateCollisions, false );
}

void
MeshGenerator::generateWallMeshSegment(
	UProceduralMeshComponent*& out,
	int indexMeshSection,
	FVector p1,
	FVector p2,
	float wall_height,
	bool generateUVs,
	bool generateCollisions )
{
	FVector topRight( p2.X, p2.Y, wall_height );
	FVector topLeft( p1.X, p1.Y, wall_height );

	TArray<FVector> vertices;
	vertices.Add( topLeft );
	vertices.Add( topRight );
	vertices.Add( p2 );
	vertices.Add( p1 );

	TArray<int32> triangles;
	triangles.Add( 0 );
	triangles.Add( 1 );
	triangles.Add( 2 );

	triangles.Add( 2 );
	triangles.Add( 3 );
	triangles.Add( 0 );

	TArray<FVector> normals;

	TArray<FVector2D> UV0;

	if( generateUVs )
	{
		float wall_width = std::abs( p2.X - p1.X ) + std::abs( p2.Y - p1.Y );

		float min_x = 0;
		float max_x = wall_width / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale());

		float min_y = 0;
		float max_y = wall_height / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale());

		UV0.Add( FVector2D( max_x, min_y ) );
		UV0.Add( FVector2D( min_x, min_y ) );
		UV0.Add( FVector2D( min_x, max_y ) );
		UV0.Add( FVector2D( max_x, max_y ) );
	}

	TArray<FProcMeshTangent> tangents;

	TArray<FLinearColor> vertexColors;

	_createMeshOnMainThread( out, indexMeshSection, vertices, triangles, normals, UV0, vertexColors, tangents, generateCollisions );
}

void
MeshGenerator::calculateAndDrawStreetBeginSegment(
	FVector start,
	FVector end,
	TArray<FVector>& addTo,
	float width,
	OPTIONS_SHAPE_GENERATION_FROM_LINE::type generation_option,
	bool drawMiddleVectors )
{
	if( drawMiddleVectors )
	{
		//		DrawDebugBox( GetWorld(), start, FVector::OneVector, FColor::Blue, true, 0, 100, 5 );
		//		DrawDebugBox( GetWorld(), end, FVector::OneVector, FColor::Blue, true, 0, 100, 5 );
		DrawDebugBox( GWorld, start, FVector::OneVector, FColor::Blue, true, 0, 100, 5 );
		DrawDebugBox( GWorld, end, FVector::OneVector, FColor::Blue, true, 0, 100, 5 );

		drawLine( start, end, FColor::Magenta );
	}

	FVector direction = end - start;
	float mul = 1;

	float angle_up = mul * (+90);
	float angle_down = mul * (-90);
	//UE_LOG(LogTemp, Warning, TEXT("begin direction x : %f , direction y: %f"), direction.X, direction.Y);
	//UE_LOG(LogTemp, Warning, TEXT("begin angle_up : %f , angle_down : %f"), angle_up, angle_down);
	// draw debug angle fan to see wich direction we are rotating
	if( drawMiddleVectors )
		MeshGenerator::drawDegreFanAround( start, end, angle_up );

	FVector point_rotated_up = direction.RotateAngleAxis( angle_up, FVector::UpVector );
	FVector point_rotated_down = direction.RotateAngleAxis( angle_down, FVector::UpVector );
	point_rotated_up.Normalize();
	point_rotated_down.Normalize();
	point_rotated_up = point_rotated_up * width + start;
	point_rotated_down = point_rotated_down * width + start;

	if( drawMiddleVectors )
	{
		drawLine( end, point_rotated_up, FColor::Emerald );
		drawLine( end, point_rotated_down, FColor::Emerald );
	}

	switch( generation_option )
	{
		case OPTIONS_SHAPE_GENERATION_FROM_LINE::BOTH_SIDES:
		{
			addTo.Add( point_rotated_up );
			addTo.Insert( point_rotated_down, 0 );
		}
		break;

		case OPTIONS_SHAPE_GENERATION_FROM_LINE::ONLY_LEFT:
		{
			addTo.Add( start );
			addTo.Insert( point_rotated_down, 0 );
		}
		break;

		case OPTIONS_SHAPE_GENERATION_FROM_LINE::INCREASE_SIZE:
		{
			addTo.Insert( point_rotated_down, 0 );
		}
		break;

		case OPTIONS_SHAPE_GENERATION_FROM_LINE::ONLY_RIGHT:
		{
			addTo.Add( point_rotated_up );
			addTo.Insert( start, 0 );
		}
		break;
	}
}

void
MeshGenerator::calculateAndDrawStreetCenterSegment(
	FVector p1,
	FVector p2,
	FVector p3,
	TArray<FVector>& addTo,
	float width,
	OPTIONS_SHAPE_GENERATION_FROM_LINE::type generation_option,
	bool drawMiddleVectors )
{
	if( drawMiddleVectors )
	{
		//		DrawDebugBox( GetWorld(), p1, FVector::OneVector, FColor::Blue, true, 0, 100, 5 );
		//		DrawDebugBox( GetWorld(), p2, FVector::OneVector, FColor::Blue, true, 0, 100, 5 );
		//		DrawDebugBox( GetWorld(), p3, FVector::OneVector, FColor::Blue, true, 0, 100, 5 );
		DrawDebugBox( GWorld, p1, FVector::OneVector, FColor::Blue, true, 0, 100, 5 );
		DrawDebugBox( GWorld, p2, FVector::OneVector, FColor::Blue, true, 0, 100, 5 );
		DrawDebugBox( GWorld, p3, FVector::OneVector, FColor::Blue, true, 0, 100, 5 );

		drawLine( p1, p2, FColor::Magenta );
		drawLine( p2, p3, FColor::Magenta );
	}
	float angle_up = 0;
	float angle_down = 0;
	float angle = MeshGenerator::getAngle( p1, p2, p3, drawMiddleVectors );
	float angle_first = angle * 0.5;

	int anglePrefix = 1;

	if( angle_first > 0 )
		anglePrefix = -1;

	float angle_second = anglePrefix * 180 + angle_first;
	if( drawMiddleVectors ) UE_LOG( LogTemp, Warning, TEXT("angle: %f angle_up: %f angle_down: %f"), angle, angle_up, angle_down );

	// draw debug angle fan to see wich direction we are rotating
	if( drawMiddleVectors )
		drawDegreFanAround( p2, p1, angle );
	//FVector directionForSides = p1 - p2;
	FVector directionForSides = p2 - p1;
	float mul = 1;

	if( angle < 0 && angle >= -180.01 )
	{
		angle_down = angle_first;
		angle_up = angle_second;
	}
	else if( angle < -180 )
	{
		angle_down = angle_second;
		angle_up = angle_first;
	}
	else if( angle > 180 )
	{
		angle_down = angle_first;
		angle_up = angle_second;
	}
	else
	{
		angle_down = angle_second;
		angle_up = angle_first;
	}
	//UE_LOG(LogTemp, Warning, TEXT("mid direction x : %f , direction y: %f"), directionForSides.X, directionForSides.Y);
	//UE_LOG(LogTemp, Warning, TEXT("mid angle_up : %f , angle_down : %f"), mul*angle_up, mul*angle_down);

	FVector point_rotated_up = directionForSides.RotateAngleAxis( mul * angle_up, FVector::UpVector );
	FVector point_rotated_down = directionForSides.RotateAngleAxis( mul * angle_down, FVector::UpVector );
	point_rotated_up.Normalize();
	point_rotated_down.Normalize();
	point_rotated_up = point_rotated_up * width + p2;
	point_rotated_down = point_rotated_down * width + p2;

	if( drawMiddleVectors )
	{
		drawLine( p2, point_rotated_up, FColor::Emerald );
		drawLine( p2, point_rotated_down, FColor::Emerald );
	}

	switch( generation_option )
	{
		case OPTIONS_SHAPE_GENERATION_FROM_LINE::BOTH_SIDES:
		{
			addTo.Add( point_rotated_up );
			addTo.Insert( point_rotated_down, 0 );
		}
		break;

		case OPTIONS_SHAPE_GENERATION_FROM_LINE::ONLY_LEFT:
		{
			addTo.Add( p2 );
			addTo.Insert( point_rotated_down, 0 );
		}
		break;

		case OPTIONS_SHAPE_GENERATION_FROM_LINE::INCREASE_SIZE:
		{
			addTo.Insert( point_rotated_down, 0 );
		}
		break;

		case OPTIONS_SHAPE_GENERATION_FROM_LINE::ONLY_RIGHT:
		{
			addTo.Add( point_rotated_up );
			addTo.Insert( p2, 0 );
		}
		break;
	}
}

void
MeshGenerator::calculateAndDrawStreetEndSegment(
	FVector start,
	FVector end,
	TArray<FVector>& addTo,
	float width,
	OPTIONS_SHAPE_GENERATION_FROM_LINE::type generation_option,
	bool drawMiddleVectors )
{
	if( drawMiddleVectors )
	{
		//		DrawDebugBox( GetWorld(), start, FVector::OneVector, FColor::Blue, true, 0, 100, 5 );
		//		DrawDebugBox( GetWorld(), end, FVector::OneVector, FColor::Blue, true, 0, 100, 5 );
		DrawDebugBox( GWorld, start, FVector::OneVector, FColor::Blue, true, 0, 100, 5 );
		DrawDebugBox( GWorld, end, FVector::OneVector, FColor::Blue, true, 0, 100, 5 );

		drawLine( start, end, FColor::Magenta );
	}

	FVector direction = end - start;
	float mul = 1;

	float angle_up = mul * (+90);
	float angle_down = mul * (-90);
	//UE_LOG(LogTemp, Warning, TEXT("end direction x : %f , direction y: %f"), direction.X, direction.Y);
	//UE_LOG(LogTemp, Warning, TEXT("end angle_up : %f , angle_down : %f"), angle_up, angle_down);
	// draw debug angle fan to see wich direction we are rotating
	if( drawMiddleVectors )
		MeshGenerator::drawDegreFanAround( start, end, angle_up );

	FVector point_rotated_up = direction.RotateAngleAxis( angle_up, FVector::UpVector );
	FVector point_rotated_down = direction.RotateAngleAxis( angle_down, FVector::UpVector );
	point_rotated_up.Normalize();
	point_rotated_down.Normalize();
	point_rotated_up = point_rotated_up * width + end;
	point_rotated_down = point_rotated_down * width + end;

	if( drawMiddleVectors )
	{
		drawLine( end, point_rotated_up, FColor::Emerald );
		drawLine( end, point_rotated_down, FColor::Emerald );
	}

	switch( generation_option )
	{
		case OPTIONS_SHAPE_GENERATION_FROM_LINE::BOTH_SIDES:
		{
			addTo.Add( point_rotated_up );
			addTo.Insert( point_rotated_down, 0 );
		}
		break;

		case OPTIONS_SHAPE_GENERATION_FROM_LINE::ONLY_LEFT:
		{
			addTo.Add( end );
			addTo.Insert( point_rotated_down, 0 );
		}
		break;

		case OPTIONS_SHAPE_GENERATION_FROM_LINE::INCREASE_SIZE:
		{
			addTo.Insert( point_rotated_down, 0 );
		}
		break;

		case OPTIONS_SHAPE_GENERATION_FROM_LINE::ONLY_RIGHT:
		{
			addTo.Add( point_rotated_up );
			addTo.Insert( end, 0 );
		}
		break;
	}
}

void
MeshGenerator::drawLine(
	FVector p1,
	FVector p2,
	FColor color,
	float thickness )
{
	//DrawDebugLine( GetWorld(), p1, p2, color, true, -1, 0, 1 );
	DrawDebugDirectionalArrow( GWorld, p1, p2, 100, color, true, -1, 0, thickness );
}

void
MeshGenerator::drawLines(
	TArray<FVector>& streetData,
	FColor color,
	float thickness )
{
	for( int i = 0; i < streetData.Num() - 1; ++i )
	{
		drawLine( streetData[i], streetData[i + 1], color, thickness );
	}
}

void
MeshGenerator::drawDegreFanAround(
	FVector start,
	FVector end,
	float drawDegre )
{
	FVector direction = end - start;

	drawLine( start, end, FColor::Blue );
	drawLine( start, direction.RotateAngleAxis( 0, FVector::UpVector ) + start, FColor::Green );
	drawLine( start, direction.RotateAngleAxis( 10, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 20, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 30, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 40, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 45, FVector::UpVector ) + start, FColor::Yellow );
	drawLine( start, direction.RotateAngleAxis( 50, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 60, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 70, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 80, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 90, FVector::UpVector ) + start, FColor::Blue );
	drawLine( start, direction.RotateAngleAxis( 100, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 110, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 120, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 130, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 140, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 150, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 160, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 170, FVector::UpVector ) + start, FColor::Red );
	drawLine( start, direction.RotateAngleAxis( 180, FVector::UpVector ) + start, FColor::Red );

	if( drawDegre != 0.0f )
	{
		direction *= 2;
		drawLine( start, direction.RotateAngleAxis( drawDegre, FVector::UpVector ) + start, FColor::White );
	}
}

float
MeshGenerator::getAngle(
	FVector p1,
	FVector p2,
	FVector p3,
	bool drawTwoDirectionVectors )
{
	float dx21 = p1.X - p2.X;
	float dy21 = p1.Y - p2.Y;

	float dx31 = p3.X - p2.X;
	float dy31 = p3.Y - p2.Y;

	float m12 = sqrt( dx21 * dx21 + dy21 * dy21 );
	float m13 = sqrt( dx31 * dx31 + dy31 * dy31 );
	float nen = dx21 * dx31 + dy21 * dy31;
	float valueforAcos = nen / (m12 * m13);
	float theta = 1.0;
	if( valueforAcos < -1.0 )
	{
		theta = acos( -1.0 );
	}
	else if( valueforAcos > 1.0 )
	{
		theta = acos( 1.0 );
	}
	else
	{
		theta = acos( valueforAcos );
	}

	double deg = theta * 180.0 / PI;

	// negate "deg" if p2 is left of line "p1 to p3"
	float d = (p2.X - p1.X) * (p3.Y - p1.Y) - (p2.Y - p1.Y) * (p3.X - p1.X);
	//UE_LOG( LogTemp, Warning, TEXT( "d: %f" ), d);
	if( d > 0 )
	{
		if( drawTwoDirectionVectors )
		{
			float org = deg + 90;
			UE_LOG( LogTemp, Warning, TEXT("change deg from %f to %f"), org, deg );
		}
	}

	// debug: angle between this two lines
	if( drawTwoDirectionVectors )
	{
		//UE_LOG( LogTemp, Warning, TEXT( "theta: %f deg: %f" ), theta, deg );

		drawLine( FVector::ZeroVector, FVector( dx21, dy21, 0 ), FColor::Green );
		drawLine( FVector::ZeroVector, FVector( dx31, dy31, 0 ), FColor::Yellow );

		drawLine( FVector::ZeroVector, FVector( dx21, dy21, 0 ).RotateAngleAxis( deg * 0.5f, FVector::UpVector ), FColor::White );
		drawLine( FVector::ZeroVector, FVector( dx21, dy21, 0 ).RotateAngleAxis( deg, FVector::UpVector ) * 2, FColor::White );
	}
	int res = -1;
	if( d < 0 )
	{
		res = 1;
	}
	return res * deg;
}

void
MeshGenerator::generateSingleWallMesh(
	TArray<FVector>& vertices, TArray<int32>& triangles, TArray<FVector2D>& UV0,
	TArray<TArray<FVector>> shapes,	TArray<TArray<TArray<FVector>>> holes, TArray<int32> zOffset, int segmentIndexToCreateMesh, bool generateUVs, bool stretchUVs, bool generateCollisions )
{
	int indicesOffset = 0;

	{
		TRACE_CPUPROFILER_EVENT_SCOPE( Triangulation );

		for( int a = 0; a < shapes.Num(); ++a )
		{
			TArray<FVector> current = shapes[a];

			for( int b = 0; b < current.Num() - 1; ++b )
			{
				generateSingleWallMeshSegment( current[b], current[b + 1], zOffset[a], indicesOffset, vertices, triangles, UV0, generateUVs );
				indicesOffset += 4;
			}

			TArray<TArray<FVector>> currenthole = holes[a];
			for( int c = 0; c < currenthole.Num(); ++c )
			{
				TArray<FVector> temphole = currenthole[c];
				for( int d = 1; d < temphole.Num(); ++d )
				{
					generateSingleWallMeshSegment( temphole[d - 1], temphole[d], zOffset[a], indicesOffset, vertices, triangles, UV0, generateUVs );
					indicesOffset += 4;
				}
			}
		}
	}
}

void
MeshGenerator::generateSingleWallMeshSegment(
	FVector p1,
	FVector p2,
	float wall_height,
	int indicesOffset,
	TArray<FVector>& vertices,
	TArray<int32>& triangles,
	TArray<FVector2D>& UV0,
	bool generateUVs )
{
	FVector topRight( p2.X, p2.Y, wall_height );
	FVector topLeft( p1.X, p1.Y, wall_height );
	FVector bottomRight( p2.X, p2.Y, p2.Z );
	FVector bottomLeft( p1.X, p1.Y, p1.Z );

	vertices.Add( topLeft );
	vertices.Add( topRight );
	vertices.Add( bottomRight );
	vertices.Add( bottomLeft );

	triangles.Add( 0 + indicesOffset );
	triangles.Add( 1 + indicesOffset );
	triangles.Add( 2 + indicesOffset );

	triangles.Add( 2 + indicesOffset );
	triangles.Add( 3 + indicesOffset );
	triangles.Add( 0 + indicesOffset );

	if( generateUVs )
	{
		float wall_width = sqrt( pow( std::abs( (p2.X) - (p1.X) ), 2 ) + pow( std::abs( (p2.Y) - (p1.Y) ), 2 ) );

		float min_x = 0;
		float max_x = wall_width / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale());

		float min_y = 0;
		float max_y_p1 = (wall_height - p1.Z) / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale());
		float max_y_p2 = (wall_height - p2.Z) / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale());

		UV0.Add( FVector2D( max_x, min_y ) );
		UV0.Add( FVector2D( min_x, min_y ) );
		UV0.Add( FVector2D( min_x, max_y_p2 ) );
		UV0.Add( FVector2D( max_x, max_y_p1 ) );
	}
}

TArray<uint32_t>
MeshGenerator::triangulate(
	const TArray<FVector>& shapeVertices,
	const TArray<TArray<FVector>>& holeVertices )
{
	TRACE_CPUPROFILER_EVENT_SCOPE( MeshGenerator::triangulate );
	std::vector<std::vector<FVector>> polygon;

	{
		TRACE_CPUPROFILER_EVENT_SCOPE( convert to polygon );
		// Fill polygon structure with actual data. Any winding order works.
		// The first polyline defines the main polygon.
		std::vector<FVector> vertices_converted;

		TRACE_CPUPROFILER_EVENT_SCOPE( shapeVertices );
		{
			for( int i = 0; i < shapeVertices.Num(); ++i )
				vertices_converted.push_back( shapeVertices[i] );
			polygon.push_back( vertices_converted );
		}

		// Following polylines define holes.
		// polygon.push_back( {{75, 25}, {75, 75}, {25, 75}, {25, 25}} );
		TRACE_CPUPROFILER_EVENT_SCOPE( holeVertices );
		{
			for( int i = 0; i < holeVertices.Num(); ++i )
			{
				TArray<FVector> currentHole = holeVertices[i];

				std::vector<FVector> vertices_current_hole;
				for( int a = 0; a < currentHole.Num(); ++a )
					vertices_current_hole.push_back( currentHole[a] );

				polygon.push_back( vertices_current_hole );
			}
		}
	}

	// Run tessellation
	// Returns array of indices that refer to the vertices of the input polygon.
	// e.g: the index 6 would refer to {25, 75} in this example.
	// Three subsequent indices form a triangle. Output triangles are clockwise.
	std::vector<uint32_t> indices;
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( earcut );
		indices = mapbox::earcut<uint32_t>( polygon );
	}

	TArray<uint32_t> ret;
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( convert back );
		for( size_t i = 0; i < indices.size(); ++i )
			ret.Insert( indices[i], 0 );
	}

	return ret;
}

TArray<FVector>
MeshGenerator::getShape(
	TArray<FVector>& streetData,
	float width,
	OPTIONS_SHAPE_GENERATION_FROM_LINE::type generation_option )
{
	TArray<FVector> calculatedShape;

	if( streetData.Num() == 0 )
		return calculatedShape;

	bool isClosed = false;
	if( streetData[0] == streetData[streetData.Num() - 1] )
		isClosed = true;

	for( int i = 0; i < streetData.Num(); ++i )
	{
		// to debug a specific point, uncomment below
		//			UE_LOG( LogTemp, Warning, TEXT( "%d)" ), i);
		/*			if( i == 90 )
					this->Test_CalculateAndDrawStreetCenterSegment( streetData[i], streetData[i+1], streetData[i+2], true );
				else
		*/

		if( i == 0 )
		{
			// first
			calculateAndDrawStreetBeginSegment( streetData[0], streetData[1], calculatedShape, width, generation_option );
		}
		else if( i == streetData.Num() - 1 )
		{
			int lastIndex = streetData.Num() - 1;
			if( !isClosed || generation_option == OPTIONS_SHAPE_GENERATION_FROM_LINE::INCREASE_SIZE )
			{
				// last
				calculateAndDrawStreetEndSegment( streetData[lastIndex - 1], streetData[lastIndex], calculatedShape, width, generation_option );
			}
			else
			{
				// closed shape means, last element is same as first element
				// so this connection has to be included:
				calculateAndDrawStreetCenterSegment( streetData[i - 1], streetData[0], streetData[1], calculatedShape, width, generation_option );
				FVector help_point_to_connect = calculatedShape[std::floor( calculatedShape.Num() / 2 ) - 1];
				calculatedShape.Insert( help_point_to_connect, 0 );
			}
		}
		else
		{
			// center element
			//ignore too close points

			FVector start = streetData[i - 1];
			FVector center = streetData[i];
			FVector end = streetData[i + 1];

			// skipp possible doublicated nodes
			if( start == center )
				continue;

			calculateAndDrawStreetCenterSegment( start, center, end, calculatedShape, width, generation_option );
		}
	}

	// close generated shape
	// (because it was generated from a line
	if( !isClosed )
	{
		FVector pointToCloseCalculatedShape = calculatedShape[0];
		calculatedShape.Add( pointToCloseCalculatedShape );
	}

	// remove strange NaN occurence
	for( int i = 0; i < calculatedShape.Num(); ++i )
	{
		if( calculatedShape[i].ContainsNaN() )
		{
			UE_LOG( CoalaLogCore, Warning, TEXT( "MeshGenerator::getShape - removing entry contains NaN at %d" ), i );
			calculatedShape.RemoveAt(i);
		}
	}

	return calculatedShape;
}

void
MeshGenerator::generateOutlineMesh_v2(
	TArray<FVector> shape,
	TArray<TArray<FVector>> holes,
	float outline_width,
	TArray<FVector>& shape_increased,
	TArray<TArray<FVector>>& holes_increased )
{
	// shape
	{
		shape_increased = MeshGenerator::getShape( shape, outline_width, OPTIONS_SHAPE_GENERATION_FROM_LINE::INCREASE_SIZE );
	}

	// holes
	{
		for( int i = 0; i < holes.Num(); ++i )
		{
			TArray<FVector> outline_shape = MeshGenerator::getShape( holes[i], outline_width, OPTIONS_SHAPE_GENERATION_FROM_LINE::INCREASE_SIZE );
			holes_increased.Add( outline_shape );
		}
	}
}

void
MeshGenerator::_createMeshOnMainThread(
	UProceduralMeshComponent*& mesh,
	const int segmentIndexToCreateMesh,
	const TArray<FVector>& vertices,
	const TArray<int32>& triangles,
	const TArray<FVector>& normals,
	const TArray<FVector2D>& UV0,
	const TArray<FLinearColor>& vertexColors,
	const TArray<FProcMeshTangent>& tangents,
	bool generateCollisions )
{
	TRACE_CPUPROFILER_EVENT_SCOPE( createMeshOnMainThread );

	uint32 threadId = FPlatformTLS::GetCurrentThreadId();
	FString threadName = FThreadManager::Get().GetThreadName( threadId );

#if WITH_EDITOR
	// none
#else
	// for testing on android
	//generateCollisions = false;
#endif

	// New in UE 4.17, multi-threaded PhysX cooking.
	mesh->bUseAsyncCooking = false;
	// Enable collision data
	mesh->ContainsPhysicsTriMeshData( false );

	if( IsInGameThread() )
	{
		// main thread
		mesh->CreateMeshSection_LinearColor( segmentIndexToCreateMesh, vertices, triangles, normals, UV0, vertexColors, tangents, generateCollisions );
	}
	else
	{
		// worker
		AsyncTask( ENamedThreads::GameThread, [mesh, segmentIndexToCreateMesh, vertices, triangles, normals, UV0, vertexColors, tangents, generateCollisions]()
		{
			mesh->CreateMeshSection_LinearColor( segmentIndexToCreateMesh, vertices, triangles, normals, UV0, vertexColors, tangents, generateCollisions );
		} );
	}
}



//unused functions consider removal

TArray<TArray<FVector>>
MeshGenerator::generateOutlineMesh(
	TArray<FVector> shape,
	TArray<TArray<FVector>> holes )
{
	float outline_width = 100 * ACoalaController::GetCoalaScale();

	TArray<TArray<FVector>> ret;

	// shape
	{
		TArray<FVector> outline_shape = MeshGenerator::getShape( shape, outline_width, OPTIONS_SHAPE_GENERATION_FROM_LINE::ONLY_LEFT );
		ret.Add( outline_shape );
	}

	// holes
	{
		for( int i = 0; i < holes.Num(); ++i )
		{
			TArray<FVector> current_shape = holes[i];
			TArray<FVector> outline_shape = MeshGenerator::getShape( current_shape, outline_width, OPTIONS_SHAPE_GENERATION_FROM_LINE::ONLY_LEFT );

			ret.Add( outline_shape );
		}
	}

	return ret;
}

TArray<FProcMeshTangent>
MeshGenerator::calculateTangents(
	TArray<FVector> vertices,
	TArray<FVector> normals,
	TArray<FVector2D> uvs,
	TArray<int32> triangles )
{
	int vertexCount = vertices.Num();
	int triangleCount = triangles.Num() / 3;

	TArray<FVector> tan1 = TArray<FVector>();
	tan1.Init( FVector( 0, 0, 0 ), vertexCount );
	TArray<FVector> tan2 = TArray<FVector>();
	tan2.Init( FVector( 0, 0, 0 ), vertexCount );
	TArray<FProcMeshTangent> tangents = TArray<FProcMeshTangent>();

	int tri = 0;
	for( int i = 0; i < triangleCount; i++ )
	{
		int i1 = triangles[tri + 0];
		int i2 = triangles[tri + 1];
		int i3 = triangles[tri + 2];
		FVector v1 = vertices[i1];
		FVector v2 = vertices[i2];
		FVector v3 = vertices[i3];

		FVector2D w1 = uvs[i1];
		FVector2D w2 = uvs[i2];
		FVector2D w3 = uvs[i3];

		float x1 = v2.X - v1.X;
		float x2 = v3.X - v1.X;
		float y1 = v2.Y - v1.Y;
		float y2 = v3.Y - v1.Y;
		float z1 = v2.Z - v1.Z;
		float z2 = v3.Z - v1.Z;

		float s1 = w2.X - w1.X;
		float s2 = w3.X - w1.X;
		float t1 = w2.Y - w1.Y;
		float t2 = w3.Y - w1.Y;

		float r = 1.0f / (s1 * t2 - s2 * t1);

		FVector sdir = FVector( (t2 * x1 - t1 * x2) * r, (t2 * y1 - t1 * y2) * r, (t2 * z1 - t1 * z2) * r );
		FVector tdir = FVector( (s1 * x2 - s2 * x1) * r, (s1 * y2 - s2 * y1) * r, (s1 * z2 - s2 * z1) * r );

		tan1[i1] += sdir;
		tan1[i2] += sdir;
		tan1[i3] += sdir;
		tan2[i1] += tdir;
		tan2[i2] += tdir;
		tan2[i3] += tdir;

		tri += 3;
	}

	for( int i = 0; i < vertexCount; i++ )
	{
		FVector n = normals[i];
		FVector t = tan1[i];
		FVector tmp = (t - n * FVector::DotProduct( n, t ));
		tmp.Normalize();

		FProcMeshTangent tangent = FProcMeshTangent( tmp.X, tmp.Y, tmp.Z );
		tangent.bFlipTangentY = (FVector::DotProduct( FVector::CrossProduct( n, t ), tan2[i] ) >= 0.0f);

		tangents.Add( tangent );
	}

	return tangents;
}

TArray<FVector>
MeshGenerator::calculateNormals(
	TArray<FVector> vertices,
	TArray<int32> triangles )
{
	TArray<FVector> normals = TArray<FVector>();
	for( int i = 0; i < vertices.Num(); i++ )
	{
		normals.Add( FVector( 0, 0, 0 ) );
	}

	for( int i = 0; i < triangles.Num(); i += 3 )
	{
		int index1 = triangles[i + 2];
		int index2 = triangles[i + 1];
		int index3 = triangles[i + 0];

		FVector normal = MeshGenerator::calculateSurfaceNormal( vertices[index1], vertices[index2], vertices[index3] );

		normals[index1] += normal;
		normals[index2] += normal;
		normals[index3] += normal;
	}

	for( int i = 0; i < normals.Num(); i++ )
	{
		normals[i].Normalize();
	}

	return normals;
}

void
MeshGenerator::verifyValidMesh( UProceduralMeshComponent* mesh )
{
	if( mesh->Bounds.BoxExtent.ContainsNaN() && mesh->Bounds.Origin.ContainsNaN() && FMath::IsNaN( mesh->Bounds.SphereRadius ) && !FMath::IsFinite( mesh->Bounds.SphereRadius ) )
	{
		mesh->ClearAllMeshSections();
	}
}
