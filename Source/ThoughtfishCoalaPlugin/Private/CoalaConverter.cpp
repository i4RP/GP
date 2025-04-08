// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaConverter.h"

#include "GeoConverter.h"
#include "CoalaArea.h"
#include "CoalaAreaActor.h"
#include "CoalaProperties.h"
#include "CoalaElevation.h"
#include "CoalaBlueprintUtility.h"
#include "CoalaBounds.h"

#include "EngineGlobals.h"
#include "Engine/Engine.h"
#include "CollisionQueryParams.h"

FVector
CoalaConverter::ToTerrainPositionRaycast( double lon, double lat, UCoalaArea* area )
{
	FCoalaGPSCoordinates pos( lon, lat );
	//return CoalaConverter::ToTerrainPositionRaycast( pos.ToScenePosition(), area );

	FVector scenePosition = pos.ToScenePosition();
	if( area && area->elevation.data.Num() > 0 && area->sceneObject && area->sceneObject->_refAllCells )
	{
		double elevationScale = ACoalaController::GetElevationScale();
		FVector start = scenePosition;
		start.Z = area->elevation.max * elevationScale + 1.f;
		FVector end = scenePosition;
		end.Z = area->elevation.min * elevationScale - 1.f;

		FCollisionQueryParams QueryParams;
		FHitResult Hit;
		Hit.bBlockingHit = true;

		AActor* hittedActor = Hit.GetActor();
		while( Hit.bBlockingHit == true && (hittedActor == NULL || !hittedActor->Tags.Contains("COALA_CELL")) )
		{
			if( hittedActor != NULL )
				QueryParams.AddIgnoredActor( hittedActor );

			area->sceneObject->GetWorld()->LineTraceSingleByChannel( Hit, start, end, ECollisionChannel::ECC_Visibility, QueryParams );
			hittedActor = Hit.GetActor();
		}

		if( hittedActor != NULL && hittedActor->Tags.Contains( "COALA_CELL" ) )
			return Hit.ImpactPoint;
	}
	return scenePosition;
}

FVector
CoalaConverter::ToTerrainPositionWithoutArea( FVector scenePosition, AActor* worldObject )
{
	double elevationScale = ACoalaController::GetElevationScale();
	FVector start = scenePosition;
	start.Z = 10000 * elevationScale;
	FVector end = scenePosition;
	end.Z = 0 - 1.f;

	FCollisionQueryParams QueryParams;
	FHitResult Hit;
	Hit.bBlockingHit = true;

	AActor* hittedActor = Hit.GetActor();
	while( Hit.bBlockingHit == true && (hittedActor == NULL || !hittedActor->Tags.Contains( "COALA_CELL" )) )
	{
		if( hittedActor != NULL )
			QueryParams.AddIgnoredActor( hittedActor );

		worldObject->GetWorld()->LineTraceSingleByChannel( Hit, start, end, ECollisionChannel::ECC_WorldStatic, QueryParams );
		hittedActor = Hit.GetActor();
	}

	if( hittedActor != NULL && hittedActor->Tags.Contains( "COALA_CELL" ) )
		return Hit.ImpactPoint;

	return scenePosition;
}

FVector
CoalaConverter::ToTerrainPosition( FCoalaGPSCoordinates coordinates, UCoalaArea* area )
{
	return CoalaConverter::ToTerrainPosition( coordinates.lon, coordinates.lat, area );
}
FVector
CoalaConverter::ToTerrainPosition( double lon, double lat, UCoalaArea* area )
{
	FCoalaGPSCoordinates pos(lon,lat);
	//return CoalaConverter::ToTerrainPositionRaycast( pos.ToScenePosition(), area );

	FVector scenePosition = pos.ToScenePosition();
	if( area && area->elevation.data.Num() > 0 )
	{
		int count_cells_in_one_row = sqrt( area->grid.Num() );

		double normalizedMaxX = area->props.bounds.right - area->props.bounds.left;
		double normalizedLon = lon - area->props.bounds.left;
		double cellX = (normalizedLon / normalizedMaxX) * count_cells_in_one_row + 1;

		double normalizedMaxY = area->props.bounds.top - area->props.bounds.bottom;
		double normalizedLat = lat - area->props.bounds.bottom;
		double cellY = (normalizedLat / normalizedMaxY) * count_cells_in_one_row + 1;

		if( cellX <= 0 || floor( cellX ) < 0 || cellY <= 0 || floor( cellY ) < 0 || cellX >= area->elevation.data.Num() - 1 || cellY >= area->elevation.data.Num() - 1 )
			return scenePosition;

//     FString log = "cellx:" + FString::SanitizeFloat(floor(cellX));
//     UE_LOG(LogTemp, Warning, TEXT("%s"), *log);

		 //Prevent NaN Errors
		if( cellX != cellX )
			return scenePosition;

		double modX = fmod( cellX, 1 );
		double modY = fmod( cellY, 1 );

		if( modX == 0 && modY == 0 )
		{
			scenePosition.Z = area->elevation.GetHeight( cellX, cellY ) * ACoalaController::GetElevationScale();
			return scenePosition;
		}
		else if( modX == 0 )
		{
			double heightFloor = area->elevation.GetHeight( cellX, floor( cellY ) );
			double heightCeil = area->elevation.GetHeight( cellX, ceil( cellY ) );
			double height = modY * heightCeil + (1 - modY) * heightFloor;
			scenePosition.Z = height * ACoalaController::GetElevationScale();
			return scenePosition;
		}
		else if( modY == 0 )
		{
			double heightFloor = area->elevation.GetHeight( floor( cellX ), cellY );
			double heightCeil = area->elevation.GetHeight( ceil( cellX ), cellY );
			double height = modX * heightCeil + (1 - modX) * heightFloor;
			scenePosition.Z = height * ACoalaController::GetElevationScale();
			return scenePosition;
		}

		FVector topLeft = FVector( floor( cellX ), floor( cellY ), area->elevation.GetHeight( floor( cellX ), floor( cellY ) ) );
		FVector topRight = FVector( ceil( cellX ), floor( cellY ), area->elevation.GetHeight( ceil( cellX ), floor( cellY ) ) );
		FVector bottomRight = FVector( ceil( cellX ), ceil( cellY ), area->elevation.GetHeight( ceil( cellX ), ceil( cellY ) ) );
		FVector bottomLeft = FVector( floor( cellX ), ceil( cellY ), area->elevation.GetHeight( floor( cellX ), ceil( cellY ) ) );

		FPlane plane;

		if( modX + modY >= 1 )
		{
			plane = FPlane( topLeft, topRight, bottomRight );
		}
		else
		{
			plane = FPlane( topLeft, bottomRight, bottomLeft );
		}

		FVector intersection = FMath::LinePlaneIntersection( 
			FVector( cellX, cellY, 1.f ), 
			FVector( cellX, cellY, -1.f ), 
			plane
		);

		scenePosition.Z = intersection.Z * ACoalaController::GetElevationScale();
	}
	return scenePosition;
}

TArray<FCoalaGPSCoordinates>
CoalaConverter::GetCellBordersBetween( double startLon, double startLat, double endLon, double endLat, UCoalaArea* area )
{
	TArray<FCoalaGPSCoordinates> result;
	result.Add( FCoalaGPSCoordinates( startLon, startLat ) );

	if( area && area->props.bounds.contains( startLon, startLat ) && area->props.bounds.contains( endLon, endLat ) )
	{
		int count_cells_in_one_row = sqrt( area->grid.Num() );
		FVector start = FVector( startLon, startLat, 0 );
		FVector end = FVector( endLon, endLat, 0 );
		FVector direction = end - start;

		double normalizedMaxX = area->props.bounds.right - area->props.bounds.left;
		double normalizedMaxY = area->props.bounds.top - area->props.bounds.bottom;
		double minX = area->props.bounds.left;
		double minY = area->props.bounds.bottom;

		double normalizedLon = startLon - minX;
		double normalizedLat = startLat - minY;

		double cellX = (normalizedLon / normalizedMaxX) * count_cells_in_one_row;
		double nextCellX;
		if( direction.X >= 0 )
		{
			if( fmod( cellX, 1 ) == 0 )
			{
				nextCellX = cellX + 1;
			}
			else
			{
				nextCellX = ceil( cellX );
			}
		}
		else
		{
			if( fmod( cellX, 1 ) == 0 )
			{
				nextCellX = cellX - 1;
			}
			else
			{
				nextCellX = floor( cellX );
			}
		}

		double cellY = (normalizedLat / normalizedMaxY) * count_cells_in_one_row;
		double nextCellY;
		if( direction.Y >= 0 )
		{
			if( fmod( cellY, 1 ) == 0 )
			{
				nextCellY = cellY + 1;
			}
			else
			{
				nextCellY = ceil( cellY );
			}
		}
		else
		{
			if( fmod( cellY, 1 ) == 0 )
			{
				nextCellY = cellY - 1;
			}
			else
			{
				nextCellY = floor( cellY );
			}
		}

		while( true )
		{
			// Construct next intersection point with cells in x-direction
			double nextXCellLon = (nextCellX / count_cells_in_one_row) * normalizedMaxX + minX;
			FPlane nextXCellPlane = FPlane( FVector( nextXCellLon, 0, 0 ), FVector( nextXCellLon, 1, 0 ), FVector( nextXCellLon, 0, 1 ) );
			FVector nextXCellIntersection;
			bool foundNextXIntersection = FMath::SegmentPlaneIntersection( start, end, nextXCellPlane, nextXCellIntersection );

			// Construct next intersection point with cells in y-direction
			double nextYCellLat = (nextCellY / count_cells_in_one_row) * normalizedMaxY + minY;
			FPlane nextYCellPlane = FPlane( FVector( 0, nextYCellLat, 0 ), FVector( 1, nextYCellLat, 0 ), FVector( 0, nextYCellLat, 1 ) );
			FVector nextYCellIntersection;
			bool foundNextYIntersection = FMath::SegmentPlaneIntersection( start, end, nextYCellPlane, nextYCellIntersection );

			// Construct next intersection point with middle of cells
			double previousXCellLon = ((nextCellX - FMath::Sign( direction.X )) / count_cells_in_one_row) * normalizedMaxX + minX;
			double previousYCellLat = ((nextCellY - FMath::Sign( direction.Y )) / count_cells_in_one_row) * normalizedMaxY + minY;
			FPlane nextMidCellPlane;
			if( FMath::Sign( direction.X ) == FMath::Sign( direction.Y ) )
			{
				nextMidCellPlane = FPlane( FVector( nextXCellLon, previousYCellLat, 0 ), FVector( previousXCellLon, nextYCellLat, 0 ), FVector( previousXCellLon, nextYCellLat, 1 ) );
			}
			else
			{
				nextMidCellPlane = FPlane( FVector( previousXCellLon, previousYCellLat, 0 ), FVector( nextXCellLon, nextYCellLat, 0 ), FVector( previousXCellLon, previousYCellLat, 1 ) );
			}
			FVector nextMidCellIntersection;
			bool foundNextMidIntersection = FMath::SegmentPlaneIntersection( start, end, nextMidCellPlane, nextMidCellIntersection );
			//foundNextMidIntersection = false;
			//Determine which intersection point is closest, while ignoring intersections that are at the starting point
			double nextXCellDistance = TNumericLimits<double>::Max();
			double nextYCellDistance = TNumericLimits<double>::Max();
			double nextMidCellDistance = TNumericLimits<double>::Max();

			double floatingPointTolerance = 0.00001;
			if( foundNextXIntersection )
			{
				nextXCellDistance = (nextXCellIntersection - start).Size();
				if( nextXCellDistance < floatingPointTolerance )
				{
					nextXCellDistance = TNumericLimits<double>::Max();
					foundNextXIntersection = false;
				}
			}
			if( foundNextYIntersection )
			{
				nextYCellDistance = (nextYCellIntersection - start).Size();
				if( nextYCellDistance < floatingPointTolerance )
				{
					nextYCellDistance = TNumericLimits<double>::Max();
					foundNextYIntersection = false;
				}
			}
			if( foundNextMidIntersection )
			{
				nextMidCellDistance = (nextMidCellIntersection - start).Size();
				if( nextMidCellDistance < floatingPointTolerance )
				{
					nextMidCellDistance = TNumericLimits<double>::Max();
					foundNextMidIntersection = false;
				}
			}
			if( !foundNextXIntersection && !foundNextYIntersection && !foundNextMidIntersection )
			{
				// No more intersections on the path to end
				break;
			}

			double lon;
			double lat;

			if( nextXCellDistance <= nextYCellDistance && nextXCellDistance <= nextMidCellDistance )
			{
				lon = nextXCellIntersection.X;
				lat = nextXCellIntersection.Y;
				nextCellX += FMath::Sign( direction.X );
			}
			else if( nextYCellDistance <= nextXCellDistance && nextYCellDistance <= nextMidCellDistance )
			{
				lon = nextYCellIntersection.X;
				lat = nextYCellIntersection.Y;
				nextCellY += FMath::Sign( direction.Y );
			}
			else if( nextMidCellDistance <= nextXCellDistance && nextMidCellDistance <= nextYCellDistance )
			{
				lon = nextMidCellIntersection.X;
				lat = nextMidCellIntersection.Y;
			}
			else
			{
				lon = lat = 0;
			}

			start.X = lon;
			start.Y = lat;

			result.Add( FCoalaGPSCoordinates( lon, lat ) );
		}
	}

	return result;
}
