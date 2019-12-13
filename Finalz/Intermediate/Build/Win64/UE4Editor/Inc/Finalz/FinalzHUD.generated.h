// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALZ_FinalzHUD_generated_h
#error "FinalzHUD.generated.h already included, missing '#pragma once' in FinalzHUD.h"
#endif
#define FINALZ_FinalzHUD_generated_h

#define Finalz_Source_Finalz_FinalzHUD_h_12_RPC_WRAPPERS
#define Finalz_Source_Finalz_FinalzHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Finalz_Source_Finalz_FinalzHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalzHUD(); \
	friend struct Z_Construct_UClass_AFinalzHUD_Statics; \
public: \
	DECLARE_CLASS(AFinalzHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Finalz"), NO_API) \
	DECLARE_SERIALIZER(AFinalzHUD)


#define Finalz_Source_Finalz_FinalzHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFinalzHUD(); \
	friend struct Z_Construct_UClass_AFinalzHUD_Statics; \
public: \
	DECLARE_CLASS(AFinalzHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Finalz"), NO_API) \
	DECLARE_SERIALIZER(AFinalzHUD)


#define Finalz_Source_Finalz_FinalzHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFinalzHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFinalzHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalzHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalzHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalzHUD(AFinalzHUD&&); \
	NO_API AFinalzHUD(const AFinalzHUD&); \
public:


#define Finalz_Source_Finalz_FinalzHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalzHUD(AFinalzHUD&&); \
	NO_API AFinalzHUD(const AFinalzHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalzHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalzHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFinalzHUD)


#define Finalz_Source_Finalz_FinalzHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define Finalz_Source_Finalz_FinalzHUD_h_9_PROLOG
#define Finalz_Source_Finalz_FinalzHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Finalz_Source_Finalz_FinalzHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	Finalz_Source_Finalz_FinalzHUD_h_12_RPC_WRAPPERS \
	Finalz_Source_Finalz_FinalzHUD_h_12_INCLASS \
	Finalz_Source_Finalz_FinalzHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Finalz_Source_Finalz_FinalzHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Finalz_Source_Finalz_FinalzHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	Finalz_Source_Finalz_FinalzHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Finalz_Source_Finalz_FinalzHUD_h_12_INCLASS_NO_PURE_DECLS \
	Finalz_Source_Finalz_FinalzHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALZ_API UClass* StaticClass<class AFinalzHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Finalz_Source_Finalz_FinalzHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
