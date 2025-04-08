#include "RequestCoala.h"

#include "GeoConverter.h"
#include "CoalaController.h"
#include "Net/CoalaUrl.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "CoalaArea.h"
#include "CoalaAreaActor.h"
#include "CoalaAreaController.h"
#include "Async/Async.h"

#include <vector>

void URequestCoala::AsyncRequestCoalaMapData(
	FCoalaTile tile,
	UPARAM( meta = (Bitmask, BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.REQUEST_CONTEXT") ) int32 context,
	const FCoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData& onNewAreaData,
	const FCoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData& onUpdatedAreaData,
	const FCoalaDelegateRequestCoalaRequestOnError& onError
)
{
	UE_LOG( LogTemp, Warning, TEXT( "URequestCoala::RequestCoalaMapData context: %d" ), context );

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
	HttpRequest->OnProcessRequestComplete().BindLambda( [onError, onNewAreaData, onUpdatedAreaData, tile]( FHttpRequestPtr http_request, FHttpResponsePtr http_response, bool bSucceeded ){

		if( !bSucceeded
			|| http_request->GetStatus() != EHttpRequestStatus::Succeeded
		)
		{
AsyncTask( ENamedThreads::GameThread, [onError, tile]()
{			onError.ExecuteIfBound( 
				TEXT( "Error while getting data from server." ),
				tile
			);
} );
			return;
		}

		FString json_from_server = http_response->GetContentAsString();

		UCoalaArea* coala_area = Coala::Converter::JsonStringToArea( json_from_server );

		if( !coala_area )
		{
AsyncTask( ENamedThreads::GameThread, [onError, tile]()
{
			onError.ExecuteIfBound( 
				TEXT( "Error converting server response to area obj" ),
				tile
			);
});
			return;
		}

		UCoalaArea* is_known_area = UCoalaAreaController::GetKnownArea( coala_area->props.tile );
		if( is_known_area )
		{
			// wich data thoughtfish know can( will normaly) change?
			is_known_area->customPois = coala_area->customPois;
AsyncTask( ENamedThreads::GameThread, [onUpdatedAreaData, coala_area, is_known_area](){
			onUpdatedAreaData.ExecuteIfBound( is_known_area );
} );
		}
		else
		{
			if( !ACoalaController::Instance )
				return;

AsyncTask( ENamedThreads::GameThread, [onNewAreaData, coala_area](){
			UCoalaAreaController::AddKnownArea( coala_area );

			onNewAreaData.ExecuteIfBound( coala_area );
} );
		}
	});

	HttpRequest->ProcessRequest();
}
