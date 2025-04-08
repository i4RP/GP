// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CrimeType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrimeType() {}
// Cross Module References
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UCrimeType;
	static UEnum* UCrimeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UCrimeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UCrimeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("UCrimeType"));
		}
		return Z_Registration_Info_UEnum_UCrimeType.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<UCrimeType>()
	{
		return UCrimeType_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType_Statics::Enumerators[] = {
		{ "UCrimeType::ABDUCTION", (int64)UCrimeType::ABDUCTION },
		{ "UCrimeType::ALCOHOL", (int64)UCrimeType::ALCOHOL },
		{ "UCrimeType::ANIMAL", (int64)UCrimeType::ANIMAL },
		{ "UCrimeType::ANTISOCIAL", (int64)UCrimeType::ANTISOCIAL },
		{ "UCrimeType::AREA", (int64)UCrimeType::AREA },
		{ "UCrimeType::ARSON", (int64)UCrimeType::ARSON },
		{ "UCrimeType::ASSAULT", (int64)UCrimeType::ASSAULT },
		{ "UCrimeType::BEHAVIOUR", (int64)UCrimeType::BEHAVIOUR },
		{ "UCrimeType::BICYCLE", (int64)UCrimeType::BICYCLE },
		{ "UCrimeType::BRIBERY", (int64)UCrimeType::BRIBERY },
		{ "UCrimeType::BURGLARY_BREAKING_AND_ENTERING", (int64)UCrimeType::BURGLARY_BREAKING_AND_ENTERING },
		{ "UCrimeType::CHECKS", (int64)UCrimeType::CHECKS },
		{ "UCrimeType::COUNTERFEITING", (int64)UCrimeType::COUNTERFEITING },
		{ "UCrimeType::CREDIT_CARD", (int64)UCrimeType::CREDIT_CARD },
		{ "UCrimeType::CRIME", (int64)UCrimeType::CRIME },
		{ "UCrimeType::CURFEW_LOITERING_VAGRANCY", (int64)UCrimeType::CURFEW_LOITERING_VAGRANCY },
		{ "UCrimeType::DAMAGE_AND_ARSON", (int64)UCrimeType::DAMAGE_AND_ARSON },
		{ "UCrimeType::DRIVING", (int64)UCrimeType::DRIVING },
		{ "UCrimeType::DRUGS", (int64)UCrimeType::DRUGS },
		{ "UCrimeType::DRUNKNESS", (int64)UCrimeType::DRUNKNESS },
		{ "UCrimeType::EMBEZZLEMENT", (int64)UCrimeType::EMBEZZLEMENT },
		{ "UCrimeType::EXTORTION", (int64)UCrimeType::EXTORTION },
		{ "UCrimeType::FAMILY", (int64)UCrimeType::FAMILY },
		{ "UCrimeType::FONDLING", (int64)UCrimeType::FONDLING },
		{ "UCrimeType::FRAUD", (int64)UCrimeType::FRAUD },
		{ "UCrimeType::GAMBLING", (int64)UCrimeType::GAMBLING },
		{ "UCrimeType::ILLEGAL_POSSESSION", (int64)UCrimeType::ILLEGAL_POSSESSION },
		{ "UCrimeType::IMPERSONATION", (int64)UCrimeType::IMPERSONATION },
		{ "UCrimeType::INCEST", (int64)UCrimeType::INCEST },
		{ "UCrimeType::INTIMIDATION", (int64)UCrimeType::INTIMIDATION },
		{ "UCrimeType::INVALID", (int64)UCrimeType::INVALID },
		{ "UCrimeType::MURDER", (int64)UCrimeType::MURDER },
		{ "UCrimeType::NEGLIGENT_MANSLAUGHTER", (int64)UCrimeType::NEGLIGENT_MANSLAUGHTER },
		{ "UCrimeType::NONNEGLIGENT_MANSLAUGHTER", (int64)UCrimeType::NONNEGLIGENT_MANSLAUGHTER },
		{ "UCrimeType::ORDER", (int64)UCrimeType::ORDER },
		{ "UCrimeType::OTHER_DRUGS", (int64)UCrimeType::OTHER_DRUGS },
		{ "UCrimeType::PERSON", (int64)UCrimeType::PERSON },
		{ "UCrimeType::POCKET_PURSE", (int64)UCrimeType::POCKET_PURSE },
		{ "UCrimeType::PORNOGRAPHY", (int64)UCrimeType::PORNOGRAPHY },
		{ "UCrimeType::PROPERTY", (int64)UCrimeType::PROPERTY },
		{ "UCrimeType::PROSTITUTION", (int64)UCrimeType::PROSTITUTION },
		{ "UCrimeType::RAPE", (int64)UCrimeType::RAPE },
		{ "UCrimeType::RESIDENTIAL", (int64)UCrimeType::RESIDENTIAL },
		{ "UCrimeType::ROBBERY", (int64)UCrimeType::ROBBERY },
		{ "UCrimeType::SEXCRIMES", (int64)UCrimeType::SEXCRIMES },
		{ "UCrimeType::SHOP", (int64)UCrimeType::SHOP },
		{ "UCrimeType::SODOMY", (int64)UCrimeType::SODOMY },
		{ "UCrimeType::SPORTS", (int64)UCrimeType::SPORTS },
		{ "UCrimeType::STATUTORY_RAPE", (int64)UCrimeType::STATUTORY_RAPE },
		{ "UCrimeType::STRETCHER_PEEPING_TOM", (int64)UCrimeType::STRETCHER_PEEPING_TOM },
		{ "UCrimeType::THEFT", (int64)UCrimeType::THEFT },
		{ "UCrimeType::TRAFFICKING", (int64)UCrimeType::TRAFFICKING },
		{ "UCrimeType::TRESPASS", (int64)UCrimeType::TRESPASS },
		{ "UCrimeType::VEHICLE", (int64)UCrimeType::VEHICLE },
		{ "UCrimeType::VIOLATIONS", (int64)UCrimeType::VIOLATIONS },
		{ "UCrimeType::VIOLENCE_AND_SEXUAL_VIOLENCE", (int64)UCrimeType::VIOLENCE_AND_SEXUAL_VIOLENCE },
		{ "UCrimeType::WEAPON", (int64)UCrimeType::WEAPON },
		{ "UCrimeType::WELFARE", (int64)UCrimeType::WELFARE },
		{ "UCrimeType::WIRE", (int64)UCrimeType::WIRE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType_Statics::Enum_MetaDataParams[] = {
		{ "ABDUCTION.Name", "UCrimeType::ABDUCTION" },
		{ "ALCOHOL.Name", "UCrimeType::ALCOHOL" },
		{ "ANIMAL.Name", "UCrimeType::ANIMAL" },
		{ "ANTISOCIAL.Name", "UCrimeType::ANTISOCIAL" },
		{ "AREA.Name", "UCrimeType::AREA" },
		{ "ARSON.Name", "UCrimeType::ARSON" },
		{ "ASSAULT.Name", "UCrimeType::ASSAULT" },
		{ "BEHAVIOUR.Name", "UCrimeType::BEHAVIOUR" },
		{ "BICYCLE.Name", "UCrimeType::BICYCLE" },
		{ "BlueprintType", "true" },
		{ "BRIBERY.Name", "UCrimeType::BRIBERY" },
		{ "BURGLARY_BREAKING_AND_ENTERING.Name", "UCrimeType::BURGLARY_BREAKING_AND_ENTERING" },
		{ "CHECKS.Name", "UCrimeType::CHECKS" },
		{ "COUNTERFEITING.Name", "UCrimeType::COUNTERFEITING" },
		{ "CREDIT_CARD.Name", "UCrimeType::CREDIT_CARD" },
		{ "CRIME.Name", "UCrimeType::CRIME" },
		{ "CURFEW_LOITERING_VAGRANCY.Name", "UCrimeType::CURFEW_LOITERING_VAGRANCY" },
		{ "DAMAGE_AND_ARSON.Name", "UCrimeType::DAMAGE_AND_ARSON" },
		{ "DRIVING.Name", "UCrimeType::DRIVING" },
		{ "DRUGS.Name", "UCrimeType::DRUGS" },
		{ "DRUNKNESS.Name", "UCrimeType::DRUNKNESS" },
		{ "EMBEZZLEMENT.Name", "UCrimeType::EMBEZZLEMENT" },
		{ "EXTORTION.Name", "UCrimeType::EXTORTION" },
		{ "FAMILY.Name", "UCrimeType::FAMILY" },
		{ "FONDLING.Name", "UCrimeType::FONDLING" },
		{ "FRAUD.Name", "UCrimeType::FRAUD" },
		{ "GAMBLING.Name", "UCrimeType::GAMBLING" },
		{ "ILLEGAL_POSSESSION.Name", "UCrimeType::ILLEGAL_POSSESSION" },
		{ "IMPERSONATION.Name", "UCrimeType::IMPERSONATION" },
		{ "INCEST.Name", "UCrimeType::INCEST" },
		{ "INTIMIDATION.Name", "UCrimeType::INTIMIDATION" },
		{ "INVALID.Name", "UCrimeType::INVALID" },
		{ "ModuleRelativePath", "Public/CrimeType.h" },
		{ "MURDER.Name", "UCrimeType::MURDER" },
		{ "NEGLIGENT_MANSLAUGHTER.Name", "UCrimeType::NEGLIGENT_MANSLAUGHTER" },
		{ "NONNEGLIGENT_MANSLAUGHTER.Name", "UCrimeType::NONNEGLIGENT_MANSLAUGHTER" },
		{ "ORDER.Name", "UCrimeType::ORDER" },
		{ "OTHER_DRUGS.Name", "UCrimeType::OTHER_DRUGS" },
		{ "PERSON.Name", "UCrimeType::PERSON" },
		{ "POCKET_PURSE.Name", "UCrimeType::POCKET_PURSE" },
		{ "PORNOGRAPHY.Name", "UCrimeType::PORNOGRAPHY" },
		{ "PROPERTY.Name", "UCrimeType::PROPERTY" },
		{ "PROSTITUTION.Name", "UCrimeType::PROSTITUTION" },
		{ "RAPE.Name", "UCrimeType::RAPE" },
		{ "RESIDENTIAL.Name", "UCrimeType::RESIDENTIAL" },
		{ "ROBBERY.Name", "UCrimeType::ROBBERY" },
		{ "SEXCRIMES.Name", "UCrimeType::SEXCRIMES" },
		{ "SHOP.Name", "UCrimeType::SHOP" },
		{ "SODOMY.Name", "UCrimeType::SODOMY" },
		{ "SPORTS.Name", "UCrimeType::SPORTS" },
		{ "STATUTORY_RAPE.Name", "UCrimeType::STATUTORY_RAPE" },
		{ "STRETCHER_PEEPING_TOM.Name", "UCrimeType::STRETCHER_PEEPING_TOM" },
		{ "THEFT.Name", "UCrimeType::THEFT" },
		{ "TRAFFICKING.Name", "UCrimeType::TRAFFICKING" },
		{ "TRESPASS.Name", "UCrimeType::TRESPASS" },
		{ "VEHICLE.Name", "UCrimeType::VEHICLE" },
		{ "VIOLATIONS.Name", "UCrimeType::VIOLATIONS" },
		{ "VIOLENCE_AND_SEXUAL_VIOLENCE.Name", "UCrimeType::VIOLENCE_AND_SEXUAL_VIOLENCE" },
		{ "WEAPON.Name", "UCrimeType::WEAPON" },
		{ "WELFARE.Name", "UCrimeType::WELFARE" },
		{ "WIRE.Name", "UCrimeType::WIRE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"UCrimeType",
		"UCrimeType",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType()
	{
		if (!Z_Registration_Info_UEnum_UCrimeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UCrimeType.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UCrimeType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CrimeType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CrimeType_h_Statics::EnumInfo[] = {
		{ UCrimeType_StaticEnum, TEXT("UCrimeType"), &Z_Registration_Info_UEnum_UCrimeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1388485597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CrimeType_h_3339533494(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CrimeType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CrimeType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
