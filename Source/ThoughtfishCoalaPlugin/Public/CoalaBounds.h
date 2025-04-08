// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaGPSCoordinates.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaBounds.generated.h"

USTRUCT( BlueprintType, meta = (HasNativeMake = "", HasNativeBreak = "") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaBounds
{
	GENERATED_BODY()

	double left;
	double bottom;
	double right;
	double top;

	FCoalaBounds();
	FCoalaBounds( double left, double bottom, double right, double top );
	
	bool contains( double lon, double lat );
	FCoalaGPSCoordinates center();
	double width();
	double height();
	bool intersects( const FCoalaBounds& other );
};
