// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaNetTypes.h"
#include "CoalaGPSCoordinates.h"

#include "CoreMinimal.h"
#include "CoalaNetGpsBounds.generated.h"

USTRUCT()
struct FCoalaNetGpsBounds
{
	GENERATED_BODY()
	
	FCoalaGPSCoordinates min;
	FCoalaGPSCoordinates max;
		
};

class FCoalaArchive& Serialize(FCoalaArchive &archive, FCoalaNetGpsBounds &bounds);