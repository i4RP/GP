// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaGridIndex.h"

#include "CoreMinimal.h"
#include "CoalaShapeData.generated.h"

USTRUCT( BlueprintType, meta = (HiddenByDefault) )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaShapeData
{
	GENERATED_BODY()

	FCoalaGridIndex index;

	TArray<TArray<FVector>> shapes;
	TArray<TArray<TArray<FVector>>> holes;
	TArray<FVector> normals;
};
