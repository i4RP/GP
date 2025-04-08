// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaWeather.h"

FCoalaWeather
UCoalaWeatherBlueprintFunctionLibrary::MakeCoalaWeather(FString simple, FCoalaTemperature temperature, FCoalaHumidity humidity, FCoalaPressure pressure, FCoalaWind wind )
{
	FCoalaWeather ret;

	ret.simple = simple;
	ret.temperature = temperature;
	ret.humidity = humidity;
	ret.pressure = pressure;
	ret.wind = wind;

	return ret;
}

void
UCoalaWeatherBlueprintFunctionLibrary::BreakCoalaWeather(const FCoalaWeather& in, FString& simple, FCoalaTemperature& temperature, FCoalaHumidity& humidity, FCoalaPressure& pressure, FCoalaWind& wind)
{
	simple = in.simple;
	temperature = in.temperature;
	humidity = in.humidity;
	pressure = in.pressure;
	wind = in.wind;
}

FCoalaTemperature
UCoalaWeatherBlueprintFunctionLibrary::MakeCoalaTemperature( float value, FString unit )
{
	FCoalaTemperature ret;

	ret.value = value;
	ret.unit = unit;

	return ret;
}

void
UCoalaWeatherBlueprintFunctionLibrary::BreakCoalaTemperature( const FCoalaTemperature& in, float& value, FString& unit )
{
	value = in.value;
	unit = in.unit;
}

FCoalaHumidity
UCoalaWeatherBlueprintFunctionLibrary::MakeCoalaHumidity( float value, FString unit )
{
	FCoalaHumidity ret;

	ret.value = value;
	ret.unit = unit;

	return ret;
}

void
UCoalaWeatherBlueprintFunctionLibrary::BreakCoalaHumidity( const FCoalaHumidity& in, float& value, FString& unit )
{
	value = in.value;
	unit = in.unit;
}

FCoalaPressure
UCoalaWeatherBlueprintFunctionLibrary::MakeCoalaPressure( float value, FString unit )
{
	FCoalaPressure ret;

	ret.value = value;
	ret.unit = unit;

	return ret;
}

void
UCoalaWeatherBlueprintFunctionLibrary::BreakCoalaPressure( const FCoalaPressure& in, float& value, FString& unit )
{
	value = in.value;
	unit = in.unit;
}

FCoalaWind 
UCoalaWeatherBlueprintFunctionLibrary::MakeCoalaWind( float speed, float direction )
{
	FCoalaWind ret;

	ret.speed = speed;
	ret.direction = direction;

	return ret;
}

void 
UCoalaWeatherBlueprintFunctionLibrary::BreakCoalaWind( const FCoalaWind& in, float& speed, float& direction )
{
	speed = in.speed;
	direction = in.direction;
}
