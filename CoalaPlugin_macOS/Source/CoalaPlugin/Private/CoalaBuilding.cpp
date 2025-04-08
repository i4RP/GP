// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaBuilding.h"
#include "CoalaBounds.h"
#include "CoalaPLuginBlueprintLibrary.h"

#include "CenterOfMass.h"

FCoalaBuilding::FCoalaBuilding()
{
	height = 0;
}

FCoalaBuilding::FCoalaBuilding( uint8 height, TArray<FCoalaGPSCoordinates> area, TArray<FCoalaHole> holes )
{
	this->height = height;
	this->area = area;
	this->holes = holes;

	// performance opt: calculate getter once
	// ( not per call )
	this->_bounds = UCoalaBoundsBlueprintLibrary::CalculateBounds( this->area );
	this->_center = CenterOfMass::Get( this->area );
}

FCoalaGPSCoordinates
FCoalaBuilding::center( bool recalculate )
{
	if( recalculate )
		this->_center = CenterOfMass::Get( this->area );

	return this->_center;
}

FCoalaBounds
FCoalaBuilding::bounds( bool recalculate )
{
	if( recalculate )
		this->_bounds = UCoalaBoundsBlueprintLibrary::CalculateBounds( this->area );

	return this->_bounds;
}

FCoalaBuilding
UCoalaBuildingBlueprintLibrary::MakeCoalaBuilding( uint8 height, TArray<FCoalaGPSCoordinates> area, TArray<FCoalaHole> holes )
{
	FCoalaBuilding ret(
		height,
		area,
		holes
	);

	return ret;
}

void
UCoalaBuildingBlueprintLibrary::BreakCoalaBuilding( FCoalaBuilding inBuilding, uint8& height, TArray<FCoalaGPSCoordinates>& area, TArray<FCoalaHole>& holes )
{
	height = inBuilding.height;
	area = inBuilding.area;
	holes = inBuilding.holes;
}

FCoalaGPSCoordinates
UCoalaBuildingBlueprintLibrary::getCenter( FCoalaBuilding inBuilding, bool recalculate )
{
	FCoalaGPSCoordinates ret = inBuilding.center( recalculate );
	return ret;
}

FCoalaBounds
UCoalaBuildingBlueprintLibrary::getBounds( FCoalaBuilding inBuilding, bool recalculate )
{
	FCoalaBounds ret = inBuilding.bounds( recalculate );
	return ret;
}
