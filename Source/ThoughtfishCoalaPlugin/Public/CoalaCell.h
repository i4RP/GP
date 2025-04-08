// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaBounds.h"
#include "CoalaGridIndex.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaCell.generated.h"

USTRUCT( BlueprintType, meta = (HasNativeMake = "", HasNativeBreak = "") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaCell
{
	GENERATED_BODY()

	FCoalaGridIndex index;

	// TODO: Refactor to get gametag with hightes priority not only first match !
	TMap<FString, int> gameTags;
		
	FCoalaBounds bounds;

	FCoalaCell();

	bool hasProjectTag( FString gametag );
	bool isProjectTagHighest( FString gametag );
};

UENUM( BlueprintType )
enum class EOutputPins_hasGametag : uint8
{
	No,
	Yes
};

UENUM( BlueprintType )
enum class EOutputPins_isProjectTagHighest : uint8
{
	No,
	Yes
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaCellBlueprintLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:

	/** Makes a coala gps coordinates {lon, lat} */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Cell", meta = (DisplayName = "Make Cell", NativeMakeFunc) )
	static FCoalaCell MakeCoalaCell( TMap<FString, int> gameTags, FCoalaGridIndex index, FCoalaBounds bounds );

	/** Breaks a coala gps coordinates apart into lon, lat. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Cell", meta = (DisplayName = "Break Cell", NativeBreakFunc) )
	static void BreakCoalaCell( FCoalaCell inCoalaCell, TMap<FString, int>& gameTags, FCoalaGridIndex& index, FCoalaBounds& bounds );

	/** Get project tag name from coala area properties by id. */
	UFUNCTION( BlueprintCallable, Category = "Coala|Variables|Cell", meta = (DisplayName = "Has cell project tag", ExpandEnumAsExecs = "execResult") )
	static void hasCellProjectTag( FCoalaCell inCoalaCell, FString projectTagName, EOutputPins_hasGametag& execResult );

	/** Get project tag name from coala area properties by id. */
	UFUNCTION( BlueprintCallable, Category = "Coala|Variables|Cell", meta = (DisplayName = "Is project tag highest in cell", ExpandEnumAsExecs = "execResult") )
	static void isProjectTagHighest( FCoalaCell inCoalaCell, FString projectTagName, EOutputPins_isProjectTagHighest& execResult );

};
