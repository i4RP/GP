// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#define _USE_MATH_DEFINES
#include <math.h>
#define DEG2RAD(a)   ((a) / (180 / M_PI))
#define RAD2DEG(a)   ((a) * (180 / M_PI))

#include "CoalaBlueprintUtility.h"
#include "CoalaDevelopmentConfigurations.h"
#include "CoalaController.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GeoConverter.generated.h"

UCLASS()
class UGeoConverter
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintPure, Category = "Coala|Utility" )
		static int
		long2tilex( double lon, int z )
		{
			return (floor( (lon + 180.0) / 360.0 * pow( 2.0, z ) ));
		}

		UFUNCTION( BlueprintPure, Category = "Coala|Utility" )
		static int lat2tiley( double lat, int32 z )
		{
			auto ret = (floor( (1.0 - log( tan( lat * PI / 180.0 ) + 1.0 / cos( lat * PI / 180.0 ) ) / PI) / 2.0 * pow( 2.0, z ) ));
			return ret;
		}

		UFUNCTION( BlueprintPure, Category = "Coala|Utility" )
		static double tilex2long( int x, int z )
		{
			return (x / pow( 2.0, z ) * 360.0 - 180);
		}

		UFUNCTION( BlueprintPure, Category = "Coala|Utility" )
		static double tiley2lat( int y, int z )
		{
			double n = PI - 2.0 * PI * y / pow( 2.0, z );
			return (180.0 / PI * atan( 0.5 * (exp( n ) - exp( -n )) ));
		}
};

// https://wiki.openstreetmap.org/wiki/Mercator
struct MercatorConverter
{
	/* The following functions take their parameter and return their result in degrees */
	static double
	y2lat_d( double y )
	{
		return RAD2DEG( atan(exp( DEG2RAD(y) )) * 2 - M_PI/2 );
	}

	static double
	x2lon_d( double x )
	{
		return x;
	}

	static double
	lat2y_d( double lat )
	{
		return RAD2DEG( log(tan( DEG2RAD(lat) / 2 + M_PI/4 )) );
	}

	static double
	lon2x_d( double lon )
	{
		return lon;
	}

	/* The following functions take their parameter in something close to meters, along the equator, and return their result in degrees */
	static double
	y2lat_m( double y )
	{
		return RAD2DEG( 2 * atan(exp( y/(COALA_MAP_SIZE*ACoalaController::GetCoalaScale()) )) - M_PI/2 );
	}

	static double
	x2lon_m( double x )
	{
		return RAD2DEG( x/(COALA_MAP_SIZE*ACoalaController::GetCoalaScale()) );
	}

	/* The following functions take their parameter in degrees, and return their result in something close to meters, along the equator */
	static double
	lat2y_m( double lat )
	{
		return log( tan( DEG2RAD( lat ) / 2 + M_PI / 4 ) ) * (COALA_MAP_SIZE*ACoalaController::GetCoalaScale());
	}

	static double
	lon2x_m( double lon )
	{
		return DEG2RAD( lon ) * (COALA_MAP_SIZE*ACoalaController::GetCoalaScale());
	}
};

UCLASS()
class UCoalaGpsConverterFunctionLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintPure, Category = "Coala|Utility" )
		static void WorldPositionToGpsPosition( double worldPosX, double worldPosY, double& lon, double& lat )
		{
			worldPosY *= (-1);

			FCoalaGPSCoordinates global_gps_offset = ACoalaController::GetGpsOffset();

			worldPosX += MercatorConverter::lon2x_m( global_gps_offset.lon );
			worldPosY += MercatorConverter::lat2y_m( global_gps_offset.lat );

			lon = MercatorConverter::x2lon_m( worldPosX );
			lat = MercatorConverter::y2lat_m( worldPosY );
		}

		UFUNCTION( BlueprintPure, Category = "Coala|Utility" )
		static FVector ToScenePosition( double lon, double lat )
		{
			// adjust values if out of world
			if( lat < -86 )
				lat = -86;
			if( lat > 86 )
				lat = 86;

			if( lon < -180 )
				lon = -180;
			if( lon > 180 )
				lon = 180;

			FVector ret = FVector::ZeroVector;
			{
				FCoalaGPSCoordinates global_gps_offset = ACoalaController::GetGpsOffset();

				ret.X = MercatorConverter::lon2x_m( lon ) - MercatorConverter::lon2x_m( global_gps_offset.lon );
				ret.Y = MercatorConverter::lat2y_m( lat ) - MercatorConverter::lat2y_m( global_gps_offset.lat );

				// flip y achses because of unreal
				ret.Y *= -1;
			}

			return ret;
		}
};
