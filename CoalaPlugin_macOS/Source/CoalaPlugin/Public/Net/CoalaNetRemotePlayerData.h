// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaNetTypes.h"
#include "CoalaNetRemotePlayerData.generated.h"

USTRUCT()
struct FCoalaNetRemotePlayerData
{
	GENERATED_BODY()

	CoalaTimestamp timestamp;//this is currently unused until we finalize the decision on whether to send timestamps or not
	FString id;
	CoalaLonLatType longitude;
	CoalaLonLatType latitude;
	FString payload;
};

class FCoalaArchive& Serialize( FCoalaArchive &archive, FCoalaNetRemotePlayerData &playerData );