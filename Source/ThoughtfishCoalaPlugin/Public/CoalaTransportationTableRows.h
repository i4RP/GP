// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CoalaTransportationTableRows.generated.h"

USTRUCT( BlueprintType )
struct FTransportationCalendarDatesStruct
: public FTableRowBase
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString service_id;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString date;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		int exception_type = 0;
};

USTRUCT( BlueprintType )
struct FTransportationShapesStruct
: public FTableRowBase
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString shape_id;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString shape_pt_lat;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString shape_pt_lon;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		int shape_pt_sequence = 0;
};

USTRUCT( BlueprintType )
struct FTransportationStopsStruct
: public FTableRowBase
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString stop_id;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString stop_lat;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString stop_lon;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString stop_name;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		int wheelchair_boarding = 0;
};

USTRUCT( BlueprintType )
struct FTransportationStopTimesStruct
: public FTableRowBase
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString stop_id;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString trip_id;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString arrival_time;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString departure_time;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		int stop_sequence = 0;
};

USTRUCT( BlueprintType )
struct FTransportationTripsStruct
: public FTableRowBase
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString route_id;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString trip_id;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString service_id;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString shape_id;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		int direction_id = 0;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		int bikes_allowed = 0;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString trip_headsign;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		int wheelchair_accessible = 0;
};

USTRUCT( BlueprintType )
struct FTransportationCalendarStruct
: public FTableRowBase
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString service_id;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		int monday = 0;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		int tuesday = 0;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		int wednesday = 0;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		int thursday = 0;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		int friday = 0;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		int saturday = 0;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		int sunday = 0;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString start_date;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite )
		FString end_date;
};
