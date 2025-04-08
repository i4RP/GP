// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaTransportationServiceInfo.generated.h"

UENUM( BlueprintType )
enum class UWeekday : uint8
{
	MONDAY = 0,
	TUESDAY = 1,
	WEDNESDAY = 2,
	THURSDAY = 3,
	FRIDAY = 4,
	SATURDAY = 5,
	SUNDAY = 6
};

UCLASS()
class UCalendarInfo
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TArray<UWeekday> weekdaysWhereServiceAvailable;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FDateTime startDate;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FDateTime endDate;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FDateTime, bool> exceptionalDates;
};