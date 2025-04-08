// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaGPSCoordinates.h"

#include "CoreMinimal.h"
#include "CoalaHole.generated.h"

USTRUCT( BlueprintType, meta = (HiddenByDefault) )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaHole
{
	UPROPERTY( EditAnywhere, Category = "Coala|Core|Shape|Hole" )	
	TArray<FCoalaGPSCoordinates> points;

	FCoalaHole();

	GENERATED_BODY()

};
