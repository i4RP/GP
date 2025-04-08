// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"

#include "Net/CoalaNetGpsBounds.h"
#include "Net/CoalaNetRemotePlayerData.h"

#include <utility>
#include "CoalaPlayerRequestResponseProcessor.generated.h"

USTRUCT( BlueprintType )
struct FCoalaRemotePlayerData
{
	GENERATED_BODY()

	UPROPERTY( BlueprintReadWrite, Category = "Coala|Response processor" )
	FString payload;

	UPROPERTY( BlueprintReadWrite, Category = "Coala|Response processor" )
	FString id;	
};

USTRUCT()
struct FCoalaRemotePlayerDataExtended
{
	GENERATED_BODY()
	
	FCoalaRemotePlayerData remotePlayerData;
	CoalaTimestamp timestamp;
	FCoalaGPSCoordinates gpsPosition;

	UPROPERTY()
	AActor* spawnedPlayerActor = 0;	
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams( FCoalaPlayerDelegate, const FCoalaRemotePlayerData&, playerData, AActor*, player );
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams( FCoalaPlayerUpdatedDelegate, const FCoalaRemotePlayerData&, playerData, AActor*, player, const FVector &, newWorldPosition );


struct FCoalaPlayerRequestResponseProcessor
{
	public:
		void ProcessPlayerResponse( TArray<FCoalaRemotePlayerDataExtended>& playerListToUpdate, const FString &response, UClass* playerActorClass, UWorld* worldToSpawnPlayersIn, const FCoalaPlayerDelegate& onNewPlayerAdded, const FCoalaPlayerUpdatedDelegate& onUpdatePlayer, const FCoalaPlayerDelegate& onPlayerBeginRemoval );
				
			private: bool ReadReceivedPlayersFromJson( const FString& response );

			void DetermineActionsForPlayerData( const TArray<FCoalaRemotePlayerDataExtended>& currentPlayerList );
	
			void ApplyChangesToCurrentPlayers(  TArray<FCoalaRemotePlayerDataExtended>& currentPlayers );
			   		
			void AddNewPlayersToCurrent( TArray<FCoalaRemotePlayerDataExtended>& currentPlayers );

			void ApplyCurrentPlayerChangesToPlayerActors( TArray<FCoalaRemotePlayerDataExtended>& currentPlayers, const FCoalaPlayerUpdatedDelegate& onUpdatePlayer );

			void SpawnNewPlayerActors( TArray<FCoalaRemotePlayerDataExtended>& currentPlayers, int offsetToNewPlayersInPlayers, UClass* playerActorClass, UWorld* worldToSpawnIn, const FCoalaPlayerDelegate& onNewPlayerAdded ) const;

			void DeleteRemovedPlayerFromCurrent( TArray<FCoalaRemotePlayerDataExtended>& currentPlayers, const FCoalaPlayerDelegate& onPlayerBeginRemoval );
		

	private:	
		TArray<FCoalaNetRemotePlayerData> receivedPlayers;
	
		TMap<FString, int32> idToCurrentPlayerLookup;

		TMap<FString, int32> idToReceivedPlayerLookup;

		TArray<int32> currentPlayerIndexForReceived;

		TArray<int32> receivedPlayerIndexForCurrent;

		TArray<int32> receivedPlayersToAdd;

		TArray<std::pair<int32, int32>> validCurrentPlayerToReceivedPlayerMatches;

		TArray<int32> currentPlayersToRemove;
};