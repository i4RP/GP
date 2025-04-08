// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaLogCore.h"
#include "CoalaCrime.h"
#include "CoalaProperties.h"
#include "CoalaWater.h"
#include "CoalaBuilding.h"
#include "CoalaPOI.h"
#include "CoalaCustomPOI.h"
#include "CoalaWeather.h"
#include "CoalaCell.h"
#include "CoalaStreets.h"
#include "CoalaElevation.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaArea.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam( FCoalaDelegateCoalaArea_OnDestroy, FCoalaTile, tile );

class ACoalaActor;

UCLASS( BlueprintType )
class THOUGHTFISHCOALAPLUGIN_API UCoalaArea
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UCoalaArea();
	~UCoalaArea();

	public:
		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Area" )
		FCoalaAreaProperties props;

		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Area" )
		TArray<FCoalaWater> water;

		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Area" )
		TArray<FCoalaBuilding> buildings;

		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Area" )
		TArray<FCoalaPOI> pois;

		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Area" )
		TArray<FCoalaCustomPOI> customPois;

		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Area" )
		FCoalaWeather weather;

		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Area" )
		TArray<FCoalaCell> grid;

		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Area" )
		TArray<FCoalaStreets> streets;

		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Area" )
		FCoalaElevation elevation;

		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Area" )
		TArray<FCoalaCrime> crimes;

		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Area" )
		class ACoalaAreaActor* sceneObject;

		UFUNCTION( BlueprintCallable, Category = "Coala|Area" )
		static UCoalaArea* LoadCoalaAreaFromResponse(FString JsonRaw, int defaultBuildingLevel, bool clampToDefaultBuildingLevel, int limitMaxBuildingLevelTo = 0);

		UFUNCTION( BlueprintCallable, Category = "Coala|Area" )
		static UCoalaArea* LoadCoalaAreaFromLocalDump(FString assetPathInProject, int defaultBuildingLevel = 1, bool clampToDefaultBuildingLevel = false);

		UFUNCTION( BlueprintCallable, Category = "Coala|Area" )
		static void ClearAllCustomPOIs(UCoalaArea* area);
			
		UFUNCTION( BlueprintCallable, Category = "Coala|Area" )
		bool CoordinatesAreInAreaBounds( float lon, float lat );

		void markForDestruction();

		// guarded function calls for CoalaAreaActor
		bool AddCoalaLayerRenderTask( class CoalaTask* task, bool waitForResult = false );
		bool addThreadsUsingAreaData( class FNonAbandonableTask* coalaTask, FString info );
		bool removeThreadsUsingAreaData( class FNonAbandonableTask* coalaTask, FString info );

		FCoalaDelegateCoalaArea_OnDestroy onDestroy;
};


namespace Coala
{
	namespace Converter
	{
		UCoalaArea* JsonStringToArea( FString& JsonRaw );
	}
}

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaAreaShadowingFix
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintPure, Category = "Coala|Variables|Area", meta = (NativeBreakFunc) )
		static void BreakCoalaArea( UCoalaArea* InCoalaArea, TArray<FCoalaCell>& coalaCells, TArray<FCoalaPOI>& coalaPois, TArray<FCoalaCustomPOI>& coalaCustomPois, FCoalaTile& coalaTile, FCoalaBounds& coalaBounds, TArray<FCoalaStreets>& coalaStreets, TArray<FCoalaBuilding>& coalaBuildings, TArray<FCoalaWater>& coalaWaters, FCoalaWeather& weather, TArray<FCoalaCrime>& coalaCrimes, ACoalaAreaActor*& sceneObject, FCoalaElevation& elevation );

		UFUNCTION( BlueprintCallable, Category = "Coala|Variables|Coala Area" )
		static bool CompareArea( UCoalaArea* a, UCoalaArea* b );
				
		UFUNCTION(BlueprintCallable, Category = "Coala|MeshGeneration")
		static void SetSceneObjectRefForCrime(UCoalaArea* area, ACoalaActor* crimesParentActor);

		UFUNCTION(BlueprintCallable, Category = "Coala|MeshGeneration")
		static void SetSceneObjectRefForCrimePins(UCoalaArea* area, ACoalaActor* crimePinsParentActor);

		UFUNCTION(BlueprintCallable, Category = "Coala|MeshGeneration")
		static void SetSceneObjectRefForHeatMap(UCoalaArea* area, ACoalaActor* tokenParentActor);

		UFUNCTION(BlueprintCallable, Category = "Coala|MeshGeneration")
		static void AddAttachedActorToHeatMap(UCoalaArea* area, AActor* tokenActor);

		UFUNCTION(BlueprintCallable, Category = "Coala|MeshGeneration")
		static void RemoveAttachedActorToHeatMap(UCoalaArea* area, AActor* tokenActor);

		UFUNCTION(BlueprintCallable, Category = "Coala|MeshGeneration")
		static void AddAttachedActorToCrimePins(UCoalaArea* area, AActor* crimePinActor);
		
		UFUNCTION( BlueprintCallable, Category = "Coala|Area", meta = (AutoCreateRefTerm = "onDestroy") )
		static void BindOnDestroy( UCoalaArea* area, const FCoalaDelegateCoalaArea_OnDestroy& onDestroy);

};
