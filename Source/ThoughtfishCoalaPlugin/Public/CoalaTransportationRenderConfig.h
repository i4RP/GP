// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaTransportationRenderConfig.generated.h"

USTRUCT( BlueprintType, meta = (HiddenByDefault) )
struct THOUGHTFISHCOALAPLUGIN_API FTransportationTypeSettings
{
	GENERATED_BODY()

	//The blueprint for the actor which is spawned to represent each vehicle of this setting's type. Needs to inherit from BP_Vehicle!
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala Transportation Render Config" )
	UClass* vehicleBlueprint = 0;

	//The blueprint for the actor which is spawned to represent each stop of this setting's type. Needs to inherit from  BP_Stop!
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala Transportation Render Config" )
	UClass* stopBlueprint = 0;
};

USTRUCT( BlueprintType, meta = (HiddenByDefault) )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaTransportationRenderConfig
{
	GENERATED_BODY()

	//This determines the transportation data that will be requested. You can request multiple transportation types by flagging multiple ones. To disable the transportation layer, flag "NONE".
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala Transportation Render Config", meta = (Bitmask, BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.TransportationType") )
	uint8 transportationType = 0;

	//These settings apply to entities of the type "BUS".
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala Transportation Render Config" )
	FTransportationTypeSettings busSettings;

	//These settings apply to entities of the type "TRAIN".
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala Transportation Render Config" )
	FTransportationTypeSettings trainSettings;

	//These settings apply to entities of the type "FLIGHT".
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala Transportation Render Config" )
	FTransportationTypeSettings flightSettings;

	//This number determines the perimeter (in meter) around the player's location where transportation data will be considered for rendering. Any route and respective vehicles will be rendered as long as at least one stop is located inside the set perimeter.
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala Transportation Render Config" )
	int transportationDataPerimeter = 0;
};
