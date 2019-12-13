// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALZ_FinalzCharacter_generated_h
#error "FinalzCharacter.generated.h already included, missing '#pragma once' in FinalzCharacter.h"
#endif
#define FINALZ_FinalzCharacter_generated_h

#define Finalz_Source_Finalz_FinalzCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_dam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyDamage(Z_Param_dam); \
		P_NATIVE_END; \
	}


#define Finalz_Source_Finalz_FinalzCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_dam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyDamage(Z_Param_dam); \
		P_NATIVE_END; \
	}


#define Finalz_Source_Finalz_FinalzCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalzCharacter(); \
	friend struct Z_Construct_UClass_AFinalzCharacter_Statics; \
public: \
	DECLARE_CLASS(AFinalzCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Finalz"), NO_API) \
	DECLARE_SERIALIZER(AFinalzCharacter)


#define Finalz_Source_Finalz_FinalzCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFinalzCharacter(); \
	friend struct Z_Construct_UClass_AFinalzCharacter_Statics; \
public: \
	DECLARE_CLASS(AFinalzCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Finalz"), NO_API) \
	DECLARE_SERIALIZER(AFinalzCharacter)


#define Finalz_Source_Finalz_FinalzCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFinalzCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFinalzCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalzCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalzCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalzCharacter(AFinalzCharacter&&); \
	NO_API AFinalzCharacter(const AFinalzCharacter&); \
public:


#define Finalz_Source_Finalz_FinalzCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalzCharacter(AFinalzCharacter&&); \
	NO_API AFinalzCharacter(const AFinalzCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalzCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalzCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFinalzCharacter)


#define Finalz_Source_Finalz_FinalzCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFinalzCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFinalzCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFinalzCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFinalzCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFinalzCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFinalzCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFinalzCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFinalzCharacter, L_MotionController); }


#define Finalz_Source_Finalz_FinalzCharacter_h_11_PROLOG
#define Finalz_Source_Finalz_FinalzCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Finalz_Source_Finalz_FinalzCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Finalz_Source_Finalz_FinalzCharacter_h_14_RPC_WRAPPERS \
	Finalz_Source_Finalz_FinalzCharacter_h_14_INCLASS \
	Finalz_Source_Finalz_FinalzCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Finalz_Source_Finalz_FinalzCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Finalz_Source_Finalz_FinalzCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Finalz_Source_Finalz_FinalzCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Finalz_Source_Finalz_FinalzCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Finalz_Source_Finalz_FinalzCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALZ_API UClass* StaticClass<class AFinalzCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Finalz_Source_Finalz_FinalzCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
