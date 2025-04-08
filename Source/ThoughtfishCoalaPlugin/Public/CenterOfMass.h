// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaGPSCoordinates.h"
#include "CoreMinimal.h"

class CenterOfMass
{
	public:
		static FCoalaGPSCoordinates Get( const TArray<FVector>& vertices );
		static FCoalaGPSCoordinates Get( const TArray<FCoalaGPSCoordinates>& pos );

	private:
		static double get_area( FCoalaGPSCoordinates p1, FCoalaGPSCoordinates p2, FCoalaGPSCoordinates p3);
		static FCoalaGPSCoordinates get_center( FCoalaGPSCoordinates p1, FCoalaGPSCoordinates p2, FCoalaGPSCoordinates p3);
};
