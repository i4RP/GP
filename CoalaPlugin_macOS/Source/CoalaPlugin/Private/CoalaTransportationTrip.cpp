// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaTransportationTrip.h"

#include "CoalaAreaController.h"
#include "CoalaConverter.h"
#include "CoalaShape.h"
#include "CoalaShapeArrayWrapper.h"
#include "CoalaTransportation.h"
#include "CoalaTransportationData.h"
#include "CoalaTransportationServiceInfo.h"
#include "CoalaTransportationStop.h"
#include "CoalaTransportationStopTime.h"
#include "CoalaTransportationVehicle.h"
#include "CoalaTripArrayWrapper.h"
#include "TransportationObjects.h"
#include "Trip.h"
#include "GameFramework/Actor.h"


void
UCoalaTransportationTrip::GetCurrentTrips(
	UTransportationData* data,
	TArray<FString>& tripIdsToday,
	TArray<FString>& tripIdsYesterday )
{
	FDateTime now = UCoalaTransportation::GetTimeNowWithGMTOffset( data );
	FDateTime nowWithoutDate = FDateTime( 1, 1, 1, now.GetHour(), now.GetMinute(), now.GetSecond(), now.GetMillisecond() );

	FDateTime dateToday = now.GetDate();
	FDateTime dateYesterday = dateToday - FTimespan::FromDays( 1 );
	TArray<FString> serviceIdsDrivingToday;

	//Because of stopTimes overrolling after 0 a.m. into 24:30 etc.
	TArray<FString> serviceIdsDrivingYesterday;

	for( const TPair<FString, UCalendarInfo*>& pair : data->calendarData )
	{
		UCalendarInfo* info = pair.Value;

		if( UCoalaTransportation::IsServiceDrivingOnDate( pair.Key, info, dateToday ) && !serviceIdsDrivingToday.Contains( pair.Key ) )
			serviceIdsDrivingToday.Add( pair.Key );

		if( UCoalaTransportation::IsServiceDrivingOnDate( pair.Key, info, dateYesterday ) && !serviceIdsDrivingYesterday.Contains( pair.Key ) )
			serviceIdsDrivingYesterday.Add( pair.Key );
	}

	GetRelevantTripsFromServiceIds( data, serviceIdsDrivingToday, nowWithoutDate, false, tripIdsToday );
	GetRelevantTripsFromServiceIds( data, serviceIdsDrivingYesterday, nowWithoutDate, true, tripIdsYesterday );
}

TArray<FVector>
UCoalaTransportationTrip::GetTripPositions(
	UTransportationData* data,
	UTransportationObjects* objects,
	FString tripId,
	AActor* worldObject )
{
	TArray<FVector> positions;
	UTrip* trip = data->tripsData[tripId];
	//Try get shapes
	FShapeArrayWrapper* shapeWrapper = data->shapesData.Find( trip->shapeId );
	if( shapeWrapper != NULL )
	{
		for( int a = 0; a < shapeWrapper->shapes.Num(); a++ )
		{
			UShape* shape = shapeWrapper->shapes[a];
			FVector position =shape->position.ToScenePosition();
			position = CoalaConverter::ToTerrainPositionWithoutArea( position, worldObject );
			positions.Add( position );
		}
	}
	else
	{
		FStopTimesArrayWrapper stopTimesWrapper = data->stopTimesData[tripId];
		for( int a = 0; a < stopTimesWrapper.stopTimes.Num(); a++ )
		{
			UStopTime* stopTime = stopTimesWrapper.stopTimes[a];
			UStop* stop = data->stopsData[stopTime->stopId];

			FVector position = stop->position.ToScenePosition();
			position = CoalaConverter::ToTerrainPositionWithoutArea( position, worldObject );
			positions.Add( position );
		}
	}

	return positions;
}

UTransportationObjects*
UCoalaTransportationTrip::UpdateTrips(
	UTransportationData* data,
	UTransportationObjects* objectsWrapper,
	AActor* worldActor,
	TArray<FString> tripIds,
	FCoalaTransportationRenderConfig config,
	TransportationType type,
	bool isYesterday,
	TArray<AActor*>& newVehicles )
{
	UTransportationObjects* ret = objectsWrapper == NULL ? NewObject<UTransportationObjects>() : objectsWrapper;

	FDateTime now = UCoalaTransportation::GetTimeNowWithGMTOffset( data );
	FDateTime nowWithoutDate = FDateTime( 1, 1, 1, now.GetHour(), now.GetMinute(), now.GetSecond(), now.GetMillisecond() );

	if( isYesterday )
		nowWithoutDate = FDateTime( 1, 1, 2, now.GetHour(), now.GetMinute(), now.GetSecond(), now.GetMillisecond() );

	for( int b = 0; b < tripIds.Num(); b++ )
	{
		FString tripId = tripIds[b];
		FTransportationTypeSettings settings = UCoalaTransportation::GetSettingsForTransportationType( config, type );
		AActor* vehicle = NULL;
		ret = UCoalaTransportationVehicle::RenderVehicleForTrip( data, worldActor, ret, settings.vehicleBlueprint, tripId, nowWithoutDate, vehicle );
		if( vehicle != NULL && vehicle->IsValidLowLevel() )
			newVehicles.Add( vehicle );
	}

	return ret;
}

FCoalaGPSCoordinates
UCoalaTransportationTrip::GetPositionOfFirstStopInTrip( UTransportationData* data, FString tripId )
{
	FString stopId = data->tripsData[tripId]->stopIds[0];
	return data->stopsData[stopId]->position;
}

UTransportationObjects*
UCoalaTransportationTrip::SaveTripSpline( UTransportationObjects* objectsWrapper, AActor* splineActor )
{
	splineActor->AttachToActor( objectsWrapper->transportationParent, FAttachmentTransformRules::KeepRelativeTransform );
	objectsWrapper->renderedTripSpline = splineActor;
	return objectsWrapper;
}

void
UCoalaTransportationTrip::DestroyTripSpline( UTransportationObjects* objectsWrapper )
{
	if( objectsWrapper->renderedTripSpline != NULL && objectsWrapper->renderedTripSpline->IsValidLowLevel() )
		objectsWrapper->renderedTripSpline->Destroy();
}

void
UCoalaTransportationTrip::GetRelevantTripsFromServiceIds(
	UTransportationData* data,
	TArray<FString> serviceIds,
	FDateTime time,
	bool isYesterday,
	TArray<FString>& tripIds )
{
	for( int a = 0; a < serviceIds.Num(); a++ )
	{
		FString serviceId = serviceIds[a];
		FTripsWrapper* tripsDrivingToday = data->tripsDataPerServiceId.Find( serviceId );
		if( tripsDrivingToday == NULL )
			continue;

		for( const TPair<FString, UTrip*>& tripPair : tripsDrivingToday->trips )
		{
			FStopTimesArrayWrapper* stopTimesArrayWrapper = data->stopTimesData.Find( tripPair.Key );
			if( stopTimesArrayWrapper == NULL )
				continue;

			if( stopTimesArrayWrapper->stopTimes.Num() == 0 )
				continue;

			//if its from yesterday's date, only take all trips that reach after 0 a.m. into account
			if( isYesterday )
			{
				if( stopTimesArrayWrapper->stopTimes.Last()->departureTime.GetDay() < 2 )
					continue;
			}

				//if its from today's date, disregard all trips that start after 0 a.m.
			else if( stopTimesArrayWrapper->stopTimes[0]->arrivalTime.GetDay() == 2 )
				continue;

			bool timeRangeFits = stopTimesArrayWrapper->stopTimes[0]->arrivalTime < time && stopTimesArrayWrapper->stopTimes.Last()->departureTime > time;
			if( !timeRangeFits )
				continue;

			tripIds.Add( tripPair.Key );
		}
	}
}
