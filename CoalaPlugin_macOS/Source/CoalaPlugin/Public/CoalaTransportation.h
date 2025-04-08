// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaGPSCoordinates.h"
#include "CoalaTransportationRenderConfig.h"
#include "TransportationStopInfo.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaTransportation.generated.h"

class UCalendarInfo;
class URoute;
class UAgency;
class UTransportationObjects;
class UTransportationData;
class UShape;
class UStop;
class UStopTime;
class UTrip;
enum class TransportationType : uint8;

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaTransportation
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		static FCoalaGPSCoordinates lastCoordinatesRequest;
	
	
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static UTransportationObjects* RenderRoutes(
			UTransportationData* data,
			UTransportationObjects* objectsWrapper,
			AActor* worldActor,
			FCoalaTransportationRenderConfig config,
			TransportationType type,
			TArray<AActor*>& newVehicles,
			TArray<AActor*>& newStops );
	
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static UTransportationObjects* CleanUpRoutes( UTransportationData* data, UTransportationObjects* objectsWrapper );
			

		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static FString FindStopIdFromObject( UTransportationObjects* objects, AActor* stopActor, bool& foundId );

		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static FStopPopupInfo GetStopPopupInfo( UTransportationData* data, FString stopId, bool arrivalInfoOnly );
				
	
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static TArray<TransportationType> BitflaggedEnumToFlagArray( UPARAM( meta = (Bitmask, BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.TransportationType") ) int32 type );

		static bool IsServiceDrivingOnDate( FString serviceId, UCalendarInfo* info, FDateTime inDate );
			
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static bool CheckIfPlayerLeftCurrentTransportationPerimeter( float playerLon, float playerLat, FCoalaTransportationRenderConfig config );
		
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static void UpdateZPositions( UTransportationObjects* objectsWrapper, class UCoalaArea* area );
		
		UFUNCTION( BlueprintCallable, Category = "Coala|Transportation" )
		static FDateTime GetTimeNowWithGMTOffset( UTransportationData* data );
					
		static FTransportationTypeSettings GetSettingsForTransportationType( FCoalaTransportationRenderConfig config, TransportationType type );
};
