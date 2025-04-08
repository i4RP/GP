// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaDepartureInfo.generated.h"

USTRUCT( BlueprintType, meta = (HiddenByDefault) )
struct THOUGHTFISHCOALAPLUGIN_API FDepartureInfo
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Transportation" )
		FString headsign;

		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Transportation" )
		FString departureTime;
};
