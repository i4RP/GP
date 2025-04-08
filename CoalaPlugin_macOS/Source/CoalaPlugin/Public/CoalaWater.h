// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaHole.h"
#include "CoalaBounds.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaWater.generated.h"

USTRUCT( BlueprintType, meta = (HasNativeMake = "", HasNativeBreak = "") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaWater
{
	GENERATED_BODY()

	public:
		TArray<FCoalaGPSCoordinates> area;
		TArray<FCoalaHole> holes;

		FCoalaWater();
		FCoalaWater( TArray<FCoalaGPSCoordinates> area, TArray<FCoalaHole> holes );

		FCoalaGPSCoordinates center( bool recalculate = false );
		FCoalaBounds bounds( bool recalculate = false );

	private:
		FCoalaBounds _bounds;
		FCoalaGPSCoordinates _center;
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaWaterBlueprintLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:
	
	/** Makes a coala water {area, holes} */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Water", meta = (DisplayName = "Make Water", NativeMakeFunc) )
	static FCoalaWater MakeCoalaWater( TArray<FCoalaGPSCoordinates> area, TArray<FCoalaHole> holes );

	/** Breaks a coala water apart into area, holes. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Water", meta = (DisplayName = "Break Water", NativeBreakFunc) )
	static void BreakCoalaWater( FCoalaWater inWater, TArray<FCoalaGPSCoordinates>& area, TArray<FCoalaHole>& holes );

	/** Get the center from the water shape as gps position. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Water", meta = (DisplayName = "Get center from water" ))
	static FCoalaGPSCoordinates getCenter( FCoalaWater inWater, bool recalculate );

	/** Get bounds from the water shape. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Water", meta = (DisplayName = "Get bounds from water") )
	static FCoalaBounds getBounds( FCoalaWater inWater, bool recalculate );
};
