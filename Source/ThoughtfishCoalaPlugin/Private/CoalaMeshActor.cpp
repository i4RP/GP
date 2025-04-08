// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaMeshActor.h"
#include "ProceduralMeshComponent.h"

ACoalaMeshActor::ACoalaMeshActor()
{
	mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ACoalaMeshActor/mesh"));
	mesh->bUseAsyncCooking = true;
	RootComponent = mesh;
}
