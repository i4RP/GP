// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaPlayerVisibility.h"
#include "Engine/DataAsset.h"

#include "CoalaPlayerReplicationConfig.generated.h"

UCLASS( Blueprintable )
class UCoalaPlayerReplicationConfig
: public UDataAsset
{
	GENERATED_BODY()

	public:		
		UPROPERTY( EditDefaultsOnly, Category = "Coala|Config|Clients on Map", BlueprintReadWrite, Meta = (ClampMin="0") )
		float minimumSecondsBetweenPlayerRefreshes{ 30 };

		UPROPERTY( EditDefaultsOnly, Category = "Coala|Config|Clients on Map", BlueprintReadWrite, Meta = (ClampMin="0") )
		float maximumSecondsBetweenPlayerRefreshes{ 120 };
		
		UPROPERTY( EditDefaultsOnly, Category = "Coala|Config|Clients on Map", BlueprintReadWrite, Meta = (ClampMin="0") )
		float minimumSecondsBetweenPlayerRefreshesWhenAlone{ 60 };

		UPROPERTY( EditDefaultsOnly, Category = "Coala|Config|Clients on Map", BlueprintReadWrite, Meta = (ClampMin="0") )
		float maximumSecondsBetweenPlayerRefreshesWhenAlone{ 240 };

		UPROPERTY( EditDefaultsOnly, Category = "Coala|Config|Clients on Map", BlueprintReadWrite, Meta = (ClampMin="0") )
		ECoalaPlayerVisibility defaultLocalPlayerVisibility{ ECoalaPlayerVisibility::AlwaysVisible };

		UPROPERTY( EditDefaultsOnly, Category = "Coala|Config|Clients on Map", BlueprintReadWrite, Meta = (ClampMin="0") )
		int xRequestDistanceFromPlayerInMeters{ 100 };

		UPROPERTY( EditDefaultsOnly, Category = "Coala|Config|Clients on Map", BlueprintReadWrite, Meta = (ClampMin="0") )
		int yRequestDistanceFromPlayerInMeters{ 100 };
	
};