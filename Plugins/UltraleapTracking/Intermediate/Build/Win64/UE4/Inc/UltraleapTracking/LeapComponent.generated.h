// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class ELeapImageType : uint8;
struct FLeapHandData;
struct FLeapFrameData;
enum class ELeapQuatSwizzleAxisB : uint8;
#ifdef ULTRALEAPTRACKING_LeapComponent_generated_h
#error "LeapComponent.generated.h already included, missing '#pragma once' in LeapComponent.h"
#endif
#define ULTRALEAPTRACKING_LeapComponent_generated_h

#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_24_DELEGATE \
struct _Script_UltraleapTracking_eventLeapTrackingModeSignature_Parms \
{ \
	TEnumAsByte<ELeapMode> Flag; \
}; \
static inline void FLeapTrackingModeSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapTrackingModeSignature, ELeapMode Flag) \
{ \
	_Script_UltraleapTracking_eventLeapTrackingModeSignature_Parms Parms; \
	Parms.Flag=Flag; \
	LeapTrackingModeSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_23_DELEGATE \
struct _Script_UltraleapTracking_eventLeapImageEventSignature_Parms \
{ \
	UTexture2D* Texture; \
	ELeapImageType ImageType; \
}; \
static inline void FLeapImageEventSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapImageEventSignature, UTexture2D* Texture, ELeapImageType ImageType) \
{ \
	_Script_UltraleapTracking_eventLeapImageEventSignature_Parms Parms; \
	Parms.Texture=Texture; \
	Parms.ImageType=ImageType; \
	LeapImageEventSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_22_DELEGATE \
struct _Script_UltraleapTracking_eventLeapPolicySignature_Parms \
{ \
	TArray<TEnumAsByte<ELeapPolicyFlag> > Flags; \
}; \
static inline void FLeapPolicySignature_DelegateWrapper(const FMulticastScriptDelegate& LeapPolicySignature, const TArray<TEnumAsByte<ELeapPolicyFlag> >& Flags) \
{ \
	_Script_UltraleapTracking_eventLeapPolicySignature_Parms Parms; \
	Parms.Flags=Flags; \
	LeapPolicySignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_21_DELEGATE \
struct _Script_UltraleapTracking_eventLeapHandSignature_Parms \
{ \
	FLeapHandData Hand; \
}; \
static inline void FLeapHandSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapHandSignature, FLeapHandData const& Hand) \
{ \
	_Script_UltraleapTracking_eventLeapHandSignature_Parms Parms; \
	Parms.Hand=Hand; \
	LeapHandSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_20_DELEGATE \
struct _Script_UltraleapTracking_eventLeapFrameSignature_Parms \
{ \
	FLeapFrameData Frame; \
}; \
static inline void FLeapFrameSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapFrameSignature, FLeapFrameData const& Frame) \
{ \
	_Script_UltraleapTracking_eventLeapFrameSignature_Parms Parms; \
	Parms.Frame=Frame; \
	LeapFrameSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_19_DELEGATE \
struct _Script_UltraleapTracking_eventLeapVisibilityBoolSignature_Parms \
{ \
	bool bIsVisible; \
}; \
static inline void FLeapVisibilityBoolSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapVisibilityBoolSignature, bool bIsVisible) \
{ \
	_Script_UltraleapTracking_eventLeapVisibilityBoolSignature_Parms Parms; \
	Parms.bIsVisible=bIsVisible ? true : false; \
	LeapVisibilityBoolSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_18_DELEGATE \
struct _Script_UltraleapTracking_eventLeapDeviceSignature_Parms \
{ \
	FString DeviceName; \
}; \
static inline void FLeapDeviceSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapDeviceSignature, const FString& DeviceName) \
{ \
	_Script_UltraleapTracking_eventLeapDeviceSignature_Parms Parms; \
	Parms.DeviceName=DeviceName; \
	LeapDeviceSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_17_DELEGATE \
static inline void FLeapEventSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapEventSignature) \
{ \
	LeapEventSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_SPARSE_DATA
#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSwizzles); \
	DECLARE_FUNCTION(execGetLatestFrameData); \
	DECLARE_FUNCTION(execAreHandsVisible); \
	DECLARE_FUNCTION(execSetShouldAddHmdOrigin);


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSwizzles); \
	DECLARE_FUNCTION(execGetLatestFrameData); \
	DECLARE_FUNCTION(execAreHandsVisible); \
	DECLARE_FUNCTION(execSetShouldAddHmdOrigin);


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeapComponent(); \
	friend struct Z_Construct_UClass_ULeapComponent_Statics; \
public: \
	DECLARE_CLASS(ULeapComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UltraleapTracking"), NO_API) \
	DECLARE_SERIALIZER(ULeapComponent)


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesULeapComponent(); \
	friend struct Z_Construct_UClass_ULeapComponent_Statics; \
public: \
	DECLARE_CLASS(ULeapComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UltraleapTracking"), NO_API) \
	DECLARE_SERIALIZER(ULeapComponent)


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapComponent(ULeapComponent&&); \
	NO_API ULeapComponent(const ULeapComponent&); \
public:


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapComponent(ULeapComponent&&); \
	NO_API ULeapComponent(const ULeapComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapComponent)


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_PRIVATE_PROPERTY_OFFSET
#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_26_PROLOG
#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_SPARSE_DATA \
	Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_RPC_WRAPPERS \
	Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_INCLASS \
	Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_SPARSE_DATA \
	Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_INCLASS_NO_PURE_DECLS \
	Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ULTRALEAPTRACKING_API UClass* StaticClass<class ULeapComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Metahuman_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
