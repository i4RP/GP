// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaStreetRenderConfig.generated.h"

USTRUCT( BlueprintType, meta = (HiddenByDefault) )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaStreetRenderConfig
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, Category = "Coala|Config|Street", BlueprintReadWrite )
	TArray<FString> types;

	UPROPERTY( EditAnywhere, Category = "Coala|Config|Street", BlueprintReadWrite )
	float width = 0;

	UPROPERTY( EditAnywhere, Category = "Coala|Config|Street", BlueprintReadWrite )
	class UMaterialInterface* material = nullptr;

	UPROPERTY( EditAnywhere, Category = "Coala|Config|Street", BlueprintReadWrite )
	bool mergeMeshes = true;
};
