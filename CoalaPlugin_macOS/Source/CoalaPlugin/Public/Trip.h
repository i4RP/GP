// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Trip.generated.h"

UCLASS( BlueprintType, meta = (HiddenByDefault) )
class UTrip
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FString serviceId;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FString routeId;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		bool isInboundDirection;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FString shapeId;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TArray<FString> stopIds;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		bool bikesAllowed;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		bool wheelchairAccessible;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FString headsign;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TMap<FString, class UShape*> shapePerStopId;
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaTripShadowingFix
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintPure, Category = "Coala|Transportation", meta = (NativeBreakFunc) )
		static void BreakTrip(
			UTrip* InTrip,
			FString& serviceId,
			FString& routeId,
			bool& isInboundDirection,
			FString& shapeId,
			TArray<FString>& stopIds,
			bool& bikesAllowed,
			bool& wheelchairAccessible,
			FString& headsign);
};


