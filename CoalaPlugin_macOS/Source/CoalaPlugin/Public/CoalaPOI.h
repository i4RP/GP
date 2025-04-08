// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaGPSCoordinates.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Async/AsyncWork.h"
#include "CoalaPOI.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam( FCoalaDelegatePlaceCoalaPoisOnDone, UCoalaArea*, area );
DECLARE_DYNAMIC_DELEGATE_OneParam( FCoalaDelegatOnCoalaPoiPlaced, AActor*, poiActor );


USTRUCT( BlueprintType, meta = (HasNativeMake = "", HasNativeBreak = "") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaPOI
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|POI" )
	FCoalaGPSCoordinates pos;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|POI" )
	FString label;

	FCoalaPOI();
	FCoalaPOI( FCoalaGPSCoordinates pos, FString label );
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaPoiBlueprintLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:

	/** Makes a coala gps coordinates {lon, lat} */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Point Of Interest", meta = (DisplayName = "Make Point Of Interest", NativeMakeFunc) )
	static FCoalaPOI MakeCoalaPoi( FCoalaGPSCoordinates pos, FString label );

	/** Breaks a coala gps coordinates apart into lon, lat. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Point Of Interest", meta = (DisplayName = "Break Point Of Interest", NativeBreakFunc) )
	static void BreakCoalaPoi( FCoalaPOI inPoi, FCoalaGPSCoordinates& pos, FString& label );

	UFUNCTION( BlueprintCallable, Category = "Coala|Async|POI|Coala", meta = (AutoCreateRefTerm = "onDone,onPoiPlaced") )
	static void PlaceCoalaPoisAsync( class UCoalaArea* area, const TMap<FString, UClass*>& coalaPoiConfiguration, const FCoalaDelegatOnCoalaPoiPlaced& onPoiPlaced, const FCoalaDelegatePlaceCoalaPoisOnDone& onDone );

};

class CoalaTaskPlaceCoalaPois
: public FNonAbandonableTask
{
private:
	bool _shouldRun;

	class UCoalaArea* _area;
	TMap<FString, UClass*> _config;
	FCoalaDelegatePlaceCoalaPoisOnDone _delegateOnDone;
	FCoalaDelegatOnCoalaPoiPlaced _delegateOnPoiPlaced;

public:
	CoalaTaskPlaceCoalaPois( class UCoalaArea* area, TMap<FString, UClass*> config, FCoalaDelegatOnCoalaPoiPlaced onCoalaPoiPlaced, FCoalaDelegatePlaceCoalaPoisOnDone onDone );
	~CoalaTaskPlaceCoalaPois();

	// required by UE4
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT( CoalaTaskPlaceCoalaPois, STATGROUP_ThreadPoolAsyncTasks )
	}

	void DoWork();
};
