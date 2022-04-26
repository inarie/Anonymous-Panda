// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIEGrabClassifierComponent;
class USceneComponent;
class UGrabClassifierProbe;
#ifdef ULTRALEAPTRACKING_GrabClassifierComponent_generated_h
#error "GrabClassifierComponent.generated.h already included, missing '#pragma once' in GrabClassifierComponent.h"
#endif
#define ULTRALEAPTRACKING_GrabClassifierComponent_generated_h

#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGrabClassifierParams_Statics; \
	ULTRALEAPTRACKING_API static class UScriptStruct* StaticStruct();


template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<struct FGrabClassifierParams>();

#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_17_DELEGATE \
struct _Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms \
{ \
	UIEGrabClassifierComponent* Source; \
	bool IsGrabbing; \
}; \
static inline void FGrabClassifierGrabStateChanged_DelegateWrapper(const FMulticastScriptDelegate& GrabClassifierGrabStateChanged, UIEGrabClassifierComponent* Source, bool IsGrabbing) \
{ \
	_Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms Parms; \
	Parms.Source=Source; \
	Parms.IsGrabbing=IsGrabbing ? true : false; \
	GrabClassifierGrabStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_SPARSE_DATA
#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_RPC_WRAPPERS
#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabClassifierProbe(); \
	friend struct Z_Construct_UClass_UGrabClassifierProbe_Statics; \
public: \
	DECLARE_CLASS(UGrabClassifierProbe, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UltraleapTracking"), NO_API) \
	DECLARE_SERIALIZER(UGrabClassifierProbe)


#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUGrabClassifierProbe(); \
	friend struct Z_Construct_UClass_UGrabClassifierProbe_Statics; \
public: \
	DECLARE_CLASS(UGrabClassifierProbe, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UltraleapTracking"), NO_API) \
	DECLARE_SERIALIZER(UGrabClassifierProbe)


#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabClassifierProbe(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabClassifierProbe) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabClassifierProbe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabClassifierProbe); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabClassifierProbe(UGrabClassifierProbe&&); \
	NO_API UGrabClassifierProbe(const UGrabClassifierProbe&); \
public:


#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabClassifierProbe(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabClassifierProbe(UGrabClassifierProbe&&); \
	NO_API UGrabClassifierProbe(const UGrabClassifierProbe&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabClassifierProbe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabClassifierProbe); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabClassifierProbe)


#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_72_PROLOG
#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_SPARSE_DATA \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_RPC_WRAPPERS \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_INCLASS \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_SPARSE_DATA \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ULTRALEAPTRACKING_API UClass* StaticClass<class UGrabClassifierProbe>();

#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_SPARSE_DATA
#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForceReset); \
	DECLARE_FUNCTION(execUpdateClassifier);


#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForceReset); \
	DECLARE_FUNCTION(execUpdateClassifier);


#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIEGrabClassifierComponent(); \
	friend struct Z_Construct_UClass_UIEGrabClassifierComponent_Statics; \
public: \
	DECLARE_CLASS(UIEGrabClassifierComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UltraleapTracking"), NO_API) \
	DECLARE_SERIALIZER(UIEGrabClassifierComponent)


#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUIEGrabClassifierComponent(); \
	friend struct Z_Construct_UClass_UIEGrabClassifierComponent_Statics; \
public: \
	DECLARE_CLASS(UIEGrabClassifierComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UltraleapTracking"), NO_API) \
	DECLARE_SERIALIZER(UIEGrabClassifierComponent)


#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIEGrabClassifierComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIEGrabClassifierComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIEGrabClassifierComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIEGrabClassifierComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIEGrabClassifierComponent(UIEGrabClassifierComponent&&); \
	NO_API UIEGrabClassifierComponent(const UIEGrabClassifierComponent&); \
public:


#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIEGrabClassifierComponent(UIEGrabClassifierComponent&&); \
	NO_API UIEGrabClassifierComponent(const UIEGrabClassifierComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIEGrabClassifierComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIEGrabClassifierComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIEGrabClassifierComponent)


#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_98_PROLOG
#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_SPARSE_DATA \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_RPC_WRAPPERS \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_INCLASS \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_SPARSE_DATA \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ULTRALEAPTRACKING_API UClass* StaticClass<class UIEGrabClassifierComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
