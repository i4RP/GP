// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaDecorator.h"

#include "DrawDebugHelpers.h"
#include "CoalaArea.h"
#include "CoalaAreaActor.h"
#include "CoalaAreaController.h"
#include "CoalaActor.h"
#include "CoalaMeshActor.h"
#include "CoalaConverter.h"
#include "CoalaBlueprintUtility.h"
#include "CoalaProperties.h"
#include "CoalaCell.h"
#include "CoalaTile.h"
#include "CoalaBounds.h"
#include "CoalaGridIndex.h"
#include "GeoConverter.h"

#include "Async/Async.h"
#include "GenericPlatform/GenericPlatformProcess.h"

#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"

void
UCoalaDecorator::DecorateArea( UCoalaArea* area, TArray<FCoalaAreaDecorationConfiguration> configs, const FCoalaDelegateOnDecorationPlaced& onDecorationObjectPlaced, const FCoalaDelegateDecorationOnDone& onDone )
{
	auto task = new FAutoDeleteAsyncTask<CoalaTaskDecorateArea>(area, configs, onDecorationObjectPlaced, onDone );
	task->StartBackgroundTask();
}

CoalaTaskDecorateArea::CoalaTaskDecorateArea( UCoalaArea* area, TArray<FCoalaAreaDecorationConfiguration> configs, FCoalaDelegateOnDecorationPlaced delegateOnDecorationObjectPlaced, FCoalaDelegateDecorationOnDone delegateOnDone )
: _shouldRun( false ), area( 0 )
{
	this->_shouldRun = area->addThreadsUsingAreaData( this, "CoalaTaskDecorateArea" );
	if( !this->_shouldRun ) return;

	this->area = area;
	this->configs = configs;
	this->delegateOnDecorationObjectPlaced = delegateOnDecorationObjectPlaced;
	this->delegateOnDone = delegateOnDone;
}

CoalaTaskDecorateArea::~CoalaTaskDecorateArea()
{
	if( this->area )
		this->area->removeThreadsUsingAreaData( this, "CoalaTaskDecorateArea" );
}

void 
CoalaTaskDecorateArea::DoWork()
{
	if( !this->_shouldRun ) return;

	// this node can only do his work if there is a object in the scene to get the world for spawning decoration stuff in it
	if( !this->area || !this->area->sceneObject )
		return;

	if( !this->area->AddCoalaLayerRenderTask(
			new EnsureSceneObjectRefActorExists( this->area->sceneObject->_refAllDecorations, this->area->sceneObject, this->area->props.tile.x, this->area->props.tile.y, "_decorations" ),
			true
		)
	)
		return;

	if( !this->area->sceneObject->_refAllDecorations )
		return;

	for( int i = 0; i < this->configs.Num(); ++i )
	{
		// a decoration loop encountered a thread-related issue: abort
		if( !this->area )
			return;

		FCoalaAreaDecorationConfiguration cfg = this->configs[i];

		if( (int32)cfg.useAt & (int32)OPTIONS_AREA_DECORATION_USE_CONFIG_TO::CELLS )
		{
			ACoalaActor* actor_with_all_attached_decorations = this->decorateCells( i, cfg );
			// HINT: if( actor_with_all_attached_decorations == 0 )
			// -> no decorations spawned for that Area and config
		}
	}

	if( !this->area->AddCoalaLayerRenderTask(
			new delegates::CallDecorationsCreatedDelegateDone( this->delegateOnDone, this->area )
		)
	)
		return;
}

ACoalaActor*
CoalaTaskDecorateArea::decorateCells( int config_index, FCoalaAreaDecorationConfiguration config )
{
	TArray<FCoalaCell*> cells_with_gametag;
	// 1 - find all cells with that gametag[s]
	{
		for( int i = 0; i < area->grid.Num(); ++i )
		{
			FCoalaCell* current_cell = &area->grid[i];

			for( int a = 0; a < config.gametag.Num(); ++a )
			{
				FString current_gametag = config.gametag[a];

				if( config.onlyIfGametagIsHighest )
				{
					if( current_cell->isProjectTagHighest( current_gametag ) )
					{
						cells_with_gametag.Add( current_cell );
						break;
					}
				}
				else
				{
					if( current_cell->hasProjectTag( current_gametag ) )
					{
						cells_with_gametag.Add( current_cell );
						break;
					}
				}
			}
		}
	}

	if( cells_with_gametag.Num() == 0 )
		return 0;

	// 1.5 - spawn parent for attachment place
	ACoalaActor* ret = 0;
	{
		if( !this->area->AddCoalaLayerRenderTask(
				new EnsureSceneObjectRefActorExists( ret, area->sceneObject->_refAllDecorations, area->props.tile.x, area->props.tile.y, "_decoration_" + FString::FromInt( config_index ) ),
				true
			)
		)
			return 0;

		if( !ret )
		{
			UE_LOG( CoalaLogCore, Warning, TEXT( "CoalaTaskDecorateArea::decorateCells - could not spawn mesh actor, abort" ) );
			return 0;
		}
	}

	FVector area_fixpoint = UCoalaGpsConverterFunctionLibrary::ToScenePosition(
		area->props.bounds.left,
		area->props.bounds.top
	);

	TMap<FCoalaGridIndex,int> memorySpaceToOther;

	int count_spawned_decorations = 0;
	// 2 - spawn on center
	{
		FVector pos_player = ACoalaController::GetGpsOffset().ToScenePosition();
		std::map<float, FVector> ordered_decoration_spawn_positions;

		for( int i = 0; i < cells_with_gametag.Num(); ++i )
		{
			FCoalaCell* current_cell = cells_with_gametag[i];

			// random throw if we even spawn
			{
				int32 randomThrow = FMath::RandRange( 0, 100 );
		
				if( randomThrow > config.spawnChanceInPercent )
					continue;
			}
			
			if( config.cellSpaceToOther > 0 )
			{
				// is current cell available ?
				if( memorySpaceToOther.Find( current_cell->index ) != nullptr )
					continue;
			}

			double left = current_cell->bounds.left;
			double right = current_cell->bounds.right;
			double top = current_cell->bounds.top;
			double bottom = current_cell->bounds.bottom;

			FVector pos = FVector::ZeroVector;
			for( int a = 0; a <= config.countRetriesIfPositionIsOccupied; ++a )
			{
				if( pos != FVector::ZeroVector )
					break;

				double random_x = FMath::RandRange( 0.0, (right - left) );
				double random_y = FMath::RandRange( 0.0, (top - bottom) );

				FCoalaGPSCoordinates gps_point = FCoalaGPSCoordinates(
					left + (right - left) - random_x,
					bottom + (top - bottom) - random_y
				);
				pos = gps_point.ToScenePosition();
/*
				{
					UE_LOG( LogTemp, Error, TEXT("pos = %s"), *pos.ToString());

					FRotator rotation = FRotator::ZeroRotator;
					AStaticMeshActor* inst_test = world->SpawnActor<AStaticMeshActor>( pos, rotation );

					FString displayName = "CJ_HIT_TEST";
					inst_test->Rename( *displayName );
					inst_test->SetActorLabel( *displayName );

					return ret;
				}
*/

				FHitResult hit;
				// figure out if something is already there
				{
					FVector start = pos;
					start.Z = 100000;
					FVector end = pos;
					end.Z = -100000;

					//DrawDebugDirectionalArrow( world, start, end, 10000, FColor::Magenta, true, -1, 0, 100 );

					TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;
					TraceObjectTypes.Add( UEngineTypes::ConvertToObjectType( ECollisionChannel::ECC_WorldStatic ) );
					ret->GetWorld()->LineTraceSingleByObjectType( hit, start, end, TraceObjectTypes );
				}

				ACoalaMeshActor* is_coala_mesh_actor = Cast<ACoalaMeshActor>( hit.GetActor() );
				if( !is_coala_mesh_actor )
				{
					pos = FVector::ZeroVector;
					continue;
				}

				if( (int32)config.skipIf & (int32)OPTIONS_AREA_DECORATION_IGNORE::BUILDINGS )
					if( is_coala_mesh_actor->ActorHasTag( "COALA_BUILDING" ) )
					{
						pos = FVector::ZeroVector;
						continue;
					}

				if( (int32)config.skipIf & (int32)OPTIONS_AREA_DECORATION_IGNORE::STREETS )
					if( is_coala_mesh_actor->ActorHasTag( "COALA_STREET" ) )
					{
						pos = FVector::ZeroVector;
						continue;
					}

				if( (int32)config.skipIf & (int32)OPTIONS_AREA_DECORATION_IGNORE::WATER )
					if( is_coala_mesh_actor->ActorHasTag( "COALA_WATER" ) )
					{
						pos = FVector::ZeroVector;
						continue;
					}
			}

			if( pos == FVector::ZeroVector )
			{
				// no spawn point found from all retrys
				// going to next cell
				continue;
			}

			// add occupied cell/gridIndex around spawned cells 
			// depending on spawn configuration
			if( config.cellSpaceToOther > 0 )
			{
				// cell/index is free: add occupied zone
				TArray<FCoalaGridIndex> cells_around_this_cell = UCoalaGridIndexShadowingFix::GetGridIndexAround(
					current_cell->index, 
					config.cellSpaceToOther
				);
				for( int a= 0; a < cells_around_this_cell.Num(); ++a )
				{
					FCoalaGridIndex current = cells_around_this_cell[a];
					memorySpaceToOther.Add(current,1);
				}
			}

			float d = FVector::Distance( pos, pos_player );
			ordered_decoration_spawn_positions[d] = pos;
		}

		if( config.smothSpawning )
		{
			// spawn frame by frame
			for( auto it = ordered_decoration_spawn_positions.begin(); it != ordered_decoration_spawn_positions.end(); ++it )
			{
				float distance_to_place = it->first;
				FVector spawn_pos = it->second;

				double lon;
				double lat;
				UCoalaGpsConverterFunctionLibrary::WorldPositionToGpsPosition( spawn_pos.X, spawn_pos.Y, lon, lat );
				FVector terrainPos = CoalaConverter::ToTerrainPosition( lon, lat, area ) - area_fixpoint;

				FRotator rotation = FRotator::ZeroRotator;
				rotation.SetComponentForAxis( EAxis::Z, FMath::RandRange( 0.0f, 360.0f ) );

				FVector scaling(
					FMath::RandRange( config.randomScaleMin.X, config.randomScaleMax.X ) * ACoalaController::GetCoalaScale(),
					FMath::RandRange( config.randomScaleMin.Y, config.randomScaleMax.Y ) * ACoalaController::GetCoalaScale(),
					FMath::RandRange( config.randomScaleMin.Z, config.randomScaleMax.Z ) * ACoalaController::GetCoalaScale()
				);

				AActor* inst = 0;
				if( !this->area->AddCoalaLayerRenderTask(
						new SpawnDecoration( inst, ret, terrainPos, rotation, scaling, config.decoration ),
						true
					) 
				)
					return 0;
			}
		}
		else
		{
			// spawn all at once

			// calculate all the needed data for spawning all at once
			TArray<FVector> terrainPositions = TArray<FVector>();
			TArray<FRotator> rotations = TArray<FRotator>();
			TArray<FVector> scalings = TArray<FVector>();

			// fill the variables above
			for( auto it = ordered_decoration_spawn_positions.begin(); it != ordered_decoration_spawn_positions.end(); ++it )
			{
				float distance_to_place = it->first;
				FVector spawn_pos = it->second;

				double lon;
				double lat;
				UCoalaGpsConverterFunctionLibrary::WorldPositionToGpsPosition( spawn_pos.X, spawn_pos.Y, lon, lat );
				FVector terrainPos = CoalaConverter::ToTerrainPosition( lon, lat, area ) - area_fixpoint;

				FRotator rotation = FRotator::ZeroRotator;
				rotation.SetComponentForAxis( EAxis::Z, FMath::RandRange( 0.0f, 360.0f ) );

				FVector scaling(
					FMath::RandRange( config.randomScaleMin.X, config.randomScaleMax.X ) * ACoalaController::GetCoalaScale(),
					FMath::RandRange( config.randomScaleMin.Y, config.randomScaleMax.Y ) * ACoalaController::GetCoalaScale(),
					FMath::RandRange( config.randomScaleMin.Z, config.randomScaleMax.Z ) * ACoalaController::GetCoalaScale()
				);

				terrainPositions.Add( terrainPos );
				rotations.Add( rotation );
				scalings.Add( scaling );
			}
			
			AActor* inst = 0;
			if( !this->area->AddCoalaLayerRenderTask(
					new SpawnDecorations( inst, ret, terrainPositions, rotations, scalings, config.decoration ),
					true
				) 
			)
				return 0;
		}
	}

	return ret;
}
