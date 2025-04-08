// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaPlayerRequestResponseProcessor.h"
#include "CoalaAreaController.h"
#include "CoalaConverter.h"
#include "CoalaJsonReader.h"
#include "CoalaTableUtility.h"
#include "Engine/World.h"

void
FCoalaPlayerRequestResponseProcessor::ProcessPlayerResponse(
	TArray<FCoalaRemotePlayerDataExtended>& playerListToUpdate,
	const FString& response,
	UClass* const playerActorClass,
	UWorld* const worldToSpawnPlayersIn,
	const FCoalaPlayerDelegate& onNewPlayerAdded,
	const FCoalaPlayerUpdatedDelegate& onUpdatePlayer,
	const FCoalaPlayerDelegate& onPlayerBeginRemoval )
{
	if( ReadReceivedPlayersFromJson( response ) )
		return;

	DetermineActionsForPlayerData( playerListToUpdate );

	ApplyChangesToCurrentPlayers( playerListToUpdate );

	const int oldPlayerCount = playerListToUpdate.Num();
	AddNewPlayersToCurrent( playerListToUpdate );

	//Call out into blueprint vm in an extra loop to keep caches clean
	ApplyCurrentPlayerChangesToPlayerActors( playerListToUpdate, onUpdatePlayer );

	SpawnNewPlayerActors( playerListToUpdate, oldPlayerCount, playerActorClass, worldToSpawnPlayersIn, onNewPlayerAdded );

	//removing old players has to be done after everything else to not invalidate the join indices
	DeleteRemovedPlayerFromCurrent( playerListToUpdate, onPlayerBeginRemoval );
}

bool
FCoalaPlayerRequestResponseProcessor::ReadReceivedPlayersFromJson( const FString& response )
{
	FCoalaJsonReader<> reader(response);

	receivedPlayers.Reset();
	reader.DeclareArray();
	for( int index = 0; reader.ContinueArrayIteration( index, receivedPlayers.Num() ); ++index )
	{
		receivedPlayers.Emplace();
		reader.DeclareObject().Serialize( receivedPlayers[index] ).LeaveObject();
	}
	reader.LeaveArray();

	return reader.HasError();
}

void
FCoalaPlayerRequestResponseProcessor::DetermineActionsForPlayerData( const TArray<FCoalaRemotePlayerDataExtended>& currentPlayerList )
{
	TRACE_CPUPROFILER_EVENT_SCOPE( TEXT( "FCoalaPlayerRequestResponseProcessor::DetermineActionsForPlayerData" ) );

	Coala::MapKeyToKeyIndex( idToReceivedPlayerLookup, receivedPlayers, &FCoalaNetRemotePlayerData::id );

	const auto currentPlayerKeyAccessor{ []( const FCoalaRemotePlayerDataExtended& in )
{
return in.remotePlayerData.id;
} };
	Coala::MapKeyToKeyIndex( idToCurrentPlayerLookup, currentPlayerList, currentPlayerKeyAccessor );


	Coala::LookUpIndicesForTable( currentPlayerIndexForReceived, receivedPlayers, idToCurrentPlayerLookup, &FCoalaNetRemotePlayerData::id );
	Coala::LookUpIndicesForTable( receivedPlayerIndexForCurrent, currentPlayerList, idToReceivedPlayerLookup, currentPlayerKeyAccessor );


	Coala::FilterValues( receivedPlayersToAdd, currentPlayerIndexForReceived, []( int32 tableRowIndex, int32 tableContent )
	{
		return tableContent <= -1;
	} );
	Coala::FilterValues( currentPlayersToRemove, receivedPlayerIndexForCurrent, []( int32 tableRowIndex, int32 tableContent )
	{
		return tableContent <= -1;
	} );
	Coala::FilterValues
	(
		validCurrentPlayerToReceivedPlayerMatches,
		receivedPlayerIndexForCurrent,
		[&current = currentPlayerList, &received = receivedPlayers]( int32 currentIndex, int32 receivedIndex )
	{
		return receivedIndex > -1
			&& !(FMath::IsNearlyEqual( current[currentIndex].gpsPosition.lon, received[receivedIndex].longitude )
				  && FMath::IsNearlyEqual( current[currentIndex].gpsPosition.lat, received[receivedIndex].latitude ));
	},
		[]( int32 currentPlayerIndex, int32 receivedPlayerIndex )
	{
		return std::pair<int32, int32>( currentPlayerIndex, receivedPlayerIndex );
	}
	);

}

void
FCoalaPlayerRequestResponseProcessor::ApplyChangesToCurrentPlayers( TArray<FCoalaRemotePlayerDataExtended>& currentPlayers )
{
	TRACE_CPUPROFILER_EVENT_SCOPE( TEXT( "FCoalaPlayerRequestResponseProcessor::ApplyChangesToCurrentPlayers" ) );

	for( const auto& joinIndex : validCurrentPlayerToReceivedPlayerMatches )
	{
		FCoalaRemotePlayerDataExtended& dst = currentPlayers[joinIndex.first];
		FCoalaNetRemotePlayerData& src = receivedPlayers[joinIndex.second];

		dst.timestamp = src.timestamp;
		dst.gpsPosition.lat = src.latitude;
		dst.gpsPosition.lon = src.longitude;
		dst.remotePlayerData.payload = MoveTemp( src.payload );
	}
}

void
FCoalaPlayerRequestResponseProcessor::AddNewPlayersToCurrent( TArray<FCoalaRemotePlayerDataExtended>& currentPlayers )
{
	TRACE_CPUPROFILER_EVENT_SCOPE( TEXT( "FCoalaPlayerRequestResponseProcessor::AddNewPlayersToCurrent" ) );

	const auto originalPlayerCount{ currentPlayers.Num() };

	{
		TRACE_CPUPROFILER_EVENT_SCOPE( TEXT( "FCoalaPlayerRequestResponseProcessor::ApplyChangesToCurrentPlayers_MemAlloc" ) );
		Coala::EnsureArraySize( currentPlayers, originalPlayerCount + receivedPlayersToAdd.Num() );
	}
	for( int index = 0; index < receivedPlayersToAdd.Num(); ++index )
	{
		FCoalaRemotePlayerDataExtended& dst = currentPlayers[originalPlayerCount + index];
		FCoalaNetRemotePlayerData& src = receivedPlayers[receivedPlayersToAdd[index]];

		dst.timestamp = src.timestamp;
		dst.gpsPosition.lat = src.latitude;
		dst.gpsPosition.lon = src.longitude;
		dst.remotePlayerData.payload = MoveTemp( src.payload );
		dst.remotePlayerData.id = MoveTemp( src.id );
	}
}

void
FCoalaPlayerRequestResponseProcessor::ApplyCurrentPlayerChangesToPlayerActors( TArray<FCoalaRemotePlayerDataExtended>& currentPlayers, const FCoalaPlayerUpdatedDelegate& onUpdatePlayer )
{
	TRACE_CPUPROFILER_EVENT_SCOPE( TEXT( "FCoalaPlayerRequestResponseProcessor::ApplyCurrentPlayerChangesToPlayerActors" ) );

	if( !onUpdatePlayer.IsBound() )
		return;
	
	for( const auto& joinIndex : validCurrentPlayerToReceivedPlayerMatches )
	{
		FCoalaRemotePlayerDataExtended& player = currentPlayers[joinIndex.first];

		const FVector levelPos = player.gpsPosition.ToScenePosition();
//		const FVector posWithCorrectZ = CoalaConverter::ToTerrainPositionWithoutArea( levelPos, player.spawnedPlayerActor );

		onUpdatePlayer.Broadcast( player.remotePlayerData, player.spawnedPlayerActor, levelPos );
	}
}

void
FCoalaPlayerRequestResponseProcessor::SpawnNewPlayerActors( TArray<FCoalaRemotePlayerDataExtended>& currentPlayers, const int offsetToNewPlayersInPlayers, UClass* const playerActorClass, UWorld* const worldToSpawnIn, const FCoalaPlayerDelegate& onNewPlayerAdded ) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE( TEXT( "FCoalaPlayerRequestResponseProcessor::SpawnNewPlayerActors" ) );

	FActorSpawnParameters params{};
	params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	for( int index = 0; index < receivedPlayersToAdd.Num(); ++index )
	{
		FCoalaRemotePlayerDataExtended& newPlayer = currentPlayers[offsetToNewPlayersInPlayers + index];

		const FVector position = newPlayer.gpsPosition.ToScenePosition();

		{
			TRACE_CPUPROFILER_EVENT_SCOPE( TEXT( "FCoalaPlayerRequestResponseProcessor::SpawnNewPlayerActors_Spawn" ) );
			newPlayer.spawnedPlayerActor = worldToSpawnIn->SpawnActor( playerActorClass, &FTransform::Identity, params );
		}

#if WITH_EDITOR
		newPlayer.spawnedPlayerActor->SetFolderPath( "Coala/Players" );
#endif
		{
			TRACE_CPUPROFILER_EVENT_SCOPE( TEXT( "FCoalaPlayerRequestResponseProcessor::SpawnNewPlayerActors_TerrainPos" ) );
//			const auto posWithCorrectZ{ CoalaConverter::ToTerrainPositionWithoutArea( position, newPlayer.spawnedPlayerActor ) };
			newPlayer.spawnedPlayerActor->SetActorLocation( position );
		}
		onNewPlayerAdded.Broadcast( newPlayer.remotePlayerData, newPlayer.spawnedPlayerActor );
	}
}

void
FCoalaPlayerRequestResponseProcessor::DeleteRemovedPlayerFromCurrent( TArray<FCoalaRemotePlayerDataExtended>& currentPlayers, const FCoalaPlayerDelegate& onPlayerBeginRemoval )
{
	TRACE_CPUPROFILER_EVENT_SCOPE( TEXT( "FCoalaPlayerRequestResponseProcessor::DeleteRemovedPlayerFromCurrent" ) );

	currentPlayersToRemove.HeapSort( []( const int32& left, const int32& right )
	{
		return left > right;
	} );
	for( const auto removeAt : currentPlayersToRemove )
	{
		onPlayerBeginRemoval.Broadcast( currentPlayers[removeAt].remotePlayerData, currentPlayers[removeAt].spawnedPlayerActor );
		if( auto * actor{ currentPlayers[removeAt].spawnedPlayerActor } )
		{
			actor->Destroy();
		}
		currentPlayers.RemoveAtSwap( removeAt, 1, false );
	}
}