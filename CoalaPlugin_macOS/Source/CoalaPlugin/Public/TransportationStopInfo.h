// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaDepartureInfo.h"
#include "TransportationStopInfo.generated.h"

USTRUCT( BlueprintType, meta = (HiddenByDefault) )
struct THOUGHTFISHCOALAPLUGIN_API FStopPopupInfo
{
	GENERATED_BODY()

	public:
		UPROPERTY(EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		TArray<FDepartureInfo> departureInfo;

		UPROPERTY(EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString stopName;

		UPROPERTY(EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		bool wheelchairBoarding = false;

		UPROPERTY(EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString fareURL;
};