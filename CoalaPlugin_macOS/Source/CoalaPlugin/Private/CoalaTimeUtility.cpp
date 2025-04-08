// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaTimeUtility.h"

int64
UCoalaTimeUtility::GetUnixTimestampNow()
{
	return FDateTime::UtcNow().ToUnixTimestamp() * 1000 + FDateTime::UtcNow().GetMillisecond();
}

FString
UCoalaTimeUtility::GetUnixTimestampNowString()
{
	return FString::SanitizeFloat( GetUnixTimestampNow() );
}

FDateTime
UCoalaTimeUtility::GetDateFromString( FString inData )
{
	FString yearString = inData.Mid( 0, 4 );
	int yearNumber = FCString::Atoi( *yearString );
	FString monthString = inData.Mid( 4, 2 );
	int monthNumber = FCString::Atoi( *monthString );
	FString dayString = inData.Mid( 6, 2 );
	int dayNumber = FCString::Atoi( *dayString );

	return FDateTime( yearNumber, monthNumber, dayNumber );
}

FDateTime
UCoalaTimeUtility::GetTimeFromString( FString inData )
{
	FString hourString = inData.Mid( 0, 2 );
	int hourNumber = FCString::Atoi( *hourString );
	int dayNumber = 1;
	if( hourNumber >= 24 )
	{
		hourNumber -= 24;
		dayNumber = 2;
	}
	FString minuteString = inData.Mid( 3, 2 );
	int minuteNumber = FCString::Atoi( *minuteString );
	FString secondString = inData.Mid( 6, 2 );
	int secondNumber = FCString::Atoi( *secondString );


	return FDateTime( 1, 1, dayNumber, hourNumber, minuteNumber, secondNumber );
}
