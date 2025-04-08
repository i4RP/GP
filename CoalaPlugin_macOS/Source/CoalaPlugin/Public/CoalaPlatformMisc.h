// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaPlatformMisc.generated.h"

UCLASS()
class UCoalaPlatformMisc
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintCallable, Category = "Coala|Utility", BlueprintPure )
		static FString GetDeviceIdForCurrentPlatform();
};

