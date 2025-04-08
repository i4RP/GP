// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaCell.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaBlueprintUtility.generated.h"

class ACoalaAreaActor;
class UCoalaArea;

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaBlueprintUtility
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintCallable, Category = "Coala|Utility" )
		static void SetMaximumLoopIterationCounter( int value );
	
		UFUNCTION( BlueprintPure, Category = "Coala|Utility" )
		static FVector GetTerrainPosition( double lon, double lat, UCoalaArea* area );

		UFUNCTION( BlueprintPure, Category = "Coala|Utility" )
		static FVector GetTerrainPositionWithoutArea( const FVector& scenePosition, AActor* worldProvider );

		UFUNCTION( BlueprintPure, Category = "Coala|Utility" )
		static FVector CenterOfCell( FCoalaCell cell, UCoalaArea* area, bool startTopLeft );

		UFUNCTION( BlueprintPure, Category = "Coala|Utility", meta = (DisplayName="DistanceOfGpsPositions") )
		static float DistanceOfGpsPositions( double lat1, double lng1, double lat2, double lng2 );

		UFUNCTION( BlueprintCallable, Category = "Coala|Utility" )
		static FString GetAppVersion();

		UFUNCTION( BlueprintCallable, Category = "Coala|Utility" )
		static FString GetAppName();
};

namespace Coala
{
	template<typename t>
	UClass* SafeLoadSoftClassPtr(const TSoftClassPtr<t> &classPtr)
	{
		UClass* out{ classPtr.Get() };
	
		if(out) return out;
	
		return classPtr.LoadSynchronous();	
	}
}
