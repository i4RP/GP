// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaStreet.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaStreets.generated.h"

USTRUCT( BlueprintType, meta = (HasNativeMake = "", HasNativeBreak = "") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaStreets
{
	GENERATED_BODY()

	FString typ;
	TArray<FCoalaStreet> data;

	FCoalaStreets();
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaStreetsBlueprintLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:

	/** Makes a coala streets collection {street_typ, street_data} */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Streets", meta = (DisplayName = "Make street wrapper", NativeMakeFunc) )
	static FCoalaStreets MakeCoalaStreets( FString street_typ, TArray<FCoalaStreet> street_data );

	/** Breaks a coala gps coordinates apart into lon, lat. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Streets", meta = (DisplayName = "Break street wrapper", NativeBreakFunc) )
	static void BreakCoalaStreets( FCoalaStreets inStreets, FString& street_typ, TArray<FCoalaStreet>& street_data );

};
