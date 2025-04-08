// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaTransportationVehicle.h"
#include "CoalaAreaController.h"
#include "CoalaConverter.h"
#include "CoalaShape.h"
#include "CoalaShapeArrayWrapper.h"
#include "CoalaTransportationData.h"
#include "CoalaTransportationRoute.h"
#include "CoalaTransportationStop.h"
#include "CoalaTransportationStopTime.h"
#include "CoalaVehicle.h"
#include "TransportationObjects.h"
#include "Trip.h"
#include "CoalaPluginBlueprintLibrary.h"

#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"

void
UCoalaTransportationVehicle::FindInfoFromVehicle(
	UTransportationData* data,
	UTransportationObjects* objects,
	AActor* vehicle,
	FString& tripId,
	UTrip*& trip,
	UAgency*& agency,
	bool& foundInfo )
{
	FString tripIdBuffer;

	if( objects == NULL )
		return;

	for( const TPair<FString, UVehicle*>& vehiclePair : objects->vehicleActorsPerTrip )
	{
		if( vehiclePair.Value->actor == vehicle )
		{
			tripIdBuffer = vehiclePair.Key;
			break;
		}
	}

	if( tripIdBuffer == "" )
		return;

	foundInfo = true;


	trip = data->tripsData[tripIdBuffer];
	tripId = tripIdBuffer;
	URoute* route = data->routesData[trip->routeId];
	agency = data->agencyData[route->agencyId];
}

UTransportationObjects*
UCoalaTransportationVehicle::RenderVehicleForTrip(
	UTransportationData* data,
	AActor* worldActor,
	UTransportationObjects* objectsWrapper,
	UClass* blueprintVehicle,
	FString tripId,
	FDateTime time,
	AActor*& newVehicle )
{
	UTransportationObjects* ret = objectsWrapper == NULL ? NewObject<UTransportationObjects>() : objectsWrapper;

	UTrip* trip = data->tripsData[tripId];

	//Get vehicleActor if it already exist so you can reuse it
	UVehicle** vehicleWrapperDoublePtr = ret->vehicleActorsPerTrip.Find( tripId );
	UVehicle* vehicleWrapper = NULL;
	AActor* vehicleActor = NULL;
	if( vehicleWrapperDoublePtr != NULL )
	{
		vehicleWrapper = *vehicleWrapperDoublePtr;
		vehicleActor = vehicleWrapper->actor;
	}

	UWorld* world = worldActor->GetWorld();
	FActorSpawnParameters spawnInfo;

	bool hasDeterminedLocation = false;
	UStopTime* stopTimeToSaveAsLast = NULL;

	//Find out where Bus is supposed to be according to shape data and time and spawn it there
	FVector vehicleLocation = FVector::ZeroVector;
	FVector lookAtVector = FVector::ZeroVector;
	FStopTimesArrayWrapper stopTimesArrayWrapper = data->stopTimesData[tripId];
	for( int c = 0; c < stopTimesArrayWrapper.stopTimes.Num(); c++ )
	{
		if( hasDeterminedLocation )
			break;

		UStopTime* stopTime;

		//if this vehicle already existed, check if a lastStopTime is saved
		if( vehicleWrapper != NULL )
			stopTime = vehicleWrapper->lastStopTime == NULL ? stopTimesArrayWrapper.stopTimes[c] : vehicleWrapper->lastStopTime;
		else
			stopTime = stopTimesArrayWrapper.stopTimes[c];

		FShapeArrayWrapper* shapeArrayWrapper = data->shapesData.Find( trip->shapeId );

		bool isStandingAtStop = stopTime->arrivalTime <= time && stopTime->departureTime >= time;
		if( isStandingAtStop )
		{
			UStop* stop = data->stopsData[stopTime->stopId];

			//if there are no shapes, set vehicleLocation to StopLocation
			if( shapeArrayWrapper == NULL )
			{
				vehicleLocation = stop->position.ToScenePosition();
				if( c < stopTimesArrayWrapper.stopTimes.Num() - 1 )
				{
					UStopTime* stopTimeNext = stopTimesArrayWrapper.stopTimes[c + 1];
					UStop* stopNext = data->stopsData[stopTimeNext->stopId];
					lookAtVector = stopNext->position.ToScenePosition();
					stopTimeToSaveAsLast = stopTime;
				}
				break;
			}

			//if shape data is available, set vehicle Location to the shapePoint that is closest to this stop.
			//This is to prevent vehicles weirdly snapping to stops if the shape data differs a bit
			{
				double distanceToCompare = MAX_dbl;
				UShape* closestShapeToStop = trip->shapePerStopId[stopTime->stopId];
				int nextShapeIndex = closestShapeToStop->index + 1;
				UShape* nextShape = nextShapeIndex < shapeArrayWrapper->shapes.Num() ? shapeArrayWrapper->shapes[nextShapeIndex] : NULL;
				vehicleLocation = closestShapeToStop->position.ToScenePosition();
				if( nextShape != NULL )
				{
					lookAtVector = nextShape->position.ToScenePosition();
				}
				stopTimeToSaveAsLast = stopTime;
				break;
			}
		}

		//if the vehicle is not at a stop, check if there is another stop on the way
		if( c < stopTimesArrayWrapper.stopTimes.Num() - 1 )
		{
			UStopTime* stopTimeNext;
			if( vehicleWrapper != NULL && vehicleWrapper->lastStopTime != NULL )
			{
				signed int nextIndex = stopTime->index + 1;
				if( nextIndex < stopTimesArrayWrapper.stopTimes.Num() )
				{
					stopTimeNext = stopTimesArrayWrapper.stopTimes[nextIndex];
				}
				else
					continue;
			}
			else
				stopTimeNext = stopTimesArrayWrapper.stopTimes[c + 1];

			bool isBetweenTheseStops = stopTime->departureTime <= time && stopTimeNext->arrivalTime >= time;
			if( isBetweenTheseStops )
			{
				//If Shapes are available, use shape data to determine vehicle location
				if( shapeArrayWrapper != NULL )
				{
					UShape* startShape = trip->shapePerStopId[stopTime->stopId];
					UShape* endShape = trip->shapePerStopId[stopTimeNext->stopId];

					float totalLengthOfRelevantTripPart = 0;

					//Calc length of path between start and endshape
					//OPTIMIZATION: Save this into stop or stopTime
					for( unsigned int f = startShape->index; f < endShape->index; f++ )
					{
						UShape* currentShape = shapeArrayWrapper->shapes[f];
						UShape* nextShape = shapeArrayWrapper->shapes[f + 1];
						float distance = UCoalaGPSCoordinatesBlueprintLibrary::Distance( currentShape->position, nextShape->position );
						totalLengthOfRelevantTripPart += distance;
					}

					FTimespan timespanTotalBetweenStops = FTimespan( stopTimeNext->arrivalTime.GetTicks() - stopTime->departureTime.GetTicks() );
					FTimespan timespanBetweenVehicleAndStart = FTimespan( time.GetTicks() - stopTime->departureTime.GetTicks() );
					float ticks1 = timespanTotalBetweenStops.GetTotalMilliseconds();
					float ticks2 = timespanBetweenVehicleAndStart.GetTotalMilliseconds();
					float percentageDriven = 100 / (ticks1 / ticks2) / 100;
					double vehicleDistanceFromStartStop = totalLengthOfRelevantTripPart * percentageDriven;

					double currentDistanceBuffer = 0;

					//determine the shape points vehicle is in between and then lerp between them
					for( unsigned int g = startShape->index; g < endShape->index; g++ )
					{
						UShape* currentShape = shapeArrayWrapper->shapes[g];
						UShape* nextShape = shapeArrayWrapper->shapes[g + 1];
						double distance = UCoalaGPSCoordinatesBlueprintLibrary::Distance( currentShape->position, nextShape->position );
						if( currentDistanceBuffer + distance >= vehicleDistanceFromStartStop )
						{
							double remainingDistance = vehicleDistanceFromStartStop - currentDistanceBuffer;
							float percentage = 100 / (distance / remainingDistance) / 100;
							FVector currentShapeScenePos = currentShape->position.ToScenePosition();
							FVector nextShapeScenePos = nextShape->position.ToScenePosition();

							vehicleLocation = FMath::Lerp( currentShapeScenePos, nextShapeScenePos, percentage );
							lookAtVector = nextShapeScenePos;

							hasDeterminedLocation = true;
							stopTimeToSaveAsLast = stopTime;
							break;
						}

						currentDistanceBuffer += distance;
					}
				}

				//If no shape data avilable, set vehicle location to the closest stop
				else
				{
					UStop* stop = data->stopsData[stopTime->stopId];
					UStop* stopNext = data->stopsData[stopTimeNext->stopId];
					if( time - stopTime->departureTime < stopTimeNext->arrivalTime - time )
					{
						vehicleLocation = stop->position.ToScenePosition();
						lookAtVector = stopNext->position.ToScenePosition();
					}
					else
					{
						vehicleLocation = stopNext->position.ToScenePosition();
						if( c + 2 < stopTimesArrayWrapper.stopTimes.Num() )
						{
							UStop* stopNextNext = data->stopsData[stopTimesArrayWrapper.stopTimes[c + 2]->stopId];
							lookAtVector = stopNextNext->position.ToScenePosition();

							hasDeterminedLocation = true;
							stopTimeToSaveAsLast = stopTime;
						}
					}
				}
			}
		}

		//If there has no viable location been found, this means that lastStopTime has become invalid and needs to be recalculated
		else
		{
			if( vehicleWrapper != NULL )
				vehicleWrapper->lastStopTime = NULL;
			RenderVehicleForTrip( data, worldActor, objectsWrapper, blueprintVehicle, tripId, time, newVehicle );
			return ret;
		}
	}

	if( vehicleLocation == FVector::ZeroVector )
		return ret;

	vehicleLocation = CoalaConverter::ToTerrainPositionWithoutArea( vehicleLocation, worldActor );
	vehicleLocation.Z += 5;

	lookAtVector = CoalaConverter::ToTerrainPositionWithoutArea( lookAtVector, worldActor );
	lookAtVector.Z += 5;

	//Spawn and init new vehicleActor
	if( vehicleActor == NULL )
	{
		AActor* newVehicleActor = world->SpawnActor<AActor>( blueprintVehicle, vehicleLocation, FRotator::ZeroRotator, spawnInfo );

		if( newVehicleActor == NULL )
			return ret;

#if WITH_EDITOR
		FString vehicleName = newVehicleActor->GetName().Append( "_vehicle_" ).Append( tripId );
		newVehicleActor->Rename( *vehicleName );
		newVehicleActor->SetActorLabel( *vehicleName );
#endif

		if( ret->transportationParent != NULL )
			newVehicleActor->AttachToActor( ret->transportationParent, FAttachmentTransformRules::KeepRelativeTransform );

		vehicleWrapper = NewObject<UVehicle>();

		if( lookAtVector != FVector::ZeroVector )
		{
			FRotator newVehicleRotation = UKismetMathLibrary::FindLookAtRotation( lookAtVector, vehicleLocation );
			newVehicleActor->SetActorRotation( newVehicleRotation );
			vehicleWrapper->lookRotator = newVehicleRotation;
			vehicleWrapper->lookAtVector = lookAtVector;
		}

		vehicleWrapper->actor = newVehicleActor;
		vehicleWrapper->lastStopTime = stopTimeToSaveAsLast;

		ret->vehicleActorsPerTrip.Add( tripId, vehicleWrapper );

		newVehicle = newVehicleActor;

		return ret;
	}

	//set existing vehicle Actor to new location
	vehicleActor->SetActorLocation( vehicleLocation );

	FRotator oldVehicleRotation = vehicleActor->GetActorRotation();
	FRotator newVehicleRotation = FMath::RInterpTo( oldVehicleRotation, vehicleWrapper->lookRotator, 0.01, 4 );
	if( oldVehicleRotation != newVehicleRotation )
		vehicleActor->SetActorRotation( newVehicleRotation );

	if( lookAtVector != vehicleWrapper->lookAtVector && lookAtVector != FVector::ZeroVector )
	{
		vehicleWrapper->lookRotator = UKismetMathLibrary::FindLookAtRotation( lookAtVector, vehicleLocation );

		vehicleWrapper->lookAtVector = lookAtVector;
	}

	vehicleWrapper->lastStopTime = stopTimeToSaveAsLast;

	return ret;
}

UTransportationObjects*
UCoalaTransportationVehicle::CleanUpVehicles(
	UTransportationData* data,
	UTransportationObjects* objectsWrapper,
	TArray<FString> tripIdsToRender,
	bool& somethingWasCleanedUp )
{
	//Clean Up Vehicles that should not be rendered anymore
	somethingWasCleanedUp = false;
	TArray<FString> keysToRemove;
	for( const TPair<FString, UVehicle*>& tripVehiclePair : objectsWrapper->vehicleActorsPerTrip )
	{
		if( tripIdsToRender.Contains( tripVehiclePair.Key ) )
			continue;

		tripVehiclePair.Value->actor->Destroy();
		keysToRemove.Add( tripVehiclePair.Key );
		somethingWasCleanedUp = true;
	}

	for( int c = 0; c < keysToRemove.Num(); c++ )
	{
		objectsWrapper->vehicleActorsPerTrip.Remove( keysToRemove[c] );
	}

	return objectsWrapper;
}
