// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaWaterRenderConfig.h"

FCoalaWaterRenderConfig::FCoalaWaterRenderConfig()
{
	this->material = 0;
	this->generateUVs = false;
	this->outlineWidth = 0.0f;
	this->outlineMaterial = 0;
}

FCoalaWaterRenderConfig 
UCoalaWaterRenderConfigBlueprintLibrary::MakeCoalaWaterRenderConfig( UMaterialInterface* material, bool generateUVs, float outlineWidth, UMaterialInterface* outlineMaterial )
{
	FCoalaWaterRenderConfig ret;

	//todo

	return ret;
}

void 
UCoalaWaterRenderConfigBlueprintLibrary::BreakCoalaWaterRenderConfig( FCoalaWaterRenderConfig inWaterRenderConfig, UMaterialInterface*& material, bool& generateUVs, float& outlineWidth, UMaterialInterface*& outlineMaterial )
{
	//todo
}
