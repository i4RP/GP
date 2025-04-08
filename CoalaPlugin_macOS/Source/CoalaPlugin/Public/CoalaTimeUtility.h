// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaTimeUtility.generated.h"

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaTimeUtility
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintPure, Category = "Coala|Utility" )
		static int64 GetUnixTimestampNow();

		UFUNCTION( BlueprintPure, Category = "Coala|Utility" )
		static FString GetUnixTimestampNowString();

		static FDateTime GetDateFromString( FString inData );
	
		static FDateTime GetTimeFromString( FString inData );


	
};