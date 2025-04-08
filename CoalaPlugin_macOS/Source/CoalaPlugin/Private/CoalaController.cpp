// Fill out your copyright notice in the Description page of Project Settings.


#include "CoalaController.h"

#include "GeoConverter.h"
#include "CoalaMeshActor.h"
#include "CoalaArea.h"
#include "CoalaAreaActor.h"
#include "CoalaCell.h"
#include "CoalaProperties.h"
#include "CoalaShapeData.h"
#include "CoalaBlueprintUtility.h"
#include "CoalaElevation.h"
#include "CoalaGridIndex.h"
#include "CoalaActor.h"
#include "CoalaDevelopmentConfigurations.h"
#include "CoalaMeshGenerator.h"
#include "CoalaBounds.h"
#include "CoalaTile.h"
#include "CoalaAreaController.h"
#include "Async/Async.h"
#include "Engine/Engine.h"
#include "KismetProceduralMeshLibrary.h"

#include <map>

FCoalaGPSCoordinates ACoalaController::currentGpsPosition = FCoalaGPSCoordinates();

double ACoalaController::_coalaScale = 1.0f;
double ACoalaController::_elevationScale = 1.0f;

ACoalaController* ACoalaController::Instance = 0;

// Sets default values
ACoalaController::ACoalaController()
{
	TRACE_BOOKMARK( TEXT("ACoalaController()") );
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	ACoalaController::currentGpsPosition = FCoalaGPSCoordinates();

	this->_coalaScale = 1;
	this->_elevationScale = 1;

	this->printVariablesToScreen = 0;
	ACoalaController::Instance = this;
}

ACoalaController::~ACoalaController()
{
	TRACE_BOOKMARK( TEXT("~ACoalaController()") );
	UCoalaAreaController::cleanup();
	ACoalaController::Instance = 0;

	for( auto it = this->_allAreaActors.begin(); it != this->_allAreaActors.end(); ++it )
	{
		UCoalaArea* data = it->first;
		ACoalaAreaActor* actor = it->second;

		if( IsValid(actor) )
			actor->MarkAsGarbage();
	}
}

bool
ACoalaController::removeAreaDataAndActor( UCoalaArea* data, ACoalaAreaActor* actor )
{
	auto it_find = this->_allAreaActors.find( data );
	if( it_find == this->_allAreaActors.end() )
		return false;

	this->_allAreaActors.erase( it_find );
	return true;
}

// Called when the game starts or when spawned
void
ACoalaController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void
ACoalaController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

#if UE_BUILD_DEVELOPMENT
	if( ACoalaController::Instance && ACoalaController::Instance->printVariablesToScreen & (1 << (int32)PRINT_DEBUG_VARIABLES_TO_SCREEN::GAMEP_FPS) )
	{
		float currentFPS = 1 / DeltaTime;

		FString msg = "ACoalaController FPS: " + FString::SanitizeFloat( currentFPS, 0 );
		UE_LOG( CoalaLogCore, Warning, TEXT( "%s" ), *msg );
		GEngine->AddOnScreenDebugMessage( -1, 0.1f, FColor::Green, *msg );
	}
#endif

}

void
ACoalaController::GpsPositionChanged( double lon, double lat )
{
#if UE_BUILD_DEVELOPMENT
	if( ACoalaController::Instance && ACoalaController::Instance->printVariablesToScreen & (1 << (int32)PRINT_DEBUG_VARIABLES_TO_SCREEN::GPS_EVENTS) )
	{
		{
			FString msg = "GpsPositionChanged old " + FString::SanitizeFloat( this->currentGpsPosition.lon, 6 ) + "," + FString::SanitizeFloat( this->currentGpsPosition.lat, 6 );
			UE_LOG( CoalaLogCore, Warning, TEXT( "%s" ), *msg );
			GEngine->AddOnScreenDebugMessage( -1, 1.0f, FColor::Red, *msg );
		}

		{
			FString msg = "GpsPositionChanged new " + FString::SanitizeFloat( lon, 6 ) + "," + FString::SanitizeFloat( lat, 6 );
			UE_LOG( CoalaLogCore, Warning, TEXT( "%s" ), *msg );
			GEngine->AddOnScreenDebugMessage( -1, 1.0f, FColor::Red, *msg );
		}
	}
#endif
	
	// update current GPS position
	if( this->currentGpsPosition.lon == 0 && this->currentGpsPosition.lat == 0 )
	{
		this->currentGpsPosition.lon = lon;
		this->currentGpsPosition.lat = lat;
	}
	else
	{
		// check if world origin need's to be adjusted
		FVector scenePosition = UCoalaGpsConverterFunctionLibrary::ToScenePosition( lon, lat );
		UE_LOG( CoalaLogCore, Error, TEXT( "GpsPositionChanged scene diff %f | %f" ), scenePosition.X, scenePosition.Y );
		if( FMath::Abs( scenePosition.X ) > 500000 || FMath::Abs( scenePosition.Y ) > 500000 )
		{
#if UE_BUILD_DEVELOPMENT
			if( ACoalaController::Instance && ACoalaController::Instance->printVariablesToScreen & (1 << (int32)PRINT_DEBUG_VARIABLES_TO_SCREEN::GPS_EVENTS) )
			{
				{
					FString msg = "GpsPositionChanged: scene diff is to hight ( " + FString::SanitizeFloat( scenePosition.X, 6 ) + " | " + FString::SanitizeFloat( scenePosition.Y, 6 ) + " )";
					UE_LOG( CoalaLogCore, Warning, TEXT( "%s" ), *msg );
					GEngine->AddOnScreenDebugMessage( -1, 1.0f, FColor::Red, *msg );
				}

				{
					FString msg = "GpsPositionChanged: SetNewWorldOrigin !";
					UE_LOG( CoalaLogCore, Warning, TEXT( "%s" ), *msg );
					GEngine->AddOnScreenDebugMessage( -1, 1.0f, FColor::Red, *msg );
				}
			}
#endif

			FIntVector worldOriginLocation = this->GetWorld()->OriginLocation;
			FIntVector newWorldOriginLocation = worldOriginLocation + FIntVector( scenePosition.X, scenePosition.Y, 0 );
			UWorld* world = this->GetWorld();
			AsyncTask( ENamedThreads::GameThread, [world, newWorldOriginLocation ]()
			{
				world->SetNewWorldOrigin( newWorldOriginLocation );
			} );

			//this->scenePositionOffset = UCoalaGpsConverterFunctionLibrary::ToScenePosition( lon, lat );
			this->currentGpsPosition.lon = lon;
			this->currentGpsPosition.lat = lat;
		}
	}
}

void
ACoalaController::EnsureAreaSceneObjectExists( UCoalaArea* targetArea )
{
	if( targetArea->sceneObject )
		return;

	const FVector areaPositionInScene = UCoalaGpsConverterFunctionLibrary::ToScenePosition( 
		targetArea->props.bounds.left, 
		targetArea->props.bounds.top
	);// - this->scenePositionOffset;

	targetArea->sceneObject = this->GetWorld()->SpawnActor<ACoalaAreaActor>( areaPositionInScene, FRotator::ZeroRotator );
#if WITH_EDITOR
	FString displayName = targetArea->sceneObject->GetActorLabel() + "_area_" + FString::FromInt( targetArea->props.tile.x ) + "_" + FString::FromInt( targetArea->props.tile.y );
	targetArea->sceneObject->Rename( *displayName );
	targetArea->sceneObject->SetActorLabel( *displayName );
#endif
}

void
ACoalaController::EnsureSceneObjectRefActorExists( ACoalaActor*& targetRefActor, AActor* attachmentActor, int tileIndexX, int tileIndexY, const FString& nameEnding )
{
	if( targetRefActor )
		return;

	targetRefActor = this->GetWorld()->SpawnActor<ACoalaActor>( FVector::ZeroVector, FRotator::ZeroRotator );
#if WITH_EDITOR
	FString displayName = targetRefActor->GetActorLabel() + "_area_" + FString::FromInt( tileIndexX ) + "_" + FString::FromInt( tileIndexY ) + nameEnding;
	targetRefActor->Rename( *displayName );
	targetRefActor->SetActorLabel( *displayName );
#endif
	targetRefActor->AttachToActor( attachmentActor, FAttachmentTransformRules::SnapToTargetIncludingScale );
	targetRefActor->SetActorRelativeLocation( FVector::ZeroVector );
}

FCoalaGPSCoordinates
ACoalaController::GetGpsOffset()
{
	return ACoalaController::currentGpsPosition;
}

void
ACoalaController::InitCoala( double scale, double elevationScale )
{
	if( !ACoalaController::Instance )
		ACoalaController::Instance = this;

	UCoalaAreaController::init();

	// global COALA scale
	{
		if( scale > 1 )
			scale = 1;
		if( scale < 0.01 )
			scale = 0.01;
		ACoalaController::_coalaScale = scale;
	}

	// elevation scale
	{
		if( elevationScale < 0 )
			elevationScale = 0;
		
		ACoalaController::_elevationScale = elevationScale;
	}
	
	ACoalaController::currentGpsPosition = FCoalaGPSCoordinates();
}

void
ACoalaController::CleanupCoala()
{
	// how to call it on exit
	UCoalaAreaController::cleanup();
}

double
ACoalaController::GetElevationScale()
{
	return ACoalaController::_elevationScale * ACoalaController::_coalaScale;
}

double
ACoalaController::GetCoalaScale()
{
	return ACoalaController::_coalaScale;
}

ACoalaAreaActor*
ACoalaController::spawnActorForArea( UCoalaArea* area )
{
	assert( area->sceneObject == 0 && "There is something in the sceneObject" );
	// analyse when assert hit, if the below lines are a valid solution:
	if( area->sceneObject )
		return area->sceneObject;

	auto itFind = this->_allAreaActors.find( area );
	if( itFind == this->_allAreaActors.end() )
	{
		const FVector areaPositionInScene = UCoalaGpsConverterFunctionLibrary::ToScenePosition(
			area->props.bounds.left,
			area->props.bounds.top
		);

		ACoalaAreaActor* newSpawn = this->GetWorld()->SpawnActor<ACoalaAreaActor>(
			areaPositionInScene,
			FRotator::ZeroRotator
		);

		this->_allAreaActors[area] = newSpawn;

		newSpawn->_areaData = area;
		area->sceneObject = newSpawn;

		return newSpawn;
	}
	else
	{
		ACoalaAreaActor* oldFromMemory = itFind->second;
		return oldFromMemory;
	}
}
