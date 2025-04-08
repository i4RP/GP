// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de
#include "CoalaTriangleClipper.h"

#include "GeoConverter.h"
#include "CoalaCell.h"

CoalaTriangleClipper::CoalaTriangleClipper( TArray<FVector>& shape, TArray<TArray<FVector>>& holes )
{
	double min_x = shape[0].X;
	double max_x = shape[0].X;
	double min_y = shape[0].Y;
	double max_y = shape[0].Y;

	this->shapePaths = CoalaThirdParty::Clipper2Lib::PathsD(
		1 + holes.Num()
	);

	// AREA
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

		this->shapePaths[0].push_back(
			CoalaThirdParty::Clipper2Lib::PointD(
				current.X,
				current.Y
			)
		);
	}

	this->bounds_shape.left = min_x;
	this->bounds_shape.right = max_x;
	this->bounds_shape.bottom = min_y;
	this->bounds_shape.top = max_y;

	// HOLE(s)
	for( int i = 0; i < holes.Num(); ++i )
	{
		TArray<FVector> current = holes[i];

		CoalaThirdParty::Clipper2Lib::PathD converted_points_hole = CoalaThirdParty::Clipper2Lib::PathD( current.Num() );
		for( int a = 0; a < current.Num(); ++a )
		{
			FVector currentPoint = current[a];

			converted_points_hole[a] = CoalaThirdParty::Clipper2Lib::PointD(
				currentPoint.X,
				currentPoint.Y
			);
		}
		this->shapePaths[i + 1] = converted_points_hole;
	}
}

TArray<TArray<FVector>>
CoalaTriangleClipper::clip( const TArray<FVector>* shape, const TArray<TArray<FVector>>* holes )
{
	ensureMsgf( holes == 0, TEXT("TODO: take holes into account!") );

	TArray<TArray<FVector>> ret;

	// analyse/precompute
	CoalaThirdParty::Clipper2Lib::PathsD shape_and_hole_in_clipper_format = CoalaThirdParty::Clipper2Lib::PathsD(
		1 // currently only shape (not all holes)
	);
	{
		CoalaThirdParty::Clipper2Lib::PathD path;

		// if all points from shape are outside, we dont need that
		int count_points_inside = 0;
		for( auto it = shape->begin(); it != shape->end(); ++it )
		{
			FVector current = *it;
			if( this->bounds_shape.contains( current.X, current.Y ) )
				++count_points_inside;

			path.push_back( 
				CoalaThirdParty::Clipper2Lib::PointD( 
					current.X,
					current.Y
				)
			);
		}

		if( count_points_inside == 0 )
			return ret;

		shape_and_hole_in_clipper_format[0] = path;
	}
	CoalaThirdParty::Clipper2Lib::PathsD solution = CoalaThirdParty::Clipper2Lib::Intersect(
		this->shapePaths,
		shape_and_hole_in_clipper_format,
		CoalaThirdParty::Clipper2Lib::FillRule::NonZero,
		1
	);

	if( solution.size() == 0 )
		return ret;

	// convert result
	for( unsigned int i = 0; i < solution.size(); ++i )
	{
		TArray<FVector> converted = TArray<FVector>();

		CoalaThirdParty::Clipper2Lib::PathD current = solution[i];

		for( int a = current.size() - 1; a >= 0; a-- )
		{
			converted.Add( 
				FVector( 
					current[a].x, 
					current[a].y, 
					0
				)
			);
		}
		ret.Add( converted );
	}

	return ret;
}
