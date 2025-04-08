// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaGPSCoordinates.h"
#include "CoalaBounds.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaPluginBlueprintLibrary.generated.h"

UENUM( BlueprintType )
enum class EOutputPins_GpsInsideBounds 
: uint8
{
	Yes,
	No
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaBoundsBlueprintLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:

	/** Makes a coala bounds {left, buttom, right, top} */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Bounds", meta = (DisplayName = "Make Bounds", NativeMakeFunc) )
	static FCoalaBounds MakeCoalaBounds( float left, float bottom, float right, float top );

	/** Breaks a coala bounds apart into left, bottom, right, top. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Bounds", meta = (DisplayName = "Break Bounds", NativeBreakFunc) )
	static void BreakCoalaBounds( FCoalaBounds inBounds, float& left, float& bottom, float& right, float& top );

	/** Calculate bounds from gps shape. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Bounds", meta = (DisplayName = "Calculate Bounds") )
	static FCoalaBounds CalculateBounds( TArray<FCoalaGPSCoordinates>& shape );

	/** Check if lon lat inside bounds */
	UFUNCTION( BlueprintCallable, Category = "Coala|Variables|Bounds", meta = (DisplayName = "Bounds contain lon,lat", ExpandEnumAsExecs = "execResult") )
	static void ContainsLonLat( FCoalaBounds inBounds, float lon, float lat, EOutputPins_GpsInsideBounds& execResult );

	/** Check if GPS coordinates inside bounds */
	UFUNCTION( BlueprintCallable, Category = "Coala|Variables|Bounds", meta = (DisplayName = "Bounds contain gps position", ExpandEnumAsExecs = "execResult") )
	static void ContainsGpsPosition( FCoalaBounds inBounds, FCoalaGPSCoordinates gpsPos, EOutputPins_GpsInsideBounds& execResult );

	/** Get center of bounds */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Bounds", meta = (DisplayName = "Get center of bounds") )
	static void GetCenterOfBounds( FCoalaBounds inBounds, FCoalaGPSCoordinates& center );

	/** Get width of bounds */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Bounds", meta = (DisplayName = "Get width of bounds") )
	static void GetWithOfBounds( FCoalaBounds inBounds, float& width );

	/** Get height of bounds */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Bounds", meta = (DisplayName = "Get height of bounds") )
	static void GetHeightOfBounds( FCoalaBounds inBounds, float& height );
};


UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaGPSCoordinatesBlueprintLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:

	/** Makes a coala gps coordinates {lon, lat} */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|GPSCoordinates", meta = (DisplayName = "Make GPSCoordinates", NativeMakeFunc) )
	static FCoalaGPSCoordinates MakeCoalaGPSCoordinates( float lon, float lat );

	/** Breaks a coala gps coordinates apart into lon, lat. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|GPSCoordinates", meta = (DisplayName = "Break GPSCoordinates", NativeBreakFunc) )
	static void BreakCoalaGPSCoordinates( FCoalaGPSCoordinates inGpsCoordinates, float& lon, float& lat );

	/** Convert a world position vector {X,Y,Z} to gps coordinates {lon, lat}. */
	UFUNCTION( BlueprintPure, Category = "Coala|Convert" )
	static FCoalaGPSCoordinates WorldPositionToGpsCoordinates( FVector scenePosition );

	/** Convert gps coordinates {lon, lat} to world position vector {X,Y,Z}. */
	UFUNCTION( BlueprintPure, Category = "Coala|Convert" )
	static FVector GpsPositionToWorldPosition( FCoalaGPSCoordinates coordinates );

	/** Distance {float} between two gps coordinates {lon, lat}. */
	UFUNCTION( BlueprintPure, Category = "Coala|Convert" )
	static float Distance( const FCoalaGPSCoordinates a, const FCoalaGPSCoordinates b );
};
