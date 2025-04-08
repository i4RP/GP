// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaVehicle.generated.h"

UCLASS()
class UVehicle
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		class AActor* actor;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FRotator lookRotator;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FVector lookAtVector;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		class UStopTime* lastStopTime;
};