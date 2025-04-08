// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Http.h"
#include "TransportationType.h"
#include "BluePrintHttpGetRequestTransportation.generated.h"


// Generate a delegate for the OnGetResult event
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams( FOnSuccessTransportation, TransportationType, transportationType, FString, response );

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam( FOnErrorTransportation, FString, reason );

UCLASS( BlueprintType, Blueprintable, Category = "Coala|Transportation" )
class THOUGHTFISHCOALAPLUGIN_API UBluePrintHttpGetRequestTransportation
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		void OnResponseReceived( FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful );

		UPROPERTY( BlueprintAssignable, Category = "Coala|Transportation" )
		FOnSuccessTransportation OnSuccess;

		UPROPERTY( BlueprintAssignable, Category = "Coala|Transportation" )
		FOnErrorTransportation OnError;

		UPROPERTY( EditAnywhere, Category = "Coala|Transportation" )
		TransportationType transportationType;
};
