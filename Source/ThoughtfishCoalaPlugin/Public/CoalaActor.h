// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoalaActor.generated.h"

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API ACoalaActor
: public AActor
{
	GENERATED_BODY()
	
	public:	
		TArray<class AActor*> allAttachedActors;

	
		ACoalaActor();

		virtual int cleanupAllAttachedActors();

		UFUNCTION( BlueprintPure, Category = "Coala|Actor" )
		static void GetAllCoalaMeshActorChildren( ACoalaActor* RefObjekt, TArray<class ACoalaMeshActor*>& Values );		
};
