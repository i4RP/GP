// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "TransportationType.generated.h"

UENUM( BlueprintType, meta = (Bitflags) )
enum class TransportationType : uint8
{
	NONE = 0,
	BUS = 1,
	TRAIN = 2,
	FLIGHT = 4
};
ENUM_CLASS_FLAGS( TransportationType )
