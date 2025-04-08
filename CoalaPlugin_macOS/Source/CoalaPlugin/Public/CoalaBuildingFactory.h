// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaBuilding.h"
#include "CoalaBuildingRenderConfig.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaBuildingFactory.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam( FCoalaDelegateBuildingsFactoryOnDone, UCoalaArea*, area );
DECLARE_DYNAMIC_DELEGATE_TwoParams( FCoalaDelegateBuildingsFactoryOnBuildingCreated, ACoalaMeshActor*, cellMeshActor, UCoalaArea*, area );

class UMaterialInterface;
class UCoalaArea;

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaBuildingFactory
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
	UFUNCTION( BlueprintCallable, Category = "Coala|Building" )
	static class ACoalaMeshActor* CreateBuilding( AActor* spawnActor, UCoalaArea* area, FCoalaBuilding building, UPARAM(meta = (Bitmask, BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.OPTIONS_MESH_CREATION_BUILDING")) int32 createMeshes, UMaterialInterface* materialFloor = 0, UMaterialInterface* materialFoundation = 0, UMaterialInterface* materialWall = 0, UMaterialInterface* materialRoof = 0, bool generateUVs = false, float heightPerLevel = 500.0f, bool generateCollisions = false );

	UFUNCTION( BlueprintCallable, Category = "Coala|Async|Create buildings", meta = (AutoCreateRefTerm = "onDone,onBuildingCreated") )
	static void CreateBuildingsAsync( class UCoalaArea* area, FCoalaBuildingRenderConfig renderConfig, const FCoalaDelegateBuildingsFactoryOnBuildingCreated& onBuildingCreated, const FCoalaDelegateBuildingsFactoryOnDone& onDone );

};

class CoalaTaskCreateBuildings
: public FNonAbandonableTask
{
private:
	bool _shouldRun;

	class UCoalaArea* _area;
	FCoalaBuildingRenderConfig _renderConfig;
	FCoalaDelegateBuildingsFactoryOnDone _delegateOnDone;
	FCoalaDelegateBuildingsFactoryOnBuildingCreated _delegateOnBuildingCreated;

	ACoalaMeshActor* createBuildings_merged();
	ACoalaMeshActor* createBuildings_single( FCoalaBuilding& building );

public:
	CoalaTaskCreateBuildings( class UCoalaArea* area, FCoalaBuildingRenderConfig renderConfig, FCoalaDelegateBuildingsFactoryOnDone delegateOnDone, FCoalaDelegateBuildingsFactoryOnBuildingCreated delegateOnBuildingCreated );
	~CoalaTaskCreateBuildings();

	// required by UE4
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT( CoalaTaskCreateBuildings, STATGROUP_ThreadPoolAsyncTasks )
	}

	void DoWork();
};
