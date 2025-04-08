#include "CoalaTask.h"

#include "CoalaActor.h"
#include "CoalaMeshActor.h"
#include "CoalaMeshGenerator.h"
#include "CoalaController.h"
#include "CoalaCustomPOIActor.h"

#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMeshActor.h"

CoalaTask::CoalaTask()
{
	this->setToTrueIfDone = 0;
}

CoalaTask::~CoalaTask()
{

}

void 
CoalaTask::Perform()
{
	this->Init();
	this->Run();
	this->Cleanup();

	this->setToDone();
}

void 
CoalaTask::setToDone()
{
	if( this->setToTrueIfDone )
	{
		*this->setToTrueIfDone = true;
	}
}

void
CoalaTask::Init()
{

}

void
CoalaTask::Cleanup()
{

}

EnsureSceneObjectRefActorExists::EnsureSceneObjectRefActorExists( ACoalaActor*& targetRefActor, AActor* attachmentActor, int tileIndexX, int tileIndexY, const FString& nameEnding )
: targetRefActor( targetRefActor ), attachmentActor( attachmentActor ), tileIndexX( tileIndexX ), tileIndexY( tileIndexY ), nameEnding( nameEnding )
{

}

void
EnsureSceneObjectRefActorExists::Run()
{
	UWorld* world = this->attachmentActor->GetWorld();
	FActorSpawnParameters spawnParameters;
	spawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	spawnParameters.bNoFail = true;
	this->targetRefActor = world->SpawnActor<ACoalaActor>( FVector::ZeroVector, FRotator::ZeroRotator, spawnParameters );
#if WITH_EDITOR
	FString displayName = this->targetRefActor->GetActorLabel() + "_area_" + FString::FromInt( this->tileIndexX ) + "_" + FString::FromInt( this->tileIndexY ) + this->nameEnding;
	this->targetRefActor->Rename( *displayName );
	this->targetRefActor->SetActorLabel( *displayName );
#endif
	if( !this->targetRefActor ) return;
	this->targetRefActor->AttachToActor( this->attachmentActor, FAttachmentTransformRules::SnapToTargetIncludingScale );
	if( !this->targetRefActor ) return;
	this->targetRefActor->SetActorRelativeLocation( FVector::ZeroVector );
}

SpawnCoalaMeshActor::SpawnCoalaMeshActor( ACoalaMeshActor*& targetRefActor, ACoalaActor* attachmentActor, const FString& label, const FName& tag )
: targetRefActor( targetRefActor ), attachmentActor( attachmentActor ), label( label ), tag( tag )
{

}

void 
SpawnCoalaMeshActor::Run()
{
	UWorld* world = this->attachmentActor->GetWorld();
	FActorSpawnParameters spawnParameters;
	spawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	spawnParameters.bNoFail = true;
	this->targetRefActor = world->SpawnActor<ACoalaMeshActor>( FVector::ZeroVector, FRotator::ZeroRotator, spawnParameters );
	if( !this->targetRefActor ) return;

	this->attachmentActor->allAttachedActors.Add( this->targetRefActor );
	if( !this->targetRefActor ) return;
	this->targetRefActor->AttachToActor( this->attachmentActor, FAttachmentTransformRules::KeepRelativeTransform );
#if WITH_EDITOR
	FString displayName = this->targetRefActor->GetActorLabel() + this->label;
	this->targetRefActor->Rename( *displayName );
	this->targetRefActor->SetActorLabel( *displayName );
#endif
	if( !this->targetRefActor ) return;
	this->targetRefActor->Tags.Add( this->tag );
}

CreateMesh::CreateMesh( UProceduralMeshComponent*& mesh, const int segmentIndexToCreateMesh, const TArray<FVector>& vertices, const TArray<int32>& triangles, const TArray<FVector>& normals, const TArray<FVector2D>& UV0, const TArray<FLinearColor>& vertexColors, const TArray<FProcMeshTangent>& tangents, bool generateCollisions, bool castShadows )
: mesh( mesh ), segmentIndexToCreateMesh( segmentIndexToCreateMesh ), vertices ( vertices ), triangles( triangles ), normals( normals ), UV0( UV0 ), vertexColors( vertexColors ), tangents( tangents ), generateCollisions( generateCollisions ), castShadows( castShadows )
{
	// UE_LOG( CoalaLogCore, Warning, TEXT( "CreateMesh()" ) );
}

CreateMesh::~CreateMesh()
{
	// UE_LOG( CoalaLogCore, Warning, TEXT( "~CreateMesh()" ) );
}

void 
CreateMesh::Run()
{
	int maxTriangleIndex = this->vertices.Num();
	for( int i = 0; i < this->triangles.Num(); ++i )
	{
		if( this->triangles[i] > maxTriangleIndex )
		{
			// UE_LOG( CoalaLogCore, Warning, TEXT( "CreateMesh::Run() - preventing mesh from creation because triangle index is wrong" ) );
			return;
		}
	}
	
	// New in UE 4.17, multi-threaded PhysX cooking.
	this->mesh->bUseAsyncCooking = false;

	// Enable collision data
	this->mesh->ContainsPhysicsTriMeshData( true );
	this->mesh->CastShadow = this->castShadows;
	this->mesh->CreateMeshSection_LinearColor( segmentIndexToCreateMesh, vertices, triangles, normals, UV0, vertexColors, tangents, generateCollisions );

	MeshGenerator::verifyValidMesh( this->mesh );
}

SetMeshMaterial::SetMeshMaterial( UProceduralMeshComponent* mesh, const int segmentIndex, UMaterialInterface* material )
: mesh( mesh ), segmentIndex( segmentIndex ), material( material )
{

}

void 
SetMeshMaterial::Run()
{
	this->mesh->SetMaterial( this->segmentIndex, this->material );
}

SpawnDecoration::SpawnDecoration( AActor*& out, ACoalaActor* attachTo, FVector terrainPos, FRotator rotation, FVector scaling, UClass* decoration )
: out( out ), attachTo( attachTo ), terrainPos( terrainPos ), rotation( rotation ), scaling( scaling ), decoration( decoration )
{

}

void
SpawnDecoration::Run()
{
	if( !IsValid( this->attachTo ) ) return;
	UWorld* world = this->attachTo->GetWorld();

	if( !IsValid( world ) ) return;
	if( !IsValid( this->decoration ) ) return;
	FActorSpawnParameters spawnParameters;
	//spawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	//spawnParameters.bNoFail = true;
	AActor* ret = world->SpawnActor( this->decoration, &terrainPos, &rotation, spawnParameters );

//	this->out->SetMobility( EComponentMobility::Movable );
//	UStaticMeshComponent* static_mesh_component = this->out->GetStaticMeshComponent();
//	bool b = static_mesh_component->SetStaticMesh( this->decoration );

	if( !IsValid( ret ) ) return;
	if( !IsValid( this->attachTo ) ) return;
	ret->AttachToActor( this->attachTo, FAttachmentTransformRules::KeepRelativeTransform );

	if( !IsValid( this->attachTo ) ) return;
	if( !IsValid( ret ) ) return;
	this->attachTo->allAttachedActors.Add( ret );

	if( !IsValid( ret ) ) return;
	ret->SetActorScale3D( this->scaling );

	this->out = ret;
}

SpawnDecorations::SpawnDecorations( AActor*& out, ACoalaActor* attachTo, TArray<FVector> terrainPositions, TArray<FRotator> rotations,TArray<FVector> scalings, UClass* decoration )
: out( out ), attachTo( attachTo ), terrainPositions( terrainPositions ), rotations( rotations ), scalings( scalings ), decoration( decoration )
{

}

void
SpawnDecorations::Run()
{
	if( !IsValid( this->attachTo ) ) return;
	UWorld* world = this->attachTo->GetWorld();

	if( !IsValid( world ) ) return;
	if( !IsValid( this->decoration ) ) return;

	for( int i = 0; i < this->terrainPositions.Num(); ++i )
	{
		FVector currentTerrainPos = this->terrainPositions[i];
		FRotator currentRotation = this->rotations[i];
		FVector currentScaling = this->scalings[i];

		FActorSpawnParameters spawnParameters;
		//spawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		//spawnParameters.bNoFail = true;
		AActor* inst = world->SpawnActor( this->decoration, &currentTerrainPos, &currentRotation, spawnParameters );

//		this->out->SetMobility( EComponentMobility::Movable );
//		UStaticMeshComponent* static_mesh_component = this->out->GetStaticMeshComponent();
//		bool b = static_mesh_component->SetStaticMesh( this->decoration );

		if( !IsValid( inst ) ) return;
		if( !IsValid( this->attachTo ) ) return;
		inst->AttachToActor( this->attachTo, FAttachmentTransformRules::KeepRelativeTransform );

		if( !IsValid( this->attachTo ) ) return;
		if( !IsValid( inst ) ) return;
		this->attachTo->allAttachedActors.Add( inst );

		if( !IsValid( inst ) ) return;
		inst->SetActorScale3D( currentScaling );
	}

	this->out = this->attachTo;
}

AdjustZPosOnActor::AdjustZPosOnActor( AActor* targetActor, float zValue )
: targetActor( targetActor ), zValue( zValue )
{
}

void
AdjustZPosOnActor::Run()
{
	FVector pos = this->targetActor->GetActorLocation();
	pos.Z = this->zValue * ACoalaController::GetCoalaScale();
	this->targetActor->SetActorLocation( pos );
}

SpawnCoalaMeshActorOnWorldPos::SpawnCoalaMeshActorOnWorldPos( ACoalaMeshActor*& targetRefActor, ACoalaActor* attachmentActor, const FVector& worldPos, const FString& label, const FName& tag )
: targetRefActor( targetRefActor ), attachmentActor( attachmentActor ), worldPos( worldPos ), label( label ), tag( tag )
{

}

void 
SpawnCoalaMeshActorOnWorldPos::Run()
{
	UWorld* world = this->attachmentActor->GetWorld();
	FActorSpawnParameters spawnParameters;
	spawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	spawnParameters.bNoFail = true;
	this->targetRefActor = world->SpawnActor<ACoalaMeshActor>( this->worldPos, FRotator::ZeroRotator, spawnParameters );
	if( !this->targetRefActor ) return;

	this->attachmentActor->allAttachedActors.Add( this->targetRefActor );
#if WITH_EDITOR
	FString displayName = this->targetRefActor->GetActorLabel() + this->label;
	this->targetRefActor->Rename( *displayName );
	this->targetRefActor->SetActorLabel( *displayName );
#endif
	if( !this->targetRefActor ) return;
	this->targetRefActor->Tags.Add( this->tag );
	if( !this->targetRefActor ) return;
	this->targetRefActor->AttachToActor( this->attachmentActor, FAttachmentTransformRules::KeepWorldTransform );
}

SpawnCoalaPoi::SpawnCoalaPoi( AActor*& spawnedInstance, ACoalaActor* attachmentActor, class UClass* coalaPoi, const FVector& worldPos, const FString& label )
: spawnedInstance( spawnedInstance ), attachmentActor( attachmentActor ), coalaPoi( coalaPoi ), worldPos( worldPos ), label( label )
{

}

void 
SpawnCoalaPoi::Run()
{
	UWorld* world = this->attachmentActor->GetWorld();
	if( !world ) return;

	FActorSpawnParameters spawnParameters;
	spawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	spawnParameters.bNoFail = true;
	this->spawnedInstance = world->SpawnActor<AActor>( this->coalaPoi, this->worldPos, FRotator::ZeroRotator, spawnParameters );
	if( !this->spawnedInstance ) return;

	// set scale for actor
	{
		FVector scale = FVector::OneVector;
		scale *= ACoalaController::GetCoalaScale();
		this->spawnedInstance->SetActorScale3D( scale );
	}

	if( !this->attachmentActor ) return;
	if( !this->spawnedInstance ) return;
	this->attachmentActor->allAttachedActors.Add( this->spawnedInstance );
	this->spawnedInstance->AttachToActor( this->attachmentActor, FAttachmentTransformRules::KeepWorldTransform );

#if WITH_EDITOR
	FString displayName = this->spawnedInstance->GetActorLabel() + this->label;
	this->spawnedInstance->Rename( *displayName );
	this->spawnedInstance->SetActorLabel( *displayName );
#endif
}

SpawnCoalaCustomPoi::SpawnCoalaCustomPoi( ACoalaCustomPOIActor*& spawnedInstance, ACoalaActor* attachmentActor, const FCoalaCustomPOI& coalaCustomPoiData, UClass* coalaCustomPoiToSpawn, const FVector& worldPos, const FString& label )
: spawnedInstance( spawnedInstance ), attachmentActor( attachmentActor ), coalaCustomPoiData( coalaCustomPoiData ), coalaCustomPoiToSpawn( coalaCustomPoiToSpawn ), worldPos( worldPos ), label( label )
{

}

void
SpawnCoalaCustomPoi::Run()
{
	UWorld* world = this->attachmentActor->GetWorld();
	if( !world ) return;

	FActorSpawnParameters spawnParameters;
	spawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	spawnParameters.bNoFail = true;
	this->spawnedInstance = world->SpawnActor<ACoalaCustomPOIActor>( this->coalaCustomPoiToSpawn, this->worldPos, FRotator::ZeroRotator, spawnParameters );
	if( !this->spawnedInstance ) return;
	this->spawnedInstance->customPoiData = this->coalaCustomPoiData;

	// set scale for actor
	{
		FVector scale = FVector::OneVector;
		scale *= ACoalaController::GetCoalaScale();
		this->spawnedInstance->SetActorScale3D( scale );
	}

	if( !this->attachmentActor ) return;
	if( !this->spawnedInstance ) return;
	this->attachmentActor->allAttachedActors.Add( this->spawnedInstance );
	this->spawnedInstance->AttachToActor( this->attachmentActor, FAttachmentTransformRules::KeepWorldTransform );

#if WITH_EDITOR
	FString displayName = this->spawnedInstance->GetActorLabel() + this->label;
	this->spawnedInstance->Rename( *displayName );
	this->spawnedInstance->SetActorLabel( *displayName );
#endif
}

delegates::CallCellsCreatedDelegate::CallCellsCreatedDelegate( FCoalaDelegateCellFactoryOnDone delegateOnDone, ACoalaMeshActor* meshActor, UCoalaArea* area )
: delegateOnDone( delegateOnDone ), meshActor( meshActor ), area( area )
{

}

void
delegates::CallCellsCreatedDelegate::Run()
{
	this->delegateOnDone.ExecuteIfBound( 
		this->meshActor,
		this->area
	);
}

delegates::CallDecorationsCreatedDelegateDone::CallDecorationsCreatedDelegateDone( FCoalaDelegateDecorationOnDone delegateOnDone, UCoalaArea* area )
: delegateOnDone( delegateOnDone ), area( area )
{

}

void
delegates::CallDecorationsCreatedDelegateDone::Run()
{
	this->delegateOnDone.ExecuteIfBound( this->area );
}

delegates::CallStreetGenerationDelegateDone::CallStreetGenerationDelegateDone( FCoalaDelegateStreetsOnDone delegateOnDone, UCoalaArea* area )
: delegateOnDone( delegateOnDone ), area( area )
{

}

void
delegates::CallStreetGenerationDelegateDone::Run()
{
	this->delegateOnDone.ExecuteIfBound( this->area );
}

delegates::CallBuildingGenerationDelegateDone::CallBuildingGenerationDelegateDone( FCoalaDelegateBuildingsFactoryOnDone delegateOnDone, UCoalaArea* area )
: delegateOnDone( delegateOnDone ), area( area )
{

}

void
delegates::CallBuildingGenerationDelegateDone::Run()
{
	this->delegateOnDone.ExecuteIfBound( this->area );
}

delegates::CallBuildingGenerationDelegateBuildingCreated::CallBuildingGenerationDelegateBuildingCreated( FCoalaDelegateBuildingsFactoryOnBuildingCreated delegateOnDoneBuildingCreated, ACoalaMeshActor* meshActor, UCoalaArea* area )
: delegateOnDoneBuildingCreated( delegateOnDoneBuildingCreated ), meshActor( meshActor ), area( area )
{

}

void
delegates::CallBuildingGenerationDelegateBuildingCreated::Run()
{
	this->delegateOnDoneBuildingCreated.ExecuteIfBound( this->meshActor, this->area );
}

delegates::CallWaterGenerationDelegateDone::CallWaterGenerationDelegateDone( FCoalaDelegateWaterFactoryOnDone delegateOnDone, UCoalaArea* area )
: delegateOnDone( delegateOnDone ), area( area )
{

}

void
delegates::CallWaterGenerationDelegateDone::Run()
{
	this->delegateOnDone.ExecuteIfBound( this->area );
}

delegates::CallWaterShapeGenerationDelegateDone::CallWaterShapeGenerationDelegateDone( FCoalaDelegateWaterFactoryOnWaterMeshDone delegateOnDone, ACoalaMeshActor* meshActor )
: delegateOnDone( delegateOnDone ), meshActor( meshActor )
{

}

void
delegates::CallWaterShapeGenerationDelegateDone::Run()
{
	this->delegateOnDone.ExecuteIfBound(
		this->meshActor
	);
}

delegates::CallPoiDelegateOnPoiPlaced::CallPoiDelegateOnPoiPlaced( FCoalaDelegatOnCoalaPoiPlaced delegateOnPoiPlaced, AActor* poi )
: delegateOnPoiPlaced( delegateOnPoiPlaced ), poi( poi )
{

}

void
delegates::CallPoiDelegateOnPoiPlaced::Run()
{
	this->delegateOnPoiPlaced.ExecuteIfBound(
		this->poi
	);
}

delegates::CallPoiDelegateOnDone::CallPoiDelegateOnDone( FCoalaDelegatePlaceCoalaPoisOnDone delegateOnDone, UCoalaArea* area )
: delegateOnDone( delegateOnDone ), area( area )
{

}

void
delegates::CallPoiDelegateOnDone::Run()
{
	this->delegateOnDone.ExecuteIfBound(
		this->area
	);
}

delegates::CallCustomPoiDelegateOnCustomPoiPlaced::CallCustomPoiDelegateOnCustomPoiPlaced( FCoalaDelegatOnCustomPoiPlaced delegateOnCustomPoiPlaced, ACoalaCustomPOIActor* customPoi )
: delegateOnCustomPoiPlaced( delegateOnCustomPoiPlaced ), customPoi( customPoi )
{

}

void
delegates::CallCustomPoiDelegateOnCustomPoiPlaced::Run()
{
	this->delegateOnCustomPoiPlaced.ExecuteIfBound(
		this->customPoi
	);
}

delegates::CallCustomPoiDelegateOnDone::CallCustomPoiDelegateOnDone( FCoalaDelegatePlaceCustomPoisOnDone delegateOnDone, UCoalaArea* area )
: delegateOnDone( delegateOnDone ), area( area )
{

}

void
delegates::CallCustomPoiDelegateOnDone::Run()
{
	this->delegateOnDone.ExecuteIfBound(
		this->area
	);
}
