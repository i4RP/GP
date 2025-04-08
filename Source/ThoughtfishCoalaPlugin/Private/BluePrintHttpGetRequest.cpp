// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "BluePrintHttpGetRequest.h"

#include "Engine/Engine.h"
#include "HttpModule.h"
#include "JsonObjectConverter.h"
#include "CoalaLogCore.h"

UBluePrintHttpGetRequest*
UBluePrintHttpGetRequest::StartRequest( const FString& url )
{
	UBluePrintHttpGetRequest* target = NewObject<UBluePrintHttpGetRequest>();

	// Create the HTTP request
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetVerb( "GET" );
	
	HttpRequest->SetURL( url );
	HttpRequest->OnProcessRequestComplete().BindUObject( target, &UBluePrintHttpGetRequest::OnResponseReceived );

	HttpRequest->ProcessRequest();
	
	return target;
}

void
UBluePrintHttpGetRequest::CreateAndDispatchPostRequest(const FString& url, const FString& content, UBluePrintHttpGetRequest* eventReceiver)
{	
	auto request{ FHttpModule::Get().CreateRequest() };
	request->SetVerb( "POST" );
	request->SetURL( url );
	request->SetContentAsString( content );
	request->SetHeader( "Content-Type", TEXT("application/json") );
	request->OnProcessRequestComplete().BindUObject( eventReceiver, &UBluePrintHttpGetRequest::OnResponseReceived );
	request->ProcessRequest();	
}

void
UBluePrintHttpGetRequest::OnResponseReceived( FHttpRequestPtr request, FHttpResponsePtr response, bool connectedSuccessfully )
{	
	if
	(
		!connectedSuccessfully
		|| request->GetStatus() != EHttpRequestStatus::Succeeded
		|| response->GetResponseCode() != 200
	)
	{
#if UE_BUILD_DEVELOPMENT
		FString msg = response->GetContentAsString();
		UE_LOG( CoalaLogCore, Error, TEXT( "%s" ), *msg );
		GEngine->AddOnScreenDebugMessage( INDEX_NONE, 20.0f, FColor::Red, msg, false );
#endif
		OnError.Broadcast( response->GetContentAsString() );
		return;
	}
		
	OnSuccess.Broadcast( response->GetContentAsString() );
}
