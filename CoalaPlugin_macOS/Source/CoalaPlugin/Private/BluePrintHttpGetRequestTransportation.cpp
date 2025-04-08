// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "BluePrintHttpGetRequestTransportation.h"

void
UBluePrintHttpGetRequestTransportation::OnResponseReceived( FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful )
{
	if( !bWasSuccessful )
	{
		OnError.Broadcast( TEXT( "Error while getting data from Server." ) );
		return;
	}

	OnSuccess.Broadcast( transportationType, Response->GetContentAsString() );
}
