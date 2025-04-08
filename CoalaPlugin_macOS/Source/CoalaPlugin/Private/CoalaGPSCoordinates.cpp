// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaGPSCoordinates.h"

#include "GeoConverter.h"

#include "CoreMinimal.h"
#include "CoalaConverter.h"
#include "CoalaController.h"

FCoalaGPSCoordinates::FCoalaGPSCoordinates()
{
	this->lon = 0;
	this->lat = 0;
}

FCoalaGPSCoordinates::FCoalaGPSCoordinates( double lon, double lat )
{
	this->lon = lon;
	this->lat = lat;
}

FVector
FCoalaGPSCoordinates::ToScenePosition()
{
	// 2d
	FVector world_position = UCoalaGpsConverterFunctionLibrary::ToScenePosition(
		this->lon,
		this->lat
	);

	// 3d
	if( ACoalaController::Instance )
	{
		world_position = CoalaConverter::ToTerrainPositionWithoutArea(
			world_position,
			ACoalaController::Instance
		);
	}

	return world_position;
}

bool
FCoalaGPSCoordinates::containsNaN()
{
	return (isnan(this->lon) || isnan(this->lat));
}
