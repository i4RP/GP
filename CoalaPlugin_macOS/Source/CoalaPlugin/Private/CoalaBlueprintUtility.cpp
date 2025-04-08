// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaBlueprintUtility.h"
#include "CoalaAreaController.h"
#include "CoalaConverter.h"
#include "CoalaProperties.h"
#include "CoalaCell.h"
#include "CoalaArea.h"
#include "CoalaBounds.h"
#include "CoalaPluginBlueprintLibrary.h"
#include "GeoConverter.h"
#include "CoreMinimal.h"
#include "Misc/ConfigCacheIni.h"

#include "UnrealEngine.h"

void
UCoalaBlueprintUtility::SetMaximumLoopIterationCounter( int value )
{
	UEngine* Settings = GetMutableDefault<UEngine>();
	Settings->MaximumLoopIterationCount = value;
	FProperty* property = Settings->GetClass()->FindPropertyByName( "MaximumLoopIterationCount" );
	Settings->UpdateSinglePropertyInConfigFile( property, Settings->GetDefaultConfigFilename() );
	Settings->SaveConfig();
}

FVector
UCoalaBlueprintUtility::GetTerrainPosition( double lon, double lat, UCoalaArea* area )
{
	FVector pos = CoalaConverter::ToTerrainPositionRaycast( lon, lat, area );
	return pos;
}

FVector
UCoalaBlueprintUtility::GetTerrainPositionWithoutArea( const FVector& scenePosition, AActor* worldProvider )
{
	return CoalaConverter::ToTerrainPositionWithoutArea( scenePosition, worldProvider );
}

FVector
UCoalaBlueprintUtility::CenterOfCell( FCoalaCell cell, UCoalaArea* area, bool startTopLeft )
{
	FVector area_fixpoint = UCoalaGpsConverterFunctionLibrary::ToScenePosition( 
		area->props.bounds.left,
		area->props.bounds.top
	);

	if( !startTopLeft )
		area_fixpoint = UCoalaGpsConverterFunctionLibrary::ToScenePosition( 
			area->props.bounds.right,
			area->props.bounds.bottom
		);

	FCoalaGPSCoordinates center_cell = cell.bounds.center();
	FVector center = center_cell.ToScenePosition() - area_fixpoint;
	return center;

/*	FVector top_left = cell.top_left - area_fixpoint;
	FVector bottom_left = cell.bottom_left - area_fixpoint;

	//FVector distanceToCenterX = (top_right - top_left) / 2;
	FVector distanceToCenterVector = (top_left - bottom_left) / 2;
	float distanceToCenter = distanceToCenterVector.FVector::Size();
	FVector ret = bottom_left;

	ret.Y += distanceToCenter;
	ret.X += distanceToCenter;

	ret.Z = cell.top_left.Z;
	return ret;
*/
}

float
UCoalaBlueprintUtility::DistanceOfGpsPositions( double lat1, double lng1, double lat2, double lng2 )
{
	double dLat = FMath::DegreesToRadians( lat2 - lat1 );
	double dLng = FMath::DegreesToRadians( lng2 - lng1 );
	double a = sin( dLat / 2 ) * sin( dLat / 2 ) +
	cos( FMath::DegreesToRadians( lat1 ) ) * cos( FMath::DegreesToRadians( lat2 ) ) *
	sin( dLng / 2 ) * sin( dLng / 2 );
	double c = 2 * atan2( sqrt( a ), sqrt( 1 - a ) );
	double dist = COALA_MAP_RADIUS * c;
	dist *= 0.1; // UnrealEngine unit fix -> "/10"
	return dist;
}

FString 
UCoalaBlueprintUtility::GetAppVersion()
{
	FString AppVersion;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectVersion"),
		AppVersion,
		GGameIni
	);

	return AppVersion;
}

FString 
UCoalaBlueprintUtility::GetAppName()
{
	FString AppName;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectName"),
		AppName,
		GGameIni
	);

	return AppName;
}
