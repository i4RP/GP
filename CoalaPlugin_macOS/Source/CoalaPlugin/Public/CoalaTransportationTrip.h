// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaGPSCoordinates.h"
#include "CoalaTransportationRenderConfig.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaTransportationTrip.generated.h"

class UTransportationData;
class UTransportationObjects;
enum class TransportationType : uint8;

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaTransportationTrip
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static void GetCurrentTrips( UTransportationData* data, TArray<FString>& tripIdsToday, TArray<FString>& tripIdsYesterday );

		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static TArray<FVector> GetTripPositions(
			UTransportationData* data,
			UTransportationObjects* objects,
			FString tripId,
			AActor* worldObject );		
	
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static UTransportationObjects* UpdateTrips(
			UTransportationData* data,
			UTransportationObjects* objectsWrapper,
			AActor* worldActor,
			TArray<FString> tripIds,
			FCoalaTransportationRenderConfig config,
			TransportationType type,
			bool IsYesterday,
			TArray<AActor*>& newVehicles );
		
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static FCoalaGPSCoordinates GetPositionOfFirstStopInTrip( UTransportationData* data, FString tripId );

	
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static UTransportationObjects* SaveTripSpline( UTransportationObjects* objectsWrapper, AActor* splineActor );
		
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static void DestroyTripSpline( UTransportationObjects* objectsWrapper );

					
		static void GetRelevantTripsFromServiceIds(
			UTransportationData* data,
			TArray<FString> serviceIds,
			FDateTime time,
			bool isYesterday,
			TArray<FString>& tripIds );

};