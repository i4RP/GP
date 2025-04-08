// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaCrime.h"

TMap<UCoalaArea*, FRenderedCrimeInfoArrayPerPosition>
UCoalaCrimeShadowingFix::FilterCrimes(
	TMap<UCoalaArea*, FRenderedCrimeInfoArrayPerPosition> renderedCrimeInfoPerArea,
	TMap<UCrimeType, float> crimesMappedToWeight,
	UCoalaArea* area,
	FVector2D roundedVector,
	bool& shouldBeRendered )
{
	TMap<UCoalaArea*, FRenderedCrimeInfoArrayPerPosition> ret = renderedCrimeInfoPerArea;
	shouldBeRendered = true;

	FRenderedCrimeInfoArrayPerPosition* renderedCrimeInfoPerPositionWrapper = renderedCrimeInfoPerArea.Find( area );
	if( renderedCrimeInfoPerPositionWrapper == NULL )
		return ret;

	FRenderedCrimeInfoArray* renderedCrimeInfoArrayWrapper = renderedCrimeInfoPerPositionWrapper->
	                                                         renderedCrimeInfosPerPosition.Find( roundedVector );

	if( renderedCrimeInfoArrayWrapper == NULL )
		return ret;

	TArray<FRenderedCrimeInfo> crimeInfoArray = renderedCrimeInfoArrayWrapper->renderedCrimeInfos;

	int crimeInfoLength = renderedCrimeInfoArrayWrapper->renderedCrimeInfos.Num();
	TArray<UCrimeType> crimeTypesToCheckWith;
	crimesMappedToWeight.GetKeys( crimeTypesToCheckWith );

	float weight = crimesMappedToWeight[crimeTypesToCheckWith[0]];

	for( int i = 0; i < crimeInfoLength; i++ )
	{
		FRenderedCrimeInfo* crimeInfo = &renderedCrimeInfoArrayWrapper->renderedCrimeInfos[i];

		bool isSameCrimeTypes = false;
		int crimeTypesLength = crimeInfo->crimeTypes.Num();
		if( crimeTypesLength == crimeTypesToCheckWith.Num() )
		{
			int sameCrimeCounter = crimeTypesLength;

			for( int a = 0; a < crimeTypesLength; a++ )
			{
				if( crimeTypesToCheckWith.Contains( crimeInfo->crimeTypes[a] ) )
					sameCrimeCounter--;

				if( sameCrimeCounter == 0 )
				{
					isSameCrimeTypes = true;
					break;
				}
			}
		}

		if( isSameCrimeTypes )
		{
			shouldBeRendered = false;
			crimeInfo->weight += weight;
			renderedCrimeInfoPerPositionWrapper->renderedCrimeInfosPerPosition.Add(	roundedVector, *renderedCrimeInfoArrayWrapper );
			ret.Add( area, *renderedCrimeInfoPerPositionWrapper );
			break;
		}
	}

	return ret;
}
