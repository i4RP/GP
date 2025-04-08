// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaGridIndex.h"

FCoalaGridIndex::FCoalaGridIndex()
{
	this->x = 0;
	this->y = 0;
}

FCoalaGridIndex::FCoalaGridIndex( int x, int y )
{
	this->x = x;
	this->y = y;
}

void
UCoalaGridIndexShadowingFix::MakeCoalaGridIndex(int x, int y, FCoalaGridIndex& InCoalaGridIndex)
{
	InCoalaGridIndex.x = x;
	InCoalaGridIndex.y = y;
}

void
UCoalaGridIndexShadowingFix::BreakCoalaGridIndex(FCoalaGridIndex InCoalaGridIndex, int& x, int& y)
{
	x = InCoalaGridIndex.x;
	y = InCoalaGridIndex.y;
}

TArray<FCoalaGridIndex>
UCoalaGridIndexShadowingFix::GetGridIndexAround( FCoalaGridIndex center, int cellSpaceToOther )
{
	TArray<FCoalaGridIndex> ret;

	for( int x = center.x - cellSpaceToOther; x <= center.x+cellSpaceToOther; ++x )
	{
		for( int y = center.y - cellSpaceToOther; y <= center.y+cellSpaceToOther; ++y )
		{
			FCoalaGridIndex index;
			index.x = x;
			index.y = y;
			ret.Add( index );
		}
	}

	return ret;
}
