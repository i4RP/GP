// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaCell.h"

FCoalaCell::FCoalaCell()
{

}

bool
FCoalaCell::hasProjectTag( FString gametag )
{
	if( gameTags.Find( gametag ) )
		return true;

	return false;
}

bool
FCoalaCell::isProjectTagHighest( FString gametag )
{
	int max_priority_in_list = 0;
	int priority_gametag_search = 0;
	for( auto it = gameTags.begin(); it != gameTags.end(); ++it )
	{
		if( it->Key.Compare( gametag ) == 0 )
			priority_gametag_search = it->Value;
		if( it->Value > max_priority_in_list )
			max_priority_in_list = it->Value;
	}

	if( max_priority_in_list == priority_gametag_search )
		return true;

	return false;
}

FCoalaCell 
UCoalaCellBlueprintLibrary::MakeCoalaCell( 
	TMap<FString, int> gameTags, 
	FCoalaGridIndex index, 
	FCoalaBounds bounds )
{
	FCoalaCell ret;

	ret.gameTags = gameTags;
	ret.index = index;
	ret.bounds = bounds;

	return ret;
}

void
UCoalaCellBlueprintLibrary::BreakCoalaCell(
	FCoalaCell InCoalaCell,
	TMap<FString, int>& gameTags,
	FCoalaGridIndex& index,
	FCoalaBounds& bounds )
{
	gameTags = InCoalaCell.gameTags;
	index = InCoalaCell.index;
	bounds = InCoalaCell.bounds;
}

void 
UCoalaCellBlueprintLibrary::hasCellProjectTag(
	FCoalaCell inCoalaCell, 
	FString projectTagName, 
	EOutputPins_hasGametag& execResult )
{
	if( !inCoalaCell.hasProjectTag( projectTagName ) )
	{
		execResult = EOutputPins_hasGametag::No;
		return;
	}

	execResult = EOutputPins_hasGametag::Yes;
}

void 
UCoalaCellBlueprintLibrary::isProjectTagHighest( 
	FCoalaCell inCoalaCell, 
	FString projectTagName, 
	EOutputPins_isProjectTagHighest& execResult )
{
	if( !inCoalaCell.isProjectTagHighest( projectTagName ) )
	{
		execResult = EOutputPins_isProjectTagHighest::No;
		return;
	}

	execResult = EOutputPins_isProjectTagHighest::Yes;
}
