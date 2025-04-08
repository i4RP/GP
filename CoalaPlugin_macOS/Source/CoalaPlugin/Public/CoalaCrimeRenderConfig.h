// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CrimeType.h"
#include "CoalaCrimeRenderConfig.generated.h"



USTRUCT( BlueprintType, meta = (HiddenByDefault) )
struct THOUGHTFISHCOALAPLUGIN_API FCrimeTypeWrapper
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime type wrapper" )
	TArray<UCrimeType> crimeTypes;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime type wrapper" )
	UClass* crimePinBlueprint = 0;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime type wrapper" )
	bool shouldBeRendered = true;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime type wrapper" )
	bool shouldBeHighlighted = false;
};

UENUM( BlueprintType )
enum class UHeatMapType : uint8
{
	Pillar,
	Flat,
	None
};

USTRUCT( BlueprintType, meta = (HiddenByDefault) )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaCrimeRenderConfig
{
	GENERATED_BODY()

	//Renders all crimes regardless of their unique configuration in CrimeTypesToDisplay.
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime render config" )
	bool forceRenderAllCrimes = false;

	//Configure your crime types here. Select a combination of crime types like e. g. 'THEFT' and 'BICYCLE' to configure all instances of bicycle theft. 'Should be Highlighted' will use the HighlighterPrefab when checked. Crime types that are not configured will not be rendered. To ignore this setting and show all crimes, check ForceRenderAllCrimes. Beware that the 'AREA' type will be ignored.
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime render config" )
	TArray<FCrimeTypeWrapper> crimeTypesToDisplay;

	//Blueprint that is used to highlight a crime type combination if specified in CrimeTypesToDisplay.
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime render config" )
	UClass* highlighterBlueprint = 0;

	//Set the default blueprint to be used when no blueprint is specified in a crime type combination in CrimeTypesToDisplay.
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime render config" )
	UClass* defaultCrimePinBlueprint = 0;

	//You can select here if and how you want to display your Crime heatmap. 'None' disables the heatmap.
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime render config" )
	UHeatMapType heatMapType = UHeatMapType::Pillar;

	//This value defines how far the Heatmap is influenced by one CrimePoint.
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime render config" )
	int influence = 7;

	//This value determines how much a crime point influences its surrounding heatmap tokens.
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime render config" )
	float weightFactor = 2;

	//Set the minimum Weight for HeatMapTokens to be displayed. If you want to display all tokens, set this value to -1.
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime render config" )
	float weightThreshold = -1;

	//This value is only relevant when HeatMapType is set to 'Pillar' and determines how the heatmap token's height scales.
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime render config" )
	float pillarScale = 1;

	//This blueprint will be instantiated for each loaded cell if HeatMapType is set to 'Pillar'. Has to Inherit from BP_HeatmapToken!
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime render config" )
	UClass* pillarTokenBlueprint = 0;

	//This blueprint will be instantiated for each loaded cell if HeatMapType is set to 'Flat'. Has to Inherit from BP_HeatmapToken!
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala crime render config" )
	UClass* flatTokenBlueprint = 0;
};
