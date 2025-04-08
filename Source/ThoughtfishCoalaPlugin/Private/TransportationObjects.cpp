// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "TransportationObjects.h"

void
UCoalaTransportationObjectsShadowingFix::BreakTransportationObjects(
	UTransportationObjects* InTransportationObjects,
	AActor*& transportationParent,
	TMap<FString, AActor*>& routeActors,
	TMap<FString, AActor*>& stopActors,
	TMap<FString, FStringArrayWrapper>& routesPerStopId,
	TMap<FString, UVehicle*>& vehicleActorsPerTrip)
{
	transportationParent = InTransportationObjects->transportationParent;
	routeActors = InTransportationObjects->routeActors;
	stopActors = InTransportationObjects->stopActors;
	routesPerStopId = InTransportationObjects->routesPerStopId;
	vehicleActorsPerTrip = InTransportationObjects->vehicleActorsPerTrip;
}