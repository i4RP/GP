// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoalaCellRenderConfig.h"
#include "CoalaGPSCoordinates.h"
#include <map>

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoalaController.generated.h"

class UCoalaArea;
class ACoalaMeshActor;
class ACoalaActor;
class ACoalaAreaActor;

UENUM( BlueprintType, Meta = (Bitflags) )
enum class PRINT_DEBUG_VARIABLES_TO_SCREEN : uint8
{
	GAMEP_FPS,	 // FColor::Green
	AREA_EVENTS, // FColor::Black
	GPS_EVENTS,  // FColor::Red
	CLICK_EVENTS // FColor::Yellow
};
ENUM_CLASS_FLAGS( PRINT_DEBUG_VARIABLES_TO_SCREEN )

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API ACoalaController
: public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoalaController();
	~ACoalaController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION( BlueprintCallable, Category = "Coala|V2|controll" )
	void GpsPositionChanged( double lon, double lat );

	static FCoalaGPSCoordinates GetGpsOffset();

	UFUNCTION( BlueprintCallable, Category = "Coala|Area Controller" )
	void InitCoala( double scale = 1.0, double elevationScale = 100.0 ); // elevationScale to because of conversion from unreal units to meter

	UFUNCTION( BlueprintCallable, Category = "Coala|Area Controller" )
	void CleanupCoala();

	//Scale in Percent (prob. so between 0-1)
	UFUNCTION( BlueprintCallable, Category = "Coala|Utility" )
	static double GetCoalaScale();
	
	UFUNCTION( BlueprintCallable, Category = "Coala|Utility" )
	static double GetElevationScale();

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Dev", meta = (Bitmask, BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.PRINT_DEBUG_VARIABLES_TO_SCREEN") )
	int32 printVariablesToScreen;

	/** Project API_KEY from https://backend.coala.thoughtfish.de/  */
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|setup" )
	FString CoalaProjectApiKey;

	static ACoalaController* Instance;

	ACoalaAreaActor* spawnActorForArea( UCoalaArea* area );
	bool removeAreaDataAndActor( UCoalaArea* data, ACoalaAreaActor* actor );

private:
	static double _coalaScale;
	static double _elevationScale;

	static FCoalaGPSCoordinates currentGpsPosition; // this is the current GPS position
	// importent for management: 
	FVector scenePositionOffset; // this is the offset from Vector.Zero to this GPS position

	void EnsureAreaSceneObjectExists( UCoalaArea* targetArea );
	void EnsureSceneObjectRefActorExists( ACoalaActor*& targetRefActor, AActor* attachmentActor, int tileIndexX, int tileIndexY, const FString& nameEnding );

	std::map<UCoalaArea*,ACoalaAreaActor*> _allAreaActors;
};
