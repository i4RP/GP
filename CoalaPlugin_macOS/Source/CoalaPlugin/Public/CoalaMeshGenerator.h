// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaShapeData.h"
#include "CoalaCell.h"
#include "CoalaCellRenderConfig.h"

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"

#include <map>

class UCoalaArea;
class ACoalaActor;
class ACoalaMeshActor;

namespace OPTIONS_SHAPE_GENERATION_FROM_LINE
{
	enum type
	{
		BOTH_SIDES = 1,
		ONLY_LEFT,
		ONLY_RIGHT,

		INCREASE_SIZE
	};
}

class THOUGHTFISHCOALAPLUGIN_API MeshGenerator
{
	public:
		// generate one mesh from ONE shape with many holes
		static void generateMesh( UProceduralMeshComponent*& out, TArray<FVector> basicShape, TArray<TArray<FVector>> holes, int segmentIndexToCreateMesh, float zOffset, bool generateUVs, bool generateCollisions, bool stretchUVs );

		// generate on mesh from MANY shapes with many holes
		static void generateMesh( TArray<TArray<FVector>> shapes, TArray<TArray<TArray<FVector>>> holes, TArray<int32> zOffset, TArray<FVector> normals, bool generateUVs, bool stretchUVs, bool weldVertices, TArray<FVector>& vertices, TArray<int>& triangles, TArray<FVector2D>& UV0 );

		static void weldVertices( TArray<FVector>& vertices, TArray<FVector>& normals, TArray<FVector2D>& UV0, TArray<int>& triangles );


		static FVector calculateSurfaceNormal( FVector p1, FVector p2, FVector p3 );

		static int generateWallMesh( UProceduralMeshComponent*& out, TArray<FVector> basicShape, TArray<TArray<FVector>> holes, float buildingHight, int meshSegmentStartIndex = 0, bool generateUVs = false, bool generateCollisions = false );

		static void generateBuildingMesh( UProceduralMeshComponent*& out, TArray<FVector> basicShape, TArray<TArray<FVector>> holes, float buildingHight, bool generateUVs = false, bool generateCollisions = false );

		static void generateWallMeshSegment( UProceduralMeshComponent*& out, int indexMeshSection, FVector p1, FVector p2, float wall_height, bool generateUVs = false, bool generateCollisions = false );

	
		// street
		static void calculateAndDrawStreetBeginSegment( FVector start, FVector end, TArray<FVector>& addTo, float width, OPTIONS_SHAPE_GENERATION_FROM_LINE::type generation_option, bool drawMiddleVectors = false );

		static void calculateAndDrawStreetCenterSegment( FVector start, FVector mid, FVector end, TArray<FVector>& addTo, float width, OPTIONS_SHAPE_GENERATION_FROM_LINE::type generation_option, bool drawMiddleVectors = false );

		static void calculateAndDrawStreetEndSegment( FVector start, FVector end, TArray<FVector>& addTo, float width, OPTIONS_SHAPE_GENERATION_FROM_LINE::type generation_option, bool drawMiddleVectors = false );


		static void drawLine( FVector p1, FVector p2, FColor color, float thickness = 1 );

		static void drawLines( TArray<FVector>& streetData, FColor color, float thickness = 1 );


		static void drawDegreFanAround( FVector start, FVector end, float drawDegre = 0.0f );

		static float getAngle( FVector p1, FVector p2, FVector p3, bool drawTwoDirectionVectors = false );


		//single mesh
		static void generateSingleWallMesh( TArray<FVector>& vertices, TArray<int32>& triangles, TArray<FVector2D>& UV0, TArray<TArray<FVector>> shapes, TArray<TArray<TArray<FVector>>> holes, TArray<int32> zOffset, int segmentIndexToCreateMesh = 0, bool generateUVs = false, bool stretchUVs = false, bool generateCollisions = false );

		static void generateSingleWallMeshSegment( FVector p1, FVector p2, float wall_height, int indicesOffset, TArray<FVector>& vertices, TArray<int32>& triangles, TArray<FVector2D>& UV0, bool generateUVs = false );


		static TArray<uint32_t> triangulate( const TArray<FVector>& shapeVertices, const TArray<TArray<FVector>>& holeVertices );
				

		static TArray<FVector> getShape( TArray<FVector>& streetData, float width, OPTIONS_SHAPE_GENERATION_FROM_LINE::type generation_option = OPTIONS_SHAPE_GENERATION_FROM_LINE::BOTH_SIDES );


		static void generateOutlineMesh_v2( TArray<FVector> shape, TArray<TArray<FVector>> holes, float outline_width, TArray<FVector>& shape_increased, TArray<TArray<FVector>>& holes_increased );

		static void _createMeshOnMainThread( UProceduralMeshComponent*& out, const int segmentIndexToCreateMesh, const TArray<FVector>& vertices, const TArray<int32>& triangles, const TArray<FVector>& normals, const TArray<FVector2D>& UV0, const TArray<FLinearColor>& vertexColors, const TArray<FProcMeshTangent>& tangents, bool generateCollisions );

	
	//unused consider removal:
	
		static TArray<TArray<FVector>> generateOutlineMesh( TArray<FVector> shape, TArray<TArray<FVector>> holes );

		static TArray<FProcMeshTangent> calculateTangents( TArray<FVector> vertices, TArray<FVector> normals, TArray<FVector2D> uvs, TArray<int32> triangles );

		static TArray<FVector> calculateNormals( TArray<FVector> vertices, TArray<int32> triangles );

		static void verifyValidMesh( class UProceduralMeshComponent* mesh );
};
