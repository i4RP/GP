// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"

#include "CoalaTile.h"
#include "CoalaBounds.h"

#include "Kismet/BlueprintFunctionLibrary.h"
//bounds and tile are included bc clients almost always use these members
#include "CoalaProperties.generated.h"

USTRUCT( BlueprintType, meta = (HasNativeMake = "", HasNativeBreak = "") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaAreaProperties
{
	GENERATED_BODY()

	FCoalaTile tile;
	FCoalaBounds bounds;
	FString weather;
	TMap<int64, FString> gametag_map;

	FCoalaAreaProperties();
	~FCoalaAreaProperties();

	FString* getGametagNameById( int64 gametag_id );
	void initGametagMap( TMap<int64, FString> data );
};

UENUM( BlueprintType )
enum class EOutputPins_GetProjectTagById : uint8
{
	Invalide,
	Valide
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaPropertiesBlueprintLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:
	
	/** Makes a coala gps coordinates {lon, lat} */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Area|Properties", meta = (DisplayName = "Make Area Properties", NativeMakeFunc) )
	static FCoalaAreaProperties MakeCoalaAreaProperties( FCoalaTile tile, FCoalaBounds bounds, FString weather, TMap<int64, FString> gametag_map );

	/** Breaks a coala gps coordinates apart into lon, lat. */
	UFUNCTION( BlueprintPure, Category = "Coala|Variables|Area|Properties", meta = (DisplayName = "Break Area Properties", NativeBreakFunc) )
	static void BreakCoalaAreaProperties( FCoalaAreaProperties inProperties, FCoalaTile& tile, FCoalaBounds& bounds, FString& weather, TMap<int64, FString>& gametag_map );

	/** Get project tag name from coala area properties by id. */
	UFUNCTION( BlueprintCallable, Category = "Coala|Variables|Area|Properties", meta = (DisplayName = "Get project tag by id", ExpandEnumAsExecs = "execResult") )
	static void getGametagNameById( FCoalaAreaProperties inProperties, int64 gametag_id, FString& projectTagName, EOutputPins_GetProjectTagById& execResult );
};
