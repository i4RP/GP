// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include <chrono>
#include <assert.h>

#include "CoalaCellFactory.h"
#include "CoalaDecorator.h"
#include "CoalaStreetFactory.h"
#include "CoalaBuildingFactory.h"
#include "CoalaWaterFactory.h"
#include "CoalaPOI.h"
#include "CoalaCustomPOI.h"

#include "KismetProceduralMeshLibrary.h"
#include "CoalaLogCore.h"

class ACoalaActor;
class AActor;
class ACoalaMeshActor;
class AStaticMeshActor;
class UCoalaArea;
class UStaticMesh;

class CoalaTask
{
	public:
		CoalaTask();
		virtual ~CoalaTask();

		void Perform();
		bool* setToTrueIfDone;

		void setToDone();

	private:
		virtual void Init();
		virtual void Run() = 0;
		virtual void Cleanup();
};

class EnsureSceneObjectRefActorExists
: public CoalaTask
{
	public:
		EnsureSceneObjectRefActorExists( ACoalaActor*& targetRefActor, AActor* attachmentActor, int tileIndexX, int tileIndexY, const FString& nameEnding );

		virtual void Run();

	private:
		ACoalaActor*& targetRefActor;
		AActor* attachmentActor;
		int tileIndexX;
		int tileIndexY;
		FString nameEnding;
};

class SpawnCoalaMeshActor
: public CoalaTask
{
	public:
		SpawnCoalaMeshActor( ACoalaMeshActor*& targetRefActor, ACoalaActor* attachmentActor, const FString& label, const FName& tag );

		virtual void Run();

	private:
		ACoalaMeshActor*& targetRefActor;
		ACoalaActor* attachmentActor;
		FString label;
		FName tag;
};

class CreateMesh
: public CoalaTask
{
	public:
		CreateMesh( UProceduralMeshComponent*& mesh, const int segmentIndexToCreateMesh, const TArray<FVector>& vertices, const TArray<int32>& triangles, const TArray<FVector>& normals, const TArray<FVector2D>& UV0, const TArray<FLinearColor>& vertexColors, const TArray<FProcMeshTangent>& tangents, bool generateCollisions, bool castShadows = true );
		virtual ~CreateMesh();

		virtual void Run();

	private:
		UProceduralMeshComponent*& mesh;
		const int segmentIndexToCreateMesh;
		TArray<FVector> vertices;
		TArray<int32> triangles;
		TArray<FVector> normals;
		TArray<FVector2D> UV0;
		TArray<FLinearColor> vertexColors;
		TArray<FProcMeshTangent> tangents;
		bool generateCollisions;
		bool castShadows;
};

class SetMeshMaterial
: public CoalaTask
{
	public:
		SetMeshMaterial( UProceduralMeshComponent* mesh, const int segmentIndex, UMaterialInterface* material );
		
		virtual void Run();

	private:
		UProceduralMeshComponent* mesh;
		const int segmentIndex;
		UMaterialInterface* material;
};

class SpawnDecoration
: public CoalaTask
{
	public:
		SpawnDecoration( AActor*& out, ACoalaActor* attachTo, FVector terrainPos, FRotator rotation, FVector scaling, UClass* decoration );

		virtual void Run();

	private:
		AActor*& out;
		ACoalaActor* attachTo;
		FVector terrainPos;
		FRotator rotation;
		FVector scaling;
		UClass* decoration;
};

class SpawnDecorations
: public CoalaTask
{
	public:
		SpawnDecorations( AActor*& out, ACoalaActor* attachTo, TArray<FVector> terrainPositions, TArray<FRotator> rotations,TArray<FVector> scalings, UClass* decoration );

		virtual void Run();

	private:
		AActor*& out;
		ACoalaActor* attachTo;
		const TArray<FVector> terrainPositions;
		const TArray<FRotator> rotations;
		const TArray<FVector> scalings;
		UClass* decoration;
};

class AdjustZPosOnActor
: public CoalaTask
{
	public:
		AdjustZPosOnActor( AActor* targetActor, float zValue );

		virtual void Run();

	private:
		AActor* targetActor;
		float zValue;
};

class SpawnCoalaMeshActorOnWorldPos
: public CoalaTask
{
	public:
		SpawnCoalaMeshActorOnWorldPos( ACoalaMeshActor*& targetRefActor, ACoalaActor* attachmentActor, const FVector& worldPos, const FString& label, const FName& tag );

		virtual void Run();

	private:
		ACoalaMeshActor*& targetRefActor;
		ACoalaActor* attachmentActor;
		FVector worldPos;
		FString label;
		FName tag;
};

class SpawnCoalaPoi
: public CoalaTask
{
	public:
		SpawnCoalaPoi( AActor*& spawnedInstance, ACoalaActor* attachmentActor, class UClass* coalaPoi, const FVector& worldPos, const FString& label );

		virtual void Run();

	private:
		class AActor*& spawnedInstance;
		ACoalaActor* attachmentActor;
		class UClass* coalaPoi;
		FVector worldPos;
		FString label;
};

class SpawnCoalaCustomPoi
: public CoalaTask
{
	public:
		SpawnCoalaCustomPoi( ACoalaCustomPOIActor*& spawnedInstance, ACoalaActor* attachmentActor, const FCoalaCustomPOI& coalaCustomPoiData, class UClass* customPoiToSpawn, const FVector& worldPos, const FString& label );

		virtual void Run();

	private:
		class ACoalaCustomPOIActor*& spawnedInstance;
		class ACoalaActor* attachmentActor;
		FCoalaCustomPOI coalaCustomPoiData;
		class UClass* coalaCustomPoiToSpawn;
		FVector worldPos;
		FString label;
};

namespace delegates
{
	class CallCellsCreatedDelegate
	: public CoalaTask
	{
		public:
			CallCellsCreatedDelegate( FCoalaDelegateCellFactoryOnDone delegateOnDone, ACoalaMeshActor* meshActor, UCoalaArea* area );

			virtual void Run();

		private:
			FCoalaDelegateCellFactoryOnDone delegateOnDone;

			ACoalaMeshActor* meshActor;
			UCoalaArea* area;
	};

	class CallDecorationsCreatedDelegateDone
	: public CoalaTask
	{
		public:
			CallDecorationsCreatedDelegateDone( FCoalaDelegateDecorationOnDone delegateOnDone, UCoalaArea* area );

			virtual void Run();

		private:
			FCoalaDelegateDecorationOnDone delegateOnDone;

			UCoalaArea* area;
	};

	class CallStreetGenerationDelegateDone
	: public CoalaTask
	{
		public:
			CallStreetGenerationDelegateDone( FCoalaDelegateStreetsOnDone delegateOnDone, UCoalaArea* area );

			virtual void Run();

		private:
			FCoalaDelegateStreetsOnDone delegateOnDone;

			UCoalaArea* area;
	};

	class CallBuildingGenerationDelegateDone
	: public CoalaTask
	{
		public:
			CallBuildingGenerationDelegateDone( FCoalaDelegateBuildingsFactoryOnDone delegateOnDone, UCoalaArea* area );

			virtual void Run();

		private:
			FCoalaDelegateBuildingsFactoryOnDone delegateOnDone;

			UCoalaArea* area;
	};

	class CallBuildingGenerationDelegateBuildingCreated
	: public CoalaTask
	{
	public:
		CallBuildingGenerationDelegateBuildingCreated( FCoalaDelegateBuildingsFactoryOnBuildingCreated delegateOnDoneBuildingCreated, ACoalaMeshActor* meshActor, UCoalaArea* area );

		virtual void Run();

	private:
		FCoalaDelegateBuildingsFactoryOnBuildingCreated delegateOnDoneBuildingCreated;

		ACoalaMeshActor* meshActor;
		UCoalaArea* area;
	};

	class CallWaterGenerationDelegateDone
	: public CoalaTask
	{
		public:
			CallWaterGenerationDelegateDone( FCoalaDelegateWaterFactoryOnDone delegateOnDone, UCoalaArea* area );

			virtual void Run();

		private:
			FCoalaDelegateWaterFactoryOnDone delegateOnDone;

			UCoalaArea* area;
	};

	class CallWaterShapeGenerationDelegateDone
	: public CoalaTask
	{
		public:
			CallWaterShapeGenerationDelegateDone( FCoalaDelegateWaterFactoryOnWaterMeshDone delegateOnDone, ACoalaMeshActor* meshActor );

			virtual void Run();

		private:
			FCoalaDelegateWaterFactoryOnWaterMeshDone delegateOnDone;

			ACoalaMeshActor* meshActor;
	};

	class CallPoiDelegateOnPoiPlaced
	: public CoalaTask
	{
		public:
			CallPoiDelegateOnPoiPlaced( FCoalaDelegatOnCoalaPoiPlaced delegateOnPoiPlaced, AActor* poi );

			virtual void Run();

		private:
			FCoalaDelegatOnCoalaPoiPlaced delegateOnPoiPlaced;

			AActor* poi;
	};

	class CallPoiDelegateOnDone
	: public CoalaTask
	{
		public:
			CallPoiDelegateOnDone( FCoalaDelegatePlaceCoalaPoisOnDone delegateOnDone, UCoalaArea* area );

			virtual void Run();

		private:
			FCoalaDelegatePlaceCoalaPoisOnDone delegateOnDone;

			UCoalaArea* area;
	};

	
	class CallCustomPoiDelegateOnCustomPoiPlaced
	: public CoalaTask
	{
		public:
			CallCustomPoiDelegateOnCustomPoiPlaced( FCoalaDelegatOnCustomPoiPlaced delegateOnCustomPoiPlaced, ACoalaCustomPOIActor* customPoi );

			virtual void Run();

		private:
			FCoalaDelegatOnCustomPoiPlaced delegateOnCustomPoiPlaced;

			ACoalaCustomPOIActor* customPoi;
	};

	class CallCustomPoiDelegateOnDone
	: public CoalaTask
	{
		public:
			CallCustomPoiDelegateOnDone( FCoalaDelegatePlaceCustomPoisOnDone delegateOnDone, UCoalaArea* area );

			virtual void Run();

		private:
			FCoalaDelegatePlaceCustomPoisOnDone delegateOnDone;

			UCoalaArea* area;
	};
}
