// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaGPSCoordinates.generated.h"

USTRUCT( BlueprintType, meta=(HasNativeMake="", HasNativeBreak ="") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaGPSCoordinates
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|GPSCoordinates" )
	double lon;
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|GPSCoordinates" )
	double lat;

	FCoalaGPSCoordinates();
	FCoalaGPSCoordinates( double lon, double lat );

	FVector ToScenePosition();

	bool containsNaN();
};
