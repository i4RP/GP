// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"

#include "Net/CoalaNetRemotePlayerData.h"
#include "Net/CoalaNetGpsBounds.h"
#include "CoalaPlayerVisibility.h"
#include "CoalaPlayerRequestResponseProcessor.h"

#include "Subsystems/WorldSubsystem.h"
#include <utility>
#include "CoalaPlayerReplication.generated.h"


struct FCoalaLocalPlayerData
{
	FString id;
	FCoalaGPSCoordinates gpsPosition;
	CoalaTimestamp timestamp;
	FString payload;
};

class FCoalaArchive& Serialize(FCoalaArchive& archive, FCoalaLocalPlayerData &playerData);


struct FCoalaNetMultiplayerRequestContent
{
	FCoalaLocalPlayerData localPlayerData;
	ECoalaPlayerVisibility visibility;
	FCoalaNetGpsBounds areaInWhichToRequestRemotePlayers;
};

class FCoalaArchive& Serialize(FCoalaArchive& archive, FCoalaNetMultiplayerRequestContent &request);


UCLASS()
class UCoalaPlayerReplication
: public UWorldSubsystem
{
	GENERATED_BODY()

	public:
		UPROPERTY( BlueprintAssignable, Category = "Coala|Clients on Map" )
		FCoalaPlayerDelegate onNewPlayerAdded;

		UPROPERTY( BlueprintAssignable, Category = "Coala|Clients on Map" )
		FCoalaPlayerUpdatedDelegate onUpdatePlayer;
	
		UPROPERTY( BlueprintAssignable, Category = "Coala|Clients on Map" )
		FCoalaPlayerDelegate onPlayerBeginRemoval;

		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Clients on Map" )
		TSoftClassPtr<AActor> playerActorClass;
	
		UCoalaPlayerReplication();

		virtual void Initialize( FSubsystemCollectionBase& Collection ) override;

		virtual void Deinitialize() override;

		UFUNCTION( BlueprintCallable, Category = "Coala|Clients on Map" )
		void SetLocalPlayerId( const FString& playerId );

		UFUNCTION( BlueprintCallable, Category = "Coala|Clients on Map" )
		void SetLocalPlayerPayload( const FString& payload );
		
		UFUNCTION( BlueprintCallable, Category = "Coala|Clients on Map" )
		void SetLocalPlayerCurrentLevelPosition( const FVector& position );

		UFUNCTION( BlueprintCallable, Category = "Coala|Clients on Map" )
		void SetDisplayRangeOfRemotePlayers( int xHalfExtentsInMeters, int yHalfExtentsInMeters, bool useLocalPlayerAsCenter = true );

		UFUNCTION( BlueprintCallable, Category = "Coala|Clients on Map" )
		void SetExplicitRequestRangeCenter( const FVector& worldPosition );
	
		UFUNCTION( BlueprintCallable, Category = "Coala|Clients on Map" )
		void SetLocalPlayerVisibility( ECoalaPlayerVisibility newVisibility );

		UFUNCTION( BlueprintCallable, Category = "Coala|Clients on Map" )
		void SetPlayerRefreshTimes( float minimumSecondsBetweenRefreshes, float maximumSecondsBetweenRefreshes );

		UFUNCTION( BlueprintCallable, Category = "Coala|Clients on Map" )
		void SetPlayerRefreshTimesWhenAlone( float minimumSecondsBetweenRefreshes, float maximumSecondsBetweenRefreshes );

		UFUNCTION( BlueprintCallable, Category = "Coala|Clients on Map" )
		void SetSystemEnabled( bool shouldBeEnabled );
			
		UFUNCTION( BlueprintCallable, Category = "Coala|Clients on Map" )
		void ClearAllDisplayedRemotePlayers( bool notifyBlueprintEvents = true );

		UFUNCTION( BlueprintCallable, Category = "Coala|Clients on Map" )
		const FCoalaRemotePlayerData &GetCurrentRemotePlayerAt( int atIndex ) const;

		UFUNCTION( BlueprintCallable, Category = "Coala|Clients on Map" )
		AActor* GetSpawnedRemotePlayerActor( int atIndex );
	
		UFUNCTION( BlueprintCallable, Category = "Coala|Clients on Map" )
		int GetNumCurrentRemotePlayers() const;

		void SetAutoRefreshEnabled(bool shouldBeEnabled);
	
		UFUNCTION( BlueprintCallable, Category = "Coala|Clients on Map" )
		void ScheduleRemotePlayerRefresh(bool forceRefreshRequest = false);
			
		void SendPlayerRequest( FCoalaNetMultiplayerRequestContent& requestContent, class UBluePrintHttpGetRequest* eventReceiver );
	
		UFUNCTION()
		void OnRefreshResponeReceived( FString response );

		UFUNCTION()
		void OnErrorResponeReceived( FString response );
					
		UFUNCTION( Exec, Category = "Coala|Clients on Map", Meta = (DevelopmentOnly) )
		void TestReceivePlayerReplication();

		UFUNCTION( Exec, Category = "Coala|Clients on Map" )
		void StressTestPlayerReplication();

	private:

		void SetRefreshTimer();
		void OnRefreshTimerInvoked();
		
		void TestReceivePlayerReplicationUpdate();
		bool ShouldAbortRefresh() const;

		void UpdatePlayerRequestArea();

		UPROPERTY()
		TArray<FCoalaRemotePlayerDataExtended> currentPlayers;
	
		FCoalaNetMultiplayerRequestContent currentRequestContent;

		FCoalaPlayerRequestResponseProcessor responseProcessor;

		bool isSystemEnabled;
	
		float minSecondsBetweenPlayerRefresh;

		float maxSecondsBetweenPlayerRefresh;
		
		float minSecondsBetweenPlayerRefreshWhenAlone;

		float maxSecondsBetweenPlayerRefreshWhenAlone;

		float lastSuccessfulRefreshTime;

		FTimerHandle maxRefreshTimer;

		UPROPERTY()
		FCoalaGPSCoordinates requestRangeHalfExtents;

		UPROPERTY()
		FCoalaGPSCoordinates explicitRequestCenter;

		bool localPlayerIsRequestCenter;

		bool isAutoRefreshEnabled;
};

