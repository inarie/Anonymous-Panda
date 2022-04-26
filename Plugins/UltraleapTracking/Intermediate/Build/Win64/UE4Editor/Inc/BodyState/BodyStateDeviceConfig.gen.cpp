// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/BodyStateDeviceConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateDeviceConfig() {}
// Cross Module References
	BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDeviceConfig();
// End Cross Module References
	static UEnum* EBodyStateDeviceInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType, Z_Construct_UPackage__Script_BodyState(), TEXT("EBodyStateDeviceInputType"));
		}
		return Singleton;
	}
	template<> BODYSTATE_API UEnum* StaticEnum<EBodyStateDeviceInputType>()
	{
		return EBodyStateDeviceInputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBodyStateDeviceInputType(EBodyStateDeviceInputType_StaticEnum, TEXT("/Script/BodyState"), TEXT("EBodyStateDeviceInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType_Hash() { return 3725270306U; }
	UEnum* Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBodyStateDeviceInputType"), 0, Get_Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "INERTIAL_INPUT_TYPE", (int64)INERTIAL_INPUT_TYPE },
				{ "HMD_MOUNTED_INPUT_TYPE", (int64)HMD_MOUNTED_INPUT_TYPE },
				{ "EXTERNAL_REFERENCE_INPUT_TYPE", (int64)EXTERNAL_REFERENCE_INPUT_TYPE },
				{ "MIXED_INPUT_TYPE", (int64)MIXED_INPUT_TYPE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EXTERNAL_REFERENCE_INPUT_TYPE.Comment", "// e.g. leap motion\n" },
				{ "EXTERNAL_REFERENCE_INPUT_TYPE.Name", "EXTERNAL_REFERENCE_INPUT_TYPE" },
				{ "EXTERNAL_REFERENCE_INPUT_TYPE.ToolTip", "e.g. leap motion" },
				{ "HMD_MOUNTED_INPUT_TYPE.Comment", "// e.g. IMU with direct no external references like a Myo\n" },
				{ "HMD_MOUNTED_INPUT_TYPE.Name", "HMD_MOUNTED_INPUT_TYPE" },
				{ "HMD_MOUNTED_INPUT_TYPE.ToolTip", "e.g. IMU with direct no external references like a Myo" },
				{ "INERTIAL_INPUT_TYPE.Name", "INERTIAL_INPUT_TYPE" },
				{ "MIXED_INPUT_TYPE.Comment", "// e.g. lighthouse\n" },
				{ "MIXED_INPUT_TYPE.Name", "MIXED_INPUT_TYPE" },
				{ "MIXED_INPUT_TYPE.ToolTip", "e.g. lighthouse" },
				{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BodyState,
				nullptr,
				"EBodyStateDeviceInputType",
				"EBodyStateDeviceInputType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBodyStateDeviceConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyStateDeviceConfig, Z_Construct_UPackage__Script_BodyState(), TEXT("BodyStateDeviceConfig"), sizeof(FBodyStateDeviceConfig), Get_Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Hash());
	}
	return Singleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FBodyStateDeviceConfig>()
{
	return FBodyStateDeviceConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyStateDeviceConfig(FBodyStateDeviceConfig::StaticStruct, TEXT("/Script/BodyState"), TEXT("BodyStateDeviceConfig"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFBodyStateDeviceConfig
{
	FScriptStruct_BodyState_StaticRegisterNativesFBodyStateDeviceConfig()
	{
		UScriptStruct::DeferCppStructOps<FBodyStateDeviceConfig>(FName(TEXT("BodyStateDeviceConfig")));
	}
} ScriptStruct_BodyState_StaticRegisterNativesFBodyStateDeviceConfig;
	struct Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackingTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyStateDeviceConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Comment", "/** Name of the device generating this input */" },
		{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
		{ "ToolTip", "Name of the device generating this input" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateDeviceConfig, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_InputType_MetaData[] = {
		{ "Comment", "/** Input type this device uses */" },
		{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
		{ "ToolTip", "Input type this device uses" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateDeviceConfig, InputType), Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_InputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_InputType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags_Inner = { "TrackingTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags_MetaData[] = {
		{ "Comment", "/** Any specific tracking tags you may wish to expose to various systems, e.g. Finger Hand Tracking, Full Body Tracking*/" },
		{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
		{ "ToolTip", "Any specific tracking tags you may wish to expose to various systems, e.g. Finger Hand Tracking, Full Body Tracking" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags = { "TrackingTags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateDeviceConfig, TrackingTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_DeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_InputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"BodyStateDeviceConfig",
		sizeof(FBodyStateDeviceConfig),
		alignof(FBodyStateDeviceConfig),
		Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDeviceConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyStateDeviceConfig"), sizeof(FBodyStateDeviceConfig), Get_Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Hash() { return 758919085U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
