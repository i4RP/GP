// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaBounds.h"

FCoalaBounds::FCoalaBounds()
{
	this->left = 0;
	this->bottom = 0;
	this->right = 0;
	this->top = 0;
}

FCoalaBounds::FCoalaBounds( double left, double bottom, double right, double top )
{
	this->left = left;
	this->bottom = bottom;
	this->right = right;
	this->top = top;
}

bool
FCoalaBounds::contains( double lon, double lat )
{
	return( lon > this->left 
		&& lon < this->right 
		&& lat > this->bottom 
		&& lat < this->top
	);
}

double
FCoalaBounds::width()
{
	return this->right - this->left;
}

double
FCoalaBounds::height()
{
	return this->top - this->bottom;
}

FCoalaGPSCoordinates
FCoalaBounds::center()
{
	FCoalaGPSCoordinates ret;

	ret.lon = this->left + (this->width()) * 0.5;
	ret.lat = this->bottom + (this->height()) * 0.5;

	return ret;
}

bool 
FCoalaBounds::intersects( const FCoalaBounds& other )
{
	return !(other.left > right || other.right < this->left || other.top < this->bottom || other.bottom > this->top);
}
