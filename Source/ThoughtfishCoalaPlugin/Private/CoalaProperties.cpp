// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaProperties.h"
#include "CoalaLogCore.h"

FCoalaAreaProperties::FCoalaAreaProperties()
{

}

FCoalaAreaProperties::~FCoalaAreaProperties()
{

}

FString*
FCoalaAreaProperties::getGametagNameById( int64 gametag_id )
{
	return this->gametag_map.Find( gametag_id );
}

void 
FCoalaAreaProperties::initGametagMap( TMap<int64, FString> data )
{
	this->gametag_map = data;
}

FCoalaAreaProperties
UCoalaPropertiesBlueprintLibrary::MakeCoalaAreaProperties( FCoalaTile tile, FCoalaBounds bounds, FString weather, TMap<int64, FString> gametag_map )
{
	FCoalaAreaProperties ret;

	ret.tile = tile;
	ret.bounds = bounds;
	ret.weather = weather;
	ret.gametag_map = gametag_map;

	return ret;
}

void 
UCoalaPropertiesBlueprintLibrary::BreakCoalaAreaProperties( FCoalaAreaProperties inProperties, FCoalaTile& tile, FCoalaBounds& bounds, FString& weather, TMap<int64, FString>& gametag_map )
{
	tile = inProperties.tile;
	bounds = inProperties.bounds;
	weather = inProperties.weather;
	gametag_map = inProperties.gametag_map;
}

void
UCoalaPropertiesBlueprintLibrary::getGametagNameById( FCoalaAreaProperties inProperties, int64 gametag_id, FString& projectTagName, EOutputPins_GetProjectTagById& execResult )
{
	FString* ret = inProperties.getGametagNameById( gametag_id );
	if( !ret )
	{
		execResult = EOutputPins_GetProjectTagById::Invalide;
		return;
	}

	projectTagName = *inProperties.getGametagNameById( gametag_id );
	execResult = EOutputPins_GetProjectTagById::Valide;
}
