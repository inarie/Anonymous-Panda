// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMappedBoneAnimData;
enum class EBodyStateAutoRigType : uint8;
struct FTransform;
struct FCachedBoneLink;
struct FBPBoneReference;
class UBodyStateSkeleton;
enum class EBodyStateBasicBoneType : uint8;
struct FVector;
struct FRotator;
#ifdef BODYSTATE_BodyStateAnimInstance_generated_h
#error "BodyStateAnimInstance.generated.h already included, missing '#pragma once' in BodyStateAnimInstance.h"
#endif
#define BODYSTATE_BodyStateAnimInstance_generated_h

#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneSearchNames_Statics; \
	BODYSTATE_API static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FBoneSearchNames>();

#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics; \
	BODYSTATE_API static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FMappedBoneAnimData>();

#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPBoneReference_Statics; \
	BODYSTATE_API static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FBPBoneReference>();

#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedBoneLink_Statics; \
	BODYSTATE_API static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FCachedBoneLink>();

#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FBodyStateIndexedBone>();

#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_SPARSE_DATA
#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecuteAutoMapping); \
	DECLARE_FUNCTION(execCalcIsTracking); \
	DECLARE_FUNCTION(execGetCurrentWristPose); \
	DECLARE_FUNCTION(execGetMeshBoneNameFromCachedBoneLink); \
	DECLARE_FUNCTION(execGetBoneNameFromRef); \
	DECLARE_FUNCTION(execSyncMappedBoneDataCache); \
	DECLARE_FUNCTION(execBoneMapSummary); \
	DECLARE_FUNCTION(execSetAnimSkeleton); \
	DECLARE_FUNCTION(execRemoveBSBoneLink); \
	DECLARE_FUNCTION(execAddBSBoneToMeshBoneLink); \
	DECLARE_FUNCTION(execAdjustPositionByMapBasis); \
	DECLARE_FUNCTION(execAdjustRotationByMapBasis);


#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecuteAutoMapping); \
	DECLARE_FUNCTION(execCalcIsTracking); \
	DECLARE_FUNCTION(execGetCurrentWristPose); \
	DECLARE_FUNCTION(execGetMeshBoneNameFromCachedBoneLink); \
	DECLARE_FUNCTION(execGetBoneNameFromRef); \
	DECLARE_FUNCTION(execSyncMappedBoneDataCache); \
	DECLARE_FUNCTION(execBoneMapSummary); \
	DECLARE_FUNCTION(execSetAnimSkeleton); \
	DECLARE_FUNCTION(execRemoveBSBoneLink); \
	DECLARE_FUNCTION(execAddBSBoneToMeshBoneLink); \
	DECLARE_FUNCTION(execAdjustPositionByMapBasis); \
	DECLARE_FUNCTION(execAdjustRotationByMapBasis);


#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodyStateAnimInstance(); \
	friend struct Z_Construct_UClass_UBodyStateAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UBodyStateAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateAnimInstance)


#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_INCLASS \
private: \
	static void StaticRegisterNativesUBodyStateAnimInstance(); \
	friend struct Z_Construct_UClass_UBodyStateAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UBodyStateAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateAnimInstance)


#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateAnimInstance(UBodyStateAnimInstance&&); \
	NO_API UBodyStateAnimInstance(const UBodyStateAnimInstance&); \
public:


#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateAnimInstance(UBodyStateAnimInstance&&); \
	NO_API UBodyStateAnimInstance(const UBodyStateAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateAnimInstance)


#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_PRIVATE_PROPERTY_OFFSET
#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_190_PROLOG
#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_PRIVATE_PROPERTY_OFFSET \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_SPARSE_DATA \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_RPC_WRAPPERS \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_INCLASS \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_PRIVATE_PROPERTY_OFFSET \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_SPARSE_DATA \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_INCLASS_NO_PURE_DECLS \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_194_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodyStateAnimInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BODYSTATE_API UClass* StaticClass<class UBodyStateAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
