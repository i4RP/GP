// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaPlayerVisibility.generated.h"

UENUM( BlueprintType )
enum class ECoalaPlayerVisibility : uint8
{
	None = 0 UMETA(Hidden),
	AlwaysInvisible = 1,
	AlwaysVisible = 2,
	OnlyVisibleWhenRequired = 3
};
