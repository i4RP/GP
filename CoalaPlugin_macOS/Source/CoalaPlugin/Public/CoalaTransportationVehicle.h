// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaTransportationVehicle.generated.h"

class UAgency;
class UTrip;
class UTransportationObjects;
class UTransportationData;

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaTransportationVehicle
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static void FindInfoFromVehicle(
			UTransportationData* data,
			UTransportationObjects* objects,
			AActor* vehicle,
			FString& tripId,
			UTrip*& trip,
			UAgency*& agency,
			bool& foundInfo );
	
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static UTransportationObjects* RenderVehicleForTrip(
			UTransportationData* data,
			AActor* worldActor,
			UTransportationObjects* objectsWrapper,
			UClass* blueprintVehicle,
			FString tripId,
			FDateTime time,
			AActor*& newVehicle );
					
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static UTransportationObjects* CleanUpVehicles(
			UTransportationData* data,
			UTransportationObjects* objectsWrapper,
			TArray<FString> tripIdsToRender,
			bool& somethingWasCleanedUp );
};