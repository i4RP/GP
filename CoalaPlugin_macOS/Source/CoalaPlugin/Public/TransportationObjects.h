// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StringArrayWrapper.h"
#include "TransportationObjects.generated.h"

UCLASS(BlueprintType, meta = (HiddenByDefault))
class THOUGHTFISHCOALAPLUGIN_API UTransportationObjects
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		AActor* transportationParent;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, AActor*> routeActors;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, AActor*> stopActors;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, FStringArrayWrapper> stopsPerRouteId;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, FStringArrayWrapper> routesPerStopId;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, class UVehicle*> vehicleActorsPerTrip;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		AActor* renderedTripSpline;
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaTransportationObjectsShadowingFix
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintPure, Category = "Coala|Transportation", meta = (NativeBreakFunc) )
		static void BreakTransportationObjects(
			UTransportationObjects* InTransportationObjects,
			AActor*& transportationParent,
			TMap<FString, AActor*>& routeActors,
			TMap<FString, AActor*>& stopActors,
			TMap<FString, FStringArrayWrapper>& routesPerStopId,
			TMap<FString, class UVehicle*>& vehicleActorsPerTrip);
};