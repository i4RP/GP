// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaWater.h"
#include "CoalaWaterRenderConfig.h"
#include "Async/AsyncWork.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaWaterFactory.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam( FCoalaDelegateWaterFactoryOnWaterMeshDone, ACoalaMeshActor*, waterMeshActor );
DECLARE_DYNAMIC_DELEGATE_OneParam( FCoalaDelegateWaterFactoryOnDone, UCoalaArea*, area );

class UMaterialInterface;
class UCoalaArea;


UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaWaterFactory
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintCallable, Category = "Coala|Water", meta = (AutoCreateRefTerm = "onWaterCreated,onDone") )
		static void CreateWaterAsync( UCoalaArea* area, FCoalaWaterRenderConfig renderConfig, const FCoalaDelegateWaterFactoryOnWaterMeshDone& onWaterCreated, const FCoalaDelegateWaterFactoryOnDone& onDone );
};

class CoalaTaskCreateWaters
: public FNonAbandonableTask
{
private:
	bool _shouldRun;

	class UCoalaArea* _area;
	FCoalaWaterRenderConfig _renderConfig;
	FCoalaDelegateWaterFactoryOnWaterMeshDone _delegateOnWaterCreated;
	FCoalaDelegateWaterFactoryOnDone _delegateOnDone;

	ACoalaMeshActor* createWater( struct FCoalaWater* water, class UCoalaArea* area );

public:
	CoalaTaskCreateWaters( class UCoalaArea* area, FCoalaWaterRenderConfig renderConfig, FCoalaDelegateWaterFactoryOnWaterMeshDone delegateOnWaterCreated, FCoalaDelegateWaterFactoryOnDone delegateOnDone );
	~CoalaTaskCreateWaters();

	// required by UE4
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT( CoalaTaskCreateWaters, STATGROUP_ThreadPoolAsyncTasks )
	}

	void DoWork();
};