// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaTile.h"
#include "RequestContext.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "RequestCoala.generated.h"

// Our delegate to return our value
DECLARE_DYNAMIC_DELEGATE_OneParam( FCoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData, class UCoalaArea*, newAreaData );
DECLARE_DYNAMIC_DELEGATE_OneParam( FCoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData, class UCoalaArea*, updatedAreaData );
DECLARE_DYNAMIC_DELEGATE_TwoParams( FCoalaDelegateRequestCoalaRequestOnError, FString, error, FCoalaTile, tileErrorOccure );

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API URequestCoala
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
	UFUNCTION( BlueprintCallable, Category = "Coala|V2|Requests", meta = (AutoCreateRefTerm = "onNewAreaData,onUpdatedAreaData,onError") )
	static void AsyncRequestCoalaMapData(
		FCoalaTile tile,
		UPARAM( meta = (Bitmask, BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.REQUEST_CONTEXT") ) int32 context,
		const FCoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData& onNewAreaData,
		const FCoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData& onUpdatedAreaData,
		const FCoalaDelegateRequestCoalaRequestOnError& onError
	);

};
