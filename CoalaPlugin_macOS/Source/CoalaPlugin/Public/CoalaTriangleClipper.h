// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de
#pragma once

#include "CoalaBounds.h"

#include "CoreMinimal.h"
#include "./../libs/clipper/clipper.h"

class THOUGHTFISHCOALAPLUGIN_API CoalaTriangleClipper
{
	public:
		CoalaTriangleClipper( TArray<FVector>& shape, TArray<TArray<FVector>>& holes );
	
		TArray<TArray<FVector>> clip( const TArray<FVector>* shape, const TArray<TArray<FVector>>* holes = 0 );
	
	private:
		FCoalaBounds bounds_shape;

		CoalaThirdParty::Clipper2Lib::PathsD shapePaths;
};
