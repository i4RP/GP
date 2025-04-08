#include "CoalaCellMeshClipper.h"

#include "GeoConverter.h"
#include "CoalaCell.h"

CoalaCellMeshClipper::CoalaCellMeshClipper( TArray<FVector> shape, TArray<TArray<FVector>> holes )
{
	double min_x = shape[0].X;
	double max_x = shape[0].X;
	double min_y = shape[0].Y;
	double max_y = shape[0].Y;

	TArray<CoalaThirdParty::Clipper2Lib::PointD> converted_points;
	for( int i = 0; i < shape.Num(); ++i )
	{
		FVector current = shape[i];

		if( current.X < min_x )
			min_x = current.X;
		if( current.X > max_x )
			max_x = current.X;
		if( current.Y < min_y )
			min_y = current.Y;
		if( current.Y > max_y )
			max_y = current.Y;

		converted_points.Add( CoalaThirdParty::Clipper2Lib::PointD( current.X, current.Y ) );
	}

	this->basic_shape.Add( converted_points );

	this->bounds_shape.left = min_x;
	this->bounds_shape.right = max_x;
	this->bounds_shape.bottom = min_y;
	this->bounds_shape.top = max_y;

	for( int i = 0; i < holes.Num(); ++i )
	{
		TArray<FVector> current = holes[i];

		TArray<CoalaThirdParty::Clipper2Lib::PointD> converted_points_hole;
		for( int a = 0; a < current.Num(); ++a )
		{
			converted_points_hole.Add( CoalaThirdParty::Clipper2Lib::PointD( current[a].X, current[a].Y ) );
		}
		this->basic_shape.Add( converted_points_hole );
	}
}

void
CoalaCellMeshClipper::addIntersectionShape( FCoalaCell* cell, TArray<FVector> shape )
{
	if( shapesIntersection.Contains( cell ) )
	{
		return;
	}

	TArray<TArray<CoalaThirdParty::Clipper2Lib::PointD>> p;
	TArray<CoalaThirdParty::Clipper2Lib::PointD> converted_points;

	// if all points from shape are outside, we dont need that
	int count_points_inside = 0;
	for( int i = 0; i < shape.Num(); ++i )
	{
		FVector current = shape[i];
		if( this->bounds_shape.contains( current.X, current.Y ) )
			++count_points_inside;

		converted_points.Add( CoalaThirdParty::Clipper2Lib::PointD( current.X, current.Y ) );
	}

	if( count_points_inside == 0 )
		return;

	p.Add( converted_points );
	this->shapesIntersection.Add( cell, p );
}

TMap<FCoalaCell*, TArray<TArray<FVector>>>
CoalaCellMeshClipper::slice()
{
	TMap<FCoalaCell*, TArray<TArray<FVector>>> ret = TMap<FCoalaCell*, TArray<TArray<FVector>>>();

	for( TPair<FCoalaCell*, TArray<TArray<CoalaThirdParty::Clipper2Lib::PointD>>> entry : shapesIntersection )
	{
		FCoalaCell* cell = entry.Key;

		CoalaThirdParty::Clipper2Lib::PathsD holePathsD = CoalaThirdParty::Clipper2Lib::PathsD( entry.Value.Num() );
		for( int i = 0; i < entry.Value.Num(); i++ )
		{
			holePathsD[i] = CoalaThirdParty::Clipper2Lib::PathD( entry.Value[i].Num() );
			for( int j = 0; j < entry.Value[i].Num(); j++ )
			{
				holePathsD[i][j] = entry.Value[i][j];
			}
		}

		CoalaThirdParty::Clipper2Lib::PathsD shapePathsD = CoalaThirdParty::Clipper2Lib::PathsD( basic_shape.Num() );
		for( int i = 0; i < basic_shape.Num(); i++ )
		{
			shapePathsD[i] = CoalaThirdParty::Clipper2Lib::PathD( basic_shape[i].Num() );
			for( int j = 0; j < basic_shape[i].Num(); j++ )
			{
				shapePathsD[i][j] = basic_shape[i][j];
			}
		}

		CoalaThirdParty::Clipper2Lib::PathsD solution = CoalaThirdParty::Clipper2Lib::Intersect(
			shapePathsD,
			holePathsD,
			CoalaThirdParty::Clipper2Lib::FillRule::NonZero,
			6
		);

		if( solution.size() == 0 )
			continue;

		// draw the solution
		TArray<TArray<FVector>> shape_and_holes = TArray<TArray<FVector>>();
		for( unsigned int i = 0; i < solution.size(); ++i )
		{
			TArray<FVector> converted = TArray<FVector>();

			CoalaThirdParty::Clipper2Lib::PathD current = solution[i];

			for( int a = current.size() - 1; a >= 0; a-- )
			{
				converted.Add( FVector( current[a].x, current[a].y, 0 ) );
			}
			shape_and_holes.Add( converted );
		}
		ret.Add( cell, shape_and_holes );
	}

	return ret;
}
