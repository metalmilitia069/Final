// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALZ_FinalzGameMode_generated_h
#error "FinalzGameMode.generated.h already included, missing '#pragma once' in FinalzGameMode.h"
#endif
#define FINALZ_FinalzGameMode_generated_h

#define Finalz_Source_Finalz_FinalzGameMode_h_12_RPC_WRAPPERS
#define Finalz_Source_Finalz_FinalzGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Finalz_Source_Finalz_FinalzGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalzGameMode(); \
	friend struct Z_Construct_UClass_AFinalzGameMode_Statics; \
public: \
	DECLARE_CLASS(AFinalzGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Finalz"), FINALZ_API) \
	DECLARE_SERIALIZER(AFinalzGameMode)


#define Finalz_Source_Finalz_FinalzGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFinalzGameMode(); \
	friend struct Z_Construct_UClass_AFinalzGameMode_Statics; \
public: \
	DECLARE_CLASS(AFinalzGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Finalz"), FINALZ_API) \
	DECLARE_SERIALIZER(AFinalzGameMode)


#define Finalz_Source_Finalz_FinalzGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FINALZ_API AFinalzGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFinalzGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FINALZ_API, AFinalzGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalzGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FINALZ_API AFinalzGameMode(AFinalzGameMode&&); \
	FINALZ_API AFinalzGameMode(const AFinalzGameMode&); \
public:


#define Finalz_Source_Finalz_FinalzGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FINALZ_API AFinalzGameMode(AFinalzGameMode&&); \
	FINALZ_API AFinalzGameMode(const AFinalzGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FINALZ_API, AFinalzGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalzGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFinalzGameMode)


#define Finalz_Source_Finalz_FinalzGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Finalz_Source_Finalz_FinalzGameMode_h_9_PROLOG
#define Finalz_Source_Finalz_FinalzGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Finalz_Source_Finalz_FinalzGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Finalz_Source_Finalz_FinalzGameMode_h_12_RPC_WRAPPERS \
	Finalz_Source_Finalz_FinalzGameMode_h_12_INCLASS \
	Finalz_Source_Finalz_FinalzGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Finalz_Source_Finalz_FinalzGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Finalz_Source_Finalz_FinalzGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Finalz_Source_Finalz_FinalzGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Finalz_Source_Finalz_FinalzGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Finalz_Source_Finalz_FinalzGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALZ_API UClass* StaticClass<class AFinalzGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Finalz_Source_Finalz_FinalzGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
