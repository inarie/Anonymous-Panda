// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/BodyStateDevice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateDevice() {}
// Cross Module References
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDevice();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDeviceConfig();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
// End Cross Module References
class UScriptStruct* FBodyStateDevice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FBodyStateDevice_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyStateDevice, Z_Construct_UPackage__Script_BodyState(), TEXT("BodyStateDevice"), sizeof(FBodyStateDevice), Get_Z_Construct_UScriptStruct_FBodyStateDevice_Hash());
	}
	return Singleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FBodyStateDevice>()
{
	return FBodyStateDevice::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyStateDevice(FBodyStateDevice::StaticStruct, TEXT("/Script/BodyState"), TEXT("BodyStateDevice"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFBodyStateDevice
{
	FScriptStruct_BodyState_StaticRegisterNativesFBodyStateDevice()
	{
		UScriptStruct::DeferCppStructOps<FBodyStateDevice>(FName(TEXT("BodyStateDevice")));
	}
} ScriptStruct_BodyState_StaticRegisterNativesFBodyStateDevice;
	struct Z_Construct_UScriptStruct_FBodyStateDevice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateDevice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateDevice.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyStateDevice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_DeviceId_MetaData[] = {
		{ "ModuleRelativePath", "Public/BodyStateDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateDevice, DeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_DeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_DeviceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/BodyStateDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateDevice, Config), Z_Construct_UScriptStruct_FBodyStateDeviceConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_Config_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_Skeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/BodyStateDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateDevice, Skeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_Skeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyStateDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_DeviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_Config,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_Skeleton,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyStateDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"BodyStateDevice",
		sizeof(FBodyStateDevice),
		alignof(FBodyStateDevice),
		Z_Construct_UScriptStruct_FBodyStateDevice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDevice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateDevice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDevice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyStateDevice_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyStateDevice"), sizeof(FBodyStateDevice), Get_Z_Construct_UScriptStruct_FBodyStateDevice_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyStateDevice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyStateDevice_Hash() { return 3291452930U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
