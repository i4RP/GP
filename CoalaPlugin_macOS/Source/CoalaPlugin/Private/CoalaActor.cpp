// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaActor.h"
#include "CoalaMeshActor.h"

ACoalaActor::ACoalaActor()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>( TEXT( "SceneComponent" ) );
	this->PrimaryActorTick.bRunOnAnyThread = false;
	this->PrimaryActorTick.bCanEverTick = false;
	bReplicates = false;
}

void ACoalaActor::GetAllCoalaMeshActorChildren(ACoalaActor* RefObjekt, TArray<ACoalaMeshActor*>& Values)
{
	TArray<AActor*> actors = RefObjekt->allAttachedActors;
	for( int i = 0; i < actors.Num(); i++ )
	{
		ACoalaMeshActor* cast = Cast<ACoalaMeshActor>( actors[i] );
		if( cast )
		{
			Values.Add( cast );
		}
	}
}

int
ACoalaActor::cleanupAllAttachedActors()
{
	this->MarkComponentsRenderStateDirty();

	TArray<AActor*> all_attached_actors;
//	all_attached_actors = this->allAttachedActors;
	this->GetAttachedActors( all_attached_actors );

	int countAttachedCoalaActors = all_attached_actors.Num();

	for( int i = 0; i < countAttachedCoalaActors; ++i )
	{
		AActor* current = all_attached_actors[i];

		ACoalaActor* is_coala_mesh_actor = Cast<ACoalaActor>( current );
		if( is_coala_mesh_actor )
			is_coala_mesh_actor->cleanupAllAttachedActors();

		current->Destroy();
	}
	all_attached_actors.Empty();

	return countAttachedCoalaActors;
}
