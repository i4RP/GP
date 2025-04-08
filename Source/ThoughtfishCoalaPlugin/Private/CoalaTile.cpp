// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaTile.h"

#include "GeoConverter.h"

FCoalaTile::FCoalaTile()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

FCoalaTile
UCoalaTileBlueprintLibrary::MakeCoalaTile( int indexX, int indexY, uint8 zoom )
{
	FCoalaTile ret;

	ret.x = indexX;
	ret.y = indexY;
	ret.z = zoom;

	return ret;
}

void
UCoalaTileBlueprintLibrary::BreakCoalaTile( FCoalaTile inCoalaTile, int& indexX, int& indexY, uint8& zoom )
{
	indexX = inCoalaTile.x;
	indexY = inCoalaTile.y;
	zoom = inCoalaTile.z;
}

FCoalaTile
UCoalaTileBlueprintLibrary::CreateTileFromGpsCoordinates_withGps( uint8 zoom, FCoalaGPSCoordinates gpsCoordinates )
{
	return CreateTileFromGpsCoordinates( zoom, gpsCoordinates.lon, gpsCoordinates.lat );
}

FCoalaTile
UCoalaTileBlueprintLibrary::CreateTileFromGpsCoordinates( uint8 zoom, double lon, double lat )
{
	int current_area_tile_x = UGeoConverter::long2tilex( lon, zoom );
	int current_area_tile_y = UGeoConverter::lat2tiley( lat, zoom );

	FCoalaTile tile;
	tile.x = current_area_tile_x;
	tile.y = current_area_tile_y;
	tile.z = zoom;
	return tile;
}

