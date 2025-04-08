// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaCrime.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaCrime() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaArea_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaCrimeShadowingFix();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaCrimeShadowingFix_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaCrime();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRenderedCrimeInfo();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRenderedCrimeInfoArray();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderedCrimeInfo;
class UScriptStruct* FRenderedCrimeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderedCrimeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderedCrimeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderedCrimeInfo, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("RenderedCrimeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RenderedCrimeInfo.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FRenderedCrimeInfo>()
{
	return FRenderedCrimeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crimePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_crimePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crimePinActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_crimePinActor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_crimeTypes_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_crimeTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crimeTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_crimeTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaCrime.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderedCrimeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimePosition_MetaData[] = {
		{ "Category", "Coala|Crime" },
		{ "ModuleRelativePath", "Public/CoalaCrime.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimePosition = { "crimePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderedCrimeInfo, crimePosition), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimePosition_MetaData)) }; // 2370250290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimePinActor_MetaData[] = {
		{ "Category", "Coala|Crime" },
		{ "ModuleRelativePath", "Public/CoalaCrime.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimePinActor = { "crimePinActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderedCrimeInfo, crimePinActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimePinActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimePinActor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimeTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimeTypes_Inner = { "crimeTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType, METADATA_PARAMS(nullptr, 0) }; // 1388485597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimeTypes_MetaData[] = {
		{ "Category", "Coala|Crime" },
		{ "ModuleRelativePath", "Public/CoalaCrime.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimeTypes = { "crimeTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderedCrimeInfo, crimeTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimeTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimeTypes_MetaData)) }; // 1388485597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "Coala|Crime" },
		{ "ModuleRelativePath", "Public/CoalaCrime.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderedCrimeInfo, weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimePinActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimeTypes_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimeTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_crimeTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewProp_weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"RenderedCrimeInfo",
		sizeof(FRenderedCrimeInfo),
		alignof(FRenderedCrimeInfo),
		Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderedCrimeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RenderedCrimeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderedCrimeInfo.InnerSingleton, Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RenderedCrimeInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArray;
class UScriptStruct* FRenderedCrimeInfoArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderedCrimeInfoArray, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("RenderedCrimeInfoArray"));
	}
	return Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArray.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FRenderedCrimeInfoArray>()
{
	return FRenderedCrimeInfoArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_renderedCrimeInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_renderedCrimeInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_renderedCrimeInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Workaround since nested containers are not supported\n" },
		{ "ModuleRelativePath", "Public/CoalaCrime.h" },
		{ "ToolTip", "Workaround since nested containers are not supported" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderedCrimeInfoArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::NewProp_renderedCrimeInfos_Inner = { "renderedCrimeInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRenderedCrimeInfo, METADATA_PARAMS(nullptr, 0) }; // 4171149920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::NewProp_renderedCrimeInfos_MetaData[] = {
		{ "Category", "Coala|Crime" },
		{ "ModuleRelativePath", "Public/CoalaCrime.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::NewProp_renderedCrimeInfos = { "renderedCrimeInfos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderedCrimeInfoArray, renderedCrimeInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::NewProp_renderedCrimeInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::NewProp_renderedCrimeInfos_MetaData)) }; // 4171149920
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::NewProp_renderedCrimeInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::NewProp_renderedCrimeInfos,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"RenderedCrimeInfoArray",
		sizeof(FRenderedCrimeInfoArray),
		alignof(FRenderedCrimeInfoArray),
		Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderedCrimeInfoArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArray.InnerSingleton, Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArrayPerPosition;
class UScriptStruct* FRenderedCrimeInfoArrayPerPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArrayPerPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArrayPerPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("RenderedCrimeInfoArrayPerPosition"));
	}
	return Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArrayPerPosition.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FRenderedCrimeInfoArrayPerPosition>()
{
	return FRenderedCrimeInfoArrayPerPosition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_renderedCrimeInfosPerPosition_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_renderedCrimeInfosPerPosition_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_renderedCrimeInfosPerPosition_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_renderedCrimeInfosPerPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Workaround since nested containers are not supported\n" },
		{ "ModuleRelativePath", "Public/CoalaCrime.h" },
		{ "ToolTip", "Workaround since nested containers are not supported" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderedCrimeInfoArrayPerPosition>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::NewProp_renderedCrimeInfosPerPosition_ValueProp = { "renderedCrimeInfosPerPosition", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRenderedCrimeInfoArray, METADATA_PARAMS(nullptr, 0) }; // 2908268142
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::NewProp_renderedCrimeInfosPerPosition_Key_KeyProp = { "renderedCrimeInfosPerPosition_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::NewProp_renderedCrimeInfosPerPosition_MetaData[] = {
		{ "Category", "Coala|Crime" },
		{ "ModuleRelativePath", "Public/CoalaCrime.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::NewProp_renderedCrimeInfosPerPosition = { "renderedCrimeInfosPerPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderedCrimeInfoArrayPerPosition, renderedCrimeInfosPerPosition), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::NewProp_renderedCrimeInfosPerPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::NewProp_renderedCrimeInfosPerPosition_MetaData)) }; // 2908268142
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::NewProp_renderedCrimeInfosPerPosition_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::NewProp_renderedCrimeInfosPerPosition_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::NewProp_renderedCrimeInfosPerPosition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"RenderedCrimeInfoArrayPerPosition",
		sizeof(FRenderedCrimeInfoArrayPerPosition),
		alignof(FRenderedCrimeInfoArrayPerPosition),
		Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition()
	{
		if (!Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArrayPerPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArrayPerPosition.InnerSingleton, Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArrayPerPosition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaCrime;
class UScriptStruct* FCoalaCrime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaCrime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaCrime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaCrime, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaCrime"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaCrime.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaCrime>()
{
	return FCoalaCrime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaCrime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pos;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_crimesMappedToWeight_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_crimesMappedToWeight_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_crimesMappedToWeight_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crimesMappedToWeight_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_crimesMappedToWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaCrime.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaCrime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_pos_MetaData[] = {
		{ "Category", "Coala|Crime" },
		{ "ModuleRelativePath", "Public/CoalaCrime.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCrime, pos), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_pos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_pos_MetaData)) }; // 2370250290
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_crimesMappedToWeight_ValueProp = { "crimesMappedToWeight", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_crimesMappedToWeight_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_crimesMappedToWeight_Key_KeyProp = { "crimesMappedToWeight_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType, METADATA_PARAMS(nullptr, 0) }; // 1388485597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_crimesMappedToWeight_MetaData[] = {
		{ "Category", "Coala|Crime" },
		{ "ModuleRelativePath", "Public/CoalaCrime.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_crimesMappedToWeight = { "crimesMappedToWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCrime, crimesMappedToWeight), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_crimesMappedToWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_crimesMappedToWeight_MetaData)) }; // 1388485597
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaCrime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_crimesMappedToWeight_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_crimesMappedToWeight_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_crimesMappedToWeight_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewProp_crimesMappedToWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaCrime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaCrime",
		sizeof(FCoalaCrime),
		alignof(FCoalaCrime),
		Z_Construct_UScriptStruct_FCoalaCrime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaCrime()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaCrime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaCrime.InnerSingleton, Z_Construct_UScriptStruct_FCoalaCrime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaCrime.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaCrimeShadowingFix::execFilterCrimes)
	{
		P_GET_TMAP(UCoalaArea*,FRenderedCrimeInfoArrayPerPosition,Z_Param_renderedCrimeInfoPerArea);
		P_GET_TMAP(UCrimeType,float,Z_Param_crimesMappedToWeight);
		P_GET_OBJECT(UCoalaArea,Z_Param_area);
		P_GET_STRUCT(FVector2D,Z_Param_roundedVector);
		P_GET_UBOOL_REF(Z_Param_Out_shouldBeRendered);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UCoalaArea*,FRenderedCrimeInfoArrayPerPosition>*)Z_Param__Result=UCoalaCrimeShadowingFix::FilterCrimes(Z_Param_renderedCrimeInfoPerArea,Z_Param_crimesMappedToWeight,Z_Param_area,Z_Param_roundedVector,Z_Param_Out_shouldBeRendered);
		P_NATIVE_END;
	}
	void UCoalaCrimeShadowingFix::StaticRegisterNativesUCoalaCrimeShadowingFix()
	{
		UClass* Class = UCoalaCrimeShadowingFix::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FilterCrimes", &UCoalaCrimeShadowingFix::execFilterCrimes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics
	{
		struct CoalaCrimeShadowingFix_eventFilterCrimes_Parms
		{
			TMap<UCoalaArea*,FRenderedCrimeInfoArrayPerPosition> renderedCrimeInfoPerArea;
			TMap<UCrimeType,float> crimesMappedToWeight;
			UCoalaArea* area;
			FVector2D roundedVector;
			bool shouldBeRendered;
			TMap<UCoalaArea*,FRenderedCrimeInfoArrayPerPosition> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_renderedCrimeInfoPerArea_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_renderedCrimeInfoPerArea_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_renderedCrimeInfoPerArea;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_crimesMappedToWeight_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_crimesMappedToWeight_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_crimesMappedToWeight_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_crimesMappedToWeight;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FStructPropertyParams NewProp_roundedVector;
		static void NewProp_shouldBeRendered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldBeRendered;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_renderedCrimeInfoPerArea_ValueProp = { "renderedCrimeInfoPerArea", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition, METADATA_PARAMS(nullptr, 0) }; // 298480345
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_renderedCrimeInfoPerArea_Key_KeyProp = { "renderedCrimeInfoPerArea_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_renderedCrimeInfoPerArea = { "renderedCrimeInfoPerArea", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCrimeShadowingFix_eventFilterCrimes_Parms, renderedCrimeInfoPerArea), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 298480345
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_crimesMappedToWeight_ValueProp = { "crimesMappedToWeight", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_crimesMappedToWeight_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_crimesMappedToWeight_Key_KeyProp = { "crimesMappedToWeight_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType, METADATA_PARAMS(nullptr, 0) }; // 1388485597
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_crimesMappedToWeight = { "crimesMappedToWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCrimeShadowingFix_eventFilterCrimes_Parms, crimesMappedToWeight), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1388485597
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCrimeShadowingFix_eventFilterCrimes_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_roundedVector = { "roundedVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCrimeShadowingFix_eventFilterCrimes_Parms, roundedVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_shouldBeRendered_SetBit(void* Obj)
	{
		((CoalaCrimeShadowingFix_eventFilterCrimes_Parms*)Obj)->shouldBeRendered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_shouldBeRendered = { "shouldBeRendered", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaCrimeShadowingFix_eventFilterCrimes_Parms), &Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_shouldBeRendered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition, METADATA_PARAMS(nullptr, 0) }; // 298480345
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCrimeShadowingFix_eventFilterCrimes_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 298480345
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_renderedCrimeInfoPerArea_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_renderedCrimeInfoPerArea_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_renderedCrimeInfoPerArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_crimesMappedToWeight_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_crimesMappedToWeight_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_crimesMappedToWeight_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_crimesMappedToWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_roundedVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_shouldBeRendered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Crime" },
		{ "ModuleRelativePath", "Public/CoalaCrime.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaCrimeShadowingFix, nullptr, "FilterCrimes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::CoalaCrimeShadowingFix_eventFilterCrimes_Parms), Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaCrimeShadowingFix);
	UClass* Z_Construct_UClass_UCoalaCrimeShadowingFix_NoRegister()
	{
		return UCoalaCrimeShadowingFix::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaCrimeShadowingFix_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaCrimeShadowingFix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaCrimeShadowingFix_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaCrimeShadowingFix_FilterCrimes, "FilterCrimes" }, // 2793580969
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaCrimeShadowingFix_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaCrime.h" },
		{ "ModuleRelativePath", "Public/CoalaCrime.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaCrimeShadowingFix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaCrimeShadowingFix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaCrimeShadowingFix_Statics::ClassParams = {
		&UCoalaCrimeShadowingFix::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaCrimeShadowingFix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaCrimeShadowingFix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaCrimeShadowingFix()
	{
		if (!Z_Registration_Info_UClass_UCoalaCrimeShadowingFix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaCrimeShadowingFix.OuterSingleton, Z_Construct_UClass_UCoalaCrimeShadowingFix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaCrimeShadowingFix.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaCrimeShadowingFix>()
	{
		return UCoalaCrimeShadowingFix::StaticClass();
	}
	UCoalaCrimeShadowingFix::UCoalaCrimeShadowingFix(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaCrimeShadowingFix);
	UCoalaCrimeShadowingFix::~UCoalaCrimeShadowingFix() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrime_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrime_h_Statics::ScriptStructInfo[] = {
		{ FRenderedCrimeInfo::StaticStruct, Z_Construct_UScriptStruct_FRenderedCrimeInfo_Statics::NewStructOps, TEXT("RenderedCrimeInfo"), &Z_Registration_Info_UScriptStruct_RenderedCrimeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderedCrimeInfo), 4171149920U) },
		{ FRenderedCrimeInfoArray::StaticStruct, Z_Construct_UScriptStruct_FRenderedCrimeInfoArray_Statics::NewStructOps, TEXT("RenderedCrimeInfoArray"), &Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderedCrimeInfoArray), 2908268142U) },
		{ FRenderedCrimeInfoArrayPerPosition::StaticStruct, Z_Construct_UScriptStruct_FRenderedCrimeInfoArrayPerPosition_Statics::NewStructOps, TEXT("RenderedCrimeInfoArrayPerPosition"), &Z_Registration_Info_UScriptStruct_RenderedCrimeInfoArrayPerPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderedCrimeInfoArrayPerPosition), 298480345U) },
		{ FCoalaCrime::StaticStruct, Z_Construct_UScriptStruct_FCoalaCrime_Statics::NewStructOps, TEXT("CoalaCrime"), &Z_Registration_Info_UScriptStruct_CoalaCrime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaCrime), 710700154U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaCrimeShadowingFix, UCoalaCrimeShadowingFix::StaticClass, TEXT("UCoalaCrimeShadowingFix"), &Z_Registration_Info_UClass_UCoalaCrimeShadowingFix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaCrimeShadowingFix), 1611406291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrime_h_1828464785(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrime_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrime_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrime_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
