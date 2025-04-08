// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaBounds.h"
#include "CoalaCell.h"

#include "CoreMinimal.h"
#include "./../libs/clipper/clipper.h"

class THOUGHTFISHCOALAPLUGIN_API CoalaCellMeshClipper
{
	public:
		CoalaCellMeshClipper(TArray<FVector> shape, TArray<TArray<FVector>> holes);
	
		void addIntersectionShape( FCoalaCell* cell, TArray<FVector> shape);
	
		TMap<FCoalaCell*, TArray<TArray<FVector>>> slice();
	
	private:
		FCoalaBounds bounds_shape;
	
		TArray<TArray<CoalaThirdParty::Clipper2Lib::PointD>> basic_shape;
	
		TMap<FCoalaCell*, TArray<TArray<CoalaThirdParty::Clipper2Lib::PointD>>> shapesIntersection;
};
