// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBodyStateSkeleton;
#ifdef BODYSTATE_BodyStateEstimatorComponent_generated_h
#error "BodyStateEstimatorComponent.generated.h already included, missing '#pragma once' in BodyStateEstimatorComponent.h"
#endif
#define BODYSTATE_BodyStateEstimatorComponent_generated_h

#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_28_DELEGATE \
struct _Script_BodyState_eventBodyStateSkeletonSignature_Parms \
{ \
	UBodyStateSkeleton* Skeleton; \
}; \
static inline void FBodyStateSkeletonSignature_DelegateWrapper(const FMulticastScriptDelegate& BodyStateSkeletonSignature, UBodyStateSkeleton* Skeleton) \
{ \
	_Script_BodyState_eventBodyStateSkeletonSignature_Parms Parms; \
	Parms.Skeleton=Skeleton; \
	BodyStateSkeletonSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_SPARSE_DATA
#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_RPC_WRAPPERS
#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodyStateEstimatorComponent(); \
	friend struct Z_Construct_UClass_UBodyStateEstimatorComponent_Statics; \
public: \
	DECLARE_CLASS(UBodyStateEstimatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateEstimatorComponent)


#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUBodyStateEstimatorComponent(); \
	friend struct Z_Construct_UClass_UBodyStateEstimatorComponent_Statics; \
public: \
	DECLARE_CLASS(UBodyStateEstimatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateEstimatorComponent)


#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateEstimatorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateEstimatorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateEstimatorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateEstimatorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateEstimatorComponent(UBodyStateEstimatorComponent&&); \
	NO_API UBodyStateEstimatorComponent(const UBodyStateEstimatorComponent&); \
public:


#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateEstimatorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateEstimatorComponent(UBodyStateEstimatorComponent&&); \
	NO_API UBodyStateEstimatorComponent(const UBodyStateEstimatorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateEstimatorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateEstimatorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateEstimatorComponent)


#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_PRIVATE_PROPERTY_OFFSET
#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_34_PROLOG
#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_SPARSE_DATA \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_RPC_WRAPPERS \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_INCLASS \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_SPARSE_DATA \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_INCLASS_NO_PURE_DECLS \
	Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodyStateEstimatorComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BODYSTATE_API UClass* StaticClass<class UBodyStateEstimatorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Metahuman_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
