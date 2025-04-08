// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaDecorator.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam( FCoalaDelegateDecorationOnDone, UCoalaArea*, area );
DECLARE_DYNAMIC_DELEGATE_OneParam( FCoalaDelegateOnDecorationPlaced, AActor*, decorationObject );

UENUM(BlueprintType,Blueprintable,Meta = (Bitmask, Bitflags, UseEnumValuesAsMaskValuesInEditor="true", BitmaskEnum="/Script/ThoughtfishCoalaPlugin.OPTIONS_AREA_DECORATION_IGNORE") )
enum class OPTIONS_AREA_DECORATION_IGNORE : uint8
{
	NONE = 0,
	WATER = 1,	
	STREETS = 2,		
	BUILDINGS = 4
};
ENUM_CLASS_FLAGS( OPTIONS_AREA_DECORATION_IGNORE )

UENUM(BlueprintType,Blueprintable,Meta = (Bitmask, Bitflags, UseEnumValuesAsMaskValuesInEditor="true", BitmaskEnum="/Script/ThoughtfishCoalaPlugin.OPTIONS_AREA_DECORATION_USE_CONFIG_TO") )
enum class OPTIONS_AREA_DECORATION_USE_CONFIG_TO : uint8
{
	NONE = 0,
	CELLS = 1,	
//	WATER = 2,		
//	BUILDINGS = 4
};
ENUM_CLASS_FLAGS( OPTIONS_AREA_DECORATION_USE_CONFIG_TO )

USTRUCT(BlueprintType, meta=(HiddenByDefault))
struct FCoalaAreaDecorationConfiguration
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Decoration" )
	TArray<FString> gametag;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Decoration", meta=(Bitmask, Bitflags, UseEnumValuesAsMaskValuesInEditor="true", BitmaskEnum="/Script/ThoughtfishCoalaPlugin.OPTIONS_AREA_DECORATION_USE_CONFIG_TO") )
	OPTIONS_AREA_DECORATION_USE_CONFIG_TO useAt = OPTIONS_AREA_DECORATION_USE_CONFIG_TO::CELLS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Decoration", meta=(Bitmask, Bitflags, UseEnumValuesAsMaskValuesInEditor="true", BitmaskEnum="/Script/ThoughtfishCoalaPlugin.OPTIONS_AREA_DECORATION_IGNORE") )
	int32 skipIf = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coala|Decoration" )
	class UClass* decoration = 0;
	
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Decoration" )
	FVector randomScaleMax = FVector::One();

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Decoration" )
	FVector randomScaleMin = FVector::Zero();
	
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Decoration" )
	uint8 countRetriesIfPositionIsOccupied = 3;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Decoration" )
	bool onlyIfGametagIsHighest = true;

	/* Valid value's are from 100 to 1 % */
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Decoration", meta=(ClampMin="1", ClampMax="100") )
	uint8 spawnChanceInPercent = 100;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Decoration" )
	uint8 cellSpaceToOther = 0;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Decoration" )
	bool smothSpawning = true;
};

UCLASS()
class UCoalaDecorator
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintCallable, Category = "Coala|Async|Decoration", meta = (AutoCreateRefTerm = "onDecorationObjectPlaced,onDone") )
		static void DecorateArea( class UCoalaArea* area, TArray<FCoalaAreaDecorationConfiguration> configs, const FCoalaDelegateOnDecorationPlaced& onDecorationObjectPlaced, const FCoalaDelegateDecorationOnDone& onDone );

};

class CoalaTaskDecorateArea
: public FNonAbandonableTask
{
	private:
		bool _shouldRun;

		class UCoalaArea* area;
		TArray<FCoalaAreaDecorationConfiguration> configs;
		FCoalaDelegateOnDecorationPlaced delegateOnDecorationObjectPlaced;
		FCoalaDelegateDecorationOnDone delegateOnDone;

		// worker help functions
		class ACoalaActor* decorateCells( int config_index, FCoalaAreaDecorationConfiguration config );

	public:
		CoalaTaskDecorateArea( class UCoalaArea* area, TArray<FCoalaAreaDecorationConfiguration> configs, FCoalaDelegateOnDecorationPlaced delegateOnDecorationObjectPlaced, FCoalaDelegateDecorationOnDone onDone );
		~CoalaTaskDecorateArea();

		// required by UE4
		FORCEINLINE TStatId GetStatId() const
		{
			RETURN_QUICK_DECLARE_CYCLE_STAT( CoalaTaskDecorateArea, STATGROUP_ThreadPoolAsyncTasks )
		}
		
		void DoWork();
};