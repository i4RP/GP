// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaShape.h"

#include "CoalaPluginBlueprintLibrary.h"

UShape*
Coala::FindShapeClosestTo( const FCoalaGPSCoordinates position, TArray<UShape*> &shapes )
{
	UShape* closestShape = shapes[0];
	float smallestDistanceEncountered = UCoalaGPSCoordinatesBlueprintLibrary::Distance( position, closestShape->position );
	
	for( int shapeIndex = 1; shapeIndex < shapes.Num(); ++shapeIndex )
	{
		UShape* currentShape = shapes[shapeIndex];
		const float distance = UCoalaGPSCoordinatesBlueprintLibrary::Distance( position, currentShape->position );

		if( distance <= smallestDistanceEncountered )
		{
			closestShape = currentShape;
			smallestDistanceEncountered = distance;
		}
	}

	return closestShape;
}
