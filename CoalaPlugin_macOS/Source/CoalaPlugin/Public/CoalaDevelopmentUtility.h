// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaTile.h"
#include "CoalaBuilding.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaDevelopmentUtility.generated.h"

UCLASS()
class UCoalaDevelopmentUtility
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
	static int currentGUID;

	UFUNCTION( BlueprintCallable, Category = "Coala|Utility" )
	static int GetGUID();

	UFUNCTION( BlueprintCallable, Category = "Coala|Utility" )
	static void SetActorDisplayNameInWorldOutliner( class AActor* actor, FString newDisplayName );	
	
	UFUNCTION( BlueprintPure, Category = "Coala|Utility" )
	static FString CoalaBuildingShapeToString( FCoalaBuilding building );

	UFUNCTION( BlueprintPure, Category = "Coala|Utility" )
	static bool CompareGPSCoordinates( FCoalaGPSCoordinates coords1, FCoalaGPSCoordinates coords2 );	
};