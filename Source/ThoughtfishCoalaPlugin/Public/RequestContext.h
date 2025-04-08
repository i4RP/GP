// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "RequestContext.generated.h"

UENUM( BlueprintType, Meta = (Bitflags) )
enum class REQUEST_CONTEXT : uint8
{
	NONE = 0,
	GAMETAGS = 1,
	POIS,
	WEATHER,
	STREETS,
	BUILDINGS,
	WATER,
	CONTEXT,
	TIMEZONE,
	CUSTOM_POIS,
	ELEVATION,
	CRIME
};
ENUM_CLASS_FLAGS( REQUEST_CONTEXT )