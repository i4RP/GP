// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaTransportationStop.h"
#include "CoalaTransportationStopTime.h"
#include "CoalaTripArrayWrapper.h"
#include "TransportationType.h"
#include "CoalaShapeArrayWrapper.h"
#include "CoalaTransportationData.generated.h"

UCLASS( BlueprintType, meta = (HiddenByDefault) )
class UTransportationData
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TransportationType transportationType;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, class UAgency*> agencyData;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		int gmtOffset;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, class URoute*> routesData;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, FTripsWrapper> tripsDataPerRouteId;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, FTripsWrapper> tripsDataPerServiceId;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, class UTrip*> tripsData;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, FStopTimesArrayWrapper> stopTimesData;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, FStopTimesArrayWrapper> stopTimesDataPerStopId;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, class UStop*> stopsData;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, FStopArrayWrapper> stopsDataPerRouteId;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, class UCalendarInfo*> calendarData;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, FShapeArrayWrapper> shapesData;
};
