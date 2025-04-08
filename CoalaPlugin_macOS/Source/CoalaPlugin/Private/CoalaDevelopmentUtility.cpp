// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaDevelopmentUtility.h"

#include "CoalaArea.h"
#include "CoalaAreaActor.h"
#include "CoalaMeshActor.h"
#include "CoalaMeshGenerator.h"
#include "CoalaProperties.h"
#include "CoalaBounds.h"
#include "CoalaTile.h"
#include "GeoConverter.h"

#include "Engine/World.h"
#include "GameFramework/Actor.h"

int UCoalaDevelopmentUtility::currentGUID = 0;

int
UCoalaDevelopmentUtility::GetGUID()
{
	return ++currentGUID;
}

void
UCoalaDevelopmentUtility::SetActorDisplayNameInWorldOutliner( AActor* actor, FString displayName )
{
#if WITH_EDITOR
	actor->Rename(*displayName);
	actor->SetActorLabel(*displayName);
#endif
}

FString
UCoalaDevelopmentUtility::CoalaBuildingShapeToString( FCoalaBuilding building )
{
	FString ret;

	ret += "area:\r\n";
	for( int i = 0; i < building.area.Num(); ++i )
	{
		FCoalaGPSCoordinates current = building.area[i];

		ret += FString::SanitizeFloat( current.lon ) + ", " + FString::SanitizeFloat( current.lat ) + "\r\n";
	}

	ret += "holes: " + FString::FromInt( building.holes.Num() ) + "\r\n";
	ret += "TODO...\r\n";

	return ret;
}

bool
UCoalaDevelopmentUtility::CompareGPSCoordinates( FCoalaGPSCoordinates coords1, FCoalaGPSCoordinates coords2 )
{
	bool ret = false;
	float tolerance = 0.000001;

	bool lonFits = coords1.lon < (coords2.lon + tolerance) && coords1.lon > (coords2.lon - tolerance);
	bool latFits = coords1.lat < (coords2.lat + tolerance) && coords1.lat > (coords2.lat - tolerance);
	ret = lonFits && latFits;

	return ret;
}
