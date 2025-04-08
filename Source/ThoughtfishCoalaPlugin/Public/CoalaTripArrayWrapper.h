// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaTripArrayWrapper.generated.h"

USTRUCT()
struct THOUGHTFISHCOALAPLUGIN_API FTripsWrapper
{
	GENERATED_BODY()

	public:
		UPROPERTY()
		TMap<FString, class UTrip*> trips;
};
