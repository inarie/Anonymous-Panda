// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBodyStateSkeleton;
#ifdef BODYSTATE_BodyStateInputInterface_generated_h
#error "BodyStateInputInterface.generated.h already included, missing '#pragma once' in BodyStateInputInterface.h"
#endif
#define BODYSTATE_BodyStateInputInterface_generated_h

#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_SPARSE_DATA
#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_RPC_WRAPPERS \
	virtual void UpdateInput_Implementation(int32 DeviceID, UBodyStateSkeleton* Skeleton) {}; \
 \
	DECLARE_FUNCTION(execUpdateInput);


#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateInput_Implementation(int32 DeviceID, UBodyStateSkeleton* Skeleton) {}; \
 \
	DECLARE_FUNCTION(execUpdateInput);


#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_EVENT_PARMS \
	struct BodyStateInputInterface_eventUpdateInput_Parms \
	{ \
		int32 DeviceID; \
		UBodyStateSkeleton* Skeleton; \
	};


#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_CALLBACK_WRAPPERS
#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BODYSTATE_API UBodyStateInputInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateInputInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BODYSTATE_API, UBodyStateInputInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateInputInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BODYSTATE_API UBodyStateInputInterface(UBodyStateInputInterface&&); \
	BODYSTATE_API UBodyStateInputInterface(const UBodyStateInputInterface&); \
public:


#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BODYSTATE_API UBodyStateInputInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BODYSTATE_API UBodyStateInputInterface(UBodyStateInputInterface&&); \
	BODYSTATE_API UBodyStateInputInterface(const UBodyStateInputInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BODYSTATE_API, UBodyStateInputInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateInputInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateInputInterface)


#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBodyStateInputInterface(); \
	friend struct Z_Construct_UClass_UBodyStateInputInterface_Statics; \
public: \
	DECLARE_CLASS(UBodyStateInputInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BodyState"), BODYSTATE_API) \
	DECLARE_SERIALIZER(UBodyStateInputInterface)


#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBodyStateInputInterface() {} \
public: \
	typedef UBodyStateInputInterface UClassType; \
	typedef IBodyStateInputInterface ThisClass; \
	static void Execute_UpdateInput(UObject* O, int32 DeviceID, UBodyStateSkeleton* Skeleton); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_INCLASS_IINTERFACE \
protected: \
	virtual ~IBodyStateInputInterface() {} \
public: \
	typedef UBodyStateInputInterface UClassType; \
	typedef IBodyStateInputInterface ThisClass; \
	static void Execute_UpdateInput(UObject* O, int32 DeviceID, UBodyStateSkeleton* Skeleton); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_37_PROLOG \
	HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_EVENT_PARMS


#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_SPARSE_DATA \
	HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_RPC_WRAPPERS \
	HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_CALLBACK_WRAPPERS \
	HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_SPARSE_DATA \
	HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_CALLBACK_WRAPPERS \
	HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_40_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BODYSTATE_API UClass* StaticClass<class UBodyStateInputInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
