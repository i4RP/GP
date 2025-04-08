// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaBuildingFactory.h"

#include "CoalaHole.h"
#include "CoalaActor.h"
#include "CoalaArea.h"
#include "CoalaAreaActor.h"
#include "CoalaBlueprintUtility.h"
#include "CoalaBuildingRenderConfig.h"
#include "CoalaConverter.h"
#include "CoalaDevelopmentUtility.h"
#include "CoalaElevation.h"
#include "CoalaMeshActor.h"
#include "CoalaMeshGenerator.h"
#include "CoalaProperties.h"
#include "CoalaTile.h"
#include "CoalaBounds.h"
#include "GeoConverter.h"
#include "Async/Async.h"

#include "Engine/World.h"

// create ONE Actor for ONE building
ACoalaMeshActor*
UCoalaBuildingFactory::CreateBuilding(
	AActor* spawnActor,
	UCoalaArea* area,
	FCoalaBuilding building,
	int32 createMeshes,
	UMaterialInterface* materialFloor,
	UMaterialInterface* materialFoundation,
	UMaterialInterface* materialWall,
	UMaterialInterface* materialRoof,
	bool generateUVs,
	float heightPerLevel,
	bool generateCollisions )
{
	return 0;
}

void 
UCoalaBuildingFactory::CreateBuildingsAsync( 
	UCoalaArea* area, 
	FCoalaBuildingRenderConfig renderConfig,
	const FCoalaDelegateBuildingsFactoryOnBuildingCreated& onBuildingCreated,
	const FCoalaDelegateBuildingsFactoryOnDone& onDone )
{
	auto task = new FAutoDeleteAsyncTask<CoalaTaskCreateBuildings>( area, renderConfig, onDone, onBuildingCreated );
	task->StartBackgroundTask();
}

CoalaTaskCreateBuildings::CoalaTaskCreateBuildings( class UCoalaArea* area, FCoalaBuildingRenderConfig renderConfig, FCoalaDelegateBuildingsFactoryOnDone delegateOnDone, FCoalaDelegateBuildingsFactoryOnBuildingCreated delegateOnBuildingCreated )
: _shouldRun( false ), _area( 0 )
{
	this->_shouldRun = area->addThreadsUsingAreaData( this, "CoalaTaskCreateBuildings" );
	if( !this->_shouldRun )
		return;

	this->_area = area; 
	this->_renderConfig = renderConfig;
	this->_delegateOnDone = delegateOnDone;
	this->_delegateOnBuildingCreated = delegateOnBuildingCreated;
}

CoalaTaskCreateBuildings::~CoalaTaskCreateBuildings()
{
	if( this->_area )
		this->_area->removeThreadsUsingAreaData( this, "CoalaTaskCreateBuildings" );
}

void
CoalaTaskCreateBuildings::DoWork()
{
	if( !this->_shouldRun )
		return;

	TRACE_BOOKMARK( TEXT( "CreateBuildings" ) );
	TRACE_CPUPROFILER_EVENT_SCOPE( UCoalaMeshGenerator::CreateBuildings );

	// add scaling to all needed values
	// FYI: below is oky because we have a copy of the render config int this thread
	{
		this->_renderConfig.heightPerLevel *= ACoalaController::GetCoalaScale();
	}

	if( !this->_area->AddCoalaLayerRenderTask(
			new EnsureSceneObjectRefActorExists( this->_area->sceneObject->_refAllBuildings, this->_area->sceneObject, this->_area->props.tile.x, this->_area->props.tile.y, "_buildings" ),
			true
		)
	)
		return;

	if( !this->_area->sceneObject->_refAllBuildings )
		return;

	// adjust position a litle bit higher to prevent clipping into ground
	if( !this->_area->AddCoalaLayerRenderTask(
			new AdjustZPosOnActor( this->_area->sceneObject->_refAllBuildings, 1.0f ),
			true
		)
	)
		return;

	if( this->_renderConfig.mergeMeshes )
	{
		ACoalaMeshActor* meshActor = this->createBuildings_merged();
		if( !meshActor )
			return;

		if( !this->_area->AddCoalaLayerRenderTask(
				new delegates::CallBuildingGenerationDelegateBuildingCreated( this->_delegateOnBuildingCreated, meshActor, this->_area )
			)
		)
			return;
	}
	else
	{
		for( int i = 0; i < this->_area->buildings.Num(); ++i )
		{
			FCoalaBuilding current = this->_area->buildings[i];
			ACoalaMeshActor* buildingMeshActor = this->createBuildings_single( current );

			if( !buildingMeshActor )
				break;

			if( !this->_area->AddCoalaLayerRenderTask(
					new delegates::CallBuildingGenerationDelegateBuildingCreated( this->_delegateOnBuildingCreated, buildingMeshActor, this->_area )
				)
			)
				return;
		}
	}


	if( !this->_area->AddCoalaLayerRenderTask(
			new delegates::CallBuildingGenerationDelegateDone( this->_delegateOnDone, this->_area )
		)
	)
		return;
}

ACoalaMeshActor*
CoalaTaskCreateBuildings::createBuildings_merged()
{
	// the spawn pos of this actor is relativ to the area he belongs to
	// therefor we use the top left point as our area_fixpoint
	FVector area_fixpoint = UCoalaGpsConverterFunctionLibrary::ToScenePosition( this->_area->props.bounds.left, this->_area->props.bounds.top );

	ACoalaMeshActor* meshActor = 0;
	// spawn actor, arange in area and name
	FString displayName = "_area_" + FString::FromInt( this->_area->props.tile.x ) + "_" + FString::FromInt( this->_area->props.tile.y ) + "_buildings_" + FString::FromInt( UCoalaDevelopmentUtility::GetGUID() );

	if( !this->_area->AddCoalaLayerRenderTask(
			new SpawnCoalaMeshActor( meshActor, this->_area->sceneObject->_refAllBuildings, displayName, FName( "COALA_BUILDING" ) ),
			true
		)
	)
		return 0;

	if( !meshActor )
		return 0;
	
	TArray<TArray<FVector>> shapes;
	TArray<TArray<FVector>> foundationShapes;
	TArray<TArray<TArray<FVector>>> holes;
	TArray<int32> height;
	//array with no heights to give to the floor
	TArray<int32> floorHeights;

	// transform shape from gps to pixel coodinates
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( transformShapeFromGpsToPicelCoordinates );

		for( int i = 0; i < this->_area->buildings.Num(); ++i )
		{
			FCoalaBuilding current = this->_area->buildings[i];

			// apply config limits
			this->_renderConfig.applyToBuilding( &current );

			float highestTerrainPosition = 0;
			if( this->_area->elevation.data.Num() > 0 )
			{
				highestTerrainPosition = this->_area->elevation.min;
			}

			TArray<FVector> shape;
			TArray<FVector> foundationShape;
			for( int a = 0; a < current.area.Num(); ++a )
			{
				FCoalaGPSCoordinates building_pos = current.area[a];
				FVector scenePosition = building_pos.ToScenePosition();
				FVector shape_point = scenePosition - area_fixpoint;
				shape.Add( shape_point );
				//FVector terrainPosition = CoalaConverter::ToTerrainPositionRaycast( building_pos.lon, building_pos.lat, this->_area );
				foundationShape.Add( shape_point );
				//int zTerrainPosition = ceil( terrainPosition.Z ); // Ceil to fix building seams at low coala scale
				int zTerrainPosition = shape_point.Z;
				if( zTerrainPosition > highestTerrainPosition )
				{
					highestTerrainPosition = zTerrainPosition;
				}
			}
			for( int a = 0; a < shape.Num(); a++ )
			{
				shape[a].Z = highestTerrainPosition;
			}
			shapes.Add( shape );
			foundationShapes.Add( foundationShape );

			height.Add( highestTerrainPosition + this->_renderConfig.heightPerLevel * current.height );
			floorHeights.Add( highestTerrainPosition );

			TArray<TArray<FVector>> buildingHoles;
			for( int b = 0; b < current.holes.Num(); ++b )
			{
				FCoalaHole currentHole_org = current.holes[b];
				TArray<FVector> currentHole;
				for( int c = 0; c < currentHole_org.points.Num(); ++c )
				{
					currentHole.Add( currentHole_org.points[c].ToScenePosition() - area_fixpoint );
				}
				buildingHoles.Add( currentHole );
			}
			holes.Add( buildingHoles );
		}
	}

	int sectionIndexToCreate = 0;
	// 1 - floors
	if( this->_renderConfig.createMeshes & (int32)OPTIONS_MESH_CREATION_BUILDING::FLOOR )
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( createMeshesFloor );

		TArray<FVector> finalVertices;
		TArray<int> finalTriangles;
		TArray<FVector> finalNormals;
		TArray<FVector2D> finalUV0;

		MeshGenerator::generateMesh( shapes, holes, floorHeights, finalNormals, this->_renderConfig.generateUVs, false, false, finalVertices, finalTriangles, finalUV0 );

		TArray<FLinearColor> vertexColors;
		TArray<FProcMeshTangent> tangents;
		if( !this->_area->AddCoalaLayerRenderTask(
				new CreateMesh( meshActor->mesh, sectionIndexToCreate, finalVertices, finalTriangles, finalNormals, finalUV0, vertexColors, tangents, this->_renderConfig.generateCollisions ),
				true
			)
		)
			return 0;

		if( this->_renderConfig.materialFloor )
		{
			if( !this->_area->AddCoalaLayerRenderTask(
					new SetMeshMaterial( meshActor->mesh, sectionIndexToCreate, this->_renderConfig.materialFloor )
				)
			)
				return 0;
		}
		++sectionIndexToCreate;
	}

	// 2 - foundation walls
	if( this->_renderConfig.createMeshes & (int32)OPTIONS_MESH_CREATION_BUILDING::FOUNDATION )
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( createMeshesFoundation );

		TArray<FVector> vertices;
		TArray<int32> triangles;
		TArray<FVector2D> UV0;
		TArray<FVector> normals;

		MeshGenerator::generateSingleWallMesh(
			vertices, triangles, UV0,
			foundationShapes,
			holes,
			floorHeights,
			sectionIndexToCreate,
			this->_renderConfig.generateUVs,
			false,
			this->_renderConfig.generateCollisions
		);

		if( !this->_area->AddCoalaLayerRenderTask(
				new CreateMesh( meshActor->mesh, sectionIndexToCreate, vertices, triangles, normals, UV0, TArray<FLinearColor>(), TArray<FProcMeshTangent>(), this->_renderConfig.generateCollisions ),
				true
			)
		)
			return 0;

		if( this->_renderConfig.materialFoundation )
		{
			if( !this->_area->AddCoalaLayerRenderTask(
					new SetMeshMaterial( meshActor->mesh, sectionIndexToCreate, this->_renderConfig.materialFoundation )
				)
			)
				return 0;
		}
		++sectionIndexToCreate;
	}

	// 3 - all walls
	if( this->_renderConfig.createMeshes & (int32)OPTIONS_MESH_CREATION_BUILDING::WALLS )
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( createMeshesWalls );

		TArray<FVector> vertices;
		TArray<int32> triangles;
		TArray<FVector2D> UV0;
		TArray<FVector> normals;

		MeshGenerator::generateSingleWallMesh(
			vertices, triangles, UV0,
			shapes,
			holes,
			height,
			sectionIndexToCreate,
			this->_renderConfig.generateUVs,
			false,
			this->_renderConfig.generateCollisions
		);

		if( !this->_area->AddCoalaLayerRenderTask(
				new CreateMesh( meshActor->mesh, sectionIndexToCreate, vertices, triangles, normals, UV0, TArray<FLinearColor>(), TArray<FProcMeshTangent>(), this->_renderConfig.generateCollisions ),
				true
			)
		)
			return 0;

		if( this->_renderConfig.materialWall )
		{
			if( !this->_area->AddCoalaLayerRenderTask(
					new SetMeshMaterial( meshActor->mesh, sectionIndexToCreate, this->_renderConfig.materialWall )
				)
			)
				return 0;
		}
		++sectionIndexToCreate;
	}

	// 4 - roofs
	if( this->_renderConfig.createMeshes & (int32)OPTIONS_MESH_CREATION_BUILDING::ROOF )
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( createMeshesRoof );

		TArray<FVector> finalVertices;
		TArray<int> finalTriangles;
		TArray<FVector> finalNormals;
		TArray<FVector2D> finalUV0;

		MeshGenerator::generateMesh( shapes, holes, height, finalNormals, this->_renderConfig.generateUVs, false, true, finalVertices, finalTriangles, finalUV0 );

		if( !this->_area->AddCoalaLayerRenderTask(
				new CreateMesh( meshActor->mesh, sectionIndexToCreate, finalVertices, finalTriangles, finalNormals, finalUV0, TArray<FLinearColor>(), TArray<FProcMeshTangent>(), this->_renderConfig.generateCollisions ),
				true
			)
		)
			return 0;

		if( this->_renderConfig.materialRoof )
		{
			if( !this->_area->AddCoalaLayerRenderTask(
					new SetMeshMaterial( meshActor->mesh, sectionIndexToCreate, this->_renderConfig.materialRoof )
				)
			)
				return 0;
		}
	}

	return meshActor;
}

ACoalaMeshActor*
CoalaTaskCreateBuildings::createBuildings_single( FCoalaBuilding& building )
{
//	TRACE_BOOKMARK(TEXT("CreateBuilding"));
//	TRACE_CPUPROFILER_EVENT_SCOPE( UCoalaMeshGenerator::CreateBuilding );

	// apply config limits
	this->_renderConfig.applyToBuilding( &building );

	// the spawn pos of this actor is relativ to the area he belongs to
	// therefor we use the top left point as our area_fixpoint
	FVector area_fixpoint = UCoalaGpsConverterFunctionLibrary::ToScenePosition( this->_area->props.bounds.left, this->_area->props.bounds.top );
	FVector center = building.center().ToScenePosition();
	FVector position_relative_to_area = center - area_fixpoint;

	ACoalaMeshActor* meshActor = nullptr;
	{
		FString displayName = "_area_" + FString::FromInt( this->_area->props.tile.x ) + "_" + FString::FromInt( this->_area->props.tile.y ) + "_building";
		if( !this->_area->AddCoalaLayerRenderTask(
				new SpawnCoalaMeshActorOnWorldPos( meshActor, this->_area->sceneObject->_refAllBuildings, center, displayName, FName( "COALA_BUILDING" ) ),
				true
			)
		)
			return 0;
	}

	TArray<TArray<FVector>> shapes;
	TArray<TArray<FVector>> foundationShapes;
	TArray<TArray<TArray<FVector>>> holes;
	TArray<int32> height;
	//array with no heights to give to the floor
	TArray<int32> floorHeights;

	{
		// apply config limits
		this->_renderConfig.applyToBuilding( &building );

		float highestTerrainPosition = 0;
//		if( this->_area->elevation.data.Num() > 0 )
//		{
//			highestTerrainPosition = this->_area->elevation.min;
//		}

		TArray<FVector> shape;
		TArray<FVector> foundationShape;
		for( int a = 0; a < building.area.Num(); ++a )
		{
			FCoalaGPSCoordinates building_pos = building.area[a];
			FVector scenePosition = building_pos.ToScenePosition();
			FVector shape_point = scenePosition - area_fixpoint - position_relative_to_area;
			shape.Add( shape_point );
//			FVector terrainPosition = CoalaConverter::ToTerrainPositionRaycast( building_pos.lon, building_pos.lat, this->_area );
			foundationShape.Add( shape_point );
//			int zTerrainPosition = ceil( scenePosition.Z ); // Ceil to fix building seams at low coala scale
			int zTerrainPosition = shape_point.Z;
			if( zTerrainPosition > highestTerrainPosition )
			{
				highestTerrainPosition = zTerrainPosition;
			}
		}
		for( int a = 0; a < shape.Num(); a++ )
		{
			shape[a].Z = highestTerrainPosition;
		}
		shapes.Add( shape );
		foundationShapes.Add( foundationShape );

		height.Add( highestTerrainPosition + this->_renderConfig.heightPerLevel * building.height );
		floorHeights.Add( highestTerrainPosition );

		TArray<TArray<FVector>> buildingHoles;
		for( int b = 0; b < building.holes.Num(); ++b )
		{
			FCoalaHole currentHole_org = building.holes[b];
			TArray<FVector> currentHole;
			for( int c = 0; c < currentHole_org.points.Num(); ++c )
			{
				currentHole.Add( currentHole_org.points[c].ToScenePosition() - area_fixpoint - position_relative_to_area );
			}
			buildingHoles.Add( currentHole );
		}
		holes.Add( buildingHoles );
	}

	int sectionIndexToCreate = 0;
	// 1 - floors
	if( this->_renderConfig.createMeshes & (int32)OPTIONS_MESH_CREATION_BUILDING::FLOOR )
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( createMeshesFloor );

		TArray<FVector> finalVertices;
		TArray<int> finalTriangles;
		TArray<FVector> finalNormals;
		TArray<FVector2D> finalUV0;

		MeshGenerator::generateMesh( shapes, holes, floorHeights, finalNormals, this->_renderConfig.generateUVs, false, false, finalVertices, finalTriangles, finalUV0 );

		TArray<FLinearColor> vertexColors;
		TArray<FProcMeshTangent> tangents;
		if( !this->_area->AddCoalaLayerRenderTask(
				new CreateMesh( meshActor->mesh, sectionIndexToCreate, finalVertices, finalTriangles, finalNormals, finalUV0, vertexColors, tangents, this->_renderConfig.generateCollisions ),
				true
			)
		)
			return 0;

		if( this->_renderConfig.materialFloor )
		{
			if( !this->_area->AddCoalaLayerRenderTask(
					new SetMeshMaterial( meshActor->mesh, sectionIndexToCreate, this->_renderConfig.materialFloor )
				)
			)
				return 0;
		}
		++sectionIndexToCreate;
	}

	// 2 - foundation walls
	if( this->_renderConfig.createMeshes & (int32)OPTIONS_MESH_CREATION_BUILDING::FOUNDATION )
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( createMeshesFoundation );

		TArray<FVector> vertices;
		TArray<int32> triangles;
		TArray<FVector2D> UV0;
		TArray<FVector> normals;

		MeshGenerator::generateSingleWallMesh(
			vertices, triangles, UV0,
			foundationShapes,
			holes,
			floorHeights,
			sectionIndexToCreate,
			this->_renderConfig.generateUVs,
			false,
			this->_renderConfig.generateCollisions
		);

		if( !this->_area->AddCoalaLayerRenderTask(
				new CreateMesh( meshActor->mesh, sectionIndexToCreate, vertices, triangles, normals, UV0, TArray<FLinearColor>(), TArray<FProcMeshTangent>(), this->_renderConfig.generateCollisions ),
				true
			)
		)
			return 0;

		if( this->_renderConfig.materialFoundation )
		{
			if( !this->_area->AddCoalaLayerRenderTask(
					new SetMeshMaterial( meshActor->mesh, sectionIndexToCreate, this->_renderConfig.materialFoundation )
				)
			)
				return 0;
		}
		++sectionIndexToCreate;
	}

	// 3 - all walls
	if( this->_renderConfig.createMeshes & (int32)OPTIONS_MESH_CREATION_BUILDING::WALLS )
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( createMeshesWalls );

		TArray<FVector> vertices;
		TArray<int32> triangles;
		TArray<FVector2D> UV0;
		TArray<FVector> normals;

		MeshGenerator::generateSingleWallMesh(
			vertices, triangles, UV0,
			shapes,
			holes,
			height,
			sectionIndexToCreate,
			this->_renderConfig.generateUVs,
			false,
			this->_renderConfig.generateCollisions
		);

		if( !this->_area->AddCoalaLayerRenderTask(
				new CreateMesh( meshActor->mesh, sectionIndexToCreate, vertices, triangles, normals, UV0, TArray<FLinearColor>(), TArray<FProcMeshTangent>(), this->_renderConfig.generateCollisions ),
				true
			)
		)
			return 0;

		if( this->_renderConfig.materialWall )
		{
			if( !this->_area->AddCoalaLayerRenderTask(
					new SetMeshMaterial( meshActor->mesh, sectionIndexToCreate, this->_renderConfig.materialWall )
				)
			)
				return 0;
		}
		++sectionIndexToCreate;
	}

	// 4 - roofs
	if( this->_renderConfig.createMeshes & (int32)OPTIONS_MESH_CREATION_BUILDING::ROOF )
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( createMeshesRoof );

		TArray<FVector> finalVertices;
		TArray<int> finalTriangles;
		TArray<FVector> finalNormals;
		TArray<FVector2D> finalUV0;

		MeshGenerator::generateMesh( shapes, holes, height, finalNormals, this->_renderConfig.generateUVs, false, true, finalVertices, finalTriangles, finalUV0 );

		if( !this->_area->AddCoalaLayerRenderTask(
				new CreateMesh( meshActor->mesh, sectionIndexToCreate, finalVertices, finalTriangles, finalNormals, finalUV0, TArray<FLinearColor>(), TArray<FProcMeshTangent>(), this->_renderConfig.generateCollisions ),
				true
			)
		)
			return 0;

		if( this->_renderConfig.materialRoof )
		{
			if( !this->_area->AddCoalaLayerRenderTask(
					new SetMeshMaterial( meshActor->mesh, sectionIndexToCreate, this->_renderConfig.materialRoof )
				)
			)
				return 0;
		}
	}

	return meshActor;
}
