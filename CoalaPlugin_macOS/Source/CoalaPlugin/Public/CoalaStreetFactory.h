// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaStreetRenderConfig.h"
#include "CoalaStreets.h"
#include "Async/AsyncWork.h"
#include "CoalaStreetFactory.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam( FCoalaDelegateStreetsOnDone, UCoalaArea*, area );

class UCoalaArea;

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaStreetFactory
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintCallable, Category = "Coala|Async|Street", meta = (AutoCreateRefTerm = "onDone") )
		static void CreateStreetsAsync( class UCoalaArea* area, FCoalaStreetRenderConfig defaultRenderConfig, TArray<FCoalaStreetRenderConfig> renderConfig, const FCoalaDelegateStreetsOnDone& onDone );

};

class CoalaTaskCreateStreets
: public FNonAbandonableTask
{
private:
	bool _shouldRun;

	class UCoalaArea* _area;
	FCoalaStreetRenderConfig _defaultRenderConfig;
	TArray<FCoalaStreetRenderConfig> _renderConfig;
	FCoalaDelegateStreetsOnDone _delegateOnDone;

	bool createStreetsFromType_merged( FCoalaStreets* streets, FCoalaStreetRenderConfig* configForStreetType );
	bool createStreetsFromType_single( FCoalaStreets& streets, FCoalaStreetRenderConfig* configForStreetType );

	FCoalaStreetRenderConfig* getConfigForStreet( FCoalaStreets& streets );

public:
	CoalaTaskCreateStreets( class UCoalaArea* area, FCoalaStreetRenderConfig defaultRenderConfig, TArray<FCoalaStreetRenderConfig> renderConfig, FCoalaDelegateStreetsOnDone delegateOnDone );
	~CoalaTaskCreateStreets();

	// required by UE4
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT( CoalaTaskCreateStreets, STATGROUP_ThreadPoolAsyncTasks )
	}

	void DoWork();

};