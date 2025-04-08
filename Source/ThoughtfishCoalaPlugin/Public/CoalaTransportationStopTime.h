// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaTransportationStopTime.generated.h"

UCLASS()
class UStopTime
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FString stopId;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FString tripId;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		unsigned int index;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FDateTime arrivalTime;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FDateTime departureTime;
};

USTRUCT()
struct THOUGHTFISHCOALAPLUGIN_API FStopTimesArrayWrapper
{
	GENERATED_BODY()

	public:
		UPROPERTY()
		TArray<UStopTime*> stopTimes;
};

