// Copyright Thoughtfish GmbH, 2019
// http://www.thoughtfish.de

#include "CoalaCharacterBase.h"
#include "CoalaController.h"
#include "CoalaInteractableActor.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/StaticMesh.h"
#include "CoalaBlueprintUtility.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "TopDownPlayerController.h"
#include "CoalaLogCore.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Components/SkeletalMeshComponent.h"

ACoalaCharacterBase::ACoalaCharacterBase()
{
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize( 42.f, 96.0f );

	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator( 0.f, 640.f, 0.f );
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>( TEXT( "CameraBoom" ) );
	CameraBoom->SetupAttachment( RootComponent );
	CameraBoom->SetUsingAbsoluteRotation( true ); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = distanceToPLayer;
	CameraBoom->SetRelativeRotation( cameraRotation );
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>( TEXT( "TopDownCamera" ) );
	TopDownCameraComponent->SetupAttachment( CameraBoom, USpringArmComponent::SocketName );
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
}

void
ACoalaCharacterBase::Tick( const float DeltaTime )
{
	Super::Tick( DeltaTime );

	if( this->playercontroller )
	{
		if( this->playercontroller->IsInputKeyDown( EKeys::E ) == true )
		{
			OnRotateCamera( -1 );
		}
		else if( this->playercontroller->IsInputKeyDown( EKeys::Q ) == true )
		{
			OnRotateCamera( 1 );
		}
		
		if( this->playercontroller->IsInputKeyDown( EKeys::T ) == true )
		{
			OnZoomCamera( 1 );
		}
		else if( this->playercontroller->IsInputKeyDown( EKeys::G ) == true )
		{
			OnZoomCamera( -1 );
		}
	}
}

void
ACoalaCharacterBase::SetupPlayerInputComponent( UInputComponent* PlayerInputComponent )
{
	check( PlayerInputComponent );
	PlayerInputComponent->BindAction( "InteractPOI", IE_Pressed, this, &ACoalaCharacterBase::OnPoiInteract );
}

void
ACoalaCharacterBase::enableMovementOnClickOrTouch()
{
	this->InputComponent->BindTouch( IE_DoubleClick, this, &ACoalaCharacterBase::OnSetDestinationTouched );
	this->InputComponent->BindAction( "SetDestination", IE_Pressed, this, &ACoalaCharacterBase::OnSetDestinationPressed );
}

void
ACoalaCharacterBase::EnableInput( APlayerController* givenPlayerController )
{
	if( givenPlayerController )
	{
		Super::EnableInput( givenPlayerController );
	}
	else if( playercontroller )
	{
		Super::EnableInput( playercontroller );
		ATopDownPlayerController* cast = Cast<ATopDownPlayerController>( playercontroller );
		if( cast )
		{
			cast->SetInput( true );
		}
	}
}

void
ACoalaCharacterBase::DisableInput( APlayerController* givenPlayerController )
{
	if( givenPlayerController )
	{
		Super::DisableInput( givenPlayerController );
	}
	else if( playercontroller )
	{
		Super::DisableInput( playercontroller );
		ATopDownPlayerController* cast = Cast<ATopDownPlayerController>( playercontroller );
		if( cast )
		{
			cast->SetInput( false );
		}
	}
}

void
ACoalaCharacterBase::OnSetDestinationPressed()
{
	ATopDownPlayerController* c = Cast<ATopDownPlayerController>( GetController() );
	if( !c )
		return;

	FCoalaGPSCoordinates gps_position = c->GetGpsHitLocationUnderCursor();

	// debug outputs
#if UE_BUILD_DEVELOPMENT
	if( ACoalaController::Instance && ACoalaController::Instance->printVariablesToScreen & (1 << (int32)PRINT_DEBUG_VARIABLES_TO_SCREEN::CLICK_EVENTS) )
	{
		FString debugMessage = "OnSetDestinationPressed " + FString::SanitizeFloat( gps_position.lon, 6 ) + "," + FString::SanitizeFloat( gps_position.lat, 6 );

		UE_LOG( CoalaLogCore, Error, TEXT( "%s" ), *debugMessage );
		GEngine->AddOnScreenDebugMessage( -1, 15.0f, FColor::Yellow, debugMessage );
	}
#endif

	if( gps_position.lon == 0 && gps_position.lat == 0 )
	{
		UE_LOG( LogTemp, Warning, TEXT("ACoalaCharacter - OnSetDestinationPressed: Nothing hit with GetHitpointWithWorldAtCourse() ?!") );
		return;
	}

	OnWorldPositionChanged.Broadcast( gps_position );
}

void
ACoalaCharacterBase::OnSetDestinationTouched( const ETouchIndex::Type type, const FVector location )
{
	ATopDownPlayerController* c = Cast<ATopDownPlayerController>( GetController() );
	if( !c )
		return;
	
	FCoalaGPSCoordinates gps_position = c->GetGpsHitLocationUnderTouch( type, location );

	// debug outputs
#if UE_BUILD_DEVELOPMENT
	if( ACoalaController::Instance && ACoalaController::Instance->printVariablesToScreen & (1 << (int32)PRINT_DEBUG_VARIABLES_TO_SCREEN::CLICK_EVENTS) )
	{
		FString debugMessage = "OnSetDestinationTouched " + FString::SanitizeFloat( gps_position.lon, 6 ) + "," + FString::SanitizeFloat( gps_position.lat, 6 );

		UE_LOG( CoalaLogCore, Error, TEXT( "%s" ), *debugMessage );
		GEngine->AddOnScreenDebugMessage( -1, 15.0f, FColor::Yellow, debugMessage );
	}
#endif

	if( gps_position.lon == 0 && gps_position.lat == 0 )
	{
		UE_LOG( LogTemp, Warning, TEXT( "ACoalaCharacter - OnSetDestinationTouched: Nothing hit with GetHitpointWithWorldAtCourse() ?!" ) );
		return;
	}
	OnWorldPositionChanged.Broadcast( gps_position );
}

void
ACoalaCharacterBase::OnPoiInteract()
{
	if( !playercontroller )
		return;

#if UE_BUILD_DEVELOPMENT
	if( ACoalaController::Instance && ACoalaController::Instance->printVariablesToScreen & (1 << (int32)PRINT_DEBUG_VARIABLES_TO_SCREEN::CLICK_EVENTS) )
	{
		FString debugMessage = "ACoalaCharacterBase::OnPoiInteract";

		UE_LOG( CoalaLogCore, Error, TEXT( "%s" ), *debugMessage );
		GEngine->AddOnScreenDebugMessage( -1, 15.0f, FColor::Yellow, debugMessage );
	}
#endif

	FHitResult Hit;
	bool hit = playercontroller->GetHitResultUnderCursor( ECC_Visibility, false, Hit );

	if( Hit.bBlockingHit )
	{
		ACoalaInteractableActor* a = Cast<ACoalaInteractableActor>( Hit.GetActor() );

		if( a )
		{
			BPOnPoiInteract( a, true );
		}
		else
		{
			BPOnPoiInteract( nullptr, false );
		}
	}
}

void
ACoalaCharacterBase::OnRotateCamera( const float distance )
{
	if( CameraBoom )
	{
		FTransform _t = CameraBoom->GetRelativeTransform();
		FRotator rotation = _t.GetRotation().Rotator();
		rotation.Yaw += 1 * distance;
		CameraBoom->SetRelativeRotation( FRotator( rotation.Pitch, rotation.Yaw, 0 ) );
	}
}

void
ACoalaCharacterBase::OnZoomCamera( const float value )
{
	if( CameraBoom )
	{
		FTransform _t = CameraBoom->GetRelativeTransform();
		FRotator rotation = _t.GetRotation().Rotator();
		if( value > 0 && rotation.Pitch >= -30 )
		{
			return;
		}

		if( value < 0 && rotation.Pitch <= -85 )
		{
			return;
		}

		rotation.Pitch += 2 * value;
		CameraBoom->SetRelativeRotation( FRotator( rotation.Pitch, rotation.Yaw, 0 ) );
		CameraBoom->TargetArmLength += (-1) * value * 1000 * ACoalaController::GetCoalaScale();
	}
}

void
ACoalaCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	playercontroller = Cast<APlayerController>( GetController() );

	cameraRotation = FRotator( -60.f, 0.f, 0.f );
	distanceToPLayer = 80000.f;
	cursorSize = FVector( 1600.0f, 3200.0f, 3200.0f );
	AdjustInteractionRadiusTexture( interactionRadius );
}

void
ACoalaCharacterBase::AdjustInteractionRadiusTexture( const float radius )
{
	USkeletalMeshComponent* mesh = GetMesh();
	TArray<USceneComponent*> children = mesh->GetAttachChildren();

	for( int i = 0; i < children.Num(); i++ )
	{
		if( children[i]->GetFName() == "SM_InteractionArea" )
		{
			FBoxSphereBounds bounds = children[i]->Bounds;
			if( radius != 0 )
			{
				float scale = (radius / (bounds.SphereRadius / 100)) * ACoalaController::GetCoalaScale();
				children[i]->SetRelativeScale3D( FVector( scale, scale, 0 ) );
			}
		}
	}
}
