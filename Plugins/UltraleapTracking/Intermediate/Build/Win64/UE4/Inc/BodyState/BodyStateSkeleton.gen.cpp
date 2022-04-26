// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/Skeleton/BodyStateSkeleton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateSkeleton() {}
// Cross Module References
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedSkeletonData();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedBoneData();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyedTransform();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedBoneMeta();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneMeta();
	BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneData();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBone_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateArm_NoRegister();
// End Cross Module References
class UScriptStruct* FNamedSkeletonData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FNamedSkeletonData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedSkeletonData, Z_Construct_UPackage__Script_BodyState(), TEXT("NamedSkeletonData"), sizeof(FNamedSkeletonData), Get_Z_Construct_UScriptStruct_FNamedSkeletonData_Hash());
	}
	return Singleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FNamedSkeletonData>()
{
	return FNamedSkeletonData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedSkeletonData(FNamedSkeletonData::StaticStruct, TEXT("/Script/BodyState"), TEXT("NamedSkeletonData"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFNamedSkeletonData
{
	FScriptStruct_BodyState_StaticRegisterNativesFNamedSkeletonData()
	{
		UScriptStruct::DeferCppStructOps<FNamedSkeletonData>(FName(TEXT("NamedSkeletonData")));
	}
} ScriptStruct_BodyState_StaticRegisterNativesFNamedSkeletonData;
	struct Z_Construct_UScriptStruct_FNamedSkeletonData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackedAdvancedBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedAdvancedBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackedAdvancedBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackedBasicBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedBasicBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackedBasicBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueMetas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueMetas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UniqueMetas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used for replication\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedSkeletonData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones_Inner = { "TrackedAdvancedBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedBoneData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones = { "TrackedAdvancedBones", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedSkeletonData, TrackedAdvancedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones_Inner = { "TrackedBasicBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyedTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones = { "TrackedBasicBones", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedSkeletonData, TrackedBasicBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas_Inner = { "UniqueMetas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedBoneMeta, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas = { "UniqueMetas", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedSkeletonData, UniqueMetas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"NamedSkeletonData",
		sizeof(FNamedSkeletonData),
		alignof(FNamedSkeletonData),
		Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedSkeletonData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedSkeletonData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedSkeletonData"), sizeof(FNamedSkeletonData), Get_Z_Construct_UScriptStruct_FNamedSkeletonData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedSkeletonData_Hash() { return 325549804U; }
class UScriptStruct* FNamedBoneMeta::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FNamedBoneMeta_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedBoneMeta, Z_Construct_UPackage__Script_BodyState(), TEXT("NamedBoneMeta"), sizeof(FNamedBoneMeta), Get_Z_Construct_UScriptStruct_FNamedBoneMeta_Hash());
	}
	return Singleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FNamedBoneMeta>()
{
	return FNamedBoneMeta::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedBoneMeta(FNamedBoneMeta::StaticStruct, TEXT("/Script/BodyState"), TEXT("NamedBoneMeta"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFNamedBoneMeta
{
	FScriptStruct_BodyState_StaticRegisterNativesFNamedBoneMeta()
	{
		UScriptStruct::DeferCppStructOps<FNamedBoneMeta>(FName(TEXT("NamedBoneMeta")));
	}
} ScriptStruct_BodyState_StaticRegisterNativesFNamedBoneMeta;
	struct Z_Construct_UScriptStruct_FNamedBoneMeta_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Meta;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used for replication\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedBoneMeta>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Meta_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Meta = { "Meta", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedBoneMeta, Meta), Z_Construct_UScriptStruct_FBodyStateBoneMeta, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Meta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Meta_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedBoneMeta, Name), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Meta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"NamedBoneMeta",
		sizeof(FNamedBoneMeta),
		alignof(FNamedBoneMeta),
		Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedBoneMeta()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedBoneMeta_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedBoneMeta"), sizeof(FNamedBoneMeta), Get_Z_Construct_UScriptStruct_FNamedBoneMeta_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedBoneMeta_Hash() { return 1130797949U; }
class UScriptStruct* FKeyedTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FKeyedTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyedTransform, Z_Construct_UPackage__Script_BodyState(), TEXT("KeyedTransform"), sizeof(FKeyedTransform), Get_Z_Construct_UScriptStruct_FKeyedTransform_Hash());
	}
	return Singleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FKeyedTransform>()
{
	return FKeyedTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyedTransform(FKeyedTransform::StaticStruct, TEXT("/Script/BodyState"), TEXT("KeyedTransform"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFKeyedTransform
{
	FScriptStruct_BodyState_StaticRegisterNativesFKeyedTransform()
	{
		UScriptStruct::DeferCppStructOps<FKeyedTransform>(FName(TEXT("KeyedTransform")));
	}
} ScriptStruct_BodyState_StaticRegisterNativesFKeyedTransform;
	struct Z_Construct_UScriptStruct_FKeyedTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyedTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used for replication\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyedTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyedTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyedTransform, Name), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyedTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyedTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"KeyedTransform",
		sizeof(FKeyedTransform),
		alignof(FKeyedTransform),
		Z_Construct_UScriptStruct_FKeyedTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyedTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyedTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyedTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyedTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyedTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyedTransform"), sizeof(FKeyedTransform), Get_Z_Construct_UScriptStruct_FKeyedTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyedTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyedTransform_Hash() { return 469528838U; }
class UScriptStruct* FNamedBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FNamedBoneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedBoneData, Z_Construct_UPackage__Script_BodyState(), TEXT("NamedBoneData"), sizeof(FNamedBoneData), Get_Z_Construct_UScriptStruct_FNamedBoneData_Hash());
	}
	return Singleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FNamedBoneData>()
{
	return FNamedBoneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedBoneData(FNamedBoneData::StaticStruct, TEXT("/Script/BodyState"), TEXT("NamedBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFNamedBoneData
{
	FScriptStruct_BodyState_StaticRegisterNativesFNamedBoneData()
	{
		UScriptStruct::DeferCppStructOps<FNamedBoneData>(FName(TEXT("NamedBoneData")));
	}
} ScriptStruct_BodyState_StaticRegisterNativesFNamedBoneData;
	struct Z_Construct_UScriptStruct_FNamedBoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedBoneData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used for replication\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedBoneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedBoneData, Data), Z_Construct_UScriptStruct_FBodyStateBoneData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedBoneData, Name), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedBoneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"NamedBoneData",
		sizeof(FNamedBoneData),
		alignof(FNamedBoneData),
		Z_Construct_UScriptStruct_FNamedBoneData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedBoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedBoneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedBoneData"), sizeof(FNamedBoneData), Get_Z_Construct_UScriptStruct_FNamedBoneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedBoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedBoneData_Hash() { return 1725564083U; }
	DEFINE_FUNCTION(UBodyStateSkeleton::execMulti_UpdateBodyState)
	{
		P_GET_STRUCT(FNamedSkeletonData,Z_Param_InBodyStateSkeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multi_UpdateBodyState_Implementation(Z_Param_InBodyStateSkeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execServerUpdateBodyState)
	{
		P_GET_STRUCT(FNamedSkeletonData,Z_Param_InBodyStateSkeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdateBodyState_Validate(Z_Param_InBodyStateSkeleton))
		{
			RPC_ValidateFailed(TEXT("ServerUpdateBodyState_Validate"));
			return;
		}
		P_THIS->ServerUpdateBodyState_Implementation(Z_Param_InBodyStateSkeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execMergeFromOtherSkeleton)
	{
		P_GET_OBJECT(UBodyStateSkeleton,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MergeFromOtherSkeleton(Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execSetFromOtherSkeleton)
	{
		P_GET_OBJECT(UBodyStateSkeleton,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFromOtherSkeleton(Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execSetFromNamedSkeletonData)
	{
		P_GET_STRUCT_REF(FNamedSkeletonData,Z_Param_Out_NamedSkeletonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFromNamedSkeletonData(Z_Param_Out_NamedSkeletonData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execGetMinimalNamedSkeletonData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNamedSkeletonData*)Z_Param__Result=P_THIS->GetMinimalNamedSkeletonData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execChangeBasis)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_PreBase);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_PostBase);
		P_GET_UBOOL(Z_Param_AdjustVectors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBasis(Z_Param_Out_PreBase,Z_Param_Out_PostBase,Z_Param_AdjustVectors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execSetMetaForBone)
	{
		P_GET_STRUCT_REF(FBodyStateBoneMeta,Z_Param_Out_BoneMeta);
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMetaForBone(Z_Param_Out_BoneMeta,EBodyStateBasicBoneType(Z_Param_Bone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execSetTransformForBone)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransformForBone(Z_Param_Out_Transform,EBodyStateBasicBoneType(Z_Param_Bone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execSetDataForBone)
	{
		P_GET_STRUCT_REF(FBodyStateBoneData,Z_Param_Out_BoneData);
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataForBone(Z_Param_Out_BoneData,EBodyStateBasicBoneType(Z_Param_Bone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execResetToDefaultSkeleton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefaultSkeleton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execBoneNamed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBodyStateBone**)Z_Param__Result=P_THIS->BoneNamed(Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execBoneForEnum)
	{
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBodyStateBone**)Z_Param__Result=P_THIS->BoneForEnum(EBodyStateBasicBoneType(Z_Param_Bone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execHead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBodyStateBone**)Z_Param__Result=P_THIS->Head();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execRightArm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBodyStateArm**)Z_Param__Result=P_THIS->RightArm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execLeftArm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBodyStateArm**)Z_Param__Result=P_THIS->LeftArm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateSkeleton::execRootBone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBodyStateBone**)Z_Param__Result=P_THIS->RootBone();
		P_NATIVE_END;
	}
	static FName NAME_UBodyStateSkeleton_Multi_UpdateBodyState = FName(TEXT("Multi_UpdateBodyState"));
	void UBodyStateSkeleton::Multi_UpdateBodyState(const FNamedSkeletonData InBodyStateSkeleton)
	{
		BodyStateSkeleton_eventMulti_UpdateBodyState_Parms Parms;
		Parms.InBodyStateSkeleton=InBodyStateSkeleton;
		ProcessEvent(FindFunctionChecked(NAME_UBodyStateSkeleton_Multi_UpdateBodyState),&Parms);
	}
	static FName NAME_UBodyStateSkeleton_ServerUpdateBodyState = FName(TEXT("ServerUpdateBodyState"));
	void UBodyStateSkeleton::ServerUpdateBodyState(const FNamedSkeletonData InBodyStateSkeleton)
	{
		BodyStateSkeleton_eventServerUpdateBodyState_Parms Parms;
		Parms.InBodyStateSkeleton=InBodyStateSkeleton;
		ProcessEvent(FindFunctionChecked(NAME_UBodyStateSkeleton_ServerUpdateBodyState),&Parms);
	}
	void UBodyStateSkeleton::StaticRegisterNativesUBodyStateSkeleton()
	{
		UClass* Class = UBodyStateSkeleton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoneForEnum", &UBodyStateSkeleton::execBoneForEnum },
			{ "BoneNamed", &UBodyStateSkeleton::execBoneNamed },
			{ "ChangeBasis", &UBodyStateSkeleton::execChangeBasis },
			{ "GetMinimalNamedSkeletonData", &UBodyStateSkeleton::execGetMinimalNamedSkeletonData },
			{ "Head", &UBodyStateSkeleton::execHead },
			{ "LeftArm", &UBodyStateSkeleton::execLeftArm },
			{ "MergeFromOtherSkeleton", &UBodyStateSkeleton::execMergeFromOtherSkeleton },
			{ "Multi_UpdateBodyState", &UBodyStateSkeleton::execMulti_UpdateBodyState },
			{ "ResetToDefaultSkeleton", &UBodyStateSkeleton::execResetToDefaultSkeleton },
			{ "RightArm", &UBodyStateSkeleton::execRightArm },
			{ "RootBone", &UBodyStateSkeleton::execRootBone },
			{ "ServerUpdateBodyState", &UBodyStateSkeleton::execServerUpdateBodyState },
			{ "SetDataForBone", &UBodyStateSkeleton::execSetDataForBone },
			{ "SetFromNamedSkeletonData", &UBodyStateSkeleton::execSetFromNamedSkeletonData },
			{ "SetFromOtherSkeleton", &UBodyStateSkeleton::execSetFromOtherSkeleton },
			{ "SetMetaForBone", &UBodyStateSkeleton::execSetMetaForBone },
			{ "SetTransformForBone", &UBodyStateSkeleton::execSetTransformForBone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics
	{
		struct BodyStateSkeleton_eventBoneForEnum_Parms
		{
			EBodyStateBasicBoneType Bone;
			UBodyStateBone* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventBoneForEnum_Parms, Bone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventBoneForEnum_Parms, ReturnValue), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/*Get Bone data by enum*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Get Bone data by enum" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "BoneForEnum", nullptr, nullptr, sizeof(BodyStateSkeleton_eventBoneForEnum_Parms), Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics
	{
		struct BodyStateSkeleton_eventBoneNamed_Parms
		{
			FString InName;
			UBodyStateBone* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventBoneNamed_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_InName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_InName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventBoneNamed_Parms, ReturnValue), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_InName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/*Get Bone data by name matching*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Get Bone data by name matching" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "BoneNamed", nullptr, nullptr, sizeof(BodyStateSkeleton_eventBoneNamed_Parms), Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics
	{
		struct BodyStateSkeleton_eventChangeBasis_Parms
		{
			FRotator PreBase;
			FRotator PostBase;
			bool AdjustVectors;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostBase;
		static void NewProp_AdjustVectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AdjustVectors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PreBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PreBase = { "PreBase", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventChangeBasis_Parms, PreBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PreBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PreBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PostBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PostBase = { "PostBase", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventChangeBasis_Parms, PostBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PostBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PostBase_MetaData)) };
	void Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit(void* Obj)
	{
		((BodyStateSkeleton_eventChangeBasis_Parms*)Obj)->AdjustVectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_AdjustVectors = { "AdjustVectors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BodyStateSkeleton_eventChangeBasis_Parms), &Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PreBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PostBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_AdjustVectors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "CPP_Default_AdjustVectors", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "ChangeBasis", nullptr, nullptr, sizeof(BodyStateSkeleton_eventChangeBasis_Parms), Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics
	{
		struct BodyStateSkeleton_eventGetMinimalNamedSkeletonData_Parms
		{
			FNamedSkeletonData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventGetMinimalNamedSkeletonData_Parms, ReturnValue), Z_Construct_UScriptStruct_FNamedSkeletonData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "Comment", "// Conversion\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Conversion" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "GetMinimalNamedSkeletonData", nullptr, nullptr, sizeof(BodyStateSkeleton_eventGetMinimalNamedSkeletonData_Parms), Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics
	{
		struct BodyStateSkeleton_eventHead_Parms
		{
			UBodyStateBone* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventHead_Parms, ReturnValue), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "// Spine & Head\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Spine & Head" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "Head", nullptr, nullptr, sizeof(BodyStateSkeleton_eventHead_Parms), Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_Head()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics
	{
		struct BodyStateSkeleton_eventLeftArm_Parms
		{
			UBodyStateArm* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventLeftArm_Parms, ReturnValue), Z_Construct_UClass_UBodyStateArm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/** Get a structured convenience wrapper around left arm bones*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Get a structured convenience wrapper around left arm bones" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "LeftArm", nullptr, nullptr, sizeof(BodyStateSkeleton_eventLeftArm_Parms), Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_LeftArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics
	{
		struct BodyStateSkeleton_eventMergeFromOtherSkeleton_Parms
		{
			UBodyStateSkeleton* Other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventMergeFromOtherSkeleton_Parms, Other), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::NewProp_Other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "Comment", "/** Copies only bones that are tracked from the other skeleton */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Copies only bones that are tracked from the other skeleton" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "MergeFromOtherSkeleton", nullptr, nullptr, sizeof(BodyStateSkeleton_eventMergeFromOtherSkeleton_Parms), Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBodyStateSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBodyStateSkeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::NewProp_InBodyStateSkeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::NewProp_InBodyStateSkeleton = { "InBodyStateSkeleton", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventMulti_UpdateBodyState_Parms, InBodyStateSkeleton), Z_Construct_UScriptStruct_FNamedSkeletonData, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::NewProp_InBodyStateSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::NewProp_InBodyStateSkeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::NewProp_InBodyStateSkeleton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "Multi_UpdateBodyState", nullptr, nullptr, sizeof(BodyStateSkeleton_eventMulti_UpdateBodyState_Parms), Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "Comment", "// Setting Bone Data\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Setting Bone Data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "ResetToDefaultSkeleton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics
	{
		struct BodyStateSkeleton_eventRightArm_Parms
		{
			UBodyStateArm* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventRightArm_Parms, ReturnValue), Z_Construct_UClass_UBodyStateArm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/** Get a structured convenience wrapper around right arm bones*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Get a structured convenience wrapper around right arm bones" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "RightArm", nullptr, nullptr, sizeof(BodyStateSkeleton_eventRightArm_Parms), Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_RightArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics
	{
		struct BodyStateSkeleton_eventRootBone_Parms
		{
			UBodyStateBone* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventRootBone_Parms, ReturnValue), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "// Root\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Root" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "RootBone", nullptr, nullptr, sizeof(BodyStateSkeleton_eventRootBone_Parms), Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_RootBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBodyStateSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBodyStateSkeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::NewProp_InBodyStateSkeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::NewProp_InBodyStateSkeleton = { "InBodyStateSkeleton", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventServerUpdateBodyState_Parms, InBodyStateSkeleton), Z_Construct_UScriptStruct_FNamedSkeletonData, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::NewProp_InBodyStateSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::NewProp_InBodyStateSkeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::NewProp_InBodyStateSkeleton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Replication\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "ServerUpdateBodyState", nullptr, nullptr, sizeof(BodyStateSkeleton_eventServerUpdateBodyState_Parms), Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics
	{
		struct BodyStateSkeleton_eventSetDataForBone_Parms
		{
			FBodyStateBoneData BoneData;
			EBodyStateBasicBoneType Bone;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_BoneData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_BoneData = { "BoneData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetDataForBone_Parms, BoneData), Z_Construct_UScriptStruct_FBodyStateBoneData, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_BoneData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_BoneData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetDataForBone_Parms, Bone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_BoneData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_Bone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "SetDataForBone", nullptr, nullptr, sizeof(BodyStateSkeleton_eventSetDataForBone_Parms), Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics
	{
		struct BodyStateSkeleton_eventSetFromNamedSkeletonData_Parms
		{
			FNamedSkeletonData NamedSkeletonData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NamedSkeletonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NamedSkeletonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::NewProp_NamedSkeletonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::NewProp_NamedSkeletonData = { "NamedSkeletonData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetFromNamedSkeletonData_Parms, NamedSkeletonData), Z_Construct_UScriptStruct_FNamedSkeletonData, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::NewProp_NamedSkeletonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::NewProp_NamedSkeletonData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::NewProp_NamedSkeletonData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "Comment", "// key replication getter\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "key replication getter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "SetFromNamedSkeletonData", nullptr, nullptr, sizeof(BodyStateSkeleton_eventSetFromNamedSkeletonData_Parms), Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics
	{
		struct BodyStateSkeleton_eventSetFromOtherSkeleton_Parms
		{
			UBodyStateSkeleton* Other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetFromOtherSkeleton_Parms, Other), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::NewProp_Other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "Comment", "// key replication setter\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "key replication setter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "SetFromOtherSkeleton", nullptr, nullptr, sizeof(BodyStateSkeleton_eventSetFromOtherSkeleton_Parms), Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics
	{
		struct BodyStateSkeleton_eventSetMetaForBone_Parms
		{
			FBodyStateBoneMeta BoneMeta;
			EBodyStateBasicBoneType Bone;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMeta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneMeta;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_BoneMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_BoneMeta = { "BoneMeta", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetMetaForBone_Parms, BoneMeta), Z_Construct_UScriptStruct_FBodyStateBoneMeta, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_BoneMeta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_BoneMeta_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetMetaForBone_Parms, Bone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_BoneMeta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_Bone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "SetMetaForBone", nullptr, nullptr, sizeof(BodyStateSkeleton_eventSetMetaForBone_Parms), Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics
	{
		struct BodyStateSkeleton_eventSetTransformForBone_Parms
		{
			FTransform Transform;
			EBodyStateBasicBoneType Bone;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetTransformForBone_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetTransformForBone_Parms, Bone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Bone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "SetTransformForBone", nullptr, nullptr, sizeof(BodyStateSkeleton_eventSetTransformForBone_Parms), Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister()
	{
		return UBodyStateSkeleton::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateSkeleton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTrackingActive_MetaData[];
#endif
		static void NewProp_bTrackingActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrackingActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletonId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bones;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackingTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrivateLeftArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrivateLeftArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrivateRightArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrivateRightArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateSkeleton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBodyStateSkeleton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum, "BoneForEnum" }, // 857695676
		{ &Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed, "BoneNamed" }, // 202194167
		{ &Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis, "ChangeBasis" }, // 1099471145
		{ &Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData, "GetMinimalNamedSkeletonData" }, // 2391858328
		{ &Z_Construct_UFunction_UBodyStateSkeleton_Head, "Head" }, // 2276151888
		{ &Z_Construct_UFunction_UBodyStateSkeleton_LeftArm, "LeftArm" }, // 1058188128
		{ &Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton, "MergeFromOtherSkeleton" }, // 3863858584
		{ &Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState, "Multi_UpdateBodyState" }, // 296522860
		{ &Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton, "ResetToDefaultSkeleton" }, // 2441549073
		{ &Z_Construct_UFunction_UBodyStateSkeleton_RightArm, "RightArm" }, // 813340685
		{ &Z_Construct_UFunction_UBodyStateSkeleton_RootBone, "RootBone" }, // 4034734390
		{ &Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState, "ServerUpdateBodyState" }, // 514734529
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone, "SetDataForBone" }, // 271610166
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData, "SetFromNamedSkeletonData" }, // 4195504290
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton, "SetFromOtherSkeleton" }, // 2183992700
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone, "SetMetaForBone" }, // 2565494712
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone, "SetTransformForBone" }, // 3365785309
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Body Skeleton data, all bones are expected in component space*/" },
		{ "IncludePath", "Skeleton/BodyStateSkeleton.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Body Skeleton data, all bones are expected in component space" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/** Human readable name, taken from device config, useful for debug */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Human readable name, taken from device config, useful for debug" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateSkeleton, Name), METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/** If tracking is active or frozen (useful for debugging)*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "If tracking is active or frozen (useful for debugging)" },
	};
#endif
	void Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive_SetBit(void* Obj)
	{
		((UBodyStateSkeleton*)Obj)->bTrackingActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive = { "bTrackingActive", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBodyStateSkeleton), &Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_SkeletonId_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/** Id issued to this skeleton, useful for getting device information */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Id issued to this skeleton, useful for getting device information" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_SkeletonId = { "SkeletonId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateSkeleton, SkeletonId), METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_SkeletonId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_SkeletonId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "// Note: Storage of actual bone data should be here\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Note: Storage of actual bone data should be here" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateSkeleton, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags_Inner = { "TrackingTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/** Tracking Tags that this skeleton has currently inherited. */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Tracking Tags that this skeleton has currently inherited." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags = { "TrackingTags", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateSkeleton, TrackingTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_RootOffset_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "// Used for reference point calibration e.g. hydra base origin\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for reference point calibration e.g. hydra base origin" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_RootOffset = { "RootOffset", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateSkeleton, RootOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_RootOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_RootOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateLeftArm_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateLeftArm = { "PrivateLeftArm", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateSkeleton, PrivateLeftArm), Z_Construct_UClass_UBodyStateArm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateLeftArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateLeftArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateRightArm_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateRightArm = { "PrivateRightArm", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateSkeleton, PrivateRightArm), Z_Construct_UClass_UBodyStateArm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateRightArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateRightArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_SkeletonId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_RootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateLeftArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateRightArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateSkeleton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateSkeleton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateSkeleton_Statics::ClassParams = {
		&UBodyStateSkeleton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBodyStateSkeleton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateSkeleton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateSkeleton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateSkeleton, 1208448983);
	template<> BODYSTATE_API UClass* StaticClass<UBodyStateSkeleton>()
	{
		return UBodyStateSkeleton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateSkeleton(Z_Construct_UClass_UBodyStateSkeleton, &UBodyStateSkeleton::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateSkeleton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateSkeleton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
