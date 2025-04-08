// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "StringArrayWrapper.generated.h"

USTRUCT(BlueprintType, meta = (HiddenByDefault))
struct THOUGHTFISHCOALAPLUGIN_API FStringArrayWrapper
{
	GENERATED_BODY()

public:
	UPROPERTY() TArray<FString> strings;
};