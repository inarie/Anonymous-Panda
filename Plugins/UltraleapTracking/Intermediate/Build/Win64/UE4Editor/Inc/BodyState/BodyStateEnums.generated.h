// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BODYSTATE_BodyStateEnums_generated_h
#error "BodyStateEnums.generated.h already included, missing '#pragma once' in BodyStateEnums.h"
#endif
#define BODYSTATE_BodyStateEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEnums_h


#define FOREACH_ENUM_EBODYSTATEBASICBONETYPE(op) \
	op(EBodyStateBasicBoneType::BONE_ROOT) \
	op(EBodyStateBasicBoneType::BONE_PELVIS) \
	op(EBodyStateBasicBoneType::BONE_SPINE_1) \
	op(EBodyStateBasicBoneType::BONE_SPINE_2) \
	op(EBodyStateBasicBoneType::BONE_SPINE_3) \
	op(EBodyStateBasicBoneType::BONE_CLAVICLE_L) \
	op(EBodyStateBasicBoneType::BONE_UPPERARM_L) \
	op(EBodyStateBasicBoneType::BONE_LOWERARM_L) \
	op(EBodyStateBasicBoneType::BONE_HAND_WRIST_L) \
	op(EBodyStateBasicBoneType::BONE_INDEX_0_METACARPAL_L) \
	op(EBodyStateBasicBoneType::BONE_INDEX_1_PROXIMAL_L) \
	op(EBodyStateBasicBoneType::BONE_INDEX_2_INTERMEDIATE_L) \
	op(EBodyStateBasicBoneType::BONE_INDEX_3_DISTAL_L) \
	op(EBodyStateBasicBoneType::BONE_MIDDLE_0_METACARPAL_L) \
	op(EBodyStateBasicBoneType::BONE_MIDDLE_1_PROXIMAL_L) \
	op(EBodyStateBasicBoneType::BONE_MIDDLE_2_INTERMEDIATE_L) \
	op(EBodyStateBasicBoneType::BONE_MIDDLE_3_DISTAL_L) \
	op(EBodyStateBasicBoneType::BONE_PINKY_0_METACARPAL_L) \
	op(EBodyStateBasicBoneType::BONE_PINKY_1_PROXIMAL_L) \
	op(EBodyStateBasicBoneType::BONE_PINKY_2_INTERMEDIATE_L) \
	op(EBodyStateBasicBoneType::BONE_PINKY_3_DISTAL_L) \
	op(EBodyStateBasicBoneType::BONE_RING_0_METACARPAL_L) \
	op(EBodyStateBasicBoneType::BONE_RING_1_PROXIMAL_L) \
	op(EBodyStateBasicBoneType::BONE_RING_2_INTERMEDIATE_L) \
	op(EBodyStateBasicBoneType::BONE_RING_3_DISTAL_L) \
	op(EBodyStateBasicBoneType::BONE_THUMB_0_METACARPAL_L) \
	op(EBodyStateBasicBoneType::BONE_THUMB_1_PROXIMAL_L) \
	op(EBodyStateBasicBoneType::BONE_THUMB_2_DISTAL_L) \
	op(EBodyStateBasicBoneType::BONE_LOWERARM_TWIST_1_L) \
	op(EBodyStateBasicBoneType::BONE_UPPERARM_TWIST_1_L) \
	op(EBodyStateBasicBoneType::BONE_CLAVICLE_R) \
	op(EBodyStateBasicBoneType::BONE_UPPERARM_R) \
	op(EBodyStateBasicBoneType::BONE_LOWERARM_R) \
	op(EBodyStateBasicBoneType::BONE_HAND_WRIST_R) \
	op(EBodyStateBasicBoneType::BONE_INDEX_0_METACARPAL_R) \
	op(EBodyStateBasicBoneType::BONE_INDEX_1_PROXIMAL_R) \
	op(EBodyStateBasicBoneType::BONE_INDEX_2_INTERMEDIATE_R) \
	op(EBodyStateBasicBoneType::BONE_INDEX_3_DISTAL_R) \
	op(EBodyStateBasicBoneType::BONE_MIDDLE_0_METACARPAL_R) \
	op(EBodyStateBasicBoneType::BONE_MIDDLE_1_PROXIMAL_R) \
	op(EBodyStateBasicBoneType::BONE_MIDDLE_2_INTERMEDIATE_R) \
	op(EBodyStateBasicBoneType::BONE_MIDDLE_3_DISTAL_R) \
	op(EBodyStateBasicBoneType::BONE_PINKY_0_METACARPAL_R) \
	op(EBodyStateBasicBoneType::BONE_PINKY_1_PROXIMAL_R) \
	op(EBodyStateBasicBoneType::BONE_PINKY_2_INTERMEDIATE_R) \
	op(EBodyStateBasicBoneType::BONE_PINKY_3_DISTAL_R) \
	op(EBodyStateBasicBoneType::BONE_RING_0_METACARPAL_R) \
	op(EBodyStateBasicBoneType::BONE_RING_1_PROXIMAL_R) \
	op(EBodyStateBasicBoneType::BONE_RING_2_INTERMEDIATE_R) \
	op(EBodyStateBasicBoneType::BONE_RING_3_DISTAL_R) \
	op(EBodyStateBasicBoneType::BONE_THUMB_0_METACARPAL_R) \
	op(EBodyStateBasicBoneType::BONE_THUMB_1_PROXIMAL_R) \
	op(EBodyStateBasicBoneType::BONE_THUMB_2_DISTAL_R) \
	op(EBodyStateBasicBoneType::BONE_LOWERARM_TWIST_1_R) \
	op(EBodyStateBasicBoneType::BONE_UPPERARM_TWIST_1_R) \
	op(EBodyStateBasicBoneType::BONE_NECK_1) \
	op(EBodyStateBasicBoneType::BONE_HEAD) \
	op(EBodyStateBasicBoneType::BONE_THIGH_L) \
	op(EBodyStateBasicBoneType::BONE_CALF_L) \
	op(EBodyStateBasicBoneType::BONE_CALF_TWIST_1_L) \
	op(EBodyStateBasicBoneType::BONE_FOOT_L) \
	op(EBodyStateBasicBoneType::BONE_BALL_L) \
	op(EBodyStateBasicBoneType::BONE_THIGH_TWIST_1_L) \
	op(EBodyStateBasicBoneType::BONE_THIGH_R) \
	op(EBodyStateBasicBoneType::BONE_CALF_R) \
	op(EBodyStateBasicBoneType::BONE_CALF_TWIST_1_R) \
	op(EBodyStateBasicBoneType::BONE_FOOT_R) \
	op(EBodyStateBasicBoneType::BONE_BALL_R) \
	op(EBodyStateBasicBoneType::BONE_THIGH_TWIST_1_R) \
	op(EBodyStateBasicBoneType::BONES_COUNT) 

enum class EBodyStateBasicBoneType : uint8;
template<> BODYSTATE_API UEnum* StaticEnum<EBodyStateBasicBoneType>();

#define FOREACH_ENUM_EBODYSTATEAUTORIGTYPE(op) \
	op(EBodyStateAutoRigType::HAND_LEFT) \
	op(EBodyStateAutoRigType::HAND_RIGHT) \
	op(EBodyStateAutoRigType::BOTH_HANDS) 

enum class EBodyStateAutoRigType : uint8;
template<> BODYSTATE_API UEnum* StaticEnum<EBodyStateAutoRigType>();

#define FOREACH_ENUM_EBODYSTATEHANDTYPE(op) \
	op(EBodyStateHandType::BodyState_HAND_UNKNOWN) \
	op(EBodyStateHandType::BodyState_HAND_LEFT) \
	op(EBodyStateHandType::BodyState_HAND_RIGHT) 

enum class EBodyStateHandType : uint8;
template<> BODYSTATE_API UEnum* StaticEnum<EBodyStateHandType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
