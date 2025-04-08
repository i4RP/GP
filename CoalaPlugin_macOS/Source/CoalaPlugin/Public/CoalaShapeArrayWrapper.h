// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaShapeArrayWrapper.generated.h"

USTRUCT()
struct THOUGHTFISHCOALAPLUGIN_API FShapeArrayWrapper
{
	GENERATED_BODY()

	public:
		UPROPERTY()
		TArray<class UShape*> shapes;
};


