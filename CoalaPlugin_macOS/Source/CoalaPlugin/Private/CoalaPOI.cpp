// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaPOI.h"

#include "GeoConverter.h"
#include "CoalaActor.h"
#include "CoalaArea.h"
#include "CoalaAreaActor.h"
#include "CoalaAreaController.h"
#include "CoalaBlueprintUtility.h"
#include "CoalaConverter.h"
#include "CoalaProperties.h"
#include "CoalaTile.h"
#include "CoalaBounds.h"
#include "Async/Async.h"

#include "Engine/World.h"

FCoalaPOI::FCoalaPOI()
{

}

FCoalaPOI::FCoalaPOI( FCoalaGPSCoordinates pos, FString label )
{
	this->pos = pos;
	this->label = label;
}

FCoalaPOI
UCoalaPoiBlueprintLibrary::MakeCoalaPoi( FCoalaGPSCoordinates pos, FString label )
{
	FCoalaPOI ret(
		pos,
		label
	);

	return ret;
}

void
UCoalaPoiBlueprintLibrary::BreakCoalaPoi( FCoalaPOI inPoi, FCoalaGPSCoordinates& pos, FString& label )
{
	pos = inPoi.pos;
	label = inPoi.label;
}

void 
UCoalaPoiBlueprintLibrary::PlaceCoalaPoisAsync( UCoalaArea* area, const TMap<FString, UClass*>& poiConfiguration, const FCoalaDelegatOnCoalaPoiPlaced& onPoiPlaced, const FCoalaDelegatePlaceCoalaPoisOnDone& onDone )
{
	auto task = new FAutoDeleteAsyncTask<CoalaTaskPlaceCoalaPois>( area, poiConfiguration, onPoiPlaced, onDone );
	task->StartBackgroundTask();
}

CoalaTaskPlaceCoalaPois::CoalaTaskPlaceCoalaPois( UCoalaArea* area, TMap<FString, UClass*> config, FCoalaDelegatOnCoalaPoiPlaced onCoalaPoiPlaced, FCoalaDelegatePlaceCoalaPoisOnDone onDone )
: _shouldRun( false ), _area( 0 )
{
	this->_shouldRun = area->addThreadsUsingAreaData( this, "CoalaTaskPlaceCoalaPois" );
	if( !this->_shouldRun ) return;

	this->_area = area;
	this->_config = config;
	this->_delegateOnPoiPlaced = onCoalaPoiPlaced;
	this->_delegateOnDone = onDone;
}

CoalaTaskPlaceCoalaPois::~CoalaTaskPlaceCoalaPois()
{
	if( this->_area )
		this->_area->removeThreadsUsingAreaData( this, "CoalaTaskPlaceCoalaPois" );
}

void
CoalaTaskPlaceCoalaPois::DoWork()
{
	if( !this->_shouldRun ) return;

	// make sure that there is scene object to attach at
	if( !this->_area->AddCoalaLayerRenderTask(
			new EnsureSceneObjectRefActorExists( this->_area->sceneObject->_refAllPOIs, this->_area->sceneObject, this->_area->props.tile.x, this->_area->props.tile.y, "_pois" ),
			true
		)
	) return;
	if( !this->_area->sceneObject->_refAllCells )
		return;

	for( int i = 0; i < this->_area->pois.Num(); ++i )
	{
		FCoalaPOI* currentCoalaPoi = &this->_area->pois[i];

		// search for a configuration
		if( !this->_config.Contains( currentCoalaPoi->label ) )
			continue;

		UClass* poiToSpawn = *this->_config.Find( currentCoalaPoi->label );

		if( !poiToSpawn )
			continue;

		//FVector spawn_pow = CoalaConverter::ToTerrainPosition( currentCoalaPoi->pos.lon, currentCoalaPoi->pos.lat, this->_area );
		FVector spawn_pow = currentCoalaPoi->pos.ToScenePosition();

		// spawn actor, arange in area and name
		AActor* inst = 0;

		FString displayName = "_area_" + FString::FromInt( this->_area->props.tile.x ) + "_" + FString::FromInt( this->_area->props.tile.y ) + "_poi";
		if( !this->_area->AddCoalaLayerRenderTask(
				new SpawnCoalaPoi( inst, this->_area->sceneObject->_refAllPOIs, poiToSpawn, spawn_pow, displayName ),
				true
			)
		) return;

		if( !this->_area->AddCoalaLayerRenderTask(
				new delegates::CallPoiDelegateOnPoiPlaced( this->_delegateOnPoiPlaced, inst )
			)
		) return;
	}

	if( !this->_area->AddCoalaLayerRenderTask(
			new delegates::CallPoiDelegateOnDone( this->_delegateOnDone, this->_area )
		)
	) return;
}
