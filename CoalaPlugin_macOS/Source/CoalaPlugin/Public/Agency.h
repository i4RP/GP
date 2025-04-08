// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Agency.generated.h"

UCLASS(BlueprintType, meta = (HiddenByDefault))
class UAgency
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UPROPERTY( EditAnywhere, Category = "Coala|Transportation|Agency" )
		FString name;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation|Agency" )
		FString url;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation|Agency" )
		FString fareURL;
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaAgencyShadowingFix
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintPure, Category="Coala|Transportation|Agency", meta = (NativeBreakFunc) )
		static void BreakAgency(
			UAgency* InAgency,
			FString& name,
			FString& url );
};