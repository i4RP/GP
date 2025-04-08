// Copyright Thoughtfish GmbH, 2019
// http://www.thoughtfish.de

#include "TopDownPlayerController.h"
#include "GeoConverter.h"

#include "CoalaLogCore.h"
#include "Engine/Engine.h"
#include "GameFramework/Pawn.h"

#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "Components/DecalComponent.h"
#include "Engine/World.h"

ATopDownPlayerController::ATopDownPlayerController()
{
	bShowMouseCursor = true;
	InputActive = true;
}

void ATopDownPlayerController::SetInput(bool input)
{
	InputActive = input;
}

FCoalaGPSCoordinates
ATopDownPlayerController::GetGpsHitLocationUnderCursor()
{
	FHitResult Hit;
	GetHitResultUnderCursor( ECC_Visibility, false, Hit);

	FCoalaGPSCoordinates gps_position;

	if( !Hit.bBlockingHit )
		return gps_position;

	if( !InputActive )
		return gps_position;

	FCoalaGPSCoordinates gps_position_hit;
	UCoalaGpsConverterFunctionLibrary::WorldPositionToGpsPosition( 
		Hit.ImpactPoint.X,
		Hit.ImpactPoint.Y,
		gps_position_hit.lon,
		gps_position_hit.lat
	);

	// dev spawn something on pos to test conversion function
/* {
		FActorSpawnParameters spawnInfo;
		FRotator rotation = FRotator::ZeroRotator;
		AStaticMeshActor* tmp = this->GetWorld()->SpawnActor<AStaticMeshActor>( Hit.ImpactPoint, rotation, spawnInfo );
		FString displayName = FString::Printf( TEXT("%f,%f"), gps_position.lon, gps_position.lat );
	
		tmp->Rename( *displayName );
		tmp->SetActorLabel( *displayName );
	}
*/
	return gps_position_hit;
}

FCoalaGPSCoordinates
ATopDownPlayerController::GetGpsHitLocationUnderTouch(ETouchIndex::Type type, FVector location)
{
	FHitResult HitResult;
	GetHitResultUnderFinger(ETouchIndex::Touch1, ECC_Visibility, true, HitResult);

	FCoalaGPSCoordinates gps_position;
	if( !HitResult.bBlockingHit )
	{
		// debug outputs
		{
			FString debugMessage = "GetGpsHitLocationUnderTouch -> !HitResult.bBlockingHit";

			UE_LOG( CoalaLogCore, Error, TEXT( "%s" ), *debugMessage );
			GEngine->AddOnScreenDebugMessage( -1, 15.0f, FColor::Yellow, debugMessage );
		}

		return gps_position;
	}

	if( !InputActive )
	{
		// debug outputs
		{
			FString debugMessage = "GetGpsHitLocationUnderTouch -> !InputActive";

			UE_LOG( CoalaLogCore, Error, TEXT( "%s" ), *debugMessage );
			GEngine->AddOnScreenDebugMessage( -1, 15.0f, FColor::Yellow, debugMessage );
		}

		return gps_position;
	}

	UCoalaGpsConverterFunctionLibrary::WorldPositionToGpsPosition(
		HitResult.ImpactPoint.X, 
		HitResult.ImpactPoint.Y, 
		gps_position.lon,
		gps_position.lat
	);

	// debug outputs
	{
		FString debugMessage = "GetGpsHitLocationUnderTouch " + FString::SanitizeFloat( gps_position.lon, 6 ) + "," + FString::SanitizeFloat( gps_position.lat, 6 );

		UE_LOG( CoalaLogCore, Error, TEXT( "%s" ), *debugMessage );
		GEngine->AddOnScreenDebugMessage( -1, 15.0f, FColor::Yellow, debugMessage );
	}

	return gps_position;
}

void ATopDownPlayerController::SetNewMoveDestination(const FVector DestLocation)
{
	APawn* const MyPawn = GetPawn();
	if (MyPawn)
	{
		const float Distance = FVector::Dist(DestLocation, MyPawn->GetActorLocation());

		// We need to issue move command only if far enough in order for walk animation to play correctly
		if (Distance > 120.0f)
		{
			MyPawn->TeleportTo(DestLocation, FRotator(0.0f, 0.0f, 0.0f));
		}
	}
}
