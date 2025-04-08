// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaWeather.generated.h"

USTRUCT( BlueprintType )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaWind
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Weather|Wind" )
	float speed = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Weather|Wind" )
	int direction = 0;
};

USTRUCT( BlueprintType )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaPressure
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Weather|Pressure" )
	float value = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Weather|Pressure" )
	FString unit;
};

USTRUCT( BlueprintType )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaHumidity
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Weather|Humidity" )
	float value = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Weather|Humidity" )
	FString unit;
};

USTRUCT( BlueprintType )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaTemperature
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Weather|Temperature" )
	float value = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Weather|Temperature" )
	FString unit;
};

USTRUCT( BlueprintType, meta=(HasNativeMake="", HasNativeBreak ="") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaWeather
{
	GENERATED_BODY()
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Weather" )
	FString simple;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Weather" )
	FCoalaTemperature temperature;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Weather" )
	FCoalaHumidity humidity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Weather" )
	FCoalaPressure pressure;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coala|Variables|Weather" )
	FCoalaWind wind;
};

UCLASS(meta=(BlueprintThreadSafe, ScriptName = "CoalaLibrary"))
class UCoalaWeatherBlueprintFunctionLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	//
	// Coala weather wrapper
	//

	/** Makes a COALA weather {simple, temperature, humidity, pressure, wind} */
	UFUNCTION(BlueprintPure, meta = (NativeMakeFunc), Category = "Coala|Variables|Weather")
	static FCoalaWeather MakeCoalaWeather(FString simple, FCoalaTemperature temperature, FCoalaHumidity humidity, FCoalaPressure pressure, FCoalaWind wind );

	/** Breaks a COALA weather apart into simple, temperature, humidity, pressure, wind. */
	UFUNCTION(BlueprintPure, meta = (NativeBreakFunc), Category = "Coala|Variables|Weather")
	static void BreakCoalaWeather(const FCoalaWeather& in, FString& simple, FCoalaTemperature& temperature, FCoalaHumidity& humidity, FCoalaPressure& pressure, FCoalaWind& wind );

	//
	// Coala temperatur wrapper
	//

	/** Makes a COALA temperature {value, unit} */
	UFUNCTION(BlueprintPure, meta = (NativeMakeFunc), Category = "Coala|Variables|Weather|Temperature")
	static FCoalaTemperature MakeCoalaTemperature( float value, FString unit );

	/** Breaks a COALA temperature apart into value, unit. */
	UFUNCTION(BlueprintPure, meta = (NativeBreakFunc), Category = "Coala|Variables|Weather|Temperature")
	static void BreakCoalaTemperature( const FCoalaTemperature& in, float& value, FString& unit );

	//
	// Coala humidity wrapper
	//

	/** Makes a COALA humidity {value, unit} */
	UFUNCTION(BlueprintPure, meta = (NativeMakeFunc), Category = "Coala|Variables|Weather|Humidity")
	static FCoalaHumidity MakeCoalaHumidity( float value, FString unit );

	/** Breaks a COALA humidity apart into value, unit. */
	UFUNCTION(BlueprintPure, meta = (NativeBreakFunc), Category = "Coala|Variables|Weather|Humidity")
	static void BreakCoalaHumidity( const FCoalaHumidity& in, float& value, FString& unit );

	//
	// Coala pressure wrapper
	//

	/** Makes a COALA pressure {value, unit} */
	UFUNCTION(BlueprintPure, meta = (NativeMakeFunc), Category = "Coala|Variables|Weather|Pressure")
	static FCoalaPressure MakeCoalaPressure( float value, FString unit );

	/** Breaks a COALA pressure apart into value, unit. */
	UFUNCTION(BlueprintPure, meta = (NativeBreakFunc), Category = "Coala|Variables|Weather|Pressure")
	static void BreakCoalaPressure( const FCoalaPressure& in, float& value, FString& unit );

	//
	// Coala wind wrapper
	//

	/** Makes a COALA wind {value, unit} */
	UFUNCTION(BlueprintPure, meta = (NativeMakeFunc), Category = "Coala|Variables|Weather|Wind")
	static FCoalaWind MakeCoalaWind( float speed, float direction );

	/** Breaks a COALA wind apart into value, unit. */
	UFUNCTION(BlueprintPure, meta = (NativeBreakFunc), Category = "Coala|Variables|Weather|Wind")
	static void BreakCoalaWind( const FCoalaWind& in, float& speed, float& direction );
};
