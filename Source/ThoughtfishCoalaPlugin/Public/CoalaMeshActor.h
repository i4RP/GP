// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaActor.h"
#include "CoalaMeshActor.generated.h"

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API ACoalaMeshActor
: public ACoalaActor
{
	GENERATED_BODY()
	
	public:	
		UPROPERTY( VisibleAnywhere, Category = "Coala|Actor" )
		class UProceduralMeshComponent* mesh;
	
		ACoalaMeshActor();		
};
