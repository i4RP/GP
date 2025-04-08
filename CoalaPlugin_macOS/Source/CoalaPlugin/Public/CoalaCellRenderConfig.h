// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaCellRenderConfig.generated.h"

USTRUCT( BlueprintType, meta = (HiddenByDefault) )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaCellRenderConfig
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Cell" )
	TArray<FString> gametagNames;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Cell" )
	class UMaterialInterface* material = nullptr;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Cell" )
	bool onlyIfGametagIsHighest = true;
};
