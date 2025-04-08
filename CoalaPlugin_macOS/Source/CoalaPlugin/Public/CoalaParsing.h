// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaParsing.generated.h"

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaParsing
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintCallable, Category = "Coala" )
		static TArray<FString> ParseCustomPOISuggestionsResponse( FString JsonRaw );
};