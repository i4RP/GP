// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaGPSCoordinates.h"
#include "CoalaTile.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaRequestFunctions.generated.h"

enum class TransportationType : uint8;

UENUM( BlueprintType )
enum class EOutputPins_CoalaRequestResult : uint8
{
	OnSuccess,
	OnError
};

class UBluePrintHttpGetRequest;
class UBluePrintHttpGetRequestTransportation;

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaRequestFunctions
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	public:
		UFUNCTION( BlueprintCallable, Category = "Coala|Requests", meta = (ExpandEnumAsExecs = "Branches") )
		static UBluePrintHttpGetRequest* MakeCoalaRequest( FCoalaTile tile, UPARAM( meta = (Bitmask, BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.REQUEST_CONTEXT") ) int32 context, EOutputPins_CoalaRequestResult& Branches );

		UFUNCTION( BlueprintCallable, Category = "Coala|Requests", meta = (ExpandEnumAsExecs = "Branches") )
		static UBluePrintHttpGetRequest* MakeCoalaSetCustomPOIRequest( float lon, float lat, FString name, FString payload, EOutputPins_CoalaRequestResult& Branches );

		UFUNCTION( BlueprintCallable, Category = "Coala|Requests", meta = (ExpandEnumAsExecs = "Branches") )
		static UBluePrintHttpGetRequest* MakeCoalaGetCustomPOISuggestionsRequest( float lon, float lat, EOutputPins_CoalaRequestResult& Branches );

		UFUNCTION( BlueprintCallable, Category = "Coala|Utility", meta = (ExpandEnumAsExecs = "Branches") )
		static UBluePrintHttpGetRequestTransportation* MakeCoalaRequestTransportation( int perimeter, FCoalaGPSCoordinates coordinates, TransportationType transportationType, EOutputPins_CoalaRequestResult& Branches );
};