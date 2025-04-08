// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"

#include "CoalaTile.h"
#include "CoalaBounds.h"

#include "Kismet/BlueprintFunctionLibrary.h"
//bounds and tile are included bc clients almost always use these members
#include "CoalaBuildingRenderConfig.generated.h"

UENUM( BlueprintType, Blueprintable, Meta = (Bitmask, Bitflags, UseEnumValuesAsMaskValuesInEditor = "true", BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.OPTIONS_MESH_CREATION_BUILDING") )
enum class OPTIONS_MESH_CREATION_BUILDING : uint8
{
	NONE = 0,
	FLOOR = 1,
	FOUNDATION = 2,
	WALLS = 4,
	ROOF = 8
};
ENUM_CLASS_FLAGS( OPTIONS_MESH_CREATION_BUILDING )

USTRUCT( BlueprintType, meta = (HasNativeMake = "", HasNativeBreak = "") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaBuildingRenderConfig
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Building", meta = (Bitmask, BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.OPTIONS_MESH_CREATION_BUILDING") )
	int32 createMeshes;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Building" )
	class UMaterialInterface* materialFloor;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Building" )
	class UMaterialInterface* materialFoundation;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Building" )
	class UMaterialInterface* materialWall;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Building" )
	class UMaterialInterface* materialRoof;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Building" )
	bool mergeMeshes;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Building" )
	bool generateUVs;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Building" )
	float heightPerLevel;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Building" )
	bool generateCollisions;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Building" )
	int defaultBuildingLevel;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Building" )
	bool clampToDefaultBuildingLevel;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Building" )
	int limitMaxBuildingLevelTo;

	FCoalaBuildingRenderConfig();

	void applyToBuilding( struct FCoalaBuilding* building );
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaBuildingRenderConfigBlueprintLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:

	/** Makes a coala gps coordinates {lon, lat} */
	UFUNCTION( BlueprintPure, Category = "Coala|Config|Building render config", meta = (DisplayName = "Make building render config", NativeMakeFunc) )
	static FCoalaBuildingRenderConfig MakeCoalaBuildingRenderConfig( UPARAM( meta = (Bitmask, BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.OPTIONS_MESH_CREATION_BUILDING") ) int32 createMeshes, UMaterialInterface* materialFloor = 0, UMaterialInterface* materialFoundation = 0, UMaterialInterface* materialWall = 0, UMaterialInterface* materialRoof = 0, bool generateUVs = false, float heightPerLevel = 500.0f, bool generateCollisions = false, int defaultBuildingLevel = 1, bool clampToDefaultBuildingLevel = false, int limitMaxBuildingLevelTo = 0, bool mergeMeshes = true );

	/** Breaks a coala gps coordinates apart into lon, lat. */
	UFUNCTION( BlueprintPure, Category = "Coala|Config|Building render config", meta = (DisplayName = "Break building render config", NativeBreakFunc) )
	static void BreakCoalaBuildingRenderConfig( FCoalaBuildingRenderConfig inBuildingRenderConfig, UPARAM( meta = (Bitmask, BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.OPTIONS_MESH_CREATION_BUILDING") ) int32& createMeshes, class UMaterialInterface*& materialFloor, class UMaterialInterface*& materialFoundation, class UMaterialInterface*& materialWall, class UMaterialInterface*& materialRoof, bool& generateUVs, float& heightPerLevel, bool& generateCollisions, bool& mergeMeshes, int defaultBuildingLevel, bool clampToDefaultBuildingLevel, int limitMaxBuildingLevelTo );
};
