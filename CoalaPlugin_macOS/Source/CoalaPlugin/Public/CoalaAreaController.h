// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaTile.h"
#include "CoalaGPSCoordinates.h"

#include <map>

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaAreaController.generated.h"

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaAreaController
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintCallable, Category = "Coala|Area Controller" )
		static void CalculateAreas( uint8 zoom, float newLon, float newLat, TArray<FCoalaTile>& newAreasInRange, TArray<FCoalaTile>& areasOutOfRange, int buffer = 1 );

		UFUNCTION( BlueprintCallable, Category = "Coala|Area Controller" )
		static void AddKnownArea( class UCoalaArea* area );

		UFUNCTION( BlueprintCallable, Category = "Coala|Area Controller" )
		static UCoalaArea* GetKnownArea( FCoalaTile tile );

		UFUNCTION( BlueprintCallable, Category = "Coala|Area Controller" )
		static void MoveCharacter( float lon, float lat, class ACharacter* character );

		UFUNCTION( BlueprintCallable, Category = "Coala|Area Controller" )
		static UCoalaArea* TryGetKnownArea( float lon, float lat );

		// adding gametags to array (not clearing it before!)
		UFUNCTION( BlueprintCallable, Category = "Coala|Area Controller" )
		static void GetGametagsFromGpsPosition( uint8 zoom, float lon, float lat, TArray<FString>& gametags );

	
		static std::map<FCoalaTile, class UCoalaArea*> GetKnownAreas();
	
		static void cleanup();
		static void init();
	private:

		static std::map<FCoalaTile, class UCoalaArea*> known_areas;
		
		static FCriticalSection mutex;
};
