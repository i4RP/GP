// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaHole.h"
#include "CoalaBounds.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaBuilding.generated.h"

USTRUCT( BlueprintType, meta = (HasNativeMake = "", HasNativeBreak = "") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaBuilding
{
	GENERATED_BODY()

	public:
		FCoalaBuilding();
		FCoalaBuilding( uint8 height, TArray<FCoalaGPSCoordinates> area, TArray<FCoalaHole> holes );

		uint8 height;

		TArray<FCoalaGPSCoordinates> area;
		TArray<FCoalaHole> holes;

		FCoalaGPSCoordinates center( bool recalculate = false );
		FCoalaBounds bounds( bool recalculate = false );

	private:
		FCoalaBounds _bounds;
		FCoalaGPSCoordinates _center;
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaBuildingBlueprintLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:

	/** Makes a coala water {area, holes} */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Building", meta = (DisplayName = "Make Building", NativeMakeFunc) )
	static FCoalaBuilding MakeCoalaBuilding( uint8 height, TArray<FCoalaGPSCoordinates> area, TArray<FCoalaHole> holes );

	/** Breaks a coala water apart into area, holes. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Building", meta = (DisplayName = "Break Building", NativeBreakFunc) )
	static void BreakCoalaBuilding( FCoalaBuilding inBuilding, uint8& height, TArray<FCoalaGPSCoordinates>& area, TArray<FCoalaHole>& holes );

	/** Get the center from the water shape as gps position. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Building", meta = (DisplayName = "Get center from building") )
	static FCoalaGPSCoordinates getCenter( FCoalaBuilding inBuilding, bool recalculate );

	/** Get bounds from the water shape. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Building", meta = (DisplayName = "Get bounds from building") )
	static FCoalaBounds getBounds( FCoalaBuilding inBuilding, bool recalculate );
};
