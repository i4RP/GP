// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaStreet.h"
#include "CenterOfMass.h"
#include "CoalaPluginBlueprintLibrary.h"

FCoalaStreet::FCoalaStreet()
{

}

FCoalaStreet::FCoalaStreet( TArray<FCoalaGPSCoordinates> points )
{
	this->points = points;

	// performance opt: calculate getter once
	// ( not per call )
	this->_bounds = UCoalaBoundsBlueprintLibrary::CalculateBounds( this->points );
	this->_center = CenterOfMass::Get( this->points );
}

FCoalaGPSCoordinates
FCoalaStreet::center( bool recalculate )
{
	if( recalculate )
		this->_center = CenterOfMass::Get( this->points );

	return this->_center;
}

FCoalaBounds
FCoalaStreet::bounds( bool recalculate )
{
	if( recalculate )
		this->_bounds = UCoalaBoundsBlueprintLibrary::CalculateBounds( this->points );

	return _bounds;
}

FCoalaStreet 
UCoalaStreetBlueprintLibrary::MakeCoalaStreet( TArray<FCoalaGPSCoordinates> street_points )
{
	FCoalaStreet ret( street_points );

	return ret;
}

void
UCoalaStreetBlueprintLibrary::BreakCoalaStreet( FCoalaStreet inStreet, TArray<FCoalaGPSCoordinates>& street_points )
{
	street_points = inStreet.points;
}
