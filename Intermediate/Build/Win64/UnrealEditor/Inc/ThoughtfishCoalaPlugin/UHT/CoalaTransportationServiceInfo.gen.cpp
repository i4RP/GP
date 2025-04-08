// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportationServiceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTransportationServiceInfo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCalendarInfo();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCalendarInfo_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_UWeekday();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UWeekday;
	static UEnum* UWeekday_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UWeekday.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UWeekday.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_UWeekday, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("UWeekday"));
		}
		return Z_Registration_Info_UEnum_UWeekday.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<UWeekday>()
	{
		return UWeekday_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_UWeekday_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_UWeekday_Statics::Enumerators[] = {
		{ "UWeekday::MONDAY", (int64)UWeekday::MONDAY },
		{ "UWeekday::TUESDAY", (int64)UWeekday::TUESDAY },
		{ "UWeekday::WEDNESDAY", (int64)UWeekday::WEDNESDAY },
		{ "UWeekday::THURSDAY", (int64)UWeekday::THURSDAY },
		{ "UWeekday::FRIDAY", (int64)UWeekday::FRIDAY },
		{ "UWeekday::SATURDAY", (int64)UWeekday::SATURDAY },
		{ "UWeekday::SUNDAY", (int64)UWeekday::SUNDAY },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_UWeekday_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FRIDAY.Name", "UWeekday::FRIDAY" },
		{ "ModuleRelativePath", "Public/CoalaTransportationServiceInfo.h" },
		{ "MONDAY.Name", "UWeekday::MONDAY" },
		{ "SATURDAY.Name", "UWeekday::SATURDAY" },
		{ "SUNDAY.Name", "UWeekday::SUNDAY" },
		{ "THURSDAY.Name", "UWeekday::THURSDAY" },
		{ "TUESDAY.Name", "UWeekday::TUESDAY" },
		{ "WEDNESDAY.Name", "UWeekday::WEDNESDAY" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_UWeekday_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"UWeekday",
		"UWeekday",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_UWeekday_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_UWeekday_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_UWeekday_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_UWeekday_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_UWeekday()
	{
		if (!Z_Registration_Info_UEnum_UWeekday.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UWeekday.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_UWeekday_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UWeekday.InnerSingleton;
	}
	void UCalendarInfo::StaticRegisterNativesUCalendarInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCalendarInfo);
	UClass* Z_Construct_UClass_UCalendarInfo_NoRegister()
	{
		return UCalendarInfo::StaticClass();
	}
	struct Z_Construct_UClass_UCalendarInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_weekdaysWhereServiceAvailable_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_weekdaysWhereServiceAvailable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weekdaysWhereServiceAvailable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_weekdaysWhereServiceAvailable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startDate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_startDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_endDate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_endDate;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_exceptionalDates_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_exceptionalDates_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_exceptionalDates_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_exceptionalDates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCalendarInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalendarInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaTransportationServiceInfo.h" },
		{ "ModuleRelativePath", "Public/CoalaTransportationServiceInfo.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCalendarInfo_Statics::NewProp_weekdaysWhereServiceAvailable_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCalendarInfo_Statics::NewProp_weekdaysWhereServiceAvailable_Inner = { "weekdaysWhereServiceAvailable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ThoughtfishCoalaPlugin_UWeekday, METADATA_PARAMS(nullptr, 0) }; // 2290965586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalendarInfo_Statics::NewProp_weekdaysWhereServiceAvailable_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationServiceInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCalendarInfo_Statics::NewProp_weekdaysWhereServiceAvailable = { "weekdaysWhereServiceAvailable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCalendarInfo, weekdaysWhereServiceAvailable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCalendarInfo_Statics::NewProp_weekdaysWhereServiceAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalendarInfo_Statics::NewProp_weekdaysWhereServiceAvailable_MetaData)) }; // 2290965586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalendarInfo_Statics::NewProp_startDate_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationServiceInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCalendarInfo_Statics::NewProp_startDate = { "startDate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCalendarInfo, startDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UCalendarInfo_Statics::NewProp_startDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalendarInfo_Statics::NewProp_startDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalendarInfo_Statics::NewProp_endDate_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationServiceInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCalendarInfo_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCalendarInfo, endDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UCalendarInfo_Statics::NewProp_endDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalendarInfo_Statics::NewProp_endDate_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCalendarInfo_Statics::NewProp_exceptionalDates_ValueProp = { "exceptionalDates", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCalendarInfo_Statics::NewProp_exceptionalDates_Key_KeyProp = { "exceptionalDates_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalendarInfo_Statics::NewProp_exceptionalDates_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationServiceInfo.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCalendarInfo_Statics::NewProp_exceptionalDates = { "exceptionalDates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCalendarInfo, exceptionalDates), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCalendarInfo_Statics::NewProp_exceptionalDates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCalendarInfo_Statics::NewProp_exceptionalDates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCalendarInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalendarInfo_Statics::NewProp_weekdaysWhereServiceAvailable_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalendarInfo_Statics::NewProp_weekdaysWhereServiceAvailable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalendarInfo_Statics::NewProp_weekdaysWhereServiceAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalendarInfo_Statics::NewProp_startDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalendarInfo_Statics::NewProp_endDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalendarInfo_Statics::NewProp_exceptionalDates_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalendarInfo_Statics::NewProp_exceptionalDates_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCalendarInfo_Statics::NewProp_exceptionalDates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCalendarInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCalendarInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCalendarInfo_Statics::ClassParams = {
		&UCalendarInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCalendarInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCalendarInfo_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCalendarInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCalendarInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCalendarInfo()
	{
		if (!Z_Registration_Info_UClass_UCalendarInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCalendarInfo.OuterSingleton, Z_Construct_UClass_UCalendarInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCalendarInfo.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCalendarInfo>()
	{
		return UCalendarInfo::StaticClass();
	}
	UCalendarInfo::UCalendarInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCalendarInfo);
	UCalendarInfo::~UCalendarInfo() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationServiceInfo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationServiceInfo_h_Statics::EnumInfo[] = {
		{ UWeekday_StaticEnum, TEXT("UWeekday"), &Z_Registration_Info_UEnum_UWeekday, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2290965586U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationServiceInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCalendarInfo, UCalendarInfo::StaticClass, TEXT("UCalendarInfo"), &Z_Registration_Info_UClass_UCalendarInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCalendarInfo), 2327008004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationServiceInfo_h_3343943069(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationServiceInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationServiceInfo_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationServiceInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationServiceInfo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
