// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
struct FTransform;
class UObject;
class UBodyStateSkeleton;
struct FBodyStateDeviceConfig;
class IBodyStateInputInterface;
#ifdef BODYSTATE_BodyStateBPLibrary_generated_h
#error "BodyStateBPLibrary.generated.h already included, missing '#pragma once' in BodyStateBPLibrary.h"
#endif
#define BODYSTATE_BodyStateBPLibrary_generated_h

#define anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_SPARSE_DATA
#define anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTransformForBoneNamedInAnimInstance); \
	DECLARE_FUNCTION(execSkeletonForDevice); \
	DECLARE_FUNCTION(execDetachDevice); \
	DECLARE_FUNCTION(execAttachDevice);


#define anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTransformForBoneNamedInAnimInstance); \
	DECLARE_FUNCTION(execSkeletonForDevice); \
	DECLARE_FUNCTION(execDetachDevice); \
	DECLARE_FUNCTION(execAttachDevice);


#define anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodyStateBPLibrary(); \
	friend struct Z_Construct_UClass_UBodyStateBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBodyStateBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateBPLibrary)


#define anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUBodyStateBPLibrary(); \
	friend struct Z_Construct_UClass_UBodyStateBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBodyStateBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateBPLibrary)


#define anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateBPLibrary(UBodyStateBPLibrary&&); \
	NO_API UBodyStateBPLibrary(const UBodyStateBPLibrary&); \
public:


#define anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateBPLibrary(UBodyStateBPLibrary&&); \
	NO_API UBodyStateBPLibrary(const UBodyStateBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateBPLibrary)


#define anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_PRIVATE_PROPERTY_OFFSET
#define anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_33_PROLOG
#define anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_PRIVATE_PROPERTY_OFFSET \
	anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_SPARSE_DATA \
	anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_RPC_WRAPPERS \
	anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_INCLASS \
	anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_PRIVATE_PROPERTY_OFFSET \
	anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_SPARSE_DATA \
	anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_INCLASS_NO_PURE_DECLS \
	anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodyStateBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BODYSTATE_API UClass* StaticClass<class UBodyStateBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID anonymous_panda_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
