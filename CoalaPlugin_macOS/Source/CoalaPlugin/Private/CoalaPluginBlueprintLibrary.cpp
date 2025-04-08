// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaPluginBlueprintLibrary.h"

#include "CoalaAreaController.h"
#include "GeoConverter.h"

FCoalaBounds
UCoalaBoundsBlueprintLibrary::CalculateBounds( TArray<FCoalaGPSCoordinates>& shape )
{
	FCoalaBounds bounds;
	bounds.left = shape[0].lon;
	bounds.right = shape[0].lon;
	bounds.top = shape[0].lat;
	bounds.bottom = shape[0].lat;

	for( int i = 0; i < shape.Num(); ++i )
	{
		FCoalaGPSCoordinates currentPoint = shape[i];

		if( currentPoint.lon < bounds.left ) bounds.left = currentPoint.lon;
		if( currentPoint.lon > bounds.right ) bounds.right = currentPoint.lon;

		if( currentPoint.lat < bounds.bottom ) bounds.bottom = currentPoint.lat;
		if( currentPoint.lat > bounds.top ) bounds.top = currentPoint.lat;
	}

	return bounds;
}

FCoalaBounds
UCoalaBoundsBlueprintLibrary::MakeCoalaBounds( float left, float bottom, float right, float top )
{
	FCoalaBounds ret(
		left,
		bottom,
		right,
		top
	);

	return ret;
}

void
UCoalaBoundsBlueprintLibrary::BreakCoalaBounds( FCoalaBounds inBounds, float& left, float& bottom, float& right, float& top )
{
	left = inBounds.left;
	bottom = inBounds.bottom;
	right = inBounds.right;
	top = inBounds.top;
}

void
UCoalaBoundsBlueprintLibrary::ContainsLonLat( FCoalaBounds inBounds, float lon, float lat, EOutputPins_GpsInsideBounds& execResult )
{
	if( !inBounds.contains( lon, lat ) )
	{
		execResult = EOutputPins_GpsInsideBounds::No;
		return;
	}

	execResult = EOutputPins_GpsInsideBounds::Yes;
}

void
UCoalaBoundsBlueprintLibrary::ContainsGpsPosition( FCoalaBounds inBounds, FCoalaGPSCoordinates gpsPos, EOutputPins_GpsInsideBounds& execResult )
{
	if( !inBounds.contains( gpsPos.lon, gpsPos.lat ) )
	{
		execResult = EOutputPins_GpsInsideBounds::No;
		return;
	}

	execResult = EOutputPins_GpsInsideBounds::Yes;
}

void 
UCoalaBoundsBlueprintLibrary::GetCenterOfBounds( FCoalaBounds inBounds, FCoalaGPSCoordinates& center )
{
	center = inBounds.center();
}

void 
UCoalaBoundsBlueprintLibrary::GetWithOfBounds( FCoalaBounds inBounds, float& width )
{
	width = inBounds.width();
}

void
UCoalaBoundsBlueprintLibrary::GetHeightOfBounds( FCoalaBounds inBounds, float& height )
{
	height = inBounds.height();
}

FCoalaGPSCoordinates
UCoalaGPSCoordinatesBlueprintLibrary::MakeCoalaGPSCoordinates( float lon, float lat )
{
	return FCoalaGPSCoordinates( lon, lat );
}

void
UCoalaGPSCoordinatesBlueprintLibrary::BreakCoalaGPSCoordinates( FCoalaGPSCoordinates inGpsCoordinates, float& lon, float& lat )
{
	lon = inGpsCoordinates.lon;
	lat = inGpsCoordinates.lat;
}

FCoalaGPSCoordinates
UCoalaGPSCoordinatesBlueprintLibrary::WorldPositionToGpsCoordinates( FVector scenePosition )
{
	FCoalaGPSCoordinates ret;

	UCoalaGpsConverterFunctionLibrary::WorldPositionToGpsPosition(
		scenePosition.X,
		scenePosition.Y,
		ret.lon,
		ret.lat
	);

	//FCoalaGPSCoordinates global_gps_offset = ACoalaController::GetGpsOffset();
	//double lon = MercatorConverter::x2lon_m( scenePosition.X ) + global_gps_offset.lon;
	//double lat = MercatorConverter::y2lat_m( scenePosition.Y ) + global_gps_offset.lat;

	return ret;
}

FVector
UCoalaGPSCoordinatesBlueprintLibrary::GpsPositionToWorldPosition( FCoalaGPSCoordinates coordinates )
{
	return coordinates.ToScenePosition();
}

float
UCoalaGPSCoordinatesBlueprintLibrary::Distance( const FCoalaGPSCoordinates a, const FCoalaGPSCoordinates b )
{
	return UCoalaBlueprintUtility::DistanceOfGpsPositions( a.lat, a.lon, b.lat, b.lon );
}
