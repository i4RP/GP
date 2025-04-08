// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "Net/CoalaNetGpsBounds.h"
#include "CoalaArchive.h"

FCoalaArchive&
Serialize( FCoalaArchive& archive, FCoalaNetGpsBounds& bounds )
{
	return archive
	.DeclareValue( TEXT("top") ).Serialize( bounds.max.lat )
	.DeclareValue( TEXT("right") ).Serialize( bounds.max.lon )
	.DeclareValue( TEXT("bottom") ).Serialize( bounds.min.lat )
	.DeclareValue( TEXT("left") ).Serialize( bounds.min.lon );	
}
