// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaGPSCoordinates.h"
#include "GameFramework/Character.h"
#include "CoalaCharacterBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam( FOnWorldPositionChanged, FCoalaGPSCoordinates, gpsPosition );

class APlayerController;
class ACoalaInteractableActor;

UCLASS()
class ACoalaCharacterBase
: public ACharacter
{
	GENERATED_BODY()

	public:
		//Rotation of the Player Camera
		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = CameraVariables )
		FRotator cameraRotation;

		//Distance from the Player to the Camera
		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = CameraVariables )
		float distanceToPLayer;

		//Size of the Mouse Cursor
		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = MouseCursorVariables )
		FVector cursorSize;

		UPROPERTY( EditAnywhere, BlueprintReadWrite, Category="Coala|Character" )
		float interactionRadius;

		UFUNCTION( BlueprintCallable, Category = "Coala|Character" )
		void enableMovementOnClickOrTouch();

		UPROPERTY( BlueprintAssignable, Category = "Coala|Character" )
		FOnWorldPositionChanged OnWorldPositionChanged;

		APlayerController* playercontroller;


		ACoalaCharacterBase();

		virtual void Tick( float DeltaTime ) override;

		virtual void SetupPlayerInputComponent( class UInputComponent* PlayerInputComponent ) override;

		virtual void EnableInput( APlayerController* playercontroller ) override;

		virtual void DisableInput( APlayerController* playercontroller ) override;

		void OnSetDestinationPressed();

		void OnSetDestinationTouched( ETouchIndex::Type type, FVector location );


		UFUNCTION()
		void OnPoiInteract();

		UFUNCTION(BlueprintImplementableEvent)
		void BPOnPoiInteract( ACoalaInteractableActor* actor, bool clickedOnInteractable );


		void OnRotateCamera( float distance );

		void OnZoomCamera( float value );


		FORCEINLINE class UCameraComponent*
		GetTopDownCameraComponent() const { return TopDownCameraComponent; }

		FORCEINLINE class UDecalComponent*
		GetCursorToWorld() { return CursorToWorld; }

		FORCEINLINE class USpringArmComponent*
		GetCameraBoom() const { return CameraBoom; }

	protected:
		virtual void BeginPlay() override;

	private:
		/** Top down camera */
		UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true") )
		class UCameraComponent* TopDownCameraComponent;

		/** A decal that projects to the cursor location. */
		UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true") )
		class UDecalComponent* CursorToWorld;

		/** Camera boom positioning the camera above the character */
		UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true") )
		class USpringArmComponent* CameraBoom;


		void AdjustInteractionRadiusTexture( float radius );
};
