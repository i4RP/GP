// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaTransportationParsing.h"
#include "Agency.h"
#include "CoalaShape.h"
#include "CoalaShapeArrayWrapper.h"
#include "CoalaTimeUtility.h"
#include "CoalaTransportAgency.h"
#include "CoalaTransportationData.h"
#include "CoalaTransportationRoute.h"
#include "CoalaTransportationRoutes.h"
#include "CoalaTransportationServiceInfo.h"
#include "CoalaTransportationStop.h"
#include "CoalaTransportationStopTime.h"
#include "CoalaTransportationTableRows.h"
#include "CoalaTripArrayWrapper.h"
#include "Trip.h"

#include "JsonObjectConverter.h"


UDataTable*
UCoalaTransportationParsing::ParseCSVStringToDataTable( FString InCSVData, UScriptStruct* InStructType )
{
	UDataTable* retDataTable = NewObject<UDataTable>();
	retDataTable->RowStruct = InStructType;
	retDataTable->CreateTableFromCSVString( InCSVData );
	
	return retDataTable;
}

UTransportationData*
UCoalaTransportationParsing::LoadTransportationDataFromJSON( FString json, FString testGmtOffset )
{
	TSharedPtr<FJsonObject> JsonParsed;
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create( json );
	if( !FJsonSerializer::Deserialize( JsonReader, JsonParsed ) )
	{
		UE_LOG( LogTemp, Error, TEXT("CoalaTransportationRequest parse JSON failed") );
		return NULL;
	}

	FString routesCSVData = JsonParsed->GetStringField( "routes" );
	FString agencyCSVData = JsonParsed->GetStringField( "agencies" );
	FString tripsCSVData = JsonParsed->GetStringField( "trips" );
	FString shapesCSVData = JsonParsed->GetStringField( "shapes" );
	FString calendarCSVData = JsonParsed->GetStringField( "calendar" );
	FString calendarDatesCSVData = JsonParsed->GetStringField( "calendarDates" );
	FString stopTimesCSVData = JsonParsed->GetStringField( "stopTimes" );
	FString stopsCSVData = JsonParsed->GetStringField( "stops" );
	FString gmtOffset;
	if( testGmtOffset == "" )
		gmtOffset = JsonParsed->GetStringField( "gmtOffset" );
	else
		gmtOffset = testGmtOffset;

	return ConvertTransportationData(
		routesCSVData,
		agencyCSVData,
		tripsCSVData,
		shapesCSVData,
		calendarCSVData,
		calendarDatesCSVData,
		stopTimesCSVData,
		stopsCSVData,
		gmtOffset );
}


UTransportationData*
UCoalaTransportationParsing::ConvertTransportationData(
	FString routesCSVData,
	FString agencyCSVData,
	FString tripsCSVData,
	FString shapesCSVData,
	FString calendarCSVData,
	FString calendarDatesCSVData,
	FString stopTimesCSVData,
	FString stopsCSVData,
	FString gmtOffset )
{
	UTransportationData* ret = NewObject<UTransportationData>();

	PrepareCSVStringForDataTableConversion( routesCSVData );
	PrepareCSVStringForDataTableConversion( agencyCSVData );
	PrepareCSVStringForDataTableConversion( tripsCSVData );
	PrepareCSVStringForDataTableConversion( shapesCSVData );
	PrepareCSVStringForDataTableConversion( calendarCSVData );
	PrepareCSVStringForDataTableConversion( calendarDatesCSVData );
	PrepareCSVStringForDataTableConversion( stopTimesCSVData );
	PrepareCSVStringForDataTableConversion( stopsCSVData );

	UDataTable* routesDataTable = ParseCSVStringToDataTable( routesCSVData, FTransportationRoutesStruct::StaticStruct() );
	TArray<FTransportationRoutesStruct*> routesStructArray;
	FString errorContext = "GetAllRows, something went wrong";
	routesDataTable->GetAllRows<FTransportationRoutesStruct>( errorContext, routesStructArray );

	TMap<FString, URoute*> routeData;

	for( int index = 0; index < routesStructArray.Num(); ++index )
	{
		FTransportationRoutesStruct* routeStruct = routesStructArray[index];

		URoute* route = NewObject<URoute>();
		route->agencyId = routeStruct->agency_id == "" ? "SingleAgency" : routeStruct->agency_id;
		route->name = !routeStruct->route_long_name.IsEmpty() ? routeStruct->route_long_name : routeStruct->route_short_name;

		routeData.Add( routeStruct->route_id, route );
	}

	ret->routesData = routeData;

	//SAVE AGENCIES
	UDataTable* agencyDataTable = ParseCSVStringToDataTable( agencyCSVData, FTransportationAgencyStruct::StaticStruct() );
	TArray<FTransportationAgencyStruct*> agencyStructArray;
	agencyDataTable->GetAllRows<FTransportationAgencyStruct>( errorContext, agencyStructArray );

	TMap<FString, UAgency*> agencyData;

	for( int index = 0; index < agencyStructArray.Num(); ++index )
	{
		FTransportationAgencyStruct* agencyStruct = agencyStructArray[index];

		UAgency* agency = NewObject<UAgency>();
		agency->name = agencyStruct->agency_name;
		agency->url = agencyStruct->agency_url;
		agency->fareURL = agencyStruct->agency_fare_url;
		FString agencyId = agencyStruct->agency_id == "" ? "SingleAgency" : agencyStruct->agency_id;

		agencyData.Add( agencyStruct->agency_id, agency );
	}

	ret->agencyData = agencyData;


	//SAVE TRIPS
	UDataTable* tripsDataTable = ParseCSVStringToDataTable( tripsCSVData, FTransportationTripsStruct::StaticStruct() );
	TArray<FTransportationTripsStruct*> tripsStructArray;
	tripsDataTable->GetAllRows<FTransportationTripsStruct>( errorContext, tripsStructArray );

	TMap<FString, FTripsWrapper> tripsDataPerRouteId;
	TMap<FString, FTripsWrapper> tripsDataPerServiceId;
	TMap<FString, UTrip*> tripData;

	for( int index = 0; index < tripsStructArray.Num(); ++index )
	{
		FTransportationTripsStruct* tripStruct = tripsStructArray[index];

		FTripsWrapper* tripsWrapperRoute = tripsDataPerRouteId.Find( tripStruct->route_id );

		UTrip* trip = NewObject<UTrip>();
		trip->serviceId = tripStruct->service_id;
		trip->routeId = tripStruct->route_id;
		trip->shapeId = tripStruct->shape_id;
		trip->isInboundDirection = tripStruct->direction_id == 1;
		trip->bikesAllowed = tripStruct->bikes_allowed == 1;
		trip->wheelchairAccessible = tripStruct->wheelchair_accessible == 1;

		URoute* route = routeData[tripStruct->route_id];

		trip->headsign = tripStruct->trip_headsign == "" ? route->name : tripStruct->trip_headsign;

		tripData.Add( tripStruct->trip_id, trip );

		if( tripsWrapperRoute == NULL )
		{
			TMap<FString, UTrip*> trips;
			trips.Add( tripStruct->trip_id, trip );
			FTripsWrapper wrapper;
			wrapper.trips = trips;
			tripsDataPerRouteId.Add( tripStruct->route_id, wrapper );
		}
		else
		{
			tripsWrapperRoute->trips.Add( tripStruct->trip_id, trip );
		}

		FTripsWrapper* tripsWrapperService = tripsDataPerServiceId.Find( tripStruct->service_id );

		if( tripsWrapperService == NULL )
		{
			TMap<FString, UTrip*> trips;
			trips.Add( tripStruct->trip_id, trip );
			FTripsWrapper wrapper;
			wrapper.trips = trips;
			tripsDataPerServiceId.Add( tripStruct->service_id, wrapper );
		}
		else
		{
			tripsWrapperService->trips.Add( tripStruct->trip_id, trip );
		}
	}

	ret->tripsDataPerRouteId = tripsDataPerRouteId;
	ret->tripsDataPerServiceId = tripsDataPerServiceId;
	ret->tripsData = tripData;

	//SAVE SHAPES
	UDataTable* shapesDataTable = ParseCSVStringToDataTable( shapesCSVData, FTransportationShapesStruct::StaticStruct() );
	TArray<FTransportationShapesStruct*> shapesStructArray;
	shapesDataTable->GetAllRows<FTransportationShapesStruct>( errorContext, shapesStructArray );

	TMap<FString, FShapeArrayWrapper> shapesData;
	
/*	shapesStructArray.Sort(
		[](const FTransportationShapesStruct& A, const FTransportationShapesStruct& B)
		{
			return A.shape_pt_sequence < B.shape_pt_sequence;
		}
	);
*/

	for( int index = 0; index < shapesStructArray.Num(); ++index )
	{
		FTransportationShapesStruct* shapeStruct = shapesStructArray[index];

		auto shapeArrayWrapper = shapesData.Find( shapeStruct->shape_id );

		UShape* shape = NewObject<UShape>();

		shape->index = shapeStruct->shape_pt_sequence;
		double lon = FCString::Atod( *shapeStruct->shape_pt_lon );
		double lat = FCString::Atod( *shapeStruct->shape_pt_lat );
		shape->position = FCoalaGPSCoordinates( lon, lat );

		if( shapeArrayWrapper == NULL )
		{
			FShapeArrayWrapper wrapper;
			wrapper.shapes.Add( shape );
			shapesData.Add( shapeStruct->shape_id, wrapper );
		}
		else
		{
			shapeArrayWrapper->shapes.Add( shape );
		}
	}
	ret->shapesData = shapesData;

	//SAVE CALENDAR
	UDataTable* calendarDatesDataTable = ParseCSVStringToDataTable( calendarDatesCSVData, FTransportationCalendarDatesStruct::StaticStruct() );
	TArray<FTransportationCalendarDatesStruct*> calendarDatesStructArray;
	calendarDatesDataTable->GetAllRows<FTransportationCalendarDatesStruct>( errorContext, calendarDatesStructArray );

	TMap<FString, UCalendarInfo*> calendarData;

	//Differentiate between calendar being there or everything being written in calendarDates
	if( calendarCSVData != "" )
	{
		UDataTable* calendarDataTable = ParseCSVStringToDataTable( calendarCSVData, FTransportationCalendarStruct::StaticStruct() );
		TArray<FTransportationCalendarStruct*> calendarStructArray;
		calendarDataTable->GetAllRows<FTransportationCalendarStruct>( errorContext, calendarStructArray );

		for( int calendarIndex = 0; calendarIndex < calendarStructArray.Num(); ++calendarIndex )
		{
			FTransportationCalendarStruct* calendarStruct = calendarStructArray[calendarIndex];
			
			UCalendarInfo* calendarInfo = NewObject<UCalendarInfo>();
			TArray<UWeekday> weekDays;

			if( calendarStruct->monday == 1 )
				weekDays.Add( UWeekday::MONDAY );
			if( calendarStruct->tuesday == 1 )
				weekDays.Add( UWeekday::TUESDAY );
			if( calendarStruct->wednesday == 1 )
				weekDays.Add( UWeekday::WEDNESDAY );
			if( calendarStruct->thursday == 1 )
				weekDays.Add( UWeekday::THURSDAY );
			if( calendarStruct->friday == 1 )
				weekDays.Add( UWeekday::FRIDAY );
			if( calendarStruct->saturday == 1 )
				weekDays.Add( UWeekday::SATURDAY );
			if( calendarStruct->sunday == 1 )
				weekDays.Add( UWeekday::SUNDAY );

			calendarInfo->weekdaysWhereServiceAvailable = weekDays;

			calendarInfo->startDate = UCoalaTimeUtility::GetDateFromString( calendarStruct->start_date );
			calendarInfo->endDate = UCoalaTimeUtility::GetDateFromString( calendarStruct->end_date );

			TMap<FDateTime, bool> exceptionTimes;

			for( int calenderDateIndex = 0; calenderDateIndex < calendarDatesStructArray.Num(); ++calenderDateIndex )
			{
				FTransportationCalendarDatesStruct* calendarDateStruct = calendarDatesStructArray[calenderDateIndex];

				if( calendarDateStruct->service_id == calendarStruct->service_id )
				{
					exceptionTimes.Add( UCoalaTimeUtility::GetDateFromString( calendarDateStruct->date ), calendarDateStruct->exception_type == 1 );
				}
			}

			calendarInfo->exceptionalDates = exceptionTimes;

			calendarData.Add( calendarStruct->service_id, calendarInfo );
		}
		
		for( int calendarDateIndex = 0; calendarDateIndex < calendarDatesStructArray.Num(); ++calendarDateIndex )
		{
			FTransportationCalendarDatesStruct* calendarDateStruct = calendarDatesStructArray[calendarDateIndex];

			UCalendarInfo** infoDoublePointer = calendarData.Find( calendarDateStruct->service_id );

			if( infoDoublePointer == NULL )
			{
				TMap<FDateTime, bool> exceptionTimes;

				exceptionTimes.Add( UCoalaTimeUtility::GetDateFromString( calendarDateStruct->date ), calendarDateStruct->exception_type == 1 );
				UCalendarInfo* info = NewObject<UCalendarInfo>();
				info->exceptionalDates = exceptionTimes;
				calendarData.Add( calendarDateStruct->service_id, info );
			}
		}
	}
	else
	{
		for( int calendarDatesIndex = 0; calendarDatesIndex < calendarDatesStructArray.Num(); calendarDatesIndex++ )
		{
			FTransportationCalendarDatesStruct* calendarDateStruct = calendarDatesStructArray[calendarDatesIndex];
			UCalendarInfo** infoDoublePointer = calendarData.Find( calendarDateStruct->service_id );

			if( infoDoublePointer == NULL )
			{
				TMap<FDateTime, bool> exceptionTimes;

				exceptionTimes.Add( UCoalaTimeUtility::GetDateFromString( calendarDateStruct->date ), calendarDateStruct->exception_type == 1 );
				UCalendarInfo* info = NewObject<UCalendarInfo>();
				info->exceptionalDates = exceptionTimes;
				calendarData.Add( calendarDateStruct->service_id, info );
			}
			else
			{
				UCalendarInfo* calendarInfo = *infoDoublePointer;
				calendarInfo->exceptionalDates.Add( UCoalaTimeUtility::GetDateFromString( calendarDateStruct->date ), calendarDateStruct->exception_type == 1 );
			}
		}
	}
	ret->calendarData = calendarData;


	//SAVE STOPTIMES
	UDataTable* stopTimesDataTable = ParseCSVStringToDataTable( stopTimesCSVData, FTransportationStopTimesStruct::StaticStruct() );
	TArray<FTransportationStopTimesStruct*> stopTimesStructArray;
	stopTimesDataTable->GetAllRows<FTransportationStopTimesStruct>( errorContext, stopTimesStructArray );

	TMap<FString, FStopTimesArrayWrapper> stopTimesData;
	TMap<FString, FStopTimesArrayWrapper> stopTimesDataPerStopId;

	for( int stopTimeIndex = 0; stopTimeIndex < stopTimesStructArray.Num(); ++stopTimeIndex )
	{
		FTransportationStopTimesStruct* stopTimesStruct = stopTimesStructArray[stopTimeIndex];
		////check if is bus trip
		UTrip** tripBuffer = ret->tripsData.Find( stopTimesStruct->trip_id );
		if( tripBuffer == NULL )
			continue;

		UTrip* trip = *tripBuffer;

		if( !trip->stopIds.Contains( stopTimesStruct->stop_id ) )
			trip->stopIds.Add( stopTimesStruct->stop_id );

		UStopTime* stopTime = NewObject<UStopTime>();
		stopTime->arrivalTime = UCoalaTimeUtility::GetTimeFromString( stopTimesStruct->arrival_time );
		stopTime->departureTime = UCoalaTimeUtility::GetTimeFromString( stopTimesStruct->departure_time );
		stopTime->index = stopTimesStruct->stop_sequence;
		stopTime->stopId = stopTimesStruct->stop_id;
		stopTime->tripId = stopTimesStruct->trip_id;

		//Save to stopTimes Data
		FStopTimesArrayWrapper* stopTimesArrayWrapper = stopTimesData.Find( stopTimesStruct->trip_id );

		if( stopTimesArrayWrapper == NULL )
		{
			FStopTimesArrayWrapper arrayWrapper;
			arrayWrapper.stopTimes.Add( stopTime );
			stopTimesData.Add( stopTimesStruct->trip_id, arrayWrapper );
		}
		else
		{
			stopTimesArrayWrapper->stopTimes.Add( stopTime );
		}

		//Save to stopTimesDataPerStopId
		FStopTimesArrayWrapper* stopTimesArrayWrapper2 = stopTimesDataPerStopId.Find( stopTimesStruct->stop_id );

		if( stopTimesArrayWrapper2 == NULL )
		{
			FStopTimesArrayWrapper arrayWrapper;
			arrayWrapper.stopTimes.Add( stopTime );
			stopTimesDataPerStopId.Add( stopTimesStruct->stop_id, arrayWrapper );
		}
		else
		{
			stopTimesArrayWrapper2->stopTimes.Add( stopTime );	
		}		
	}

	ret->stopTimesData = stopTimesData;
	ret->stopTimesDataPerStopId = stopTimesDataPerStopId;

	//SAVE STOPS
	UDataTable* stopsDataTable = ParseCSVStringToDataTable( stopsCSVData, FTransportationStopsStruct::StaticStruct() );
	TArray<FTransportationStopsStruct*> stopsStructArray;
	stopsDataTable->GetAllRows<FTransportationStopsStruct>( errorContext, stopsStructArray );

	TMap<FString, UStop*> stopsData;
	for( int stopIndex = 0; stopIndex < stopsStructArray.Num(); ++stopIndex )
	{
		FTransportationStopsStruct* stopStruct = stopsStructArray[stopIndex];

		UStop* stop = NewObject<UStop>();
		double lon = FCString::Atod( *stopStruct->stop_lon );
		double lat = FCString::Atod( *stopStruct->stop_lat );
		stop->position = FCoalaGPSCoordinates( lon, lat );
		stop->name = stopStruct->stop_name;
		stop->wheelchairBoardingPossible = stopStruct->wheelchair_boarding == 1;
		stop->stopId = stopStruct->stop_id;

		stopsData.Add( stopStruct->stop_id, stop );
	}

	ret->stopsData = stopsData;

	TMap<FString, FStopArrayWrapper> stopsDataPerRoute;
	for( const TPair<FString, URoute*>& routePair : ret->routesData )
	{
		FTripsWrapper tripsForRoute = ret->tripsDataPerRouteId[routePair.Key];
		TArray<UStop*> collectedStops;

		for( const TPair<FString, UTrip*>& tripPair : tripsForRoute.trips )
		{
			FStopTimesArrayWrapper stopTimesWrapper = ret->stopTimesData[tripPair.Key];
			for( int stopTimeIndex = 0; stopTimeIndex < stopTimesWrapper.stopTimes.Num(); ++stopTimeIndex )
			{
				UStopTime* stopTime = stopTimesWrapper.stopTimes[stopTimeIndex];
				UStop* stop = ret->stopsData[stopTime->stopId];
				if( !collectedStops.Contains( stop ) )
				{
					collectedStops.Add( stop );
				}
			}
		}

		FStopArrayWrapper wrapper;
		wrapper.stops = collectedStops;
		stopsDataPerRoute.Add( routePair.Key, wrapper );
	}

	ret->stopsDataPerRouteId = stopsDataPerRoute;

	//Update Trips with shapePerStopIdInfo
	for( const TPair<FString, UTrip*>& tripPair : ret->tripsData )
	{
		FShapeArrayWrapper* shapeWrapper = ret->shapesData.Find( tripPair.Value->shapeId );

		if( shapeWrapper == NULL )
			continue;


		TMap<FString, UShape*> shapesPerStopIdBuffer;

		FStopTimesArrayWrapper stopTimesArrayWrapper = ret->stopTimesData[tripPair.Key];

		for( int stopTimeIndex = 0; stopTimeIndex < stopTimesArrayWrapper.stopTimes.Num(); ++stopTimeIndex )
		{
			UStopTime* stopTime = stopTimesArrayWrapper.stopTimes[stopTimeIndex];
			UStop* stop = ret->stopsData[stopTime->stopId];

			UShape* shapeForStop = Coala::FindShapeClosestTo( stop->position, shapeWrapper->shapes );
			shapesPerStopIdBuffer.Add( stopTime->stopId, shapeForStop );
		}

		tripPair.Value->shapePerStopId = shapesPerStopIdBuffer;
	}


	ret->gmtOffset = FCString::Atoi( *gmtOffset );
	ret->transportationType = (TransportationType)1;

	return ret;
}

void
UCoalaTransportationParsing::PrepareCSVStringForDataTableConversion( FString& outString )
{
	TArray<FString> stringArray;
	outString.ParseIntoArray( stringArray, TEXT( "\n" ), true );
	outString = "";
	
	if(stringArray.Num() == 0) return;
	outString += "row_names," + MoveTempIfPossible( stringArray[0] ) + "\r\n";
	
	for( int index = 1; index < stringArray.Num(); ++index )
	{
		outString.AppendInt( index-1 );
		outString += "," + MoveTempIfPossible( stringArray[index] ) + "\r\n";
	}

	/*
	TArray<FString> stringArray;
	outString.ParseIntoArray( stringArray, TEXT( "\n" ), true );
	outString = "";
	for( int c = 0; c < stringArray.Num(); c++ )
	{
		FString str = stringArray[c];
		FString addition;
		if( c == 0 )
			addition = "row_names,";
		else
		{
			addition.AppendInt( c - 1 );
			addition += ",";
		}

		str = addition + str + "\r\n";
		outString += str;
	}
	*/
}


