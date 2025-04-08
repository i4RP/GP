// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaTransportation.h"
#include "Agency.h"
#include "CoalaActor.h"
#include "CoalaArea.h"
#include "CoalaAreaController.h"
#include "CoalaBounds.h"
#include "CoalaConverter.h"
#include "CoalaTransportationData.h"
#include "CoalaTransportationRoute.h"
#include "CoalaTransportationServiceInfo.h"
#include "CoalaTransportationStop.h"
#include "CoalaTransportationTrip.h"
#include "TransportationObjects.h"
#include "Trip.h"
#include "CoalaPluginBlueprintLibrary.h"

#include "Engine/World.h"

FCoalaGPSCoordinates UCoalaTransportation::lastCoordinatesRequest;


UTransportationObjects*
UCoalaTransportation::RenderRoutes(
	UTransportationData* data,
	UTransportationObjects* objectsWrapper,
	AActor* worldActor,
	FCoalaTransportationRenderConfig config,
	TransportationType type,
	TArray<AActor*>& newVehicles,
	TArray<AActor*>& newStops )
{
	UWorld* world = worldActor->GetWorld();
	FActorSpawnParameters spawnInfo;

	UTransportationObjects* ret = objectsWrapper == NULL ? NewObject<UTransportationObjects>() : objectsWrapper;

	AActor* parentTransportation = ret->transportationParent == NULL
		                               ? world->SpawnActor<ACoalaActor>( FVector::ZeroVector, FRotator::ZeroRotator, spawnInfo )
		                               : ret->transportationParent;


#if WITH_EDITOR
	FString transportationName = parentTransportation->GetName().Append( "_transportation" );
	parentTransportation->Rename( *transportationName );
	parentTransportation->SetActorLabel( *transportationName );
#endif
	ret->transportationParent = parentTransportation;

	//RenderStops
	for( const TPair<FString, URoute*>& routePair : data->routesData )
	{
		FString routeId = routePair.Key;

		AActor** parentRoutePointer = ret->routeActors.Find( routeId );
		AActor* parentRoute;

		if( parentRoutePointer != NULL )
			parentRoute = *parentRoutePointer;
		else
		{
			parentRoute = world->SpawnActor<ACoalaActor>( FVector::ZeroVector, FRotator::ZeroRotator, spawnInfo );

#if WITH_EDITOR
			FString routeName = parentRoute->GetName().Append( "_route_" ).Append( routeId );
			parentRoute->Rename( *routeName );
			parentRoute->SetActorLabel( *routeName );
#endif

			parentRoute->AttachToActor( (AActor*)parentTransportation, FAttachmentTransformRules::KeepRelativeTransform );
			ret->routeActors.Add( routeId, parentRoute );
		}

		FStopArrayWrapper stopWrapper = data->stopsDataPerRouteId[routeId];

		for( int a = 0; a < stopWrapper.stops.Num(); a++ )
		{
			UStop* stop = stopWrapper.stops[a];

			FStringArrayWrapper* routeIdWrapper = ret->routesPerStopId.Find( stop->stopId );
			if( routeIdWrapper != NULL )
			{
				routeIdWrapper->strings.Add( routeId );
				continue;
			}

			FVector stopScenePosition = stop->position.ToScenePosition();
			stopScenePosition = CoalaConverter::ToTerrainPositionWithoutArea( stopScenePosition, worldActor );

			FTransportationTypeSettings settings = GetSettingsForTransportationType( config, type );
			AActor* stopActor = world->SpawnActor<AActor>( settings.stopBlueprint, stopScenePosition, FRotator::ZeroRotator, spawnInfo );

#if WITH_EDITOR
			FString stopName = stopActor->GetName().Append( "_stop_" ).Append( stop->stopId );
			stopActor->Rename( *stopName );
			stopActor->SetActorLabel( *stopName );
#endif
			stopActor->AttachToActor( (AActor*)parentRoute, FAttachmentTransformRules::KeepRelativeTransform );
			ret->stopActors.Add( stop->stopId, stopActor );
			newStops.Add( stopActor );

			FStringArrayWrapper stringwrapper;
			stringwrapper.strings.Add( routeId );
			ret->routesPerStopId.Add( stop->stopId, stringwrapper );

			//Save StopsPerRouteId
			FStringArrayWrapper* stopIdWrapper = ret->stopsPerRouteId.Find( routeId );
			if( stopIdWrapper != NULL )
			{
				stopIdWrapper->strings.Add( stop->stopId );
			}
			else
			{
				FStringArrayWrapper stringwrapperStops;
				stringwrapperStops.strings.Add( stop->stopId );
				ret->stopsPerRouteId.Add( routeId, stringwrapperStops );
			}
		}
	}
	TArray<FString> tripIdsToday;
	TArray<FString> tripIdsYesterday;
	UCoalaTransportationTrip::GetCurrentTrips( data, tripIdsToday, tripIdsYesterday );

	ret = UCoalaTransportationTrip::UpdateTrips( data, ret, worldActor, tripIdsToday, config, type, false, newVehicles );
	ret = UCoalaTransportationTrip::UpdateTrips( data, ret, worldActor, tripIdsYesterday, config, type, true, newVehicles );

	TArray<FString> tripIdsTotal = tripIdsToday;
	tripIdsTotal.Append( tripIdsYesterday );

	return ret;
}

UTransportationObjects*
UCoalaTransportation::CleanUpRoutes(
	UTransportationData* data,
	UTransportationObjects* objectsWrapper )
{
	if( objectsWrapper == NULL )
		return NULL;

	TArray<FString> routeIdsToDestroy;

	TArray<FString> routeIdsToKeep;
	data->routesData.GetKeys( routeIdsToKeep );

	TArray<FString> routeIdsFromObjectWrapper;
	objectsWrapper->routeActors.GetKeys( routeIdsFromObjectWrapper );

	for( int c = 0; c < routeIdsFromObjectWrapper.Num(); c++ )
	{
		FString routeId = routeIdsFromObjectWrapper[c];
		if( routeIdsToKeep.Contains( routeId ) )
			continue;

		routeIdsToDestroy.Add( routeId );
	}


	for( int a = 0; a < routeIdsToDestroy.Num(); a++ )
	{
		FString routeId = routeIdsToDestroy[a];
		AActor* routeActor = objectsWrapper->routeActors[routeId];

		FStringArrayWrapper stopIds = objectsWrapper->stopsPerRouteId[routeId];

		for( int b = 0; b < stopIds.strings.Num(); b++ )
		{
			FString stopId = stopIds.strings[b];
			AActor* stopActor = objectsWrapper->stopActors[stopId];

			FStringArrayWrapper routeIdsFromStop = objectsWrapper->routesPerStopId[stopId];

			//If there are other routes that need this stop
			if( routeIdsFromStop.strings.Num() > 1 )
			{
				FString otherRouteId = routeIdsFromStop.strings[0] == routeId ? routeIdsFromStop.strings[1] : routeIdsFromStop.strings[0];
				AActor* otherRouteActor = objectsWrapper->routeActors[otherRouteId];

				stopActor->AttachToActor( otherRouteActor, FAttachmentTransformRules::KeepRelativeTransform );
			}
			else
			{
				objectsWrapper->stopActors.Remove( stopId );
				stopActor->Destroy();
			}
		}

		objectsWrapper->routeActors.Remove( routeId );
		routeActor->Destroy();
	}

	return objectsWrapper;
}

FString
UCoalaTransportation::FindStopIdFromObject(
	UTransportationObjects* objects,
	AActor* stopActor,
	bool& foundId )
{
	if( objects == NULL )
		return "";

	FString stopId;
	for( const TPair<FString, AActor*>& stopPair : objects->stopActors )
	{
		if( stopPair.Value == stopActor )
		{
			stopId = stopPair.Key;
			break;
		}
	}

	if( stopId != "" )
		foundId = true;

	return stopId;
}

FStopPopupInfo
UCoalaTransportation::GetStopPopupInfo(
	UTransportationData* data,
	FString stopId,
	bool arrivalInfoOnly )
{
	FStopPopupInfo popupInfo;

	if( !arrivalInfoOnly )
	{
		UStop* stop = data->stopsData[stopId];
		popupInfo.stopName = stop->name;
		popupInfo.wheelchairBoarding = stop->wheelchairBoardingPossible;

		for( const TPair<FString, UAgency*>& agencyPair : data->agencyData )
		{
			for( const TPair<FString, URoute*>& routePair : data->routesData )
			{
				if( routePair.Value->agencyId == agencyPair.Key )
				{
					FStopArrayWrapper stopsWrapper = data->stopsDataPerRouteId[routePair.Key];
					for( int a = 0; a < stopsWrapper.stops.Num(); a++ )
					{
						UStop* currentStop = stopsWrapper.stops[a];
						if( currentStop->stopId == stopId )
						{
							popupInfo.fareURL = agencyPair.Value->fareURL == "" ? agencyPair.Value->url : agencyPair.Value->fareURL;
							break;
						}
					}
				}
			}

			if( popupInfo.fareURL != "" )
				break;
		}
	}

	FStopTimesArrayWrapper stopTimesWrapper = data->stopTimesDataPerStopId[stopId];

	FDateTime now = GetTimeNowWithGMTOffset( data );
	FDateTime dateYesterday = now.GetDate() - FTimespan::FromDays( 1 );
	FDateTime dateToday = now.GetDate();
	FDateTime dateTomorrow = now.GetDate() + FTimespan::FromDays( 1 );

	TArray<UStopTime*> relevantStopTimes;

	for( int i = 0; i < stopTimesWrapper.stopTimes.Num(); i++ )
	{
		UStopTime* stopTime = stopTimesWrapper.stopTimes[i];

		UStopTime* stopTimeBuffer = NewObject<UStopTime>();
		stopTimeBuffer->arrivalTime = stopTime->arrivalTime;
		stopTimeBuffer->departureTime = stopTime->departureTime;
		stopTimeBuffer->stopId = stopTime->stopId;
		stopTimeBuffer->tripId = stopTime->tripId;
		stopTimeBuffer->index = stopTime->index;


		UTrip* trip = data->tripsData[stopTime->tripId];

		UCalendarInfo* info = data->calendarData[trip->serviceId];

		if( IsServiceDrivingOnDate( trip->serviceId, info, dateYesterday ) )
		{
			bool countsForToday = stopTimeBuffer->departureTime.GetDay() == 2;
			if( countsForToday )
			{
				stopTimeBuffer->departureTime = FDateTime( dateToday.GetYear(), dateToday.GetMonth(), dateToday.GetDay(), stopTimeBuffer->departureTime.GetHour(), stopTimeBuffer->departureTime.GetMinute(), stopTimeBuffer->departureTime.GetSecond() );
				relevantStopTimes.Add( stopTimeBuffer );
			}
		}

		if( IsServiceDrivingOnDate( trip->serviceId, info, dateToday ) )
		{
			FDateTime newDepartureTime = FDateTime( dateToday.GetYear(), dateToday.GetMonth(), dateToday.GetDay(), stopTimeBuffer->departureTime.GetHour(), stopTimeBuffer->departureTime.GetMinute(), stopTimeBuffer->departureTime.GetSecond() );
			newDepartureTime += FTimespan::FromDays( stopTimeBuffer->departureTime.GetDay() - 1 );
			stopTimeBuffer->departureTime = newDepartureTime;
			relevantStopTimes.Add( stopTimeBuffer );
		}

		if( IsServiceDrivingOnDate( trip->serviceId, info, dateTomorrow ) && stopTimeBuffer->departureTime.GetDay() == 1 )
		{
			FDateTime newDepartureTime = FDateTime( dateTomorrow.GetYear(), dateTomorrow.GetMonth(), dateTomorrow.GetDay(), stopTimeBuffer->departureTime.GetHour(), stopTimeBuffer->departureTime.GetMinute(), stopTimeBuffer->departureTime.GetSecond() );

			if( newDepartureTime - now < FTimespan::FromDays( 1 ) )
			{
				stopTimeBuffer->departureTime = newDepartureTime;
				relevantStopTimes.Add( stopTimeBuffer );
			}
		}
	}

	relevantStopTimes.Sort( [](
		const UStopTime& A,
		const UStopTime& B )
	{
		return A.departureTime < B.departureTime;
	} );

	TArray<FDepartureInfo> departureInfoArray;

	bool nextDeparturesAreFound = false;
	int indexCounter = 0;
	for( int i = 0; i < relevantStopTimes.Num(); i++ )
	{
		UStopTime* stopTime = relevantStopTimes[i];

		if( stopTime->departureTime > now )
		{
			nextDeparturesAreFound = true;
		}

		if( nextDeparturesAreFound && indexCounter < 7 )
		{
			FDepartureInfo departureInfoBuffer;
			departureInfoBuffer.headsign = data->tripsData[stopTime->tripId]->headsign;

			FString timeUntilDeparture;
			FTimespan difference = stopTime->departureTime - now;

			if( difference < FTimespan::FromHours( 1 ) )
			{
				int minutes = difference.GetMinutes();
				if( minutes == 0 )
					timeUntilDeparture = "< 1 min";

				else
					timeUntilDeparture = FString::FromInt( difference.GetMinutes() ) + " min";
			}

			else
			{
				int hour = stopTime->departureTime.GetHour();

				FString sequel = "a.m.";

				if( hour > 12 )
				{
					hour -= 12;
					sequel = "p.m.";
				}

				FString stringHour = FString::FromInt( hour );

				//if (hour <= 9)
				//	stringHour = "0" + stringHour;


				int minute = stopTime->departureTime.GetMinute();
				FString stringMinute = FString::FromInt( minute );

				if( minute <= 9 )
					stringMinute = "0" + stringMinute;

				timeUntilDeparture = stringHour + ":" + stringMinute + " " + sequel;
			}

			departureInfoBuffer.departureTime = timeUntilDeparture;
			departureInfoArray.Add( departureInfoBuffer );

			indexCounter++;
		}
	}

	popupInfo.departureInfo = departureInfoArray;

	return popupInfo;
}

TArray<TransportationType>
UCoalaTransportation::BitflaggedEnumToFlagArray(
	UPARAM( meta = (Bitmask, BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.TransportationType") ) int32 type )
{
	TArray<TransportationType> flaggedTypes;
	if( type & (1 << (int32)TransportationType::NONE) )
	{
		flaggedTypes.Add( TransportationType::NONE );
		return flaggedTypes;
	}

	if( type & (1 << (int32)TransportationType::BUS) )
		flaggedTypes.Add( TransportationType::BUS );
	if( type & (1 << (int32)TransportationType::TRAIN) )
		flaggedTypes.Add( TransportationType::TRAIN );
	if( type & (1 << (int32)TransportationType::FLIGHT) )
		flaggedTypes.Add( TransportationType::FLIGHT );

	return flaggedTypes;
}

bool
UCoalaTransportation::IsServiceDrivingOnDate(
	FString serviceId,
	UCalendarInfo* info,
	FDateTime inDate )
{
	if( info->startDate == NULL || !(info->startDate < inDate && info->endDate > inDate) )
	{
		if( info->exceptionalDates.Contains( inDate ) )
		{
			bool isDrivingExceptionallyToday = info->exceptionalDates[inDate];
			if( isDrivingExceptionallyToday )
				return true;
		}
	}

	else
		//if no exceptions today or exception is positive, check weekday
		if( (!info->exceptionalDates.Contains( inDate ) || info->exceptionalDates[inDate]) )
		{
			EDayOfWeek weekday = inDate.GetDayOfWeek();
			if( info->weekdaysWhereServiceAvailable.Contains( (UWeekday)weekday ) )
				return true;
		}

	return false;
}

bool
UCoalaTransportation::CheckIfPlayerLeftCurrentTransportationPerimeter(
	float playerLon,
	float playerLat,
	FCoalaTransportationRenderConfig config )
{
	if( UCoalaTransportation::lastCoordinatesRequest.lon == 0.0 && UCoalaTransportation::lastCoordinatesRequest.lat == 0.0 )
		return false;

	int perimeter = config.transportationDataPerimeter;
	FCoalaGPSCoordinates coordinatesCenter = UCoalaTransportation::lastCoordinatesRequest;

	FVector scenePosition = coordinatesCenter.ToScenePosition();
	FVector offset = FVector( perimeter, perimeter, 0 );
	FVector scenePositionTopRight = scenePosition + offset;
	FVector scenePositionBottomLeft = scenePosition - offset;

	FCoalaGPSCoordinates gpsBottomRight = UCoalaGPSCoordinatesBlueprintLibrary::WorldPositionToGpsCoordinates( scenePositionTopRight );
	FCoalaGPSCoordinates gpsTopLeft = UCoalaGPSCoordinatesBlueprintLibrary::WorldPositionToGpsCoordinates( scenePositionBottomLeft );

	FCoalaBounds bounds;
	bounds.bottom = gpsBottomRight.lat;
	bounds.right = gpsBottomRight.lon;
	bounds.top = gpsTopLeft.lat;
	bounds.left = gpsTopLeft.lon;

	if( !bounds.contains( playerLon, playerLat ) )
		return true;

	return false;
}

void
UCoalaTransportation::UpdateZPositions( UTransportationObjects* objectsWrapper, UCoalaArea* area )
{
	if( objectsWrapper == NULL )
		return;

	if( objectsWrapper->stopActors.Num() == 0 )
		return;


	for( const TPair<FString, AActor*>& stopActorPair : objectsWrapper->stopActors )
	{
		AActor* actor = stopActorPair.Value;
		FVector location = actor->GetActorLocation();
		FCoalaGPSCoordinates locationCoords = UCoalaGPSCoordinatesBlueprintLibrary::WorldPositionToGpsCoordinates( location );
		if( area->CoordinatesAreInAreaBounds( locationCoords.lon, locationCoords.lat ) )
		{
			FVector updatedTerrainPosition = CoalaConverter::ToTerrainPositionWithoutArea( location, actor );
			if( updatedTerrainPosition.Z == 0 )
			{
				updatedTerrainPosition = CoalaConverter::ToTerrainPosition( locationCoords, area );
			}

			actor->SetActorLocation( updatedTerrainPosition );
		}
	}
}

FDateTime
UCoalaTransportation::GetTimeNowWithGMTOffset( UTransportationData* data )
{
	FDateTime now = FDateTime::UtcNow();
	FTimespan offset = FTimespan::FromSeconds( FMath::Abs( data->gmtOffset ) );

	if( data->gmtOffset < 0 )
		now -= offset;
	else
		now += offset;

	return now;
}

FTransportationTypeSettings
UCoalaTransportation::GetSettingsForTransportationType(  FCoalaTransportationRenderConfig config, TransportationType type )
{
	switch( type )
	{
		case TransportationType::BUS:		return config.busSettings;
		case TransportationType::TRAIN:		return config.trainSettings;
		case TransportationType::FLIGHT:	return config.flightSettings;
	}

	return FTransportationTypeSettings();
}


