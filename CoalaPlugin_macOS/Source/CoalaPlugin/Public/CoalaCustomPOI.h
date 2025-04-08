// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaPOI.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaCustomPOI.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam( FCoalaDelegatePlaceCustomPoisOnDone, UCoalaArea*, area );
DECLARE_DYNAMIC_DELEGATE_OneParam( FCoalaDelegatOnCustomPoiPlaced, ACoalaCustomPOIActor*, customPoiActor );

USTRUCT( BlueprintType, meta = (HasNativeMake = "", HasNativeBreak = "") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaCustomPOI
: public FCoalaPOI
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|CustomPOI" )
	FString payload;

	FCoalaCustomPOI();
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaCustomPoiBlueprintLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:

	/** Makes a coala custom poi {gps pos, label, payload} */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Custom POI", meta = (DisplayName = "Make Custom POI", NativeMakeFunc) )
	static FCoalaCustomPOI MakeCoalaCustomPOI( FCoalaGPSCoordinates pos, FString label, FString payload );

	/** Breaks a coala gps coordinates apart into lon, lat. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Custom POI", meta = (DisplayName = "Break Custom POI", NativeBreakFunc) )
	static void BreakCoalaCustomPOI( FCoalaCustomPOI inCustomPOI, FCoalaGPSCoordinates& pos, FString& label, FString& payload );

	UFUNCTION( BlueprintCallable, Category = "Coala|Async|POI|Custom", meta = (AutoCreateRefTerm = "onDone,onCustomPoiPlaced") )
	static void PlaceCustomPoisAsync( class UCoalaArea* area, const TMap<FString, UClass*>& customPoiConfiguration, const FCoalaDelegatOnCustomPoiPlaced& onCustomPoiPlaced, const FCoalaDelegatePlaceCustomPoisOnDone& onDone );
};

class CoalaTaskPlaceCustomPois
: public FNonAbandonableTask
{
private:
	bool _shouldRun;

	class UCoalaArea* area;
	TMap<FString, UClass*> config;
	FCoalaDelegatOnCustomPoiPlaced delegateOnCustomPoiPlaced;
	FCoalaDelegatePlaceCustomPoisOnDone delegateOnDone;

public:
	CoalaTaskPlaceCustomPois( class UCoalaArea* area, TMap<FString, UClass*> config, FCoalaDelegatOnCustomPoiPlaced onCustomPoiPlaced, FCoalaDelegatePlaceCustomPoisOnDone onDone );
	~CoalaTaskPlaceCustomPois();

	// required by UE4
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT( CoalaTaskPlaceCustomPois, STATGROUP_ThreadPoolAsyncTasks )
	}

	void DoWork();
};
