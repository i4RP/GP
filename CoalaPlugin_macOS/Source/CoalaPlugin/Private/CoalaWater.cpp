// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaWater.h"
#include "CoalaPluginBlueprintLibrary.h"

#include "CenterOfMass.h"

FCoalaWater::FCoalaWater()
{

}

FCoalaWater::FCoalaWater( TArray<FCoalaGPSCoordinates> area, TArray<FCoalaHole> holes )
{
	this->area = area;
	this->holes = holes;

	// performance opt: calculate getter once
	// ( not per call )
	this->_bounds = UCoalaBoundsBlueprintLibrary::CalculateBounds( this->area );
	this->_center = CenterOfMass::Get( this->area );
}

FCoalaGPSCoordinates
FCoalaWater::center( bool recalculate )
{
	if( recalculate )
		this->_center = CenterOfMass::Get( this->area );

	return this->_center;
}

FCoalaBounds
FCoalaWater::bounds( bool recalculate )
{
	if( recalculate )
		this->_bounds = UCoalaBoundsBlueprintLibrary::CalculateBounds( this->area );

	return _bounds;
}

FCoalaWater 
UCoalaWaterBlueprintLibrary::MakeCoalaWater( TArray<FCoalaGPSCoordinates> area, TArray<FCoalaHole> holes )
{
	FCoalaWater ret(
		area,
		holes
	);

	return ret;
}

void
UCoalaWaterBlueprintLibrary::BreakCoalaWater( FCoalaWater inWater, TArray<FCoalaGPSCoordinates>& area, TArray<FCoalaHole>& holes )
{
	area = inWater.area;
	holes = inWater.holes;
}

FCoalaGPSCoordinates 
UCoalaWaterBlueprintLibrary::getCenter( FCoalaWater inWater, bool recalculate )
{
	FCoalaGPSCoordinates ret = inWater.center(recalculate);
	return ret;
}

FCoalaBounds
UCoalaWaterBlueprintLibrary::getBounds( FCoalaWater inWater, bool recalculate )
{
	FCoalaBounds ret = inWater.bounds( recalculate );
	return ret;
}
