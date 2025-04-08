// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
//bounds and tile are included bc clients almost always use these members
#include "CoalaWaterRenderConfig.generated.h"

class UMaterialInterface;

USTRUCT( BlueprintType, meta = (HasNativeMake = "", HasNativeBreak = "") )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaWaterRenderConfig
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Water" )
	UMaterialInterface* material;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Water" )
	bool generateUVs;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Water" )
	float outlineWidth;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Config|Water" )
	UMaterialInterface* outlineMaterial;

	FCoalaWaterRenderConfig();
};


UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaWaterRenderConfigBlueprintLibrary
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	/** Makes a coala gps coordinates {lon, lat} */
	UFUNCTION( BlueprintPure, Category = "Coala|Config|Water render config", meta = (DisplayName = "Make water render config", NativeMakeFunc) )
	static FCoalaWaterRenderConfig MakeCoalaWaterRenderConfig( UMaterialInterface* material = 0, bool generateUVs = false, float outlineWidth = 0.0f, UMaterialInterface* outlineMaterial = 0 );

	/** Breaks a coala gps coordinates apart into lon, lat. */
	UFUNCTION( BlueprintPure, Category = "Coala|Config|Water render config", meta = (DisplayName = "Break water render config", NativeBreakFunc) )
	static void BreakCoalaWaterRenderConfig( FCoalaWaterRenderConfig inWaterRenderConfig, UMaterialInterface*& material, bool& generateUVs, float& outlineWidth, UMaterialInterface*& outlineMaterial );
};
