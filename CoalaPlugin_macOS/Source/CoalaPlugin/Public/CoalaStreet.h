// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaBounds.h"
#include "CoalaGPSCoordinates.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaStreet.generated.h"

USTRUCT( BlueprintType, meta = (HasNativeMake = "", HasNativeBreak = "") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaStreet
{
	GENERATED_BODY()

	public:
		FCoalaStreet();
		FCoalaStreet( TArray<FCoalaGPSCoordinates> points );

		TArray<FCoalaGPSCoordinates> points;

		FCoalaGPSCoordinates center( bool recalculate = false );
		FCoalaBounds bounds( bool recalculate = false );

	private:
		// calculated values (buffed)
		FCoalaBounds _bounds;
		FCoalaGPSCoordinates _center;
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaStreetBlueprintLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:

	/** Makes a coala streets collection {street_typ, street_data} */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Street", meta = (DisplayName = "Make coala street", NativeMakeFunc) )
	static FCoalaStreet MakeCoalaStreet( TArray<FCoalaGPSCoordinates> street_points );

	/** Breaks a coala gps coordinates apart into lon, lat. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Street", meta = (DisplayName = "Break coala street", NativeBreakFunc) )
	static void BreakCoalaStreet( FCoalaStreet inStreet, TArray<FCoalaGPSCoordinates>& street_points );

};
