// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "Net/CoalaNetRemotePlayerData.h"
#include "CoalaArchive.h"

FCoalaArchive&
Serialize( FCoalaArchive& archive, FCoalaNetRemotePlayerData& playerData )
{
	return archive
	.DeclareValue( TEXT("id") ).Serialize( playerData.id )
	.DeclareValue( TEXT("lon") ).Serialize( playerData.longitude )
	.DeclareValue( TEXT("lat") ).Serialize( playerData.latitude )
	.DeclareValue( TEXT("payload") ).Serialize( playerData.payload );
}
