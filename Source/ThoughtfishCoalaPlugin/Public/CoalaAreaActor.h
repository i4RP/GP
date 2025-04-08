// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaTask.h"

#include <map>

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/Actor.h"
#include "Containers/Queue.h"
#include "Math/UnrealMathUtility.h"

#include "CoalaAreaActor.generated.h"

UCLASS()
class ACoalaAreaActor
: public AActor
{
	GENERATED_BODY()
	
	public:	
		class ACoalaMeshActor* _refAreaDimensions;
		class ACoalaActor* _refAllCells;
		class ACoalaActor* _refAllWaters;
		class ACoalaActor* _refAllBuildings;
		class ACoalaActor* _refAllPOIs;
		class ACoalaActor* _refAllCustomPOIs;
		class ACoalaActor* _refAllStreets;
		class ACoalaActor* _refAllCrimes;
		class ACoalaActor* _refAllCrimePins;
		class ACoalaActor* _refAllHeatMapTokens;
		class ACoalaActor* _refAllDecorations;

		// holder for ref to AreaData obj
		// (used as signal for "abort work" on background tasks
		class UCoalaArea* _areaData;

		ACoalaAreaActor();
		~ACoalaAreaActor();

		// Called every frame
		virtual void Tick( float DeltaTime ) override;

		int cleanupHoldedCoalaActors();
		
		void signalStopAllWorkingThreads();

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coala" )
		bool markedForDestruction;
		
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coala" )
		bool shutdown;
	protected:
		virtual void BeginPlay() override;

	private:
		/* threading V2 */
		// CoalaArea data wrapper can as only one use private functions of CoalaAreaActor: its his boss
		friend class UCoalaArea;

		FCriticalSection mutex;
		TQueue<CoalaTask*> tasks;

		// perform async in background on this actor's tick
		bool AddCoalaTask( CoalaTask* task );

		// perform syncrone on this actor's tick
		bool AwaitCoalaTask( CoalaTask* task );

		bool addThreadsUsingAreaData( class FNonAbandonableTask* coalaThread, FString info );

		bool removeThreadsUsingAreaData( class FNonAbandonableTask* coalaThread, FString info );


	private:
		std::map<class FNonAbandonableTask*, FString> countThreadsUsingThisData;

		int64 getTimestampMS();
};

UCLASS()
class UCoalaAreaActorShadowingFix
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintPure, Category = "Coala|Actor", meta = (NativeBreakFunc) )
		static void BreakSceneObject( ACoalaAreaActor* Area, ACoalaMeshActor*& RefAreaDimensions, ACoalaActor*& RefAllCells, ACoalaActor*& RefAllWaters, ACoalaActor*& RefAllBuildings, ACoalaActor*& RefAllPOIs, ACoalaActor*& RefAllStreets, ACoalaActor*& RefAllCrimes, ACoalaActor*& RefAllCrimePins, ACoalaActor*& RefAllHeatMapTokens );
};
