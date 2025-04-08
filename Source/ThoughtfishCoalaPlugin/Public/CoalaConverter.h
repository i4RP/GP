// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaGPSCoordinates.h"
#include "CoreMinimal.h"

class THOUGHTFISHCOALAPLUGIN_API CoalaConverter
{
	public:

		// Gets exact terrain position based on raycasting
		static FVector ToTerrainPositionRaycast( double lon, double lat, class UCoalaArea* area );
		static FVector ToTerrainPositionWithoutArea( FVector scenePosition, class AActor* worldObject );

		// Gets calculated terrain position based on contructing a plane out of height data. Not as exact as raycasting but is available before any geometry is created
		static FVector ToTerrainPosition( FCoalaGPSCoordinates coordinates, class UCoalaArea* area );
		static FVector ToTerrainPosition( double lon, double lat, class UCoalaArea* area );

		static TArray<FCoalaGPSCoordinates> GetCellBordersBetween( double startLon, double startLat, double endLon, double endLat, class UCoalaArea* area );

		
};

