// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FINALZ_FinalzProjectile_generated_h
#error "FinalzProjectile.generated.h already included, missing '#pragma once' in FinalzProjectile.h"
#endif
#define FINALZ_FinalzProjectile_generated_h

#define Finalz_Source_Finalz_FinalzProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Finalz_Source_Finalz_FinalzProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Finalz_Source_Finalz_FinalzProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalzProjectile(); \
	friend struct Z_Construct_UClass_AFinalzProjectile_Statics; \
public: \
	DECLARE_CLASS(AFinalzProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Finalz"), NO_API) \
	DECLARE_SERIALIZER(AFinalzProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Finalz_Source_Finalz_FinalzProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFinalzProjectile(); \
	friend struct Z_Construct_UClass_AFinalzProjectile_Statics; \
public: \
	DECLARE_CLASS(AFinalzProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Finalz"), NO_API) \
	DECLARE_SERIALIZER(AFinalzProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Finalz_Source_Finalz_FinalzProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFinalzProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFinalzProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalzProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalzProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalzProjectile(AFinalzProjectile&&); \
	NO_API AFinalzProjectile(const AFinalzProjectile&); \
public:


#define Finalz_Source_Finalz_FinalzProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalzProjectile(AFinalzProjectile&&); \
	NO_API AFinalzProjectile(const AFinalzProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalzProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalzProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFinalzProjectile)


#define Finalz_Source_Finalz_FinalzProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFinalzProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFinalzProjectile, ProjectileMovement); }


#define Finalz_Source_Finalz_FinalzProjectile_h_9_PROLOG
#define Finalz_Source_Finalz_FinalzProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Finalz_Source_Finalz_FinalzProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Finalz_Source_Finalz_FinalzProjectile_h_12_RPC_WRAPPERS \
	Finalz_Source_Finalz_FinalzProjectile_h_12_INCLASS \
	Finalz_Source_Finalz_FinalzProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Finalz_Source_Finalz_FinalzProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Finalz_Source_Finalz_FinalzProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Finalz_Source_Finalz_FinalzProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Finalz_Source_Finalz_FinalzProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Finalz_Source_Finalz_FinalzProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALZ_API UClass* StaticClass<class AFinalzProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Finalz_Source_Finalz_FinalzProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
