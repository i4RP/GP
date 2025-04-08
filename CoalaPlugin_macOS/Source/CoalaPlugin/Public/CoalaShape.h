// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaGPSCoordinates.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaShape.generated.h"

UCLASS()
class UShape
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Core|Shape" )
		FCoalaGPSCoordinates position;

		UPROPERTY( EditAnywhere, Category = "Coala|Core|Shape" )
		unsigned int index;
};

namespace Coala
{	
	UShape* FindShapeClosestTo( FCoalaGPSCoordinates position, TArray<UShape*> &shapes );
}
