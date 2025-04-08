// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaRequestFunctions.h"

#include "CoalaController.h"
#include "CoalaPluginBlueprintLibrary.h"
#include "BluePrintHttpGetRequest.h"
#include "BluePrintHttpGetRequestTransportation.h"
#include "CoalaAreaController.h"
#include "CoalaTransportation.h"
#include "HttpModule.h"
#include "RequestContext.h"
#include "Net/CoalaUrl.h"

#include <iomanip>
#include <sstream>
#include <vector>

UBluePrintHttpGetRequest*
UCoalaRequestFunctions::MakeCoalaRequest(
	FCoalaTile tile,
	UPARAM( meta = (Bitmask, BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.REQUEST_CONTEXT") ) int32 context,
	EOutputPins_CoalaRequestResult& Branches )
{
	UE_LOG( LogTemp, Warning, TEXT( "UCoalaBlueprintUtility::MakeCoalaRequest context: %d" ), context );

	std::vector<FString> contents;
	//https://answers.unrealengine.com/questions/489492/c-bitmask-enums-appear-to-be-offset-by-1.html
	if( context & (1 << (int32)REQUEST_CONTEXT::GAMETAGS) )
		contents.push_back( "gametags" );
	if( context & (1 << (int32)REQUEST_CONTEXT::POIS) )
		contents.push_back( "pois" );
	if( context & (1 << (int32)REQUEST_CONTEXT::WEATHER) )
		contents.push_back( "weather" );
	if( context & (1 << (int32)REQUEST_CONTEXT::STREETS) )
		contents.push_back( "streets" );
	if( context & (1 << (int32)REQUEST_CONTEXT::BUILDINGS) )
		contents.push_back( "buildings" );
	if( context & (1 << (int32)REQUEST_CONTEXT::WATER) )
		contents.push_back( "water" );
	if( context & (1 << (int32)REQUEST_CONTEXT::CONTEXT) )
		contents.push_back( "context" );
	if( context & (1 << (int32)REQUEST_CONTEXT::TIMEZONE) )
		contents.push_back( "timezone" );
	if( context & (1 << (int32)REQUEST_CONTEXT::CUSTOM_POIS) )
		contents.push_back( "custom_pois" );
	if( context & (1 << (int32)REQUEST_CONTEXT::ELEVATION) )
		contents.push_back( "elevation" );
	if( context & (1 << (int32)REQUEST_CONTEXT::CRIME) )
		contents.push_back( "crimes" );

	UBluePrintHttpGetRequest* target = NewObject<UBluePrintHttpGetRequest>();
	FString request( Coala::GetBaseUrl() + TEXT( "/thoughtfish/coala?format=JSON_V2" ) );

	request += "&api_key=" + ACoalaController::Instance->CoalaProjectApiKey;

	request += "&zoom=" + FString::FromInt( (int)tile.z );
	request += "&tile_x=" + FString::FromInt( tile.x );
	request += "&tile_y=" + FString::FromInt( tile.y );
	if( contents.size() != 0 )
	{
		request += "&content=";
		for( auto it = contents.begin(); it != contents.end(); ++it )
		{
			FString current = *it;
			request += current;

			if( std::distance( it, contents.end() ) > 1 )
				request += ",";
		}
	}

	UE_LOG( LogTemp, Warning, TEXT( "url: %s" ), *request );
	// Create the HTTP request
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetVerb( "GET" );
	HttpRequest->SetURL( request );
	HttpRequest->OnProcessRequestComplete().BindUObject( target, &UBluePrintHttpGetRequest::OnResponseReceived );

	HttpRequest->ProcessRequest();

	return target;
}

UBluePrintHttpGetRequest*
UCoalaRequestFunctions::MakeCoalaSetCustomPOIRequest(
	float lon,
	float lat,
	FString name,
	FString payload,
	EOutputPins_CoalaRequestResult& Branches )
{
	//TODO test with umlaut
	UBluePrintHttpGetRequest* target = NewObject<UBluePrintHttpGetRequest>();
	FString request( Coala::GetBaseUrl() + TEXT( "/thoughtfish/coala/addcustomPOI?format=JSON" ) );
	request += "&api_key=" + ACoalaController::Instance->CoalaProjectApiKey;
	request += "&lon=" + FString::SanitizeFloat( lon, 6 );
	request += "&lat=" + FString::SanitizeFloat( lat, 6 );
	request += "&name=" + name;

	if( !payload.IsEmpty() )
	{
		// Base64 encoding
		FString encodedPayload = FString();
		int val = 0, valb = -6;
		for( char c : payload )
		{
			val = (val << 8) + c;
			valb += 8;
			while( valb >= 0 )
			{
				encodedPayload.AppendChar( "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[(val >> valb) & 0x3F] );
				valb -= 6;
			}
		}
		if( valb > -6 )
			encodedPayload.AppendChar( "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[((val << 8) >> (valb + 8)) & 0x3F] );
		while( encodedPayload.GetCharArray().Num() % 4 )
			encodedPayload.AppendChar( '=' );

		request += "&payload=" + encodedPayload;
	}

	UE_LOG( LogTemp, Warning, TEXT( "url: %s" ), *request );
	// Create the HTTP request
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetVerb( "GET" );
	HttpRequest->SetURL( request );
	HttpRequest->OnProcessRequestComplete().BindUObject( target, &UBluePrintHttpGetRequest::OnResponseReceived );

	HttpRequest->ProcessRequest();

	return target;
}


UBluePrintHttpGetRequest*
UCoalaRequestFunctions::MakeCoalaGetCustomPOISuggestionsRequest(
	float lon,
	float lat,
	EOutputPins_CoalaRequestResult& Branches )
{
	UBluePrintHttpGetRequest* target = NewObject<UBluePrintHttpGetRequest>();
	FString request( Coala::GetBaseUrl() + TEXT( "/thoughtfish/coala/poi/custom/suggestions?format=JSON" ) );
	request += "&api_key=" + ACoalaController::Instance->CoalaProjectApiKey;
	request += "&zoom=14";
	request += "&lon=" + FString::SanitizeFloat( lon );
	request += "&lat=" + FString::SanitizeFloat( lat );

	UE_LOG( LogTemp, Warning, TEXT( "url: %s" ), *request );
	// Create the HTTP request
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetVerb( "GET" );
	HttpRequest->SetURL( request );
	HttpRequest->OnProcessRequestComplete().BindUObject( target, &UBluePrintHttpGetRequest::OnResponseReceived );

	HttpRequest->ProcessRequest();

	return target;
}

UBluePrintHttpGetRequestTransportation*
UCoalaRequestFunctions::MakeCoalaRequestTransportation(
	int perimeter,
	FCoalaGPSCoordinates coordinates,
	TransportationType transportationType,
	EOutputPins_CoalaRequestResult& Branches )
{
	UBluePrintHttpGetRequestTransportation* target = NewObject<UBluePrintHttpGetRequestTransportation>();


	FString request( Coala::GetBaseUrl() + TEXT( "/thoughtfish/coala/premium/transportation?" ) );

	request += "&api_key=" + ACoalaController::Instance->CoalaProjectApiKey;
	request += "&type=" + FString::FromInt( (int)transportationType );

	FVector scenePosition = coordinates.ToScenePosition();
	FVector offset = FVector( perimeter, perimeter, 0 );
	FVector scenePositionTopRight = scenePosition + offset;
	FVector scenePositionBottomLeft = scenePosition - offset;

	FCoalaGPSCoordinates gpsBottomRight = UCoalaGPSCoordinatesBlueprintLibrary::WorldPositionToGpsCoordinates( scenePositionTopRight );
	FCoalaGPSCoordinates gpsTopLeft = UCoalaGPSCoordinatesBlueprintLibrary::WorldPositionToGpsCoordinates( scenePositionBottomLeft );

	std::ostringstream query;
	query << "&bottom=" << std::setprecision( 9 ) << gpsBottomRight.lat;
	query << "&right=" << std::setprecision( 9 ) << gpsBottomRight.lon;
	query << "&top=" << std::setprecision( 9 ) << gpsTopLeft.lat;
	query << "&left=" << std::setprecision( 9 ) << gpsTopLeft.lon;

	FString queryFString( query.str().c_str() );
	request += queryFString;

	UE_LOG( LogTemp, Warning, TEXT( "url: %s" ), *request );
	// Create the HTTP request
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetVerb( "GET" );
	HttpRequest->SetURL( request );
	HttpRequest->OnProcessRequestComplete().BindUObject( target, &UBluePrintHttpGetRequestTransportation::OnResponseReceived );

	HttpRequest->ProcessRequest();


	target->transportationType = transportationType;
	UCoalaTransportation::lastCoordinatesRequest = coordinates;

	return target;
}
