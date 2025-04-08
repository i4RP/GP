// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaGPSCoordinates.h"

#include "GameFramework/PlayerController.h"
#include "TopDownPlayerController.generated.h"

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API ATopDownPlayerController
: public APlayerController
{
	GENERATED_BODY()
	
public:
	ATopDownPlayerController();

	void SetInput(bool input);
	UFUNCTION( BlueprintCallable, Category = "Coala|PlayerController" )
	FCoalaGPSCoordinates GetGpsHitLocationUnderCursor();
	
	FCoalaGPSCoordinates GetGpsHitLocationUnderTouch(ETouchIndex::Type type, FVector location);

protected:
	bool InputActive;

	/** Navigate player to the given world location. */
	void SetNewMoveDestination(const FVector DestLocation);

};
