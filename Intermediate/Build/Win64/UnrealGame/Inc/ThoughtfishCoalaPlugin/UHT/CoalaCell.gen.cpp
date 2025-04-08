// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaCell.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaBounds.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGridIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaCell() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaCellBlueprintLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaCellBlueprintLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_hasGametag();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_isProjectTagHighest();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaBounds();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaCell();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGridIndex();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaCell;
class UScriptStruct* FCoalaCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaCell, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaCell"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaCell.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaCell>()
{
	return FCoalaCell::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaCell_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCell_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaCell.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaCell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaCell>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaCell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaCell",
		sizeof(FCoalaCell),
		alignof(FCoalaCell),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCell_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaCell()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaCell.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaCell.InnerSingleton, Z_Construct_UScriptStruct_FCoalaCell_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaCell.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutputPins_hasGametag;
	static UEnum* EOutputPins_hasGametag_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOutputPins_hasGametag.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOutputPins_hasGametag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_hasGametag, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("EOutputPins_hasGametag"));
		}
		return Z_Registration_Info_UEnum_EOutputPins_hasGametag.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<EOutputPins_hasGametag>()
	{
		return EOutputPins_hasGametag_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_hasGametag_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_hasGametag_Statics::Enumerators[] = {
		{ "EOutputPins_hasGametag::No", (int64)EOutputPins_hasGametag::No },
		{ "EOutputPins_hasGametag::Yes", (int64)EOutputPins_hasGametag::Yes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_hasGametag_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaCell.h" },
		{ "No.Name", "EOutputPins_hasGametag::No" },
		{ "Yes.Name", "EOutputPins_hasGametag::Yes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_hasGametag_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"EOutputPins_hasGametag",
		"EOutputPins_hasGametag",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_hasGametag_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_hasGametag_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_hasGametag_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_hasGametag_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_hasGametag()
	{
		if (!Z_Registration_Info_UEnum_EOutputPins_hasGametag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutputPins_hasGametag.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_hasGametag_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOutputPins_hasGametag.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutputPins_isProjectTagHighest;
	static UEnum* EOutputPins_isProjectTagHighest_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOutputPins_isProjectTagHighest.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOutputPins_isProjectTagHighest.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_isProjectTagHighest, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("EOutputPins_isProjectTagHighest"));
		}
		return Z_Registration_Info_UEnum_EOutputPins_isProjectTagHighest.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<EOutputPins_isProjectTagHighest>()
	{
		return EOutputPins_isProjectTagHighest_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_isProjectTagHighest_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_isProjectTagHighest_Statics::Enumerators[] = {
		{ "EOutputPins_isProjectTagHighest::No", (int64)EOutputPins_isProjectTagHighest::No },
		{ "EOutputPins_isProjectTagHighest::Yes", (int64)EOutputPins_isProjectTagHighest::Yes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_isProjectTagHighest_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaCell.h" },
		{ "No.Name", "EOutputPins_isProjectTagHighest::No" },
		{ "Yes.Name", "EOutputPins_isProjectTagHighest::Yes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_isProjectTagHighest_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"EOutputPins_isProjectTagHighest",
		"EOutputPins_isProjectTagHighest",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_isProjectTagHighest_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_isProjectTagHighest_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_isProjectTagHighest_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_isProjectTagHighest_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_isProjectTagHighest()
	{
		if (!Z_Registration_Info_UEnum_EOutputPins_isProjectTagHighest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutputPins_isProjectTagHighest.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_isProjectTagHighest_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOutputPins_isProjectTagHighest.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaCellBlueprintLibrary::execisProjectTagHighest)
	{
		P_GET_STRUCT(FCoalaCell,Z_Param_inCoalaCell);
		P_GET_PROPERTY(FStrProperty,Z_Param_projectTagName);
		P_GET_ENUM_REF(EOutputPins_isProjectTagHighest,Z_Param_Out_execResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaCellBlueprintLibrary::isProjectTagHighest(Z_Param_inCoalaCell,Z_Param_projectTagName,(EOutputPins_isProjectTagHighest&)(Z_Param_Out_execResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaCellBlueprintLibrary::exechasCellProjectTag)
	{
		P_GET_STRUCT(FCoalaCell,Z_Param_inCoalaCell);
		P_GET_PROPERTY(FStrProperty,Z_Param_projectTagName);
		P_GET_ENUM_REF(EOutputPins_hasGametag,Z_Param_Out_execResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaCellBlueprintLibrary::hasCellProjectTag(Z_Param_inCoalaCell,Z_Param_projectTagName,(EOutputPins_hasGametag&)(Z_Param_Out_execResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaCellBlueprintLibrary::execBreakCoalaCell)
	{
		P_GET_STRUCT(FCoalaCell,Z_Param_inCoalaCell);
		P_GET_TMAP_REF(FString,int32,Z_Param_Out_gameTags);
		P_GET_STRUCT_REF(FCoalaGridIndex,Z_Param_Out_index);
		P_GET_STRUCT_REF(FCoalaBounds,Z_Param_Out_bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaCellBlueprintLibrary::BreakCoalaCell(Z_Param_inCoalaCell,Z_Param_Out_gameTags,Z_Param_Out_index,Z_Param_Out_bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaCellBlueprintLibrary::execMakeCoalaCell)
	{
		P_GET_TMAP(FString,int32,Z_Param_gameTags);
		P_GET_STRUCT(FCoalaGridIndex,Z_Param_index);
		P_GET_STRUCT(FCoalaBounds,Z_Param_bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaCell*)Z_Param__Result=UCoalaCellBlueprintLibrary::MakeCoalaCell(Z_Param_gameTags,Z_Param_index,Z_Param_bounds);
		P_NATIVE_END;
	}
	void UCoalaCellBlueprintLibrary::StaticRegisterNativesUCoalaCellBlueprintLibrary()
	{
		UClass* Class = UCoalaCellBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaCell", &UCoalaCellBlueprintLibrary::execBreakCoalaCell },
			{ "hasCellProjectTag", &UCoalaCellBlueprintLibrary::exechasCellProjectTag },
			{ "isProjectTagHighest", &UCoalaCellBlueprintLibrary::execisProjectTagHighest },
			{ "MakeCoalaCell", &UCoalaCellBlueprintLibrary::execMakeCoalaCell },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics
	{
		struct CoalaCellBlueprintLibrary_eventBreakCoalaCell_Parms
		{
			FCoalaCell inCoalaCell;
			TMap<FString,int32> gameTags;
			FCoalaGridIndex index;
			FCoalaBounds bounds;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inCoalaCell;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_gameTags_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_gameTags_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_gameTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_bounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::NewProp_inCoalaCell = { "inCoalaCell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellBlueprintLibrary_eventBreakCoalaCell_Parms, inCoalaCell), Z_Construct_UScriptStruct_FCoalaCell, METADATA_PARAMS(nullptr, 0) }; // 3179001797
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::NewProp_gameTags_ValueProp = { "gameTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::NewProp_gameTags_Key_KeyProp = { "gameTags_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::NewProp_gameTags = { "gameTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellBlueprintLibrary_eventBreakCoalaCell_Parms, gameTags), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellBlueprintLibrary_eventBreakCoalaCell_Parms, index), Z_Construct_UScriptStruct_FCoalaGridIndex, METADATA_PARAMS(nullptr, 0) }; // 320487432
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::NewProp_bounds = { "bounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellBlueprintLibrary_eventBreakCoalaCell_Parms, bounds), Z_Construct_UScriptStruct_FCoalaBounds, METADATA_PARAMS(nullptr, 0) }; // 305814663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::NewProp_inCoalaCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::NewProp_gameTags_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::NewProp_gameTags_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::NewProp_gameTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::NewProp_bounds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Cell" },
		{ "Comment", "/** Breaks a coala gps coordinates apart into lon, lat. */" },
		{ "DisplayName", "Break Cell" },
		{ "ModuleRelativePath", "Public/CoalaCell.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a coala gps coordinates apart into lon, lat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaCellBlueprintLibrary, nullptr, "BreakCoalaCell", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::CoalaCellBlueprintLibrary_eventBreakCoalaCell_Parms), Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics
	{
		struct CoalaCellBlueprintLibrary_eventhasCellProjectTag_Parms
		{
			FCoalaCell inCoalaCell;
			FString projectTagName;
			EOutputPins_hasGametag execResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inCoalaCell;
		static const UECodeGen_Private::FStrPropertyParams NewProp_projectTagName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_execResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_execResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::NewProp_inCoalaCell = { "inCoalaCell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellBlueprintLibrary_eventhasCellProjectTag_Parms, inCoalaCell), Z_Construct_UScriptStruct_FCoalaCell, METADATA_PARAMS(nullptr, 0) }; // 3179001797
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::NewProp_projectTagName = { "projectTagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellBlueprintLibrary_eventhasCellProjectTag_Parms, projectTagName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::NewProp_execResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::NewProp_execResult = { "execResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellBlueprintLibrary_eventhasCellProjectTag_Parms, execResult), Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_hasGametag, METADATA_PARAMS(nullptr, 0) }; // 1103425555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::NewProp_inCoalaCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::NewProp_projectTagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::NewProp_execResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::NewProp_execResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Cell" },
		{ "Comment", "/** Get project tag name from coala area properties by id. */" },
		{ "DisplayName", "Has cell project tag" },
		{ "ExpandEnumAsExecs", "execResult" },
		{ "ModuleRelativePath", "Public/CoalaCell.h" },
		{ "ToolTip", "Get project tag name from coala area properties by id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaCellBlueprintLibrary, nullptr, "hasCellProjectTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::CoalaCellBlueprintLibrary_eventhasCellProjectTag_Parms), Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics
	{
		struct CoalaCellBlueprintLibrary_eventisProjectTagHighest_Parms
		{
			FCoalaCell inCoalaCell;
			FString projectTagName;
			EOutputPins_isProjectTagHighest execResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inCoalaCell;
		static const UECodeGen_Private::FStrPropertyParams NewProp_projectTagName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_execResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_execResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::NewProp_inCoalaCell = { "inCoalaCell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellBlueprintLibrary_eventisProjectTagHighest_Parms, inCoalaCell), Z_Construct_UScriptStruct_FCoalaCell, METADATA_PARAMS(nullptr, 0) }; // 3179001797
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::NewProp_projectTagName = { "projectTagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellBlueprintLibrary_eventisProjectTagHighest_Parms, projectTagName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::NewProp_execResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::NewProp_execResult = { "execResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellBlueprintLibrary_eventisProjectTagHighest_Parms, execResult), Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_isProjectTagHighest, METADATA_PARAMS(nullptr, 0) }; // 1671885741
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::NewProp_inCoalaCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::NewProp_projectTagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::NewProp_execResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::NewProp_execResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Cell" },
		{ "Comment", "/** Get project tag name from coala area properties by id. */" },
		{ "DisplayName", "Is project tag highest in cell" },
		{ "ExpandEnumAsExecs", "execResult" },
		{ "ModuleRelativePath", "Public/CoalaCell.h" },
		{ "ToolTip", "Get project tag name from coala area properties by id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaCellBlueprintLibrary, nullptr, "isProjectTagHighest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::CoalaCellBlueprintLibrary_eventisProjectTagHighest_Parms), Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics
	{
		struct CoalaCellBlueprintLibrary_eventMakeCoalaCell_Parms
		{
			TMap<FString,int32> gameTags;
			FCoalaGridIndex index;
			FCoalaBounds bounds;
			FCoalaCell ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_gameTags_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_gameTags_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_gameTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_bounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::NewProp_gameTags_ValueProp = { "gameTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::NewProp_gameTags_Key_KeyProp = { "gameTags_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::NewProp_gameTags = { "gameTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellBlueprintLibrary_eventMakeCoalaCell_Parms, gameTags), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellBlueprintLibrary_eventMakeCoalaCell_Parms, index), Z_Construct_UScriptStruct_FCoalaGridIndex, METADATA_PARAMS(nullptr, 0) }; // 320487432
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::NewProp_bounds = { "bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellBlueprintLibrary_eventMakeCoalaCell_Parms, bounds), Z_Construct_UScriptStruct_FCoalaBounds, METADATA_PARAMS(nullptr, 0) }; // 305814663
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellBlueprintLibrary_eventMakeCoalaCell_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaCell, METADATA_PARAMS(nullptr, 0) }; // 3179001797
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::NewProp_gameTags_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::NewProp_gameTags_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::NewProp_gameTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::NewProp_bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Cell" },
		{ "Comment", "/** Makes a coala gps coordinates {lon, lat} */" },
		{ "DisplayName", "Make Cell" },
		{ "ModuleRelativePath", "Public/CoalaCell.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a coala gps coordinates {lon, lat}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaCellBlueprintLibrary, nullptr, "MakeCoalaCell", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::CoalaCellBlueprintLibrary_eventMakeCoalaCell_Parms), Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaCellBlueprintLibrary);
	UClass* Z_Construct_UClass_UCoalaCellBlueprintLibrary_NoRegister()
	{
		return UCoalaCellBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaCellBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaCellBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaCellBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaCellBlueprintLibrary_BreakCoalaCell, "BreakCoalaCell" }, // 374187156
		{ &Z_Construct_UFunction_UCoalaCellBlueprintLibrary_hasCellProjectTag, "hasCellProjectTag" }, // 619012855
		{ &Z_Construct_UFunction_UCoalaCellBlueprintLibrary_isProjectTagHighest, "isProjectTagHighest" }, // 1101655441
		{ &Z_Construct_UFunction_UCoalaCellBlueprintLibrary_MakeCoalaCell, "MakeCoalaCell" }, // 4258395870
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaCellBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaCell.h" },
		{ "ModuleRelativePath", "Public/CoalaCell.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaCellBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaCellBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaCellBlueprintLibrary_Statics::ClassParams = {
		&UCoalaCellBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaCellBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaCellBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaCellBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaCellBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaCellBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCoalaCellBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaCellBlueprintLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaCellBlueprintLibrary>()
	{
		return UCoalaCellBlueprintLibrary::StaticClass();
	}
	UCoalaCellBlueprintLibrary::UCoalaCellBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaCellBlueprintLibrary);
	UCoalaCellBlueprintLibrary::~UCoalaCellBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCell_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCell_h_Statics::EnumInfo[] = {
		{ EOutputPins_hasGametag_StaticEnum, TEXT("EOutputPins_hasGametag"), &Z_Registration_Info_UEnum_EOutputPins_hasGametag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1103425555U) },
		{ EOutputPins_isProjectTagHighest_StaticEnum, TEXT("EOutputPins_isProjectTagHighest"), &Z_Registration_Info_UEnum_EOutputPins_isProjectTagHighest, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1671885741U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCell_h_Statics::ScriptStructInfo[] = {
		{ FCoalaCell::StaticStruct, Z_Construct_UScriptStruct_FCoalaCell_Statics::NewStructOps, TEXT("CoalaCell"), &Z_Registration_Info_UScriptStruct_CoalaCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaCell), 3179001797U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaCellBlueprintLibrary, UCoalaCellBlueprintLibrary::StaticClass, TEXT("UCoalaCellBlueprintLibrary"), &Z_Registration_Info_UClass_UCoalaCellBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaCellBlueprintLibrary), 2096485641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCell_h_3589709583(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCell_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCell_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCell_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCell_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCell_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
