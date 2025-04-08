// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaPlayerReplication.h"
#include "BluePrintHttpGetRequest.h"
#include "CoalaArchive.h"
#include "CoalaAreaController.h"
#include "CoalaBlueprintUtility.h"
#include "CoalaJsonReader.h"
#include "CoalaJsonWriter.h"
#include "CoalaLogCore.h"
#include "CoalaPluginBlueprintLibrary.h"
#include "CoalaController.h"

#include "TimerManager.h"
#include "Engine/World.h"
#include "Net/CoalaUrl.h"
#include "Engine/Engine.h"

FCoalaArchive&
Serialize( FCoalaArchive& archive, FCoalaLocalPlayerData& playerData )
{
	return archive
		.DeclareValue( TEXT( "id" ) ).Serialize( playerData.id )
		.DeclareValue( TEXT( "lon" ) ).Serialize( playerData.gpsPosition.lon )
		.DeclareValue( TEXT( "lat" ) ).Serialize( playerData.gpsPosition.lat )
		.DeclareValue( TEXT( "payload" ) ).Serialize( playerData.payload );
}

FCoalaArchive&
Serialize( FCoalaArchive& archive, FCoalaNetMultiplayerRequestContent& request )
{
	auto visibility{ static_cast<std::underlying_type_t<decltype(request.visibility)>>(request.visibility) };

	archive
		.DeclareObject( TEXT( "coala_client_data" ) )
		.Serialize( request.localPlayerData )
		.LeaveObject()
		.DeclareValue( TEXT( "visible" ) ).Serialize( visibility )
		.DeclareObject( TEXT( "bounds" ) )
		.Serialize( request.areaInWhichToRequestRemotePlayers )
		.LeaveObject();

	request.visibility = static_cast<decltype(request.visibility)>(visibility);

	return archive;
}

UCoalaPlayerReplication::UCoalaPlayerReplication()
{
	isSystemEnabled = false;
	minSecondsBetweenPlayerRefresh = 30;
	maxSecondsBetweenPlayerRefresh = 120;
	minSecondsBetweenPlayerRefreshWhenAlone = 60;
	maxSecondsBetweenPlayerRefreshWhenAlone = 240;
	lastSuccessfulRefreshTime = 0;
	localPlayerIsRequestCenter = true;
	isAutoRefreshEnabled = true;

	requestRangeHalfExtents.lon = 0.015;
	requestRangeHalfExtents.lat = 0.015;

	currentRequestContent.localPlayerData.gpsPosition = FCoalaGPSCoordinates( 0, 0 );
}

void
UCoalaPlayerReplication::Initialize( FSubsystemCollectionBase& Collection )
{
	GetWorld()->OnWorldBeginPlay.AddUObject( this, &UCoalaPlayerReplication::SetRefreshTimer );
}

void
UCoalaPlayerReplication::SetRefreshTimer()
{
	const auto frequency{ currentPlayers.Num() > 0 ? maxSecondsBetweenPlayerRefresh : maxSecondsBetweenPlayerRefreshWhenAlone };
	GetWorld()->GetTimerManager().SetTimer( maxRefreshTimer, this, &UCoalaPlayerReplication::OnRefreshTimerInvoked, frequency, true );
}

void
UCoalaPlayerReplication::OnRefreshTimerInvoked()
{
	if( !isAutoRefreshEnabled ) return;
	ScheduleRemotePlayerRefresh();
}

void
UCoalaPlayerReplication::Deinitialize()
{
	GetWorld()->GetTimerManager().ClearTimer( maxRefreshTimer );
}

void
UCoalaPlayerReplication::SetLocalPlayerId( const FString& playerId )
{
	currentRequestContent.localPlayerData.id = playerId;
}

void
UCoalaPlayerReplication::SetLocalPlayerPayload( const FString& payload )
{
	currentRequestContent.localPlayerData.payload = payload;
}

void
UCoalaPlayerReplication::SetLocalPlayerCurrentLevelPosition( const FVector& position )
{
	FCoalaGPSCoordinates pos = UCoalaGPSCoordinatesBlueprintLibrary::WorldPositionToGpsCoordinates( position );
	currentRequestContent.localPlayerData.gpsPosition = pos;

	UpdatePlayerRequestArea();
}

void
UCoalaPlayerReplication::UpdatePlayerRequestArea()
{
	if( localPlayerIsRequestCenter )
	{
		currentRequestContent.areaInWhichToRequestRemotePlayers.min = FCoalaGPSCoordinates(
			currentRequestContent.localPlayerData.gpsPosition.lon - requestRangeHalfExtents.lon,
			currentRequestContent.localPlayerData.gpsPosition.lat - requestRangeHalfExtents.lat
		);

		currentRequestContent.areaInWhichToRequestRemotePlayers.max = FCoalaGPSCoordinates(
			currentRequestContent.localPlayerData.gpsPosition.lon + requestRangeHalfExtents.lon,
			currentRequestContent.localPlayerData.gpsPosition.lat + requestRangeHalfExtents.lat
		);
	}
	else
	{
		currentRequestContent.areaInWhichToRequestRemotePlayers.min = FCoalaGPSCoordinates(
			explicitRequestCenter.lon - requestRangeHalfExtents.lon,
			explicitRequestCenter.lat - requestRangeHalfExtents.lat
		);

		currentRequestContent.areaInWhichToRequestRemotePlayers.max = FCoalaGPSCoordinates(
			explicitRequestCenter.lon + requestRangeHalfExtents.lon,
			explicitRequestCenter.lat + requestRangeHalfExtents.lat
		);
	}
}

void
UCoalaPlayerReplication::SetDisplayRangeOfRemotePlayers(
	const int xHalfExtentsInMeters,
	const int yHalfExtentsInMeters,
	const bool useLocalPlayerAsCenter )
{
	localPlayerIsRequestCenter = useLocalPlayerAsCenter;

	requestRangeHalfExtents = UCoalaGPSCoordinatesBlueprintLibrary::WorldPositionToGpsCoordinates(
		FVector(
			static_cast<float>(xHalfExtentsInMeters),
			static_cast<float>(yHalfExtentsInMeters),
			0
		)
	);

	requestRangeHalfExtents.lon = FMath::Abs( requestRangeHalfExtents.lon - ACoalaController::GetGpsOffset().lon );
	requestRangeHalfExtents.lat = FMath::Abs( requestRangeHalfExtents.lat - ACoalaController::GetGpsOffset().lat);

//#if UE_BUILD_DEVELOPMENT
//	FString msg = FString::Printf( TEXT( "DEBUG: x=%i y=%i requestRangeHalfExtents lon=%f lat=%f" ), xHalfExtentsInMeters, yHalfExtentsInMeters, requestRangeHalfExtents->lon, requestRangeHalfExtents->lat );
//	UE_LOG( CoalaLogCore, Error, TEXT( "%s" ), *msg );
//	GEngine->AddOnScreenDebugMessage( INDEX_NONE, 20.0f, FColor::Black, msg, false );
//#endif

	UpdatePlayerRequestArea();
}

void
UCoalaPlayerReplication::SetExplicitRequestRangeCenter( const FVector& worldPosition )
{
	explicitRequestCenter = UCoalaGPSCoordinatesBlueprintLibrary::WorldPositionToGpsCoordinates( worldPosition );
}

void
UCoalaPlayerReplication::SetLocalPlayerVisibility( const ECoalaPlayerVisibility newVisibility )
{
	currentRequestContent.visibility = newVisibility;
}

void
UCoalaPlayerReplication::SetPlayerRefreshTimes(
	const float minimumSecondsBetweenRefreshes,
	const float maximumSecondsBetweenRefreshes )
{
	maxSecondsBetweenPlayerRefresh = FMath::Max( 1.f, maximumSecondsBetweenRefreshes );
	minSecondsBetweenPlayerRefresh = FMath::Clamp( minimumSecondsBetweenRefreshes, 1.f, maxSecondsBetweenPlayerRefresh );

	SetRefreshTimer();
}

void
UCoalaPlayerReplication::SetPlayerRefreshTimesWhenAlone(
	const float minimumSecondsBetweenRefreshes,
	const float maximumSecondsBetweenRefreshes )
{
	maxSecondsBetweenPlayerRefreshWhenAlone = FMath::Max( 1.f, maximumSecondsBetweenRefreshes );
	minSecondsBetweenPlayerRefreshWhenAlone = FMath::Clamp( minimumSecondsBetweenRefreshes, 1.f, maxSecondsBetweenPlayerRefresh );

	SetRefreshTimer();
}

void
UCoalaPlayerReplication::SetSystemEnabled( const bool shouldBeEnabled )
{
	if( isSystemEnabled )
	{
		if( !shouldBeEnabled )
		{
			ClearAllDisplayedRemotePlayers( true );
		}
	}

	isSystemEnabled = shouldBeEnabled;
}

void
UCoalaPlayerReplication::ClearAllDisplayedRemotePlayers( const bool notifyBlueprintEvents )
{
	if( notifyBlueprintEvents && onPlayerBeginRemoval.IsBound() )
	{
		for( auto& player : currentPlayers )
		{
			onPlayerBeginRemoval.Broadcast( player.remotePlayerData, player.spawnedPlayerActor );
		}
	}

	for( auto& player : currentPlayers )
	{
		if( player.spawnedPlayerActor ) player.spawnedPlayerActor->Destroy();
	}

	currentPlayers.Reset();
}

const FCoalaRemotePlayerData&
UCoalaPlayerReplication::GetCurrentRemotePlayerAt( const int atIndex ) const
{
	return currentPlayers[atIndex].remotePlayerData;
}

AActor*
UCoalaPlayerReplication::GetSpawnedRemotePlayerActor( const int atIndex )
{
	return currentPlayers[atIndex].spawnedPlayerActor;
}

int
UCoalaPlayerReplication::GetNumCurrentRemotePlayers() const
{
	return currentPlayers.Num();
}

void
UCoalaPlayerReplication::ScheduleRemotePlayerRefresh( const bool forceRefreshRequest )
{
	if( ShouldAbortRefresh() && !forceRefreshRequest )
		return;

	UBluePrintHttpGetRequest* eventHandler = NewObject<UBluePrintHttpGetRequest>();
	eventHandler->OnSuccess.AddDynamic( this, &UCoalaPlayerReplication::OnRefreshResponeReceived );
	eventHandler->OnError.AddDynamic( this, &UCoalaPlayerReplication::OnErrorResponeReceived );

	if( currentRequestContent.localPlayerData.id.IsEmpty() )
	{
#if UE_BUILD_DEVELOPMENT
		FString msg = FString::Printf( TEXT( "You are trying to send a remote player request without providing a local player id. Please implement a platform independent player identification or disable the multiplayer system." ) );
		UE_LOG( CoalaLogCore, Error, TEXT( "%s" ), *msg );
		GEngine->AddOnScreenDebugMessage( INDEX_NONE, 20.0f, FColor::Red, msg, false );
#endif
		return;
	}

	if( currentRequestContent.localPlayerData.gpsPosition.lon == 0
		|| currentRequestContent.localPlayerData.gpsPosition.lat == 0 )
	{
#if UE_BUILD_DEVELOPMENT
		FString msg = FString::Printf( TEXT( "CoalaPlayerReplication - schedule refresh aborted because GPS pos is invalide (zero zero)" ) );
		UE_LOG( LogTemp, Warning, TEXT( "%s" ), *msg );
		GEngine->AddOnScreenDebugMessage( INDEX_NONE, 20.0f, FColor::Red, msg, false );
#endif
		return;
	}

	SendPlayerRequest( currentRequestContent, eventHandler );
}

bool
UCoalaPlayerReplication::ShouldAbortRefresh() const
{
	if( !isSystemEnabled )
		return true;

	const auto timeSinceLastRefresh{ GetWorld()->GetRealTimeSeconds() - lastSuccessfulRefreshTime };
	if( currentPlayers.Num() > 0 )
	{
		if( minSecondsBetweenPlayerRefresh >= timeSinceLastRefresh )
			return true;
	}
	else
	{
		if( minSecondsBetweenPlayerRefreshWhenAlone >= timeSinceLastRefresh )
			return true;
	}

	return false;
}

void
UCoalaPlayerReplication::SendPlayerRequest( FCoalaNetMultiplayerRequestContent& requestContent, UBluePrintHttpGetRequest* eventReceiver )
{
	FCoalaJsonWriter<> writer;

	writer
		.DeclareObject()
		.Serialize( requestContent )
		.LeaveObject()
		.Close();

	if( writer.NotClosedSuccessfully() )
	{
#if UE_BUILD_DEVELOPMENT
		FString msg = FString::Printf( TEXT( "Could not write current multiplayer request for player refresh to JSON." ) );
		UE_LOG( LogTemp, Warning, TEXT( "%s" ), *msg );
		GEngine->AddOnScreenDebugMessage( INDEX_NONE, 20.0f, FColor::Red, msg, false );
#endif
		return;
	}

//#if UE_BUILD_DEVELOPMENT
//	FString msg = FString::Printf( TEXT( "CoalaPlayerReplication - SendPlayerRequest" ) );
//	UE_LOG( LogTemp, Warning, TEXT( "%s" ), *msg );
//	GEngine->AddOnScreenDebugMessage( INDEX_NONE, 20.0f, FColor::Red, msg, false );
//#endif

	UBluePrintHttpGetRequest::CreateAndDispatchPostRequest(
		Coala::GetBaseUrl() + TEXT( "/thoughtfish/coala/map/sync/clients?api_key=" ) + ACoalaController::Instance->CoalaProjectApiKey,
		writer.GetWrittenJsonString(),
		eventReceiver );
}

void
UCoalaPlayerReplication::OnErrorResponeReceived( FString response )
{
	UE_LOG( LogTemp, Warning, TEXT( "UCoalaPlayerReplication::OnErrorResponeReceived: %s" ), *response );
}

void
UCoalaPlayerReplication::OnRefreshResponeReceived( FString response )
{
//#if UE_BUILD_DEVELOPMENT
//	FString msg = FString::Printf( TEXT( "CoalaPlayerReplication - OnRefreshResponeReceived" ) );
//	UE_LOG( LogTemp, Warning, TEXT( "%s" ), *msg );
//	GEngine->AddOnScreenDebugMessage( INDEX_NONE, 20.0f, FColor::Red, msg, false );
//#endif

	UClass* classToSpawn( Coala::SafeLoadSoftClassPtr( playerActorClass ) );
	if( !classToSpawn )
	{
#if UE_BUILD_DEVELOPMENT
		FString msg = FString::Printf( TEXT( "No custom remote player class configured, using fallback instead" ) );
		UE_LOG( LogTemp, Warning, TEXT( "%s" ), *msg );
		GEngine->AddOnScreenDebugMessage( INDEX_NONE, 20.0f, FColor::Red, msg, false );
#endif
		classToSpawn = AActor::StaticClass();
	}

	const int oldPlayerNum = currentPlayers.Num();
	{
		TRACE_CPUPROFILER_EVENT_SCOPE( TEXT( "UCoalaPlayerReplication::OnRefreshResponseReceived" ) );
		responseProcessor.ProcessPlayerResponse( currentPlayers, response, classToSpawn, GetWorld(), onNewPlayerAdded, onUpdatePlayer, onPlayerBeginRemoval );
	}

	if( oldPlayerNum == 0 && currentPlayers.Num() )
	{
		SetRefreshTimer();
	}

	if( oldPlayerNum > 0 && currentPlayers.Num() == 0 )
	{
		SetRefreshTimer();
	}

	lastSuccessfulRefreshTime = GetWorld()->GetRealTimeSeconds();
}

void
UCoalaPlayerReplication::TestReceivePlayerReplication()
{
	const FString TestJson
	{
		TEXT( "[\r\n\t{\r\n\t\t\"id\":\"18FFF2F19A8372238B5992E1775AC10165FC18035026C5A885580911FD20388E\",\r\n\t\t\"lon\":13.40196,\r\n\t\t\"lat\":52.510,\r\n\t\t\"payload\":\"{\\\"username\\\": \\\"Simulated User (3)\\\"}\"\r\n\t},\r\n\t{\r\n\t\t\"id\":\"4B0C0094D38B82A372FDA2DAB34DBE104C450A607EEACD7A55E3554BFFE0B790\",\r\n\t\t\"lon\":13.39628,\r\n\t\t\"lat\":52.5198,\r\n\t\t\"payload\":\"{\\\"username\\\": \\\"Simulated User (1)\\\"}\"\r\n\t},\r\n\t{\r\n\t\t\"id\":\"9CF49A3242C6ACF81EFAFD91BAF670D07A0446B10C65EBD25601E9A1B08602C8\",\r\n\t\t\"lon\":13.39828,\r\n\t\t\"lat\":52.5078,\r\n\t\t\"payload\":\"{\\\"username\\\": \\\"Simulated User (2)\\\"}\"\r\n\t},\r\n\t\t{\r\n\t\t\"id\":\"0ee6dff512e0a76d47bee3f3a83c6a2bbf541b0aa71e3a58c3c6b69c30eee377\",\r\n\t\t\"lon\":13.3697,\r\n\t\t\"lat\":52.5198,\r\n\t\t\"payload\":\"{\\\"username\\\": \\\"Simulated User (4)\\\"}\"\r\n\t},\r\n\t{\r\n\t\t\"id\":\"f8283ad060bf5a1b259ffc6b7cf33119d84386b6b5d25263d17bc65760cd1656\",\r\n\t\t\"lon\":13.3810,\r\n\t\t\"lat\":52.5168,\r\n\t\t\"payload\":\"{\\\"username\\\": \\\"Simulated User (5)\\\"}\"\r\n\t},\r\n\t\t{\r\n\t\t\"id\":\"62440501bcfcb5116031c31db0b45153db1c8d2cd14f991404316abcecf0da85\",\r\n\t\t\"lon\":13.4068,\r\n\t\t\"lat\":52.5098,\r\n\t\t\"payload\":\"{\\\"username\\\": \\\"Simulated User (6)\\\"}\"\r\n\t}\r\n]" )
	};

	OnRefreshResponeReceived( TestJson );

	FTimerHandle timerHandle{};
	GetWorld()->GetTimerManager().SetTimer( timerHandle, this, &UCoalaPlayerReplication::TestReceivePlayerReplicationUpdate, 3 );
}

void
UCoalaPlayerReplication::TestReceivePlayerReplicationUpdate()
{
	const FString updateTestJson
	{
		TEXT( "[\r\n\t{\r\n\t\t\"id\":\"18FFF2F19A8372238B5992E1775AC10165FC18035026C5A885580911FD20388E\",\r\n\t\t\"lon\":13.40206,\r\n\t\t\"lat\":52.500,\r\n\t\t\"payload\":\"{\\\"username\\\": \\\"Simulated User (3)\\\"}\"\r\n\t},\r\n\t{\r\n\t\t\"id\":\"4B0C0094D38B82A372FDA2DAB34DBE104C450A607EEACD7A55E3554BFFE0B790\",\r\n\t\t\"lon\":13.39928,\r\n\t\t\"lat\":52.5238,\r\n\t\t\"payload\":\"{\\\"username\\\": \\\"Simulated User (1)\\\"}\"\r\n\t},\r\n\t{\r\n\t\t\"id\":\"9CF49A3242C6ACF81EFAFD91BAF670D07A0446B10C65EBD25601E9A1B08602C8\",\r\n\t\t\"lon\":13.39428,\r\n\t\t\"lat\":52.5048,\r\n\t\t\"payload\":\"{\\\"username\\\": \\\"Simulated User (2)\\\"}\"\r\n\t},\r\n\t\t{\r\n\t\t\"id\":\"62440501bcfcb5116031c31db0b45153db1c8d2cd14f991404316abcecf0da85\",\r\n\t\t\"lon\":13.4088,\r\n\t\t\"lat\":52.5078,\r\n\t\t\"payload\":\"{\\\"username\\\": \\\"Simulated User (6)\\\"}\"\r\n\t},\r\n\t\t{\r\n\t\t\"id\":\"62440501bcfcb511603db0b45153db1c8d2446B10C65EBD25601E9A1B08602C8\",\r\n\t\t\"lon\":13.4108,\r\n\t\t\"lat\":52.5088,\r\n\t\t\"payload\":\"{\\\"username\\\": \\\"Simulated User (7)\\\"}\"\r\n\t}\r\n]" )
	};

	OnRefreshResponeReceived( updateTestJson );
}

void
UCoalaPlayerReplication::StressTestPlayerReplication()
{
	TRACE_BOOKMARK( TEXT( "StressTestPlayerReplication" ) );

	TArray<FCoalaNetRemotePlayerData> fakeRemotePlayers;
	fakeRemotePlayers.SetNum( 500 );
	const FString firstSalt{ TEXT( "a26b45f21a4cc545fe372cb997cfd1cc" ) };
	for( auto playerIndex{ 0 }; playerIndex < fakeRemotePlayers.Num(); ++playerIndex )
	{
		auto& fakePlayer{ fakeRemotePlayers[playerIndex] };

		fakePlayer.id = FString::FromInt( playerIndex ) + firstSalt;
		fakePlayer.payload = {};
		fakePlayer.longitude = FMath::RandRange( 
			static_cast<float>(currentRequestContent.areaInWhichToRequestRemotePlayers.min.lon),
			static_cast<float>(currentRequestContent.areaInWhichToRequestRemotePlayers.max.lon)
		);
		fakePlayer.latitude = FMath::RandRange( 
			static_cast<float>(currentRequestContent.areaInWhichToRequestRemotePlayers.min.lat), 
			static_cast<float>(currentRequestContent.areaInWhichToRequestRemotePlayers.max.lat)
		);
		fakePlayer.timestamp = 0;
	}

	FCoalaJsonWriter<> writer{};
	writer.DeclareArray();
	for( auto& fakePlayer : fakeRemotePlayers )
	{
		writer.DeclareObject().Serialize( fakePlayer ).LeaveObject();
	}
	writer.LeaveArray().Close();

	checkf( !writer.NotClosedSuccessfully(), TEXT( "Could not close test writer." ) );

	OnRefreshResponeReceived( writer.GetWrittenJsonString() );

	//indices of the players to overwrite with new players (which will entail num insertions of new and num deletions of old players)
	int32 newPlayerOverwrites[]{ 481, 182, 291, 266, 92, 259, 133, 134, 85, 274, 218, 80, 143, 408, 96, 356, 263, 223, 374, 226, 333, 397, 196, 286, 123, 311, 421, 406, 38, 45, 337, 220, 120, 25, 298, 447, 387, 127, 236, 455, 114, 310, 390, 42, 188, 229, 81, 260, 395, 46, 136, 389, 84, 317, 325, 482, 66, 244, 411, 173, 281, 191, 418, 490, 313, 254, 401, 478, 52, 108, 129, 24, 378, 265, 105, 249, 476, 375, 176, 339, 23, 413, 391, 427, 216, 98, 269, 178, 370, 414, 20, 213, 126, 463, 345, 385, 184, 328, 442, 450, 230, 221, 214, 399, 128, 257, 460, 12, 475, 305, 175, 483, 349, 398, 246, 383, 301, 79, 174, 409 };

	//will entail change events
	int32 playersToChange[]{ 138, 3, 367, 239, 247, 33, 261, 432, 405, 179, 140, 308, 5, 209, 29, 341, 301, 199, 315, 316, 303, 272, 300, 107, 499, 428, 433, 332, 100, 40, 30, 99, 137, 17, 13, 225, 273, 358, 369, 417, 21, 384, 258, 363, 487, 449, 458, 434, 392 };

	for( auto changeIndex : playersToChange )
	{
		auto& fakePlayer{ fakeRemotePlayers[changeIndex] };

		fakePlayer.longitude = FMath::RandRange( 
			static_cast<float>(currentRequestContent.areaInWhichToRequestRemotePlayers.min.lon), 
			static_cast<float>(currentRequestContent.areaInWhichToRequestRemotePlayers.max.lon)
		);
		fakePlayer.latitude = FMath::RandRange(
			static_cast<float>(currentRequestContent.areaInWhichToRequestRemotePlayers.min.lat),
			static_cast<float>(currentRequestContent.areaInWhichToRequestRemotePlayers.max.lat)
		);
	}

	const FString secondSalt{ TEXT( "d0ab7c8374fac47b306328a46c75f0c2" ) };
	for( auto updateIndex : newPlayerOverwrites )
	{
		auto& fakePlayer{ fakeRemotePlayers[updateIndex] };

		fakePlayer.id = FString::FromInt( updateIndex ) + secondSalt;
		fakePlayer.payload = {};
		fakePlayer.longitude = FMath::RandRange( 
			static_cast<float>(currentRequestContent.areaInWhichToRequestRemotePlayers.min.lon),
			static_cast<float>(currentRequestContent.areaInWhichToRequestRemotePlayers.max.lon)
		);
		fakePlayer.latitude = FMath::RandRange( 
			static_cast<float>(currentRequestContent.areaInWhichToRequestRemotePlayers.min.lat),
			static_cast<float>(currentRequestContent.areaInWhichToRequestRemotePlayers.max.lat)
		);
		fakePlayer.timestamp = 0;
	}

	writer.Reset();

	writer.DeclareArray();
	for( auto& fakePlayer : fakeRemotePlayers )
	{
		writer.DeclareObject().Serialize( fakePlayer ).LeaveObject();
	}
	writer.LeaveArray().Close();

	checkf( !writer.NotClosedSuccessfully(), TEXT( "Could not close test writer." ) );

	OnRefreshResponeReceived( writer.GetWrittenJsonString() );

}
