// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaElevationData.h"
#include "CoalaCell.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaElevation.generated.h"

USTRUCT( BlueprintType, meta = (HasNativeMake = "", HasNativeBreak = "") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaElevation
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Elevation" )
	int min;
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Elevation" )
	int max;
	TArray<FElevationData> data;

	FCoalaElevation();

	FVector GetNormal( int x, int y, float cellScale, float elevationScale );
	float GetHeight( int x, int y ) const;
	void SetHeight( int x, int y, float height );
};


UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaElevationBlueprintLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:

	/** Makes a coala gps coordinates {lon, lat} */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Elevation", meta = (DisplayName = "Make elevation dataset", NativeMakeFunc) )
	static FCoalaElevation MakeCoalaElevation();

	/** Set raw elevation data on X and Y.*/
	UFUNCTION( BlueprintCallable, Category = "Coala|Variables|Elevation", meta = (DisplayName = "Set elevation value", NativeBreakFunc) )
	static void SetCoalaElevation( FCoalaElevation inElevation, int x, int y, float elevationValue );

	/** Breaks a coala gps coordinates apart into lon, lat. */
	UFUNCTION( BlueprintCallable, Category = "Coala|Variables|Elevation", meta = (DisplayName = "Get elevation value") )
	static void GetCoalaElevation( FCoalaElevation inElevation, int x, int y, float& elevationValue );

	/** Get elevation data for cell corner's */
	UFUNCTION( BlueprintCallable, Category = "Coala|Elevation", meta = (DisplayName = "Get elevation value for cell") )
	static void GetCoalaElevationForCell( const FCoalaElevation& inElevation, const FCoalaCell& cell, float& topLeft, float& topRight, float& bottomLeft, float& bottomRight );

	/** Get elevation data for cell corner's */
	UFUNCTION( BlueprintCallable, Category = "Coala|Elevation", meta = (DisplayName = "Get elevation value for cell index") )
	static void GetCoalaElevationForCellIndex( const FCoalaElevation& inElevation, const int& cellX, const int& cellY, float& topLeft, float& topRight, float& bottomLeft, float& bottomRight );

};
