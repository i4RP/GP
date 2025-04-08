// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaBuildingRenderConfig.h"

#include "CoalaBuilding.h"

FCoalaBuildingRenderConfig::FCoalaBuildingRenderConfig()
{
	this->createMeshes = (int)OPTIONS_MESH_CREATION_BUILDING::FLOOR;
	this->materialFloor = 0;
	this->materialFoundation = 0;
	this->materialWall = 0;
	this->materialRoof = 0;
	this->generateUVs = true;
	this->heightPerLevel = 500;
	this->generateCollisions = false;
	this->defaultBuildingLevel = 1;
	this->clampToDefaultBuildingLevel = false;
	this->limitMaxBuildingLevelTo = 0;
	this->mergeMeshes = true;
}

FCoalaBuildingRenderConfig
UCoalaBuildingRenderConfigBlueprintLibrary::MakeCoalaBuildingRenderConfig( UPARAM( meta = (Bitmask, BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.OPTIONS_MESH_CREATION_BUILDING") ) int32 createMeshes, UMaterialInterface* materialFloor, UMaterialInterface* materialFoundation, UMaterialInterface* materialWall, UMaterialInterface* materialRoof, bool generateUVs, float heightPerLevel, bool generateCollisions, int defaultBuildingLevel, bool clampToDefaultBuildingLevel, int limitMaxBuildingLevelTo, bool mergeMeshes )
{
	FCoalaBuildingRenderConfig ret;

	ret.createMeshes = createMeshes;
	ret.materialFloor = materialFloor;
	ret.materialFoundation = materialFoundation;
	ret.materialWall = materialWall;
	ret.materialRoof = materialRoof;
	ret.generateUVs = generateUVs;
	ret.heightPerLevel = heightPerLevel;
	ret.generateCollisions = generateCollisions;
	ret.defaultBuildingLevel = defaultBuildingLevel;
	ret.clampToDefaultBuildingLevel = clampToDefaultBuildingLevel;
	ret.limitMaxBuildingLevelTo = limitMaxBuildingLevelTo;
	ret.mergeMeshes = mergeMeshes;

	return ret;
}

void
UCoalaBuildingRenderConfigBlueprintLibrary::BreakCoalaBuildingRenderConfig( FCoalaBuildingRenderConfig inBuildingRenderConfig, UPARAM( meta = (Bitmask, BitmaskEnum = "/Script/ThoughtfishCoalaPlugin.OPTIONS_MESH_CREATION_BUILDING") ) int32& createMeshes, UMaterialInterface*& materialFloor, UMaterialInterface*& materialFoundation, UMaterialInterface*& materialWall, UMaterialInterface*& materialRoof, bool& generateUVs, float& heightPerLevel, bool& generateCollisions, bool& mergeMeshes, int defaultBuildingLevel, bool clampToDefaultBuildingLevel, int limitMaxBuildingLevelTo )
{
	createMeshes = inBuildingRenderConfig.createMeshes;
	materialFloor = inBuildingRenderConfig.materialFloor;
	materialFoundation = inBuildingRenderConfig.materialFoundation;
	materialWall = inBuildingRenderConfig.materialWall;
	materialRoof = inBuildingRenderConfig.materialRoof;
	generateUVs = inBuildingRenderConfig.generateUVs;
	heightPerLevel = inBuildingRenderConfig.heightPerLevel;
	generateCollisions = inBuildingRenderConfig.generateCollisions;
	defaultBuildingLevel = inBuildingRenderConfig.defaultBuildingLevel;
	clampToDefaultBuildingLevel = inBuildingRenderConfig.clampToDefaultBuildingLevel;
	limitMaxBuildingLevelTo = inBuildingRenderConfig.limitMaxBuildingLevelTo;
	mergeMeshes = inBuildingRenderConfig.mergeMeshes;
}

void
FCoalaBuildingRenderConfig::applyToBuilding( FCoalaBuilding* building )
{
	if( building->height == 0 )
		building->height = this->defaultBuildingLevel;
	else if( this->clampToDefaultBuildingLevel )
		building->height = this->defaultBuildingLevel;

	// is "limitMaxBuildingLevelTo" enabled ?
	if( this->limitMaxBuildingLevelTo > 0 )
	{
		// limit if above
		if( building->height > this->limitMaxBuildingLevelTo )
			building->height = this->limitMaxBuildingLevelTo;
	}
}