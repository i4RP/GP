// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaTransportationParsing.generated.h"

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaTransportationParsing
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		static class UDataTable* ParseCSVStringToDataTable( FString InCSVData, UScriptStruct* InStructType );

		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static class UTransportationData* LoadTransportationDataFromJSON( FString json, FString testGmtOffset );
	
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static UTransportationData* ConvertTransportationData( FString routesCSVData, FString agencyCSVData, FString tripsCSVData, FString shapesCSVData, FString calendarCSVData, FString calendarDatesCSVData, FString stopTimesCSVData, FString stopsCSVData, FString gmtOffset );

		static void PrepareCSVStringForDataTableConversion( FString& outString );

};	