// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaCell.h"

#include "CoreMinimal.h"
#include "CoalaCellRenderConfig.h"
#include "Async/AsyncWork.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaCellFactory.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams( FCoalaDelegateCellFactoryOnDone, ACoalaMeshActor*, cellMeshActor, UCoalaArea*, area );

class UCoalaArea;

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaCellFactory
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION(BlueprintCallable, Category = "Coala|MeshGenerationExcample")
		static class ACoalaMeshActor* CreateCell(AActor* spawnActor, UCoalaArea* area, FCoalaCell cell, FCoalaCellRenderConfig defaultRenderConfig, TArray<FCoalaCellRenderConfig> renderConfig);

		UFUNCTION( BlueprintCallable, Category = "Coala|Async|Create cells", meta = (AutoCreateRefTerm = "onDone") )
		static void CreateCellsAsync( class UCoalaArea* area, FCoalaCellRenderConfig defaultRenderConfig, TArray<FCoalaCellRenderConfig> renderConfig, const FCoalaDelegateCellFactoryOnDone& onDone );

};

class CoalaTaskCreateCells
: public FNonAbandonableTask
{
	private:
		bool _shouldRun;

		class UCoalaArea* area;
		FCoalaCellRenderConfig defaultRenderConfig;
		TArray<FCoalaCellRenderConfig> renderConfig;
		FCoalaDelegateCellFactoryOnDone delegateOnDone;

	public:
		CoalaTaskCreateCells( class UCoalaArea* area, FCoalaCellRenderConfig defaultRenderConfig, TArray<FCoalaCellRenderConfig> renderConfig, FCoalaDelegateCellFactoryOnDone delegateOnDone );
		~CoalaTaskCreateCells();

		// required by UE4
		FORCEINLINE TStatId GetStatId() const
		{
			RETURN_QUICK_DECLARE_CYCLE_STAT( CoalaTaskCreateCells, STATGROUP_ThreadPoolAsyncTasks )
		}

		void DoWork();
};