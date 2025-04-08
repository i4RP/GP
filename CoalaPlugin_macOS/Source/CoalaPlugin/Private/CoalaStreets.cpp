// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaStreets.h"

FCoalaStreets::FCoalaStreets()
{

}

FCoalaStreets
UCoalaStreetsBlueprintLibrary::MakeCoalaStreets( FString street_typ, TArray<FCoalaStreet> street_data )
{
	FCoalaStreets ret;

	ret.typ = street_typ;
	ret.data = street_data;

	return ret;
}

void
UCoalaStreetsBlueprintLibrary::BreakCoalaStreets( FCoalaStreets inStreets, FString& street_typ, TArray<FCoalaStreet>& street_data )
{
	street_typ = inStreets.typ;
	street_data = inStreets.data;
}
