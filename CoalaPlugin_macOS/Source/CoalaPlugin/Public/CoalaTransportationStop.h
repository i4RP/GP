// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaGPSCoordinates.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaTransportationStop.generated.h"

UCLASS()
class UStop
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FString name;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FString stopId;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FCoalaGPSCoordinates position;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		bool wheelchairBoardingPossible;
};

USTRUCT()
struct THOUGHTFISHCOALAPLUGIN_API FStopArrayWrapper
{
	GENERATED_BODY()

	public:
		UPROPERTY()
		TArray<UStop*> stops;
};

