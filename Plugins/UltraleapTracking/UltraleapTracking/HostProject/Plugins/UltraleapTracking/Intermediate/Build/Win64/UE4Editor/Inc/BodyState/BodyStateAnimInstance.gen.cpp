// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/BodyStateAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateAnimInstance() {}
// Cross Module References
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSearchNames();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FMappedBoneAnimData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBPBoneReference();
	BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedBoneLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBone_NoRegister();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateIndexedBone();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateAnimInstance_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateAutoRigType();
// End Cross Module References
class UScriptStruct* FBoneSearchNames::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FBoneSearchNames_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneSearchNames, Z_Construct_UPackage__Script_BodyState(), TEXT("BoneSearchNames"), sizeof(FBoneSearchNames), Get_Z_Construct_UScriptStruct_FBoneSearchNames_Hash());
	}
	return Singleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FBoneSearchNames>()
{
	return FBoneSearchNames::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneSearchNames(FBoneSearchNames::StaticStruct, TEXT("/Script/BodyState"), TEXT("BoneSearchNames"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFBoneSearchNames
{
	FScriptStruct_BodyState_StaticRegisterNativesFBoneSearchNames()
	{
		UScriptStruct::DeferCppStructOps<FBoneSearchNames>(FName(TEXT("BoneSearchNames")));
	}
} ScriptStruct_BodyState_StaticRegisterNativesFBoneSearchNames;
	struct Z_Construct_UScriptStruct_FBoneSearchNames_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ArmNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArmNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WristNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WristNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WristNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ThumbNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ThumbNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IndexNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IndexNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MiddleNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MiddleNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RingNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RingNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PinkyNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinkyNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PinkyNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSearchNames_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneSearchNames>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ArmNames_Inner = { "ArmNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ArmNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ArmNames = { "ArmNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSearchNames, ArmNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ArmNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ArmNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_WristNames_Inner = { "WristNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_WristNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_WristNames = { "WristNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSearchNames, WristNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_WristNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_WristNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ThumbNames_Inner = { "ThumbNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ThumbNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ThumbNames = { "ThumbNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSearchNames, ThumbNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ThumbNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ThumbNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_IndexNames_Inner = { "IndexNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_IndexNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_IndexNames = { "IndexNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSearchNames, IndexNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_IndexNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_IndexNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_MiddleNames_Inner = { "MiddleNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_MiddleNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_MiddleNames = { "MiddleNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSearchNames, MiddleNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_MiddleNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_MiddleNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_RingNames_Inner = { "RingNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_RingNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_RingNames = { "RingNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSearchNames, RingNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_RingNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_RingNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_PinkyNames_Inner = { "PinkyNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_PinkyNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_PinkyNames = { "PinkyNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneSearchNames, PinkyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_PinkyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_PinkyNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneSearchNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ArmNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ArmNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_WristNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_WristNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ThumbNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ThumbNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_IndexNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_IndexNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_MiddleNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_MiddleNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_RingNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_RingNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_PinkyNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_PinkyNames,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"BoneSearchNames",
		sizeof(FBoneSearchNames),
		alignof(FBoneSearchNames),
		Z_Construct_UScriptStruct_FBoneSearchNames_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneSearchNames()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneSearchNames_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneSearchNames"), sizeof(FBoneSearchNames), Get_Z_Construct_UScriptStruct_FBoneSearchNames_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneSearchNames_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneSearchNames_Hash() { return 530520447U; }
class UScriptStruct* FMappedBoneAnimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FMappedBoneAnimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMappedBoneAnimData, Z_Construct_UPackage__Script_BodyState(), TEXT("MappedBoneAnimData"), sizeof(FMappedBoneAnimData), Get_Z_Construct_UScriptStruct_FMappedBoneAnimData_Hash());
	}
	return Singleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FMappedBoneAnimData>()
{
	return FMappedBoneAnimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMappedBoneAnimData(FMappedBoneAnimData::StaticStruct, TEXT("/Script/BodyState"), TEXT("MappedBoneAnimData"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFMappedBoneAnimData
{
	FScriptStruct_BodyState_StaticRegisterNativesFMappedBoneAnimData()
	{
		UScriptStruct::DeferCppStructOps<FMappedBoneAnimData>(FName(TEXT("MappedBoneAnimData")));
	}
} ScriptStruct_BodyState_StaticRegisterNativesFMappedBoneAnimData;
	struct Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldDeformMesh_MetaData[];
#endif
		static void NewProp_bShouldDeformMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDeformMesh;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingTagLimit_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingTagLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackingTagLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreBaseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreBaseRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoneMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyStateSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyStateSkeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElbowLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElbowLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipModelLeftRight_MetaData[];
#endif
		static void NewProp_FlipModelLeftRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FlipModelLeftRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCorrectRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoCorrectRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedBoneList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBoneList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedBoneList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMappedBoneAnimData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "/** Whether the mesh should deform to match the tracked data */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Whether the mesh should deform to match the tracked data" },
	};
#endif
	void Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh_SetBit(void* Obj)
	{
		((FMappedBoneAnimData*)Obj)->bShouldDeformMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh = { "bShouldDeformMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMappedBoneAnimData), &Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit_Inner = { "TrackingTagLimit", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "/** List of tags required by the tracking solution for this animation to use that data */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "List of tags required by the tracking solution for this animation to use that data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit = { "TrackingTagLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappedBoneAnimData, TrackingTagLimit), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_PreBaseRotation_MetaData[] = {
		{ "Category", "BS Anim Instance" },
		{ "Comment", "/** Offset rotation base applied before given rotation (will rotate input) */" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Offset rotation base applied before given rotation (will rotate input)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_PreBaseRotation = { "PreBaseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappedBoneAnimData, PreBaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_PreBaseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_PreBaseRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_OffsetTransform_MetaData[] = {
		{ "Category", "BS Anim Instance" },
		{ "Comment", "/** Transform applied after rotation changes to all bones in map. Consider this an offset */" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Transform applied after rotation changes to all bones in map. Consider this an offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappedBoneAnimData, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_OffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_OffsetTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_ValueProp = { "BoneMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBPBoneReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_Key_KeyProp = { "BoneMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "/** Matching list of body state bone keys mapped to local mesh bone names */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Matching list of body state bone keys mapped to local mesh bone names" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap = { "BoneMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappedBoneAnimData, BoneMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BodyStateSkeleton_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "/** Skeleton driving mapped data */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Skeleton driving mapped data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BodyStateSkeleton = { "BodyStateSkeleton", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappedBoneAnimData, BodyStateSkeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BodyStateSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BodyStateSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_ElbowLength_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "/** Skeleton driving mapped data */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Skeleton driving mapped data" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_ElbowLength = { "ElbowLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappedBoneAnimData, ElbowLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_ElbowLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_ElbowLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FlipModelLeftRight_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FlipModelLeftRight_SetBit(void* Obj)
	{
		((FMappedBoneAnimData*)Obj)->FlipModelLeftRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FlipModelLeftRight = { "FlipModelLeftRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMappedBoneAnimData), &Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FlipModelLeftRight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FlipModelLeftRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FlipModelLeftRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_AutoCorrectRotation_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "Comment", "/** auto calculated rotation to correct/normalize model rotation*/" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "auto calculated rotation to correct/normalize model rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_AutoCorrectRotation = { "AutoCorrectRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappedBoneAnimData, AutoCorrectRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_AutoCorrectRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_AutoCorrectRotation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_CachedBoneList_Inner = { "CachedBoneList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCachedBoneLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_CachedBoneList_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "// Data structure containing a parent -> child ordered bone list\n" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Data structure containing a parent -> child ordered bone list" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_CachedBoneList = { "CachedBoneList", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappedBoneAnimData, CachedBoneList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_CachedBoneList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_CachedBoneList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_PreBaseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_OffsetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BodyStateSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_ElbowLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FlipModelLeftRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_AutoCorrectRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_CachedBoneList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_CachedBoneList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"MappedBoneAnimData",
		sizeof(FMappedBoneAnimData),
		alignof(FMappedBoneAnimData),
		Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMappedBoneAnimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMappedBoneAnimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MappedBoneAnimData"), sizeof(FMappedBoneAnimData), Get_Z_Construct_UScriptStruct_FMappedBoneAnimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMappedBoneAnimData_Hash() { return 2861698125U; }
class UScriptStruct* FBPBoneReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FBPBoneReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPBoneReference, Z_Construct_UPackage__Script_BodyState(), TEXT("BPBoneReference"), sizeof(FBPBoneReference), Get_Z_Construct_UScriptStruct_FBPBoneReference_Hash());
	}
	return Singleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FBPBoneReference>()
{
	return FBPBoneReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPBoneReference(FBPBoneReference::StaticStruct, TEXT("/Script/BodyState"), TEXT("BPBoneReference"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFBPBoneReference
{
	FScriptStruct_BodyState_StaticRegisterNativesFBPBoneReference()
	{
		UScriptStruct::DeferCppStructOps<FBPBoneReference>(FName(TEXT("BPBoneReference")));
	}
} ScriptStruct_BodyState_StaticRegisterNativesFBPBoneReference;
	struct Z_Construct_UScriptStruct_FBPBoneReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPBoneReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Required struct since 4.17 to expose hotlinked mesh bone references*/" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Required struct since 4.17 to expose hotlinked mesh bone references" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPBoneReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewProp_MeshBone_MetaData[] = {
		{ "Category", "BoneName" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewProp_MeshBone = { "MeshBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPBoneReference, MeshBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewProp_MeshBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewProp_MeshBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPBoneReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewProp_MeshBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPBoneReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"BPBoneReference",
		sizeof(FBPBoneReference),
		alignof(FBPBoneReference),
		Z_Construct_UScriptStruct_FBPBoneReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPBoneReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPBoneReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPBoneReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPBoneReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPBoneReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPBoneReference"), sizeof(FBPBoneReference), Get_Z_Construct_UScriptStruct_FBPBoneReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPBoneReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPBoneReference_Hash() { return 128132405U; }
class UScriptStruct* FCachedBoneLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FCachedBoneLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedBoneLink, Z_Construct_UPackage__Script_BodyState(), TEXT("CachedBoneLink"), sizeof(FCachedBoneLink), Get_Z_Construct_UScriptStruct_FCachedBoneLink_Hash());
	}
	return Singleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FCachedBoneLink>()
{
	return FCachedBoneLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedBoneLink(FCachedBoneLink::StaticStruct, TEXT("/Script/BodyState"), TEXT("CachedBoneLink"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFCachedBoneLink
{
	FScriptStruct_BodyState_StaticRegisterNativesFCachedBoneLink()
	{
		UScriptStruct::DeferCppStructOps<FCachedBoneLink>(FName(TEXT("CachedBoneLink")));
	}
} ScriptStruct_BodyState_StaticRegisterNativesFCachedBoneLink;
	struct Z_Construct_UScriptStruct_FCachedBoneLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BSBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BSBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedBoneLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// C++ only struct used for cached bone lookup\n" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "C++ only struct used for cached bone lookup" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedBoneLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedBoneLink>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedBoneLink_Statics::NewProp_BSBone_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCachedBoneLink_Statics::NewProp_BSBone = { "BSBone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCachedBoneLink, BSBone), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedBoneLink_Statics::NewProp_BSBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedBoneLink_Statics::NewProp_BSBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedBoneLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedBoneLink_Statics::NewProp_BSBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedBoneLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"CachedBoneLink",
		sizeof(FCachedBoneLink),
		alignof(FCachedBoneLink),
		Z_Construct_UScriptStruct_FCachedBoneLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedBoneLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedBoneLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedBoneLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedBoneLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedBoneLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedBoneLink"), sizeof(FCachedBoneLink), Get_Z_Construct_UScriptStruct_FCachedBoneLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCachedBoneLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedBoneLink_Hash() { return 1824622227U; }
class UScriptStruct* FBodyStateIndexedBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FBodyStateIndexedBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyStateIndexedBone, Z_Construct_UPackage__Script_BodyState(), TEXT("BodyStateIndexedBone"), sizeof(FBodyStateIndexedBone), Get_Z_Construct_UScriptStruct_FBodyStateIndexedBone_Hash());
	}
	return Singleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FBodyStateIndexedBone>()
{
	return FBodyStateIndexedBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyStateIndexedBone(FBodyStateIndexedBone::StaticStruct, TEXT("/Script/BodyState"), TEXT("BodyStateIndexedBone"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFBodyStateIndexedBone
{
	FScriptStruct_BodyState_StaticRegisterNativesFBodyStateIndexedBone()
	{
		UScriptStruct::DeferCppStructOps<FBodyStateIndexedBone>(FName(TEXT("BodyStateIndexedBone")));
	}
} ScriptStruct_BodyState_StaticRegisterNativesFBodyStateIndexedBone;
	struct Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyStateIndexedBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Indexed Bone" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateIndexedBone, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_ParentIndex_MetaData[] = {
		{ "Category", "Indexed Bone" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateIndexedBone, ParentIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_ParentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_ParentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Indexed Bone" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateIndexedBone, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "Indexed Bone" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateIndexedBone, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_ParentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"BodyStateIndexedBone",
		sizeof(FBodyStateIndexedBone),
		alignof(FBodyStateIndexedBone),
		Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyStateIndexedBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyStateIndexedBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyStateIndexedBone"), sizeof(FBodyStateIndexedBone), Get_Z_Construct_UScriptStruct_FBodyStateIndexedBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyStateIndexedBone_Hash() { return 3107232241U; }
	DEFINE_FUNCTION(UBodyStateAnimInstance::execExecuteAutoMapping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteAutoMapping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateAnimInstance::execCalcIsTracking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CalcIsTracking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateAnimInstance::execGetCurrentWristPose)
	{
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_ForMap);
		P_GET_ENUM(EBodyStateAutoRigType,Z_Param_RigTargetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetCurrentWristPose(Z_Param_Out_ForMap,EBodyStateAutoRigType(Z_Param_RigTargetType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateAnimInstance::execGetMeshBoneNameFromCachedBoneLink)
	{
		P_GET_STRUCT_REF(FCachedBoneLink,Z_Param_Out_CachedBoneLink);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UBodyStateAnimInstance::GetMeshBoneNameFromCachedBoneLink(Z_Param_Out_CachedBoneLink);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateAnimInstance::execGetBoneNameFromRef)
	{
		P_GET_STRUCT_REF(FBPBoneReference,Z_Param_Out_BoneRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UBodyStateAnimInstance::GetBoneNameFromRef(Z_Param_Out_BoneRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateAnimInstance::execSyncMappedBoneDataCache)
	{
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_InMappedBoneData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncMappedBoneDataCache(Z_Param_Out_InMappedBoneData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateAnimInstance::execBoneMapSummary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->BoneMapSummary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateAnimInstance::execSetAnimSkeleton)
	{
		P_GET_OBJECT(UBodyStateSkeleton,Z_Param_InSkeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimSkeleton(Z_Param_InSkeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateAnimInstance::execRemoveBSBoneLink)
	{
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_InMappedBoneData);
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_BSBone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveBSBoneLink(Z_Param_Out_InMappedBoneData,EBodyStateBasicBoneType(Z_Param_BSBone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateAnimInstance::execAddBSBoneToMeshBoneLink)
	{
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_InMappedBoneData);
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_BSBone);
		P_GET_PROPERTY(FNameProperty,Z_Param_MeshBone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBSBoneToMeshBoneLink(Z_Param_Out_InMappedBoneData,EBodyStateBasicBoneType(Z_Param_BSBone),Z_Param_MeshBone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateAnimInstance::execAdjustPositionByMapBasis)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosition);
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_ForMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->AdjustPositionByMapBasis(Z_Param_Out_InPosition,Z_Param_Out_ForMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateAnimInstance::execAdjustRotationByMapBasis)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotator);
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_ForMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->AdjustRotationByMapBasis(Z_Param_Out_InRotator,Z_Param_Out_ForMap);
		P_NATIVE_END;
	}
	void UBodyStateAnimInstance::StaticRegisterNativesUBodyStateAnimInstance()
	{
		UClass* Class = UBodyStateAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBSBoneToMeshBoneLink", &UBodyStateAnimInstance::execAddBSBoneToMeshBoneLink },
			{ "AdjustPositionByMapBasis", &UBodyStateAnimInstance::execAdjustPositionByMapBasis },
			{ "AdjustRotationByMapBasis", &UBodyStateAnimInstance::execAdjustRotationByMapBasis },
			{ "BoneMapSummary", &UBodyStateAnimInstance::execBoneMapSummary },
			{ "CalcIsTracking", &UBodyStateAnimInstance::execCalcIsTracking },
			{ "ExecuteAutoMapping", &UBodyStateAnimInstance::execExecuteAutoMapping },
			{ "GetBoneNameFromRef", &UBodyStateAnimInstance::execGetBoneNameFromRef },
			{ "GetCurrentWristPose", &UBodyStateAnimInstance::execGetCurrentWristPose },
			{ "GetMeshBoneNameFromCachedBoneLink", &UBodyStateAnimInstance::execGetMeshBoneNameFromCachedBoneLink },
			{ "RemoveBSBoneLink", &UBodyStateAnimInstance::execRemoveBSBoneLink },
			{ "SetAnimSkeleton", &UBodyStateAnimInstance::execSetAnimSkeleton },
			{ "SyncMappedBoneDataCache", &UBodyStateAnimInstance::execSyncMappedBoneDataCache },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics
	{
		struct BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms
		{
			FMappedBoneAnimData InMappedBoneData;
			EBodyStateBasicBoneType BSBone;
			FName MeshBone;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMappedBoneData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BSBone_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BSBone;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MeshBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_InMappedBoneData = { "InMappedBoneData", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms, InMappedBoneData), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_BSBone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_BSBone = { "BSBone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms, BSBone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_MeshBone = { "MeshBone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms, MeshBone), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_InMappedBoneData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_BSBone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_BSBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_MeshBone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "Comment", "/** Link given mesh bone with body state bone enum. */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Link given mesh bone with body state bone enum." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "AddBSBoneToMeshBoneLink", nullptr, nullptr, sizeof(BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics
	{
		struct BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms
		{
			FVector InPosition;
			FMappedBoneAnimData ForMap;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_InPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ForMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ForMap = { "ForMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms, ForMap), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ForMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ForMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_InPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ForMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "AdjustPositionByMapBasis", nullptr, nullptr, sizeof(BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics
	{
		struct BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms
		{
			FRotator InRotator;
			FMappedBoneAnimData ForMap;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_InRotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_InRotator = { "InRotator", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms, InRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_InRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_InRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ForMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ForMap = { "ForMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms, ForMap), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ForMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ForMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_InRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ForMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "Comment", "/** Adjust rotation by currently defines offset base rotators */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Adjust rotation by currently defines offset base rotators" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "AdjustRotationByMapBasis", nullptr, nullptr, sizeof(BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics
	{
		struct BodyStateAnimInstance_eventBoneMapSummary_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventBoneMapSummary_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "BoneMapSummary", nullptr, nullptr, sizeof(BodyStateAnimInstance_eventBoneMapSummary_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics
	{
		struct BodyStateAnimInstance_eventCalcIsTracking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BodyStateAnimInstance_eventCalcIsTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BodyStateAnimInstance_eventCalcIsTracking_Parms), &Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "CalcIsTracking", nullptr, nullptr, sizeof(BodyStateAnimInstance_eventCalcIsTracking_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "ExecuteAutoMapping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics
	{
		struct BodyStateAnimInstance_eventGetBoneNameFromRef_Parms
		{
			FBPBoneReference BoneRef;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneRef;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::NewProp_BoneRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::NewProp_BoneRef = { "BoneRef", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetBoneNameFromRef_Parms, BoneRef), Z_Construct_UScriptStruct_FBPBoneReference, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::NewProp_BoneRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::NewProp_BoneRef_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetBoneNameFromRef_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::NewProp_BoneRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "GetBoneNameFromRef", nullptr, nullptr, sizeof(BodyStateAnimInstance_eventGetBoneNameFromRef_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics
	{
		struct BodyStateAnimInstance_eventGetCurrentWristPose_Parms
		{
			FMappedBoneAnimData ForMap;
			EBodyStateAutoRigType RigTargetType;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForMap;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RigTargetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RigTargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RigTargetType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_ForMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_ForMap = { "ForMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetCurrentWristPose_Parms, ForMap), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_ForMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_ForMap_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_RigTargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_RigTargetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_RigTargetType = { "RigTargetType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetCurrentWristPose_Parms, RigTargetType), Z_Construct_UEnum_BodyState_EBodyStateAutoRigType, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_RigTargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_RigTargetType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetCurrentWristPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_ForMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_RigTargetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_RigTargetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "GetCurrentWristPose", nullptr, nullptr, sizeof(BodyStateAnimInstance_eventGetCurrentWristPose_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics
	{
		struct BodyStateAnimInstance_eventGetMeshBoneNameFromCachedBoneLink_Parms
		{
			FCachedBoneLink CachedBoneLink;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBoneLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedBoneLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::NewProp_CachedBoneLink_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::NewProp_CachedBoneLink = { "CachedBoneLink", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetMeshBoneNameFromCachedBoneLink_Parms, CachedBoneLink), Z_Construct_UScriptStruct_FCachedBoneLink, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::NewProp_CachedBoneLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::NewProp_CachedBoneLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetMeshBoneNameFromCachedBoneLink_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::NewProp_CachedBoneLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "GetMeshBoneNameFromCachedBoneLink", nullptr, nullptr, sizeof(BodyStateAnimInstance_eventGetMeshBoneNameFromCachedBoneLink_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics
	{
		struct BodyStateAnimInstance_eventRemoveBSBoneLink_Parms
		{
			FMappedBoneAnimData InMappedBoneData;
			EBodyStateBasicBoneType BSBone;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMappedBoneData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BSBone_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BSBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_InMappedBoneData = { "InMappedBoneData", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventRemoveBSBoneLink_Parms, InMappedBoneData), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_BSBone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_BSBone = { "BSBone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventRemoveBSBoneLink_Parms, BSBone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_InMappedBoneData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_BSBone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_BSBone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "Comment", "/** Remove a link. Useful when e.g. autorigging gets 80% there but you need to remove a bone. */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Remove a link. Useful when e.g. autorigging gets 80% there but you need to remove a bone." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "RemoveBSBoneLink", nullptr, nullptr, sizeof(BodyStateAnimInstance_eventRemoveBSBoneLink_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics
	{
		struct BodyStateAnimInstance_eventSetAnimSkeleton_Parms
		{
			UBodyStateSkeleton* InSkeleton;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSkeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::NewProp_InSkeleton = { "InSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventSetAnimSkeleton_Parms, InSkeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::NewProp_InSkeleton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "SetAnimSkeleton", nullptr, nullptr, sizeof(BodyStateAnimInstance_eventSetAnimSkeleton_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics
	{
		struct BodyStateAnimInstance_eventSyncMappedBoneDataCache_Parms
		{
			FMappedBoneAnimData InMappedBoneData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMappedBoneData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::NewProp_InMappedBoneData = { "InMappedBoneData", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventSyncMappedBoneDataCache_Parms, InMappedBoneData), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::NewProp_InMappedBoneData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "Comment", "// Manual sync\n" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Manual sync" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "SyncMappedBoneDataCache", nullptr, nullptr, sizeof(BodyStateAnimInstance_eventSyncMappedBoneDataCache_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBodyStateAnimInstance_NoRegister()
	{
		return UBodyStateAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFreezeTracking_MetaData[];
#endif
		static void NewProp_bFreezeTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFreezeTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDetectHandRotationDuringAutoMapping_MetaData[];
#endif
		static void NewProp_bDetectHandRotationDuringAutoMapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetectHandRotationDuringAutoMapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeMetaCarpels_MetaData[];
#endif
		static void NewProp_bIncludeMetaCarpels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeMetaCarpels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSortedBoneNames_MetaData[];
#endif
		static void NewProp_bUseSortedBoneNames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSortedBoneNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchNames;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoMapTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoMapTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoMapTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBodyStateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultBodyStateIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyStateSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyStateSkeleton;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MappedBoneList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappedBoneList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MappedBoneList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugAddRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugAddRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBodyStateAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink, "AddBSBoneToMeshBoneLink" }, // 1671778436
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis, "AdjustPositionByMapBasis" }, // 1943216679
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis, "AdjustRotationByMapBasis" }, // 2798146626
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary, "BoneMapSummary" }, // 2312189284
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking, "CalcIsTracking" }, // 1726194787
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping, "ExecuteAutoMapping" }, // 1285469486
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef, "GetBoneNameFromRef" }, // 1241777457
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose, "GetCurrentWristPose" }, // 2409704526
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink, "GetMeshBoneNameFromCachedBoneLink" }, // 2377147123
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink, "RemoveBSBoneLink" }, // 2925274673
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton, "SetAnimSkeleton" }, // 3300046785
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache, "SyncMappedBoneDataCache" }, // 470357306
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance AnimInstance" },
		{ "IncludePath", "BodyStateAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking_MetaData[] = {
		{ "Category", "BS Anim Instance - Debug" },
		{ "Comment", "/** Toggle to freeze the tracking at current state. Useful for debugging your anim instance*/" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Toggle to freeze the tracking at current state. Useful for debugging your anim instance" },
	};
#endif
	void Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking_SetBit(void* Obj)
	{
		((UBodyStateAnimInstance*)Obj)->bFreezeTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking = { "bFreezeTracking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBodyStateAnimInstance), &Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bDetectHandRotationDuringAutoMapping_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "Comment", "/** Whether the anim instance should map the skeleton rotation on auto map*/" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Whether the anim instance should map the skeleton rotation on auto map" },
	};
#endif
	void Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bDetectHandRotationDuringAutoMapping_SetBit(void* Obj)
	{
		((UBodyStateAnimInstance*)Obj)->bDetectHandRotationDuringAutoMapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bDetectHandRotationDuringAutoMapping = { "bDetectHandRotationDuringAutoMapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBodyStateAnimInstance), &Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bDetectHandRotationDuringAutoMapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bDetectHandRotationDuringAutoMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bDetectHandRotationDuringAutoMapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bIncludeMetaCarpels_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "Comment", "/** Whether to include the metacarpels bones when auto mapping (this can distort the palm mesh)*/" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Whether to include the metacarpels bones when auto mapping (this can distort the palm mesh)" },
	};
#endif
	void Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bIncludeMetaCarpels_SetBit(void* Obj)
	{
		((UBodyStateAnimInstance*)Obj)->bIncludeMetaCarpels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bIncludeMetaCarpels = { "bIncludeMetaCarpels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBodyStateAnimInstance), &Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bIncludeMetaCarpels_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bIncludeMetaCarpels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bIncludeMetaCarpels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bUseSortedBoneNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "Comment", "/** Sort the bone names alphabetically when auto mapping rather than by bone order*/" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Sort the bone names alphabetically when auto mapping rather than by bone order" },
	};
#endif
	void Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bUseSortedBoneNames_SetBit(void* Obj)
	{
		((UBodyStateAnimInstance*)Obj)->bUseSortedBoneNames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bUseSortedBoneNames = { "bUseSortedBoneNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBodyStateAnimInstance), &Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bUseSortedBoneNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bUseSortedBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bUseSortedBoneNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_SearchNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "Comment", "/** Auto detection names (e.g. index thumb etc.)*/" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Auto detection names (e.g. index thumb etc.)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_SearchNames = { "SearchNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateAnimInstance, SearchNames), Z_Construct_UScriptStruct_FBoneSearchNames, METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_SearchNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_SearchNames_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget = { "AutoMapTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateAnimInstance, AutoMapTarget), Z_Construct_UEnum_BodyState_EBodyStateAutoRigType, METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DefaultBodyStateIndex_MetaData[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DefaultBodyStateIndex = { "DefaultBodyStateIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateAnimInstance, DefaultBodyStateIndex), METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DefaultBodyStateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DefaultBodyStateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BodyStateSkeleton_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "/** Skeleton driving our data */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Skeleton driving our data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BodyStateSkeleton = { "BodyStateSkeleton", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateAnimInstance, BodyStateSkeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BodyStateSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BodyStateSkeleton_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList_Inner = { "MappedBoneList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList_MetaData[] = {
		{ "Category", "BS Anim Instance" },
		{ "Comment", "/** Struct containing all variables needed at anim node time */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Struct containing all variables needed at anim node time" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList = { "MappedBoneList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateAnimInstance, MappedBoneList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DebugAddRotation_MetaData[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DebugAddRotation = { "DebugAddRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateAnimInstance, DebugAddRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DebugAddRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DebugAddRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bDetectHandRotationDuringAutoMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bIncludeMetaCarpels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bUseSortedBoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_SearchNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DefaultBodyStateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BodyStateSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DebugAddRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::ClassParams = {
		&UBodyStateAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBodyStateAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateAnimInstance, 2552937499);
	template<> BODYSTATE_API UClass* StaticClass<UBodyStateAnimInstance>()
	{
		return UBodyStateAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateAnimInstance(Z_Construct_UClass_UBodyStateAnimInstance, &UBodyStateAnimInstance::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
