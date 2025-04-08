// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaTransportationRoute.generated.h"

UCLASS()
class URoute
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FString agencyId;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		FString name;
};
