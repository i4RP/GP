// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaWaterRenderConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaWaterRenderConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaWaterRenderConfig();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaWaterRenderConfig;
class UScriptStruct* FCoalaWaterRenderConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaWaterRenderConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaWaterRenderConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaWaterRenderConfig, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaWaterRenderConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaWaterRenderConfig.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaWaterRenderConfig>()
{
	return FCoalaWaterRenderConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_generateUVs_MetaData[];
#endif
		static void NewProp_generateUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_generateUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_outlineWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_outlineWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_outlineMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_outlineMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaWaterRenderConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaWaterRenderConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_material_MetaData[] = {
		{ "Category", "Coala|Config|Water" },
		{ "ModuleRelativePath", "Public/CoalaWaterRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaWaterRenderConfig, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_generateUVs_MetaData[] = {
		{ "Category", "Coala|Config|Water" },
		{ "ModuleRelativePath", "Public/CoalaWaterRenderConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_generateUVs_SetBit(void* Obj)
	{
		((FCoalaWaterRenderConfig*)Obj)->generateUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_generateUVs = { "generateUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCoalaWaterRenderConfig), &Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_generateUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_generateUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_generateUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_outlineWidth_MetaData[] = {
		{ "Category", "Coala|Config|Water" },
		{ "ModuleRelativePath", "Public/CoalaWaterRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_outlineWidth = { "outlineWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaWaterRenderConfig, outlineWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_outlineWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_outlineWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_outlineMaterial_MetaData[] = {
		{ "Category", "Coala|Config|Water" },
		{ "ModuleRelativePath", "Public/CoalaWaterRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_outlineMaterial = { "outlineMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaWaterRenderConfig, outlineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_outlineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_outlineMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_generateUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_outlineWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewProp_outlineMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaWaterRenderConfig",
		sizeof(FCoalaWaterRenderConfig),
		alignof(FCoalaWaterRenderConfig),
		Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaWaterRenderConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaWaterRenderConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaWaterRenderConfig.InnerSingleton, Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaWaterRenderConfig.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaWaterRenderConfigBlueprintLibrary::execBreakCoalaWaterRenderConfig)
	{
		P_GET_STRUCT(FCoalaWaterRenderConfig,Z_Param_inWaterRenderConfig);
		P_GET_OBJECT_REF(UMaterialInterface,Z_Param_Out_material);
		P_GET_UBOOL_REF(Z_Param_Out_generateUVs);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outlineWidth);
		P_GET_OBJECT_REF(UMaterialInterface,Z_Param_Out_outlineMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaWaterRenderConfigBlueprintLibrary::BreakCoalaWaterRenderConfig(Z_Param_inWaterRenderConfig,Z_Param_Out_material,Z_Param_Out_generateUVs,Z_Param_Out_outlineWidth,Z_Param_Out_outlineMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaWaterRenderConfigBlueprintLibrary::execMakeCoalaWaterRenderConfig)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_material);
		P_GET_UBOOL(Z_Param_generateUVs);
		P_GET_PROPERTY(FFloatProperty,Z_Param_outlineWidth);
		P_GET_OBJECT(UMaterialInterface,Z_Param_outlineMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaWaterRenderConfig*)Z_Param__Result=UCoalaWaterRenderConfigBlueprintLibrary::MakeCoalaWaterRenderConfig(Z_Param_material,Z_Param_generateUVs,Z_Param_outlineWidth,Z_Param_outlineMaterial);
		P_NATIVE_END;
	}
	void UCoalaWaterRenderConfigBlueprintLibrary::StaticRegisterNativesUCoalaWaterRenderConfigBlueprintLibrary()
	{
		UClass* Class = UCoalaWaterRenderConfigBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaWaterRenderConfig", &UCoalaWaterRenderConfigBlueprintLibrary::execBreakCoalaWaterRenderConfig },
			{ "MakeCoalaWaterRenderConfig", &UCoalaWaterRenderConfigBlueprintLibrary::execMakeCoalaWaterRenderConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics
	{
		struct CoalaWaterRenderConfigBlueprintLibrary_eventBreakCoalaWaterRenderConfig_Parms
		{
			FCoalaWaterRenderConfig inWaterRenderConfig;
			UMaterialInterface* material;
			bool generateUVs;
			float outlineWidth;
			UMaterialInterface* outlineMaterial;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inWaterRenderConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
		static void NewProp_generateUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_generateUVs;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_outlineWidth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_outlineMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::NewProp_inWaterRenderConfig = { "inWaterRenderConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterRenderConfigBlueprintLibrary_eventBreakCoalaWaterRenderConfig_Parms, inWaterRenderConfig), Z_Construct_UScriptStruct_FCoalaWaterRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 1822476822
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterRenderConfigBlueprintLibrary_eventBreakCoalaWaterRenderConfig_Parms, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::NewProp_generateUVs_SetBit(void* Obj)
	{
		((CoalaWaterRenderConfigBlueprintLibrary_eventBreakCoalaWaterRenderConfig_Parms*)Obj)->generateUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::NewProp_generateUVs = { "generateUVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaWaterRenderConfigBlueprintLibrary_eventBreakCoalaWaterRenderConfig_Parms), &Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::NewProp_generateUVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::NewProp_outlineWidth = { "outlineWidth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterRenderConfigBlueprintLibrary_eventBreakCoalaWaterRenderConfig_Parms, outlineWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::NewProp_outlineMaterial = { "outlineMaterial", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterRenderConfigBlueprintLibrary_eventBreakCoalaWaterRenderConfig_Parms, outlineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::NewProp_inWaterRenderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::NewProp_generateUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::NewProp_outlineWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::NewProp_outlineMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Config|Water render config" },
		{ "Comment", "/** Breaks a coala gps coordinates apart into lon, lat. */" },
		{ "DisplayName", "Break water render config" },
		{ "ModuleRelativePath", "Public/CoalaWaterRenderConfig.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a coala gps coordinates apart into lon, lat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary, nullptr, "BreakCoalaWaterRenderConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::CoalaWaterRenderConfigBlueprintLibrary_eventBreakCoalaWaterRenderConfig_Parms), Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics
	{
		struct CoalaWaterRenderConfigBlueprintLibrary_eventMakeCoalaWaterRenderConfig_Parms
		{
			UMaterialInterface* material;
			bool generateUVs;
			float outlineWidth;
			UMaterialInterface* outlineMaterial;
			FCoalaWaterRenderConfig ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
		static void NewProp_generateUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_generateUVs;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_outlineWidth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_outlineMaterial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterRenderConfigBlueprintLibrary_eventMakeCoalaWaterRenderConfig_Parms, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::NewProp_generateUVs_SetBit(void* Obj)
	{
		((CoalaWaterRenderConfigBlueprintLibrary_eventMakeCoalaWaterRenderConfig_Parms*)Obj)->generateUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::NewProp_generateUVs = { "generateUVs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaWaterRenderConfigBlueprintLibrary_eventMakeCoalaWaterRenderConfig_Parms), &Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::NewProp_generateUVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::NewProp_outlineWidth = { "outlineWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterRenderConfigBlueprintLibrary_eventMakeCoalaWaterRenderConfig_Parms, outlineWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::NewProp_outlineMaterial = { "outlineMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterRenderConfigBlueprintLibrary_eventMakeCoalaWaterRenderConfig_Parms, outlineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterRenderConfigBlueprintLibrary_eventMakeCoalaWaterRenderConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaWaterRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 1822476822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::NewProp_generateUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::NewProp_outlineWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::NewProp_outlineMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Config|Water render config" },
		{ "Comment", "/** Makes a coala gps coordinates {lon, lat} */" },
		{ "CPP_Default_generateUVs", "false" },
		{ "CPP_Default_material", "None" },
		{ "CPP_Default_outlineMaterial", "None" },
		{ "CPP_Default_outlineWidth", "0.000000" },
		{ "DisplayName", "Make water render config" },
		{ "ModuleRelativePath", "Public/CoalaWaterRenderConfig.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a coala gps coordinates {lon, lat}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary, nullptr, "MakeCoalaWaterRenderConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::CoalaWaterRenderConfigBlueprintLibrary_eventMakeCoalaWaterRenderConfig_Parms), Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaWaterRenderConfigBlueprintLibrary);
	UClass* Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary_NoRegister()
	{
		return UCoalaWaterRenderConfigBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_BreakCoalaWaterRenderConfig, "BreakCoalaWaterRenderConfig" }, // 270444564
		{ &Z_Construct_UFunction_UCoalaWaterRenderConfigBlueprintLibrary_MakeCoalaWaterRenderConfig, "MakeCoalaWaterRenderConfig" }, // 1819123363
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaWaterRenderConfig.h" },
		{ "ModuleRelativePath", "Public/CoalaWaterRenderConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaWaterRenderConfigBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary_Statics::ClassParams = {
		&UCoalaWaterRenderConfigBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaWaterRenderConfigBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaWaterRenderConfigBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaWaterRenderConfigBlueprintLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaWaterRenderConfigBlueprintLibrary>()
	{
		return UCoalaWaterRenderConfigBlueprintLibrary::StaticClass();
	}
	UCoalaWaterRenderConfigBlueprintLibrary::UCoalaWaterRenderConfigBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaWaterRenderConfigBlueprintLibrary);
	UCoalaWaterRenderConfigBlueprintLibrary::~UCoalaWaterRenderConfigBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWaterRenderConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWaterRenderConfig_h_Statics::ScriptStructInfo[] = {
		{ FCoalaWaterRenderConfig::StaticStruct, Z_Construct_UScriptStruct_FCoalaWaterRenderConfig_Statics::NewStructOps, TEXT("CoalaWaterRenderConfig"), &Z_Registration_Info_UScriptStruct_CoalaWaterRenderConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaWaterRenderConfig), 1822476822U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWaterRenderConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaWaterRenderConfigBlueprintLibrary, UCoalaWaterRenderConfigBlueprintLibrary::StaticClass, TEXT("UCoalaWaterRenderConfigBlueprintLibrary"), &Z_Registration_Info_UClass_UCoalaWaterRenderConfigBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaWaterRenderConfigBlueprintLibrary), 1773058204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWaterRenderConfig_h_3100959970(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWaterRenderConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWaterRenderConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWaterRenderConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWaterRenderConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
