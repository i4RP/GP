// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaAreaController.h"

#include "CoalaConverter.h"
#include "GeoConverter.h"
#include "CoalaAreaActor.h"
#include "CoalaProperties.h"
#include "CoalaCell.h"
#include "CoalaGridIndex.h"
#include "CoalaArea.h"
#include "CoalaBounds.h"
#include "CoalaController.h"

#include "Async/Async.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"

#include <vector>
#include <cmath>

std::map<FCoalaTile, UCoalaArea*> UCoalaAreaController::known_areas = std::map<FCoalaTile, UCoalaArea*>();
FCriticalSection UCoalaAreaController::mutex;

void
UCoalaAreaController::init()
{
	UCoalaAreaController::known_areas.clear();
}

void
UCoalaAreaController::cleanup()
{
	for( auto it = UCoalaAreaController::known_areas.begin(); it != UCoalaAreaController::known_areas.end(); ++it )
	{
		UCoalaArea* current_area = it->second;
		if( !current_area )
			continue;

		// mark data obj for destroy
		current_area->markForDestruction();
		current_area->RemoveFromRoot();
		current_area = 0;
	}

	UCoalaAreaController::known_areas.clear();
}

void
UCoalaAreaController::CalculateAreas( uint8 zoom, float newLon, float newLat, TArray<FCoalaTile>& newAreasInRange, TArray<FCoalaTile>& areasOutOfRange, int buffer )
{
	UE_LOG( CoalaLogCore, Error, TEXT( "CalculateAreas %f,%f" ), newLon, newLat );
//#if UE_BUILD_DEVELOPMENT
//	FString msg = FString::Printf( TEXT("%s OnGpsPositionChanged - lon: %f lat: %f"), *FDateTime::Now().ToString(), lon, lat );
//	UE_LOG( LogTemp, Warning, TEXT("%s"), *msg );
//	GEngine->AddOnScreenDebugMessage( INDEX_NONE, 20.0f, FColor::Red, msg, false );
//#endif

	// 1 - calculate possible areas in range
	////////////////////////////////////////
	TArray<FCoalaTile> possibleNewAreasInRange;
	{
		int current_area_tile_x = UGeoConverter::long2tilex( newLon, zoom );
		int current_area_tile_y = UGeoConverter::lat2tiley( newLat, zoom );

		for( int x = current_area_tile_x - buffer; x <= current_area_tile_x + buffer; ++x )
		{
			for( int y = current_area_tile_y - buffer; y <= current_area_tile_y + buffer; ++y )
			{
				FCoalaTile tile;
				tile.x = x;
				tile.y = y;
				tile.z = zoom;

				possibleNewAreasInRange.Add( tile );
			}
		}
	}

	// 2 - figure out areas to remove
	/////////////////////////////////
	areasOutOfRange.Empty();
	{
		for( auto it = UCoalaAreaController::known_areas.begin(); it != UCoalaAreaController::known_areas.end(); ++it )
		{
			FCoalaTile current = it->first;

			bool remove_current = true;
			for( int i = 0; i < possibleNewAreasInRange.Num(); ++i )
			{
				FCoalaTile to_check = possibleNewAreasInRange[i];

				if( current == to_check )
				{
					remove_current = false;
					break;
				}
			}

			if( remove_current )
				areasOutOfRange.Add( current );
		}
	}

	if( areasOutOfRange.Num() != 0 )
	{
#if UE_BUILD_DEVELOPMENT
		if( ACoalaController::Instance && ACoalaController::Instance->printVariablesToScreen & (1 << (int32)PRINT_DEBUG_VARIABLES_TO_SCREEN::AREA_EVENTS) )
		{
			if( areasOutOfRange.Num() != 0 )
			{
				{
					FString msg = "UCoalaAreaController::CalculateAreas - areasOutOfRange=" + FString::FromInt( areasOutOfRange.Num() );
					UE_LOG( CoalaLogCore, Warning, TEXT( "%s" ), *msg );
					GEngine->AddOnScreenDebugMessage( -1, 1.0f, FColor::Black, *msg );
				}

				for( int i = 0; i < areasOutOfRange.Num(); ++i )
				{
					FCoalaTile new_area_tile = areasOutOfRange[i];

					FString msg = "UCoalaAreaController::CalculateAreas - areasOutOfRange " + FString::FromInt( i ) + ") " + FString::FromInt( new_area_tile.x ) + "_" + FString::FromInt( new_area_tile.y );
					UE_LOG( CoalaLogCore, Warning, TEXT( "%s" ), *msg );
					GEngine->AddOnScreenDebugMessage( -1, 1.0f, FColor::Black, *msg );
				}
			}
		}
#endif

		int deletedActors = 0;
		for( int i = 0; i < areasOutOfRange.Num(); ++i )
		{
			FCoalaTile current = areasOutOfRange[i];
			auto it_find = UCoalaAreaController::known_areas.find( current );
			if( it_find == UCoalaAreaController::known_areas.end() )
				continue;

			UCoalaArea* current_area = it_find->second;
			if( !current_area )
				continue;

			// UCoalaArea object muss erhalten bleiben wegen threads
			// UCoalaAreaActor muss bleiben wegen actor refs used by threads

			UCoalaAreaController::known_areas.erase( it_find );

			current_area->markForDestruction();
		}
	}

	// 3 - figure out unknown areas
	///////////////////////////////
	newAreasInRange.Empty();
	{
		for( int i = 0; i < possibleNewAreasInRange.Num(); ++i )
		{
			FCoalaTile current = possibleNewAreasInRange[i];

			auto it_find = UCoalaAreaController::known_areas.find( current );
			if( it_find != UCoalaAreaController::known_areas.end() )
			{
				// exsist in map
				continue;
			}

			UCoalaAreaController::known_areas[current] = 0;
			newAreasInRange.Add( current );
		}
	}

#if UE_BUILD_DEVELOPMENT
	if( ACoalaController::Instance && ACoalaController::Instance->printVariablesToScreen & (1 << (int32)PRINT_DEBUG_VARIABLES_TO_SCREEN::AREA_EVENTS) )
	{
		if( newAreasInRange.Num() != 0 )
		{
			{
				FString msg = "UCoalaAreaController::CalculateAreas - newAreasInRange=" + FString::FromInt( newAreasInRange.Num() );
				UE_LOG( CoalaLogCore, Warning, TEXT( "%s" ), *msg );
				GEngine->AddOnScreenDebugMessage( -1, 1.0f, FColor::Black, *msg );
			}

			for( int i = 0; i < newAreasInRange.Num(); ++i )
			{
				FCoalaTile new_area_tile = newAreasInRange[i];

				FString msg = "UCoalaAreaController::CalculateAreas - newAreasInRange " + FString::FromInt( i ) + ") " + FString::FromInt( new_area_tile.x ) + "_" + FString::FromInt( new_area_tile.y );
				UE_LOG( CoalaLogCore, Warning, TEXT( "%s" ), *msg );
				GEngine->AddOnScreenDebugMessage( -1, 1.0f, FColor::Black, *msg );
			}
		}
	}
#endif
}

void
UCoalaAreaController::AddKnownArea(	UCoalaArea* area )
{
	FScopeLock Lock( &UCoalaAreaController::mutex );

	FCoalaTile tile = area->props.tile;

	auto itFind = UCoalaAreaController::known_areas.find( tile );
	if( itFind == UCoalaAreaController::known_areas.end() )
	{
#if WITH_EDITOR
		FString strTile = FString::FromInt( area->props.tile.x ) + "_" + FString::FromInt( area->props.tile.y );
		UE_LOG( CoalaLogCore, Error, TEXT( "UCoalaAreaController::AddKnownArea: UCoalaArea data obj for tile %s already known, ignore!" ), *strTile );
#endif
		return;
	}

	UCoalaAreaController::known_areas[tile] = area;

	// create CoalaAreaActor that handles all the async coala map layer generation stuff
	ACoalaAreaActor* areaActor = ACoalaController::Instance->spawnActorForArea( area );

#if WITH_EDITOR
	FString displayName = areaActor->GetActorLabel() + "_area_" + FString::FromInt( area->props.tile.x ) + "_" + FString::FromInt( area->props.tile.y );
	areaActor->Rename( *displayName );
	areaActor->SetActorLabel( *displayName );
#endif

	FVector pos = areaActor->GetActorLocation();
//	pos -= UCoalaAreaController::gps_offset;

	pos.Z = 0;
	areaActor->TeleportTo( pos, FRotator::ZeroRotator );
}

UCoalaArea*
UCoalaAreaController::GetKnownArea( FCoalaTile tile )
{
	FScopeLock Lock( &UCoalaAreaController::mutex );

	auto itFind = UCoalaAreaController::known_areas.find( tile );
	if( itFind == UCoalaAreaController::known_areas.end() )
		return 0;

	return itFind->second;
}

void
UCoalaAreaController::MoveCharacter( float lon, float lat, ACharacter* character )
{
	UE_LOG( CoalaLogCore, Error, TEXT( "MoveCharacter %f,%f" ), lon, lat );

	if( !character )
		return;

	UCoalaArea* area = UCoalaAreaController::TryGetKnownArea( lon, lat );
	if( !area )
		return;
		

//	if( GEngine )
//		GEngine->AddOnScreenDebugMessage( -1, 2, FColor::Red, FString::Printf( TEXT( "MoveCharacter %f|%f to %f|%f" ), lon, lat, updated_world_position.X, updated_world_position.Y) );

	AsyncTask( ENamedThreads::GameThread, [lon, lat, area, character]()
	{
		FVector terrain_pos = CoalaConverter::ToTerrainPosition( lon, lat, area );

		// rotation to mouse click
		FVector actorLocation = character->GetActorLocation();
		FRotator lookDirectionToWorldPosition = UKismetMathLibrary::FindLookAtRotation(
			actorLocation, terrain_pos
		);
		FRotator newLookDirection = character->GetActorRotation();
		newLookDirection.Yaw = lookDirectionToWorldPosition.Yaw - 180;

		character->SetActorRotation( newLookDirection );

		// movement
		//character->TeleportTo( terrain_pos, FRotator::ZeroRotator, false, true );
		character->SetActorLocation( terrain_pos, false );
	} );
}

std::map<FCoalaTile, class UCoalaArea*>
UCoalaAreaController::GetKnownAreas()
{
	return UCoalaAreaController::known_areas;
}

UCoalaArea*
UCoalaAreaController::TryGetKnownArea( float lon, float lat )
{
	std::map<FCoalaTile, UCoalaArea*>::iterator it;
	for( it = UCoalaAreaController::known_areas.begin(); it != UCoalaAreaController::known_areas.end(); it++ )
	{
		if( it->second )
		{
			FCoalaBounds bounds = it->second->props.bounds;
			if( bounds.contains( lon, lat ) )
			{
				return it->second;
			}
		}
	}
	return nullptr;
}

void
UCoalaAreaController::GetGametagsFromGpsPosition( uint8 zoom, float lon, float lat, TArray<FString>& gametags )
{
	// 1 - find area if present
	///////////////////////////
	int area_tile_x = UGeoConverter::long2tilex( lon, zoom );
	int area_tile_y = UGeoConverter::lat2tiley( lat, zoom );

	UCoalaArea* area = 0;
	for( auto it = UCoalaAreaController::known_areas.begin(); it != UCoalaAreaController::known_areas.end(); ++it )
	{
		FCoalaTile tile = it->first;

		if( tile.z == zoom
			&& tile.x == area_tile_x
			&& tile.y == area_tile_y )
		{
			area = it->second;
		}
	}
	if( !area )
		return;
	// 2 - get cell
	///////////////

	//calculate grid index for this cell
	double geo_width = std::abs( area->props.bounds.right ) - std::abs( area->props.bounds.left );
	double geo_height = std::abs( area->props.bounds.top ) - std::abs( area->props.bounds.bottom );

	int count_cells_one_row = sqrt( area->grid.Num() );

	double one_cell_width = geo_width / count_cells_one_row;
	double one_cell_height = geo_height / count_cells_one_row;

	int index_x = std::floor( (lon - area->props.bounds.left) / one_cell_width );
	int index_y = std::floor( (lat - area->props.bounds.bottom) / one_cell_height );

	// check index_x & index_y
	FCoalaCell* cell = 0;
	for( int i = 0; i < area->grid.Num(); ++i )
	{
		FCoalaCell current = area->grid[i];

		if( current.index.x == index_x
			&& current.index.y == index_y )
		{
			cell = &current;
			break;
		}
	}

	if( !cell )
		return;

	// 3 - gametags from cell
#if UE_BUILD_DEVELOPMENT
	UE_LOG( LogTemp, Warning, TEXT("Cell: %d|%d"), cell->index.x, cell->index.y );
#endif
	for( auto it = cell->gameTags.begin(); it != cell->gameTags.end(); ++it )
	{
		FString current = it->Key;
		int priority = it->Value;

		gametags.Add( current );
#if UE_BUILD_DEVELOPMENT
		UE_LOG( LogTemp, Warning, TEXT("%d - %s"), priority, *current );
#endif
	}
}
