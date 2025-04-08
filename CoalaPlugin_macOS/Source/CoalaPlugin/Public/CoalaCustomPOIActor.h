// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaCustomPOI.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoalaCustomPOIActor.generated.h"

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API ACoalaCustomPOIActor
: public AActor
{
	GENERATED_BODY()

	public:
	UPROPERTY( VisibleAnywhere, BlueprintReadWrite, Category = "Coala" )
	FCoalaCustomPOI customPoiData;
};
