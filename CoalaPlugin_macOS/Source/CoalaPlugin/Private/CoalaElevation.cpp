// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaElevation.h"

#include "CoalaController.h"
#include "CoalaGridIndex.h"

FCoalaElevation::FCoalaElevation()
{
	this->min = 0;
	this->max = 0;
}

FVector
FCoalaElevation::GetNormal( int x, int y, float cellScale, float elevationScale )
{
	float height = GetHeight( x, y ) * elevationScale;
	FVector normal;

	{
		FVector normalLeft = FVector::CrossProduct( FVector( 0, cellScale, height ), FVector( -cellScale, 0, GetHeight( x - 1, y ) * elevationScale ) );
		normal += normalLeft;
	}

	{
		FVector normalRight = FVector::CrossProduct( FVector( 0, -cellScale, height ), FVector( cellScale, 0, GetHeight( x + 1, y ) * elevationScale ) );
		normal += normalRight;
	}

	{
		FVector normalDown = FVector::CrossProduct( FVector( -cellScale, 0, height ), FVector( 0, -cellScale, GetHeight( x, y - 1 ) * elevationScale ) );
		normal += normalDown;
	}

	{
		FVector normalUp = FVector::CrossProduct( FVector( cellScale, 0, height ), FVector( 0, cellScale, GetHeight( x, y + 1 ) * elevationScale ) );
		normal += normalUp;
	}

	if( normal.X == 0 && normal.Y == 0 && normal.Z == 0 )
	{
		normal = FVector( 0, 0, 1 );
	}

	normal.Y = -normal.Y;
	normal.Normalize();
	return normal;
}

float
FCoalaElevation::GetHeight( int x, int y ) const
{
	return this->data[x].content[y];
}

void
FCoalaElevation::SetHeight( int x, int y, float height )
{
	this->data[x].content[y] = height;
}

FCoalaElevation 
UCoalaElevationBlueprintLibrary::MakeCoalaElevation()
{
	FCoalaElevation ret;

	return ret;
}

void
UCoalaElevationBlueprintLibrary::SetCoalaElevation( FCoalaElevation inElevation, int x, int y, float elevationValue )
{
	inElevation.SetHeight( x, y, elevationValue );
}

void
UCoalaElevationBlueprintLibrary::GetCoalaElevation( FCoalaElevation inElevation, int x, int y, float& elevationValue )
{
	elevationValue = inElevation.GetHeight( x, y );
}

void
UCoalaElevationBlueprintLibrary::GetCoalaElevationForCell( const FCoalaElevation& inElevation, const FCoalaCell& cell, float& topLeft, float& topRight, float& bottomLeft, float& bottomRight )
{
	UCoalaElevationBlueprintLibrary::GetCoalaElevationForCellIndex(
		inElevation,
		cell.index.x, cell.index.y,
		topLeft, topRight, bottomLeft, bottomRight
	);
}

void
UCoalaElevationBlueprintLibrary::GetCoalaElevationForCellIndex( const FCoalaElevation& inElevation, const int& cellX, const int& cellY, float& topLeft, float& topRight, float& bottomLeft, float& bottomRight )
{
	if( inElevation.data.Num() == 0 )
	{
		topLeft = 0;
		topRight = 0;
		bottomLeft = 0;
		bottomRight = 0;
		return;
	}
	// from "CoalaCellFactory"
	int elevation_index_x = cellX + 1;
	int elevation_index_y = cellY + 1;
	float elevationScale = ACoalaController::GetElevationScale();

	topLeft = inElevation.GetHeight( elevation_index_x, elevation_index_y ) * elevationScale;
	topRight = inElevation.GetHeight( elevation_index_x + 1, elevation_index_y ) * elevationScale;
	bottomLeft = inElevation.GetHeight( elevation_index_x, elevation_index_y + 1 ) * elevationScale;
	bottomRight = inElevation.GetHeight( elevation_index_x + 1, elevation_index_y + 1 ) * elevationScale;
}
