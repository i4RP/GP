// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaCustomPOI.h"

#include "CoalaArea.h"
#include "CoalaActor.h"
#include "CoalaAreaActor.h"
#include "CoalaConverter.h"
#include "CoalaCustomPOIActor.h"
#include "CoalaAreaController.h"
#include "GeoConverter.h"
#include "Async/Async.h"

#include "Engine/World.h"

FCoalaCustomPOI::FCoalaCustomPOI()
{

}

FCoalaCustomPOI 
UCoalaCustomPoiBlueprintLibrary::MakeCoalaCustomPOI( FCoalaGPSCoordinates pos, FString label, FString payload )
{
	FCoalaCustomPOI ret;

	ret.pos = pos;
	ret.label = label;
	ret.payload = payload;

	return ret;
}

void 
UCoalaCustomPoiBlueprintLibrary::BreakCoalaCustomPOI( FCoalaCustomPOI inCustomPOI, FCoalaGPSCoordinates& pos, FString& label, FString& payload )
{
	pos = inCustomPOI.pos;
	label = inCustomPOI.label;
	payload = inCustomPOI.payload;
}

void
UCoalaCustomPoiBlueprintLibrary::PlaceCustomPoisAsync( UCoalaArea* area, const TMap<FString, UClass*>& customPoiConfiguration, const FCoalaDelegatOnCustomPoiPlaced& onCustomPoiPlaced, const FCoalaDelegatePlaceCustomPoisOnDone& onDone )
{
	auto task = new FAutoDeleteAsyncTask<CoalaTaskPlaceCustomPois>( area, customPoiConfiguration, onCustomPoiPlaced, onDone );
	task->StartBackgroundTask();
}

CoalaTaskPlaceCustomPois::CoalaTaskPlaceCustomPois( UCoalaArea* area, TMap<FString, UClass*> config, FCoalaDelegatOnCustomPoiPlaced onCustomPoiPlaced, FCoalaDelegatePlaceCustomPoisOnDone onDone )
: _shouldRun( false  ), area( 0 )
{
	this->_shouldRun = area->addThreadsUsingAreaData( this, "CoalaTaskPlaceCustomPois" );
	if( !this->_shouldRun ) return;

	this->area = area;
	this->config = config;
	this->delegateOnCustomPoiPlaced = onCustomPoiPlaced;
	this->delegateOnDone = onDone;
}

CoalaTaskPlaceCustomPois::~CoalaTaskPlaceCustomPois()
{
	if( this->area ) 
		this->area->removeThreadsUsingAreaData( this, "CoalaTaskPlaceCustomPois" );
}

void
CoalaTaskPlaceCustomPois::DoWork()
{
	if( !this->_shouldRun ) return;

	// make sure that there is scene object to attach to
	if( !this->area->AddCoalaLayerRenderTask(
		new EnsureSceneObjectRefActorExists( this->area->sceneObject->_refAllCustomPOIs, this->area->sceneObject, this->area->props.tile.x, this->area->props.tile.y, "_custom_pois" ),
		true
	)
		) return;
	if( !this->area->sceneObject->_refAllCustomPOIs )
		return;

	for( int i = 0; i < this->area->customPois.Num(); ++i )
	{
		FCoalaCustomPOI poi = this->area->customPois[i];

		if( !this->config.Contains( poi.label ) )
			continue;
		
		UClass* poiToSpawn = *this->config.Find( poi.label );
		if( !poiToSpawn )
			continue;

		//FVector spawn_pos = CoalaConverter::ToTerrainPositionRaycast( poi->pos.lon, poi->pos.lat, area );
		FVector spawn_pos = poi.pos.ToScenePosition();

		// spawn actor, arange in area and name
		ACoalaCustomPOIActor* inst = 0;

		FString displayName = "_area_" + FString::FromInt( area->props.tile.x ) + "_" + FString::FromInt( area->props.tile.y ) + "_customPoi";
		if( !this->area->AddCoalaLayerRenderTask(
				new SpawnCoalaCustomPoi( inst, this->area->sceneObject->_refAllCustomPOIs, poi, poiToSpawn, spawn_pos, displayName ),
				true
			)
		) return;

/*		AsyncTask(ENamedThreads::GameThread, [&]()
		{
			ACoalaCustomPOIActor* tmp = world->SpawnActor<ACoalaCustomPOIActor>( poiToSpawn, spawn_pos, FRotator::ZeroRotator );
			tmp->customPoiData = *poi;
			// set scale for actor
			{
				FVector scale = FVector::OneVector;
				scale *= ACoalaController::GetCoalaScale();
				tmp->SetActorScale3D( scale );
			}

			area->sceneObject->_refAllCustomPOIs->allAttachedActors.Add( tmp );
#if WITH_EDITOR
			FString displayName = tmp->GetActorLabel() + "_area_" + FString::FromInt( area->props.tile.x ) + "_" + FString::FromInt( area->props.tile.y ) + "_customPoi";
			tmp->Rename( *displayName );
			tmp->SetActorLabel( *displayName );
#endif
			tmp->AttachToActor( area->sceneObject->_refAllCustomPOIs, FAttachmentTransformRules::KeepRelativeTransform );

			inst = tmp;
		});
*/
//		while( !inst )
//		{
//			FPlatformProcess::Sleep( this->coalaFpsObserver->getDelayForOneFPS() );
//		}


		if( !this->area->AddCoalaLayerRenderTask(
				new delegates::CallCustomPoiDelegateOnCustomPoiPlaced( this->delegateOnCustomPoiPlaced, inst )
			)
		) return;

/*
		AsyncTask( ENamedThreads::GameThread, [delegateOnPoiPlaced, inst]()
		{
			delegateOnPoiPlaced.ExecuteIfBound( inst );
		} );
*/
	}
	
	if( !this->area->AddCoalaLayerRenderTask(
			new delegates::CallCustomPoiDelegateOnDone( this->delegateOnDone, this->area )
		)
	) return;

/*	AsyncTask(ENamedThreads::GameThread, [delegateOnDone, area]()
	{
		delegateOnDone.ExecuteIfBound( area );
	} );
*/
}
