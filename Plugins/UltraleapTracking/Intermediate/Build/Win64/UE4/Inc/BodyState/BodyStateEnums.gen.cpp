// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/BodyStateEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateEnums() {}
// Cross Module References
	BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateAutoRigType();
	BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateHandType();
// End Cross Module References
	static UEnum* EBodyStateBasicBoneType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, Z_Construct_UPackage__Script_BodyState(), TEXT("EBodyStateBasicBoneType"));
		}
		return Singleton;
	}
	template<> BODYSTATE_API UEnum* StaticEnum<EBodyStateBasicBoneType>()
	{
		return EBodyStateBasicBoneType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBodyStateBasicBoneType(EBodyStateBasicBoneType_StaticEnum, TEXT("/Script/BodyState"), TEXT("EBodyStateBasicBoneType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType_Hash() { return 390196915U; }
	UEnum* Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBodyStateBasicBoneType"), 0, Get_Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBodyStateBasicBoneType::BONE_ROOT", (int64)EBodyStateBasicBoneType::BONE_ROOT },
				{ "EBodyStateBasicBoneType::BONE_PELVIS", (int64)EBodyStateBasicBoneType::BONE_PELVIS },
				{ "EBodyStateBasicBoneType::BONE_SPINE_1", (int64)EBodyStateBasicBoneType::BONE_SPINE_1 },
				{ "EBodyStateBasicBoneType::BONE_SPINE_2", (int64)EBodyStateBasicBoneType::BONE_SPINE_2 },
				{ "EBodyStateBasicBoneType::BONE_SPINE_3", (int64)EBodyStateBasicBoneType::BONE_SPINE_3 },
				{ "EBodyStateBasicBoneType::BONE_CLAVICLE_L", (int64)EBodyStateBasicBoneType::BONE_CLAVICLE_L },
				{ "EBodyStateBasicBoneType::BONE_UPPERARM_L", (int64)EBodyStateBasicBoneType::BONE_UPPERARM_L },
				{ "EBodyStateBasicBoneType::BONE_LOWERARM_L", (int64)EBodyStateBasicBoneType::BONE_LOWERARM_L },
				{ "EBodyStateBasicBoneType::BONE_HAND_WRIST_L", (int64)EBodyStateBasicBoneType::BONE_HAND_WRIST_L },
				{ "EBodyStateBasicBoneType::BONE_INDEX_0_METACARPAL_L", (int64)EBodyStateBasicBoneType::BONE_INDEX_0_METACARPAL_L },
				{ "EBodyStateBasicBoneType::BONE_INDEX_1_PROXIMAL_L", (int64)EBodyStateBasicBoneType::BONE_INDEX_1_PROXIMAL_L },
				{ "EBodyStateBasicBoneType::BONE_INDEX_2_INTERMEDIATE_L", (int64)EBodyStateBasicBoneType::BONE_INDEX_2_INTERMEDIATE_L },
				{ "EBodyStateBasicBoneType::BONE_INDEX_3_DISTAL_L", (int64)EBodyStateBasicBoneType::BONE_INDEX_3_DISTAL_L },
				{ "EBodyStateBasicBoneType::BONE_MIDDLE_0_METACARPAL_L", (int64)EBodyStateBasicBoneType::BONE_MIDDLE_0_METACARPAL_L },
				{ "EBodyStateBasicBoneType::BONE_MIDDLE_1_PROXIMAL_L", (int64)EBodyStateBasicBoneType::BONE_MIDDLE_1_PROXIMAL_L },
				{ "EBodyStateBasicBoneType::BONE_MIDDLE_2_INTERMEDIATE_L", (int64)EBodyStateBasicBoneType::BONE_MIDDLE_2_INTERMEDIATE_L },
				{ "EBodyStateBasicBoneType::BONE_MIDDLE_3_DISTAL_L", (int64)EBodyStateBasicBoneType::BONE_MIDDLE_3_DISTAL_L },
				{ "EBodyStateBasicBoneType::BONE_PINKY_0_METACARPAL_L", (int64)EBodyStateBasicBoneType::BONE_PINKY_0_METACARPAL_L },
				{ "EBodyStateBasicBoneType::BONE_PINKY_1_PROXIMAL_L", (int64)EBodyStateBasicBoneType::BONE_PINKY_1_PROXIMAL_L },
				{ "EBodyStateBasicBoneType::BONE_PINKY_2_INTERMEDIATE_L", (int64)EBodyStateBasicBoneType::BONE_PINKY_2_INTERMEDIATE_L },
				{ "EBodyStateBasicBoneType::BONE_PINKY_3_DISTAL_L", (int64)EBodyStateBasicBoneType::BONE_PINKY_3_DISTAL_L },
				{ "EBodyStateBasicBoneType::BONE_RING_0_METACARPAL_L", (int64)EBodyStateBasicBoneType::BONE_RING_0_METACARPAL_L },
				{ "EBodyStateBasicBoneType::BONE_RING_1_PROXIMAL_L", (int64)EBodyStateBasicBoneType::BONE_RING_1_PROXIMAL_L },
				{ "EBodyStateBasicBoneType::BONE_RING_2_INTERMEDIATE_L", (int64)EBodyStateBasicBoneType::BONE_RING_2_INTERMEDIATE_L },
				{ "EBodyStateBasicBoneType::BONE_RING_3_DISTAL_L", (int64)EBodyStateBasicBoneType::BONE_RING_3_DISTAL_L },
				{ "EBodyStateBasicBoneType::BONE_THUMB_0_METACARPAL_L", (int64)EBodyStateBasicBoneType::BONE_THUMB_0_METACARPAL_L },
				{ "EBodyStateBasicBoneType::BONE_THUMB_1_PROXIMAL_L", (int64)EBodyStateBasicBoneType::BONE_THUMB_1_PROXIMAL_L },
				{ "EBodyStateBasicBoneType::BONE_THUMB_2_DISTAL_L", (int64)EBodyStateBasicBoneType::BONE_THUMB_2_DISTAL_L },
				{ "EBodyStateBasicBoneType::BONE_LOWERARM_TWIST_1_L", (int64)EBodyStateBasicBoneType::BONE_LOWERARM_TWIST_1_L },
				{ "EBodyStateBasicBoneType::BONE_UPPERARM_TWIST_1_L", (int64)EBodyStateBasicBoneType::BONE_UPPERARM_TWIST_1_L },
				{ "EBodyStateBasicBoneType::BONE_CLAVICLE_R", (int64)EBodyStateBasicBoneType::BONE_CLAVICLE_R },
				{ "EBodyStateBasicBoneType::BONE_UPPERARM_R", (int64)EBodyStateBasicBoneType::BONE_UPPERARM_R },
				{ "EBodyStateBasicBoneType::BONE_LOWERARM_R", (int64)EBodyStateBasicBoneType::BONE_LOWERARM_R },
				{ "EBodyStateBasicBoneType::BONE_HAND_WRIST_R", (int64)EBodyStateBasicBoneType::BONE_HAND_WRIST_R },
				{ "EBodyStateBasicBoneType::BONE_INDEX_0_METACARPAL_R", (int64)EBodyStateBasicBoneType::BONE_INDEX_0_METACARPAL_R },
				{ "EBodyStateBasicBoneType::BONE_INDEX_1_PROXIMAL_R", (int64)EBodyStateBasicBoneType::BONE_INDEX_1_PROXIMAL_R },
				{ "EBodyStateBasicBoneType::BONE_INDEX_2_INTERMEDIATE_R", (int64)EBodyStateBasicBoneType::BONE_INDEX_2_INTERMEDIATE_R },
				{ "EBodyStateBasicBoneType::BONE_INDEX_3_DISTAL_R", (int64)EBodyStateBasicBoneType::BONE_INDEX_3_DISTAL_R },
				{ "EBodyStateBasicBoneType::BONE_MIDDLE_0_METACARPAL_R", (int64)EBodyStateBasicBoneType::BONE_MIDDLE_0_METACARPAL_R },
				{ "EBodyStateBasicBoneType::BONE_MIDDLE_1_PROXIMAL_R", (int64)EBodyStateBasicBoneType::BONE_MIDDLE_1_PROXIMAL_R },
				{ "EBodyStateBasicBoneType::BONE_MIDDLE_2_INTERMEDIATE_R", (int64)EBodyStateBasicBoneType::BONE_MIDDLE_2_INTERMEDIATE_R },
				{ "EBodyStateBasicBoneType::BONE_MIDDLE_3_DISTAL_R", (int64)EBodyStateBasicBoneType::BONE_MIDDLE_3_DISTAL_R },
				{ "EBodyStateBasicBoneType::BONE_PINKY_0_METACARPAL_R", (int64)EBodyStateBasicBoneType::BONE_PINKY_0_METACARPAL_R },
				{ "EBodyStateBasicBoneType::BONE_PINKY_1_PROXIMAL_R", (int64)EBodyStateBasicBoneType::BONE_PINKY_1_PROXIMAL_R },
				{ "EBodyStateBasicBoneType::BONE_PINKY_2_INTERMEDIATE_R", (int64)EBodyStateBasicBoneType::BONE_PINKY_2_INTERMEDIATE_R },
				{ "EBodyStateBasicBoneType::BONE_PINKY_3_DISTAL_R", (int64)EBodyStateBasicBoneType::BONE_PINKY_3_DISTAL_R },
				{ "EBodyStateBasicBoneType::BONE_RING_0_METACARPAL_R", (int64)EBodyStateBasicBoneType::BONE_RING_0_METACARPAL_R },
				{ "EBodyStateBasicBoneType::BONE_RING_1_PROXIMAL_R", (int64)EBodyStateBasicBoneType::BONE_RING_1_PROXIMAL_R },
				{ "EBodyStateBasicBoneType::BONE_RING_2_INTERMEDIATE_R", (int64)EBodyStateBasicBoneType::BONE_RING_2_INTERMEDIATE_R },
				{ "EBodyStateBasicBoneType::BONE_RING_3_DISTAL_R", (int64)EBodyStateBasicBoneType::BONE_RING_3_DISTAL_R },
				{ "EBodyStateBasicBoneType::BONE_THUMB_0_METACARPAL_R", (int64)EBodyStateBasicBoneType::BONE_THUMB_0_METACARPAL_R },
				{ "EBodyStateBasicBoneType::BONE_THUMB_1_PROXIMAL_R", (int64)EBodyStateBasicBoneType::BONE_THUMB_1_PROXIMAL_R },
				{ "EBodyStateBasicBoneType::BONE_THUMB_2_DISTAL_R", (int64)EBodyStateBasicBoneType::BONE_THUMB_2_DISTAL_R },
				{ "EBodyStateBasicBoneType::BONE_LOWERARM_TWIST_1_R", (int64)EBodyStateBasicBoneType::BONE_LOWERARM_TWIST_1_R },
				{ "EBodyStateBasicBoneType::BONE_UPPERARM_TWIST_1_R", (int64)EBodyStateBasicBoneType::BONE_UPPERARM_TWIST_1_R },
				{ "EBodyStateBasicBoneType::BONE_NECK_1", (int64)EBodyStateBasicBoneType::BONE_NECK_1 },
				{ "EBodyStateBasicBoneType::BONE_HEAD", (int64)EBodyStateBasicBoneType::BONE_HEAD },
				{ "EBodyStateBasicBoneType::BONE_THIGH_L", (int64)EBodyStateBasicBoneType::BONE_THIGH_L },
				{ "EBodyStateBasicBoneType::BONE_CALF_L", (int64)EBodyStateBasicBoneType::BONE_CALF_L },
				{ "EBodyStateBasicBoneType::BONE_CALF_TWIST_1_L", (int64)EBodyStateBasicBoneType::BONE_CALF_TWIST_1_L },
				{ "EBodyStateBasicBoneType::BONE_FOOT_L", (int64)EBodyStateBasicBoneType::BONE_FOOT_L },
				{ "EBodyStateBasicBoneType::BONE_BALL_L", (int64)EBodyStateBasicBoneType::BONE_BALL_L },
				{ "EBodyStateBasicBoneType::BONE_THIGH_TWIST_1_L", (int64)EBodyStateBasicBoneType::BONE_THIGH_TWIST_1_L },
				{ "EBodyStateBasicBoneType::BONE_THIGH_R", (int64)EBodyStateBasicBoneType::BONE_THIGH_R },
				{ "EBodyStateBasicBoneType::BONE_CALF_R", (int64)EBodyStateBasicBoneType::BONE_CALF_R },
				{ "EBodyStateBasicBoneType::BONE_CALF_TWIST_1_R", (int64)EBodyStateBasicBoneType::BONE_CALF_TWIST_1_R },
				{ "EBodyStateBasicBoneType::BONE_FOOT_R", (int64)EBodyStateBasicBoneType::BONE_FOOT_R },
				{ "EBodyStateBasicBoneType::BONE_BALL_R", (int64)EBodyStateBasicBoneType::BONE_BALL_R },
				{ "EBodyStateBasicBoneType::BONE_THIGH_TWIST_1_R", (int64)EBodyStateBasicBoneType::BONE_THIGH_TWIST_1_R },
				{ "EBodyStateBasicBoneType::BONES_COUNT", (int64)EBodyStateBasicBoneType::BONES_COUNT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BONE_BALL_L.Name", "EBodyStateBasicBoneType::BONE_BALL_L" },
				{ "BONE_BALL_R.Name", "EBodyStateBasicBoneType::BONE_BALL_R" },
				{ "BONE_CALF_L.Name", "EBodyStateBasicBoneType::BONE_CALF_L" },
				{ "BONE_CALF_R.Name", "EBodyStateBasicBoneType::BONE_CALF_R" },
				{ "BONE_CALF_TWIST_1_L.Name", "EBodyStateBasicBoneType::BONE_CALF_TWIST_1_L" },
				{ "BONE_CALF_TWIST_1_R.Name", "EBodyStateBasicBoneType::BONE_CALF_TWIST_1_R" },
				{ "BONE_CLAVICLE_L.Comment", "// Left Arm\n" },
				{ "BONE_CLAVICLE_L.Name", "EBodyStateBasicBoneType::BONE_CLAVICLE_L" },
				{ "BONE_CLAVICLE_L.ToolTip", "Left Arm" },
				{ "BONE_CLAVICLE_R.Comment", "// Right Arm\n" },
				{ "BONE_CLAVICLE_R.Name", "EBodyStateBasicBoneType::BONE_CLAVICLE_R" },
				{ "BONE_CLAVICLE_R.ToolTip", "Right Arm" },
				{ "BONE_FOOT_L.Name", "EBodyStateBasicBoneType::BONE_FOOT_L" },
				{ "BONE_FOOT_R.Name", "EBodyStateBasicBoneType::BONE_FOOT_R" },
				{ "BONE_HAND_WRIST_L.Name", "EBodyStateBasicBoneType::BONE_HAND_WRIST_L" },
				{ "BONE_HAND_WRIST_R.Name", "EBodyStateBasicBoneType::BONE_HAND_WRIST_R" },
				{ "BONE_HEAD.Name", "EBodyStateBasicBoneType::BONE_HEAD" },
				{ "BONE_INDEX_0_METACARPAL_L.Name", "EBodyStateBasicBoneType::BONE_INDEX_0_METACARPAL_L" },
				{ "BONE_INDEX_0_METACARPAL_R.Name", "EBodyStateBasicBoneType::BONE_INDEX_0_METACARPAL_R" },
				{ "BONE_INDEX_1_PROXIMAL_L.Name", "EBodyStateBasicBoneType::BONE_INDEX_1_PROXIMAL_L" },
				{ "BONE_INDEX_1_PROXIMAL_R.Name", "EBodyStateBasicBoneType::BONE_INDEX_1_PROXIMAL_R" },
				{ "BONE_INDEX_2_INTERMEDIATE_L.Name", "EBodyStateBasicBoneType::BONE_INDEX_2_INTERMEDIATE_L" },
				{ "BONE_INDEX_2_INTERMEDIATE_R.Name", "EBodyStateBasicBoneType::BONE_INDEX_2_INTERMEDIATE_R" },
				{ "BONE_INDEX_3_DISTAL_L.Name", "EBodyStateBasicBoneType::BONE_INDEX_3_DISTAL_L" },
				{ "BONE_INDEX_3_DISTAL_R.Name", "EBodyStateBasicBoneType::BONE_INDEX_3_DISTAL_R" },
				{ "BONE_LOWERARM_L.Name", "EBodyStateBasicBoneType::BONE_LOWERARM_L" },
				{ "BONE_LOWERARM_R.Name", "EBodyStateBasicBoneType::BONE_LOWERARM_R" },
				{ "BONE_LOWERARM_TWIST_1_L.Name", "EBodyStateBasicBoneType::BONE_LOWERARM_TWIST_1_L" },
				{ "BONE_LOWERARM_TWIST_1_R.Name", "EBodyStateBasicBoneType::BONE_LOWERARM_TWIST_1_R" },
				{ "BONE_MIDDLE_0_METACARPAL_L.Name", "EBodyStateBasicBoneType::BONE_MIDDLE_0_METACARPAL_L" },
				{ "BONE_MIDDLE_0_METACARPAL_R.Name", "EBodyStateBasicBoneType::BONE_MIDDLE_0_METACARPAL_R" },
				{ "BONE_MIDDLE_1_PROXIMAL_L.Name", "EBodyStateBasicBoneType::BONE_MIDDLE_1_PROXIMAL_L" },
				{ "BONE_MIDDLE_1_PROXIMAL_R.Name", "EBodyStateBasicBoneType::BONE_MIDDLE_1_PROXIMAL_R" },
				{ "BONE_MIDDLE_2_INTERMEDIATE_L.Name", "EBodyStateBasicBoneType::BONE_MIDDLE_2_INTERMEDIATE_L" },
				{ "BONE_MIDDLE_2_INTERMEDIATE_R.Name", "EBodyStateBasicBoneType::BONE_MIDDLE_2_INTERMEDIATE_R" },
				{ "BONE_MIDDLE_3_DISTAL_L.Name", "EBodyStateBasicBoneType::BONE_MIDDLE_3_DISTAL_L" },
				{ "BONE_MIDDLE_3_DISTAL_R.Name", "EBodyStateBasicBoneType::BONE_MIDDLE_3_DISTAL_R" },
				{ "BONE_NECK_1.Comment", "// Head\n" },
				{ "BONE_NECK_1.Name", "EBodyStateBasicBoneType::BONE_NECK_1" },
				{ "BONE_NECK_1.ToolTip", "Head" },
				{ "BONE_PELVIS.Comment", "// Body\n" },
				{ "BONE_PELVIS.Name", "EBodyStateBasicBoneType::BONE_PELVIS" },
				{ "BONE_PELVIS.ToolTip", "Body" },
				{ "BONE_PINKY_0_METACARPAL_L.Name", "EBodyStateBasicBoneType::BONE_PINKY_0_METACARPAL_L" },
				{ "BONE_PINKY_0_METACARPAL_R.Name", "EBodyStateBasicBoneType::BONE_PINKY_0_METACARPAL_R" },
				{ "BONE_PINKY_1_PROXIMAL_L.Name", "EBodyStateBasicBoneType::BONE_PINKY_1_PROXIMAL_L" },
				{ "BONE_PINKY_1_PROXIMAL_R.Name", "EBodyStateBasicBoneType::BONE_PINKY_1_PROXIMAL_R" },
				{ "BONE_PINKY_2_INTERMEDIATE_L.Name", "EBodyStateBasicBoneType::BONE_PINKY_2_INTERMEDIATE_L" },
				{ "BONE_PINKY_2_INTERMEDIATE_R.Name", "EBodyStateBasicBoneType::BONE_PINKY_2_INTERMEDIATE_R" },
				{ "BONE_PINKY_3_DISTAL_L.Name", "EBodyStateBasicBoneType::BONE_PINKY_3_DISTAL_L" },
				{ "BONE_PINKY_3_DISTAL_R.Name", "EBodyStateBasicBoneType::BONE_PINKY_3_DISTAL_R" },
				{ "BONE_RING_0_METACARPAL_L.Name", "EBodyStateBasicBoneType::BONE_RING_0_METACARPAL_L" },
				{ "BONE_RING_0_METACARPAL_R.Name", "EBodyStateBasicBoneType::BONE_RING_0_METACARPAL_R" },
				{ "BONE_RING_1_PROXIMAL_L.Name", "EBodyStateBasicBoneType::BONE_RING_1_PROXIMAL_L" },
				{ "BONE_RING_1_PROXIMAL_R.Name", "EBodyStateBasicBoneType::BONE_RING_1_PROXIMAL_R" },
				{ "BONE_RING_2_INTERMEDIATE_L.Name", "EBodyStateBasicBoneType::BONE_RING_2_INTERMEDIATE_L" },
				{ "BONE_RING_2_INTERMEDIATE_R.Name", "EBodyStateBasicBoneType::BONE_RING_2_INTERMEDIATE_R" },
				{ "BONE_RING_3_DISTAL_L.Name", "EBodyStateBasicBoneType::BONE_RING_3_DISTAL_L" },
				{ "BONE_RING_3_DISTAL_R.Name", "EBodyStateBasicBoneType::BONE_RING_3_DISTAL_R" },
				{ "BONE_ROOT.Name", "EBodyStateBasicBoneType::BONE_ROOT" },
				{ "BONE_SPINE_1.Name", "EBodyStateBasicBoneType::BONE_SPINE_1" },
				{ "BONE_SPINE_2.Name", "EBodyStateBasicBoneType::BONE_SPINE_2" },
				{ "BONE_SPINE_3.Name", "EBodyStateBasicBoneType::BONE_SPINE_3" },
				{ "BONE_THIGH_L.Comment", "// Left Foot\n" },
				{ "BONE_THIGH_L.Name", "EBodyStateBasicBoneType::BONE_THIGH_L" },
				{ "BONE_THIGH_L.ToolTip", "Left Foot" },
				{ "BONE_THIGH_R.Comment", "// Right Foot\n" },
				{ "BONE_THIGH_R.Name", "EBodyStateBasicBoneType::BONE_THIGH_R" },
				{ "BONE_THIGH_R.ToolTip", "Right Foot" },
				{ "BONE_THIGH_TWIST_1_L.Name", "EBodyStateBasicBoneType::BONE_THIGH_TWIST_1_L" },
				{ "BONE_THIGH_TWIST_1_R.Name", "EBodyStateBasicBoneType::BONE_THIGH_TWIST_1_R" },
				{ "BONE_THUMB_0_METACARPAL_L.Name", "EBodyStateBasicBoneType::BONE_THUMB_0_METACARPAL_L" },
				{ "BONE_THUMB_0_METACARPAL_R.Name", "EBodyStateBasicBoneType::BONE_THUMB_0_METACARPAL_R" },
				{ "BONE_THUMB_1_PROXIMAL_L.Name", "EBodyStateBasicBoneType::BONE_THUMB_1_PROXIMAL_L" },
				{ "BONE_THUMB_1_PROXIMAL_R.Name", "EBodyStateBasicBoneType::BONE_THUMB_1_PROXIMAL_R" },
				{ "BONE_THUMB_2_DISTAL_L.Name", "EBodyStateBasicBoneType::BONE_THUMB_2_DISTAL_L" },
				{ "BONE_THUMB_2_DISTAL_R.Name", "EBodyStateBasicBoneType::BONE_THUMB_2_DISTAL_R" },
				{ "BONE_UPPERARM_L.Name", "EBodyStateBasicBoneType::BONE_UPPERARM_L" },
				{ "BONE_UPPERARM_R.Name", "EBodyStateBasicBoneType::BONE_UPPERARM_R" },
				{ "BONE_UPPERARM_TWIST_1_L.Name", "EBodyStateBasicBoneType::BONE_UPPERARM_TWIST_1_L" },
				{ "BONE_UPPERARM_TWIST_1_R.Name", "EBodyStateBasicBoneType::BONE_UPPERARM_TWIST_1_R" },
				{ "BONES_COUNT.Comment", "// Final Entry for bone count/enumeration testing, never place an entry after this one\n" },
				{ "BONES_COUNT.Name", "EBodyStateBasicBoneType::BONES_COUNT" },
				{ "BONES_COUNT.ToolTip", "Final Entry for bone count/enumeration testing, never place an entry after this one" },
				{ "Category", "BS Enums" },
				{ "Comment", "// Standard skeleton, Similar to UE - Good Baseline for now\n" },
				{ "ModuleRelativePath", "Public/BodyStateEnums.h" },
				{ "ToolTip", "Standard skeleton, Similar to UE - Good Baseline for now" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BodyState,
				nullptr,
				"EBodyStateBasicBoneType",
				"EBodyStateBasicBoneType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBodyStateAutoRigType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BodyState_EBodyStateAutoRigType, Z_Construct_UPackage__Script_BodyState(), TEXT("EBodyStateAutoRigType"));
		}
		return Singleton;
	}
	template<> BODYSTATE_API UEnum* StaticEnum<EBodyStateAutoRigType>()
	{
		return EBodyStateAutoRigType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBodyStateAutoRigType(EBodyStateAutoRigType_StaticEnum, TEXT("/Script/BodyState"), TEXT("EBodyStateAutoRigType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BodyState_EBodyStateAutoRigType_Hash() { return 2708655676U; }
	UEnum* Z_Construct_UEnum_BodyState_EBodyStateAutoRigType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBodyStateAutoRigType"), 0, Get_Z_Construct_UEnum_BodyState_EBodyStateAutoRigType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBodyStateAutoRigType::HAND_LEFT", (int64)EBodyStateAutoRigType::HAND_LEFT },
				{ "EBodyStateAutoRigType::HAND_RIGHT", (int64)EBodyStateAutoRigType::HAND_RIGHT },
				{ "EBodyStateAutoRigType::BOTH_HANDS", (int64)EBodyStateAutoRigType::BOTH_HANDS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BOTH_HANDS.Name", "EBodyStateAutoRigType::BOTH_HANDS" },
				{ "Category", "BS Enums" },
				{ "HAND_LEFT.Name", "EBodyStateAutoRigType::HAND_LEFT" },
				{ "HAND_RIGHT.Name", "EBodyStateAutoRigType::HAND_RIGHT" },
				{ "ModuleRelativePath", "Public/BodyStateEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BodyState,
				nullptr,
				"EBodyStateAutoRigType",
				"EBodyStateAutoRigType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBodyStateHandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BodyState_EBodyStateHandType, Z_Construct_UPackage__Script_BodyState(), TEXT("EBodyStateHandType"));
		}
		return Singleton;
	}
	template<> BODYSTATE_API UEnum* StaticEnum<EBodyStateHandType>()
	{
		return EBodyStateHandType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBodyStateHandType(EBodyStateHandType_StaticEnum, TEXT("/Script/BodyState"), TEXT("EBodyStateHandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BodyState_EBodyStateHandType_Hash() { return 4251632673U; }
	UEnum* Z_Construct_UEnum_BodyState_EBodyStateHandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBodyStateHandType"), 0, Get_Z_Construct_UEnum_BodyState_EBodyStateHandType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBodyStateHandType::BodyState_HAND_UNKNOWN", (int64)EBodyStateHandType::BodyState_HAND_UNKNOWN },
				{ "EBodyStateHandType::BodyState_HAND_LEFT", (int64)EBodyStateHandType::BodyState_HAND_LEFT },
				{ "EBodyStateHandType::BodyState_HAND_RIGHT", (int64)EBodyStateHandType::BodyState_HAND_RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BodyState_HAND_LEFT.Name", "EBodyStateHandType::BodyState_HAND_LEFT" },
				{ "BodyState_HAND_RIGHT.Name", "EBodyStateHandType::BodyState_HAND_RIGHT" },
				{ "BodyState_HAND_UNKNOWN.Name", "EBodyStateHandType::BodyState_HAND_UNKNOWN" },
				{ "Category", "BS Enums" },
				{ "ModuleRelativePath", "Public/BodyStateEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BodyState,
				nullptr,
				"EBodyStateHandType",
				"EBodyStateHandType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
