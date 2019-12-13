// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALZ_LeosPlayerController_generated_h
#error "LeosPlayerController.generated.h already included, missing '#pragma once' in LeosPlayerController.h"
#endif
#define FINALZ_LeosPlayerController_generated_h

#define Finalz_Source_Finalz_LeosPlayerController_h_15_RPC_WRAPPERS
#define Finalz_Source_Finalz_LeosPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Finalz_Source_Finalz_LeosPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALeosPlayerController(); \
	friend struct Z_Construct_UClass_ALeosPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALeosPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Finalz"), NO_API) \
	DECLARE_SERIALIZER(ALeosPlayerController)


#define Finalz_Source_Finalz_LeosPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALeosPlayerController(); \
	friend struct Z_Construct_UClass_ALeosPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALeosPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Finalz"), NO_API) \
	DECLARE_SERIALIZER(ALeosPlayerController)


#define Finalz_Source_Finalz_LeosPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALeosPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALeosPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALeosPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALeosPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALeosPlayerController(ALeosPlayerController&&); \
	NO_API ALeosPlayerController(const ALeosPlayerController&); \
public:


#define Finalz_Source_Finalz_LeosPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALeosPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALeosPlayerController(ALeosPlayerController&&); \
	NO_API ALeosPlayerController(const ALeosPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALeosPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALeosPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALeosPlayerController)


#define Finalz_Source_Finalz_LeosPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define Finalz_Source_Finalz_LeosPlayerController_h_12_PROLOG
#define Finalz_Source_Finalz_LeosPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Finalz_Source_Finalz_LeosPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Finalz_Source_Finalz_LeosPlayerController_h_15_RPC_WRAPPERS \
	Finalz_Source_Finalz_LeosPlayerController_h_15_INCLASS \
	Finalz_Source_Finalz_LeosPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Finalz_Source_Finalz_LeosPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Finalz_Source_Finalz_LeosPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Finalz_Source_Finalz_LeosPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Finalz_Source_Finalz_LeosPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	Finalz_Source_Finalz_LeosPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALZ_API UClass* StaticClass<class ALeosPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Finalz_Source_Finalz_LeosPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
