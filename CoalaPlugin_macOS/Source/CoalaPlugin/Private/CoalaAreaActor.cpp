// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaAreaActor.h"
#include "CoalaArea.h"
#include "CoalaMeshActor.h"
#include "CoalaLogCore.h"
#include "CoalaController.h"

#include "Engine/Engine.h"
#include "Engine/World.h"

ACoalaAreaActor::ACoalaAreaActor()
{
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>( TEXT( "SceneComponent" ) );
	this->shutdown = false;
	this->markedForDestruction = false;
}

ACoalaAreaActor::~ACoalaAreaActor()
{

}

// Called every frame
void
ACoalaAreaActor::Tick( float deltaTime )
{
	Super::Tick( deltaTime );
	
	if( this->markedForDestruction )
	{
		return;
	}

	if( !this->_areaData )
	{
		this->markedForDestruction = true;
		
		this->MarkComponentsRenderStateDirty();
		this->RemoveFromRoot();
		this->Destroy();
		GEngine->GetWorld()->RemoveActor( this, true );
		GEngine->ForceGarbageCollection();
	}

	float aimed_fps = 60;

	int aimed_milliseconds = (1 / aimed_fps) * 1000;
	int count_tasks_done_this_tick = 0;
	int sum_needed = 0;

	// perform all tasks
	while( !this->tasks.IsEmpty() )
	{
		CoalaTask* current_task = 0;
		if( !this->tasks.Dequeue( current_task ) )
			return;

		// do work and measure needed time
		int64 start = this->getTimestampMS();
		{
			current_task->Perform();
			delete current_task;
			count_tasks_done_this_tick++;
		}
		int64 end = this->getTimestampMS();
		int needed_current = (end - start) +1; // +1 to fix "zero milliseconds needed for current_task"
		sum_needed += needed_current;

		// when we are not on shutdown this actor
		if( !this->shutdown )
		{
			// stop tasks in this queue to next Tick
			if( sum_needed > aimed_milliseconds )
				break;
		}
		// else continue as long as all task are done
	}

	if( this->shutdown )
	{
		// we are in the shutdown phase
		// need to wait for all threads using this actor
		if( this->countThreadsUsingThisData.size() == 0 )
		{
			ACoalaController::Instance->removeAreaDataAndActor(
				this->_areaData,
				this->_areaData->sceneObject
			);

			FScopeLock Lock( &this->mutex );
			this->markedForDestruction = true;

			// all threads done
			// unhook from AreaData obj
			this->_areaData->sceneObject = 0;

			this->_areaData->RemoveFromRoot();
			this->_areaData = 0;

			this->cleanupHoldedCoalaActors();
			this->MarkComponentsRenderStateDirty();
			this->RemoveFromRoot();
			this->K2_DestroyActor();

			GEngine->ForceGarbageCollection(true);
		}
		return;
	}
}

int
ACoalaAreaActor::cleanupHoldedCoalaActors()
{
	int ret = 0;

	if( IsValid( _refAreaDimensions ) )
	{
		_refAreaDimensions->MarkComponentsRenderStateDirty();
		ret += _refAreaDimensions->cleanupAllAttachedActors();
		_refAreaDimensions->Destroy();
		_refAreaDimensions = 0;
	}

	if( IsValid( _refAllCells ) )
	{
		_refAllCells->MarkComponentsRenderStateDirty();
		ret += _refAllCells->cleanupAllAttachedActors();
		_refAllCells->Destroy();
		_refAllCells = 0;
	}

	if( IsValid( _refAllWaters ) )
	{
		_refAllWaters->MarkComponentsRenderStateDirty();
		ret += _refAllWaters->cleanupAllAttachedActors();
		_refAllWaters->Destroy();
		_refAllWaters = 0;
	}

	if( IsValid( _refAllBuildings ) )
	{
		_refAllBuildings->MarkComponentsRenderStateDirty();
		ret += _refAllBuildings->cleanupAllAttachedActors();
		_refAllBuildings->Destroy();
		_refAllBuildings = 0;
	}

	if( IsValid( _refAllPOIs ) )
	{
		_refAllPOIs->MarkComponentsRenderStateDirty();
		ret += _refAllPOIs->cleanupAllAttachedActors();
		_refAllPOIs->Destroy();
		_refAllPOIs = 0;
	}

	if( IsValid( _refAllCustomPOIs ) )
	{
		_refAllCustomPOIs->MarkComponentsRenderStateDirty();
		ret += _refAllCustomPOIs->cleanupAllAttachedActors();
		_refAllCustomPOIs->Destroy();
		_refAllCustomPOIs = 0;
	}

	if( IsValid( _refAllStreets ) )
	{
		_refAllStreets->MarkComponentsRenderStateDirty();
		ret += _refAllStreets->cleanupAllAttachedActors();
		_refAllStreets->Destroy();
		_refAllStreets = 0;
	}

	if( IsValid( _refAllDecorations ) )
	{
		_refAllDecorations->MarkComponentsRenderStateDirty();
		ret += _refAllDecorations->cleanupAllAttachedActors();
		_refAllDecorations->Destroy();
		_refAllDecorations = 0;
	}

	if( IsValid( _refAllCrimePins ) )
	{
		_refAllCrimePins->MarkComponentsRenderStateDirty();
		ret += _refAllCrimePins->cleanupAllAttachedActors();
		_refAllCrimePins->Destroy();
		_refAllCrimePins = 0;
	}

	if( IsValid( _refAllHeatMapTokens ) )
	{
		_refAllHeatMapTokens->MarkComponentsRenderStateDirty();
		ret += _refAllHeatMapTokens->cleanupAllAttachedActors();
		_refAllHeatMapTokens->Destroy();
		_refAllHeatMapTokens = 0;
	}

	if( IsValid( _refAllCrimes ) )
	{
		_refAllCrimes->MarkComponentsRenderStateDirty();
		ret += _refAllCrimes->cleanupAllAttachedActors();
		_refAllCrimes->Destroy();
		_refAllCrimes = 0;
	}

	return ret;
}

void
ACoalaAreaActor::BeginPlay()
{
	Super::BeginPlay();

	_refAreaDimensions = 0;
	_refAllCells = 0;
	_refAllWaters = 0;
	_refAllBuildings = 0;
	_refAllPOIs = 0;
	_refAllCustomPOIs = 0;
	_refAllStreets = 0;
	_refAllCrimes = 0;
	_refAllCrimePins = 0;
	_refAllHeatMapTokens = 0;
	_refAllDecorations = 0;
}

void UCoalaAreaActorShadowingFix::BreakSceneObject(
	ACoalaAreaActor* Area,
	ACoalaMeshActor*& RefAreaDimensions,
	ACoalaActor*& RefAllCells,
	ACoalaActor*& RefAllWaters,
	ACoalaActor*& RefAllBuildings,
	ACoalaActor*& RefAllPOIs,
	ACoalaActor*& RefAllStreets,
	ACoalaActor*& RefAllCrimes,
	ACoalaActor*& RefAllCrimePins,
	ACoalaActor*& RefAllHeatMapTokens )
{
	RefAreaDimensions = Area->_refAreaDimensions;

	RefAllCells = Area->_refAllCells;
	RefAllWaters = Area->_refAllWaters;
	RefAllBuildings = Area->_refAllBuildings;
	RefAllPOIs = Area->_refAllPOIs;

	RefAllStreets = Area->_refAllStreets;
	RefAllCrimes = Area->_refAllCrimes;
	RefAllCrimePins = Area->_refAllCrimePins;
	RefAllHeatMapTokens = Area->_refAllHeatMapTokens;
}

bool 
ACoalaAreaActor::AddCoalaTask( CoalaTask* task )
{
	FScopeLock Lock( &this->mutex );

	if( this->shutdown )
	{
		task->setToDone();

		delete task;
		return false;
	}

	this->tasks.Enqueue( task );

	return true;
}

bool 
ACoalaAreaActor::AwaitCoalaTask( CoalaTask* task )
{
	bool taskIsDone = false;
	{
		FScopeLock Lock( &this->mutex );

		if( this->shutdown )
		{
			task->setToDone();

			delete task;
			return false;
		}
		assert( task->setToTrueIfDone == 0 && "Error: CoalaTask is already Await. Check your code!" );
	
		task->setToTrueIfDone = &taskIsDone;
		this->tasks.Enqueue( task );
	}

	do
	{
		FPlatformProcess::Sleep( 1 / 60 );

		FScopeLock Lock( &this->mutex );
		if( this->shutdown )
		{
			task->setToDone();
			return false;
		}
	}
	while( !taskIsDone );

	return true;
}

bool
ACoalaAreaActor::addThreadsUsingAreaData( FNonAbandonableTask* coalaThread, FString info )
{
	FScopeLock Lock( &this->mutex );

	if( this->shutdown )
		return false;

	this->countThreadsUsingThisData[coalaThread] = info;

	return true;
}

bool 
ACoalaAreaActor::removeThreadsUsingAreaData( FNonAbandonableTask* coalaThread, FString info )
{
	FScopeLock Lock( &this->mutex );

//	if( this->shutdown || this->markedForDestruction )
//		return false;

	auto find = this->countThreadsUsingThisData.find( coalaThread );
	if( find != this->countThreadsUsingThisData.end() )
	{
		this->countThreadsUsingThisData.erase( coalaThread );
	}
	else
	{
		return false;
	}

	return true;
}

void 
ACoalaAreaActor::signalStopAllWorkingThreads()
{
	FScopeLock Lock( &this->mutex );

	this->shutdown = true;
}

int64 
ACoalaAreaActor::getTimestampMS()
{
	//std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	//return std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
	FDateTime timeUtc = FDateTime::UtcNow();
	return timeUtc.ToUnixTimestamp() * 1000 + timeUtc.GetMillisecond();
}
