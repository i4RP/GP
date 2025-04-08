// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "Trip.h"

void
UCoalaTripShadowingFix::BreakTrip(
	UTrip* InTrip,
	FString& serviceId,
	FString& routeId,
	bool& isInboundDirection,
	FString& shapeId,
	TArray<FString>& stopIds,
	bool& bikesAllowed,
	bool& wheelchairAccessible,
	FString& headsign)
{

	serviceId = InTrip->serviceId;
	routeId = InTrip->routeId;
	isInboundDirection = InTrip->isInboundDirection;
	shapeId = InTrip->shapeId;
	stopIds = InTrip->stopIds;
	bikesAllowed = InTrip->bikesAllowed;
	wheelchairAccessible = InTrip->wheelchairAccessible;
	headsign = InTrip->headsign;
}
