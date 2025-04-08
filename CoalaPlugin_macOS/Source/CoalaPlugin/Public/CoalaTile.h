// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaTile.generated.h"

USTRUCT( BlueprintType, meta = (HasNativeMake = "", HasNativeBreak = "") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaTile
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, Category = "Coala|Tile", BlueprintReadWrite )
	uint8 z;
	UPROPERTY( EditAnywhere, Category = "Coala|Tile", BlueprintReadWrite )
	int x;
	UPROPERTY( EditAnywhere, Category = "Coala|Tile", BlueprintReadWrite )
	int y; 

	FCoalaTile();
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaTileBlueprintLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:
	
	/** Makes a coala gps coordinates {lon, lat} */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Tile", meta = (DisplayName = "Make Tile", NativeMakeFunc) )
	static FCoalaTile MakeCoalaTile( int indexX, int indexY, uint8 zoom );

	/** Breaks a coala tile  apart into {index x,index y, zoom}. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Tile", meta = (DisplayName = "Break Tile", NativeBreakFunc) )
	static void BreakCoalaTile( FCoalaTile inCoalaTile, int& indexX, int& indexY, uint8& zoom );

	UFUNCTION( BlueprintPure, Category = "Coala|Factory Functions", meta = (DisplayName = "Create Tile From Gps Coordinates") )
	static FCoalaTile CreateTileFromGpsCoordinates_withGps( uint8 zoom, FCoalaGPSCoordinates gpsCoordinates );

	UFUNCTION( BlueprintPure, Category = "Coala|Factory Functions", meta = (DisplayName = "Create Tile From Gps Coordinates") )
	static FCoalaTile CreateTileFromGpsCoordinates( uint8 zoom, double lon, double lat );
};

// that we can have this struct as a key in std::map (ignoring zoom)
namespace std
{
	template<>
	struct less<FCoalaTile>
	{
		bool operator() ( const FCoalaTile& lhs, const FCoalaTile& rhs ) const
		{
			return lhs.y < rhs.y || (lhs.y == rhs.y && lhs.x < rhs.x);
		}
	};
}

FORCEINLINE bool operator == ( const FCoalaTile& a, const FCoalaTile& b )
{
	return
		a.z == b.z
		&& a.x == b.x
		&& a.y == b.y;
}

FORCEINLINE bool operator != ( const FCoalaTile& a, const FCoalaTile& b )
{
	return !(a == b);
}
