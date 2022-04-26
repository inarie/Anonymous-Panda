// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ULTRALEAPTRACKING_UltraleapTrackingData_generated_h
#error "UltraleapTrackingData.generated.h already included, missing '#pragma once' in UltraleapTrackingData.h"
#endif
#define ULTRALEAPTRACKING_UltraleapTrackingData_generated_h

#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h_367_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLeapFrameData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<struct FLeapFrameData>();

#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h_300_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLeapHandData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<struct FLeapHandData>();

#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h_268_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLeapDigitData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<struct FLeapDigitData>();

#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h_236_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLeapPalmData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<struct FLeapPalmData>();

#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h_213_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLeapBoneData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<struct FLeapBoneData>();

#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLeapOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<struct FLeapOptions>();

#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLeapStats_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<struct FLeapStats>();

#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLeapDevice_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<struct FLeapDevice>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h


#define FOREACH_ENUM_ELEAPQUATSWIZZLEAXISB(op) \
	op(ELeapQuatSwizzleAxisB::X) \
	op(ELeapQuatSwizzleAxisB::Y) \
	op(ELeapQuatSwizzleAxisB::Z) \
	op(ELeapQuatSwizzleAxisB::W) \
	op(ELeapQuatSwizzleAxisB::MinusX) \
	op(ELeapQuatSwizzleAxisB::MinusY) \
	op(ELeapQuatSwizzleAxisB::MinusZ) \
	op(ELeapQuatSwizzleAxisB::MinusW) 

enum class ELeapQuatSwizzleAxisB : uint8;
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapQuatSwizzleAxisB>();

#define FOREACH_ENUM_ELEAPSERVICELOGLEVEL(op) \
	op(LEAP_LOG_NONE) \
	op(LEAP_LOG_ERROR) \
	op(LEAP_LOG_WARNING) \
	op(LEAP_LOG_INFO) 
#define FOREACH_ENUM_ELEAPPOLICYFLAG(op) \
	op(LEAP_POLICY_BACKGROUND_FRAMES) \
	op(LEAP_POLICY_IMAGES) \
	op(LEAP_POLICY_OPTIMIZE_HMD) \
	op(LEAP_POLICY_ALLOW_PAUSE_RESUME) \
	op(LEAP_POLICY_MAP_POINTS) 
#define FOREACH_ENUM_ELEAPTRACKINGFIDELITY(op) \
	op(LEAP_CUSTOM) \
	op(LEAP_LOW_LATENCY) \
	op(LEAP_NORMAL) \
	op(LEAP_SMOOTH) \
	op(LEAP_WIRELESS) 
#define FOREACH_ENUM_ELEAPIMAGETYPE(op) \
	op(ELeapImageType::LEAP_IMAGE_LEFT) \
	op(ELeapImageType::LEAP_IMAGE_RIGHT) 

enum class ELeapImageType : uint8;
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapImageType>();

#define FOREACH_ENUM_ELEAPMODE(op) \
	op(LEAP_MODE_VR) \
	op(LEAP_MODE_DESKTOP) \
	op(LEAP_MODE_SCREENTOP) 
#define FOREACH_ENUM_EHANDTYPE(op) \
	op(LEAP_HAND_LEFT) \
	op(LEAP_HAND_RIGHT) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
