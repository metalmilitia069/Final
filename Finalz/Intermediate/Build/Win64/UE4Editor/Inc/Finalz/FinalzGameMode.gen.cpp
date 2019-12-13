// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Finalz/FinalzGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinalzGameMode() {}
// Cross Module References
	FINALZ_API UClass* Z_Construct_UClass_AFinalzGameMode_NoRegister();
	FINALZ_API UClass* Z_Construct_UClass_AFinalzGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Finalz();
// End Cross Module References
	void AFinalzGameMode::StaticRegisterNativesAFinalzGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFinalzGameMode_NoRegister()
	{
		return AFinalzGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFinalzGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFinalzGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Finalz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFinalzGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FinalzGameMode.h" },
		{ "ModuleRelativePath", "FinalzGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFinalzGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinalzGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFinalzGameMode_Statics::ClassParams = {
		&AFinalzGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AFinalzGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFinalzGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFinalzGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFinalzGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFinalzGameMode, 2514524198);
	template<> FINALZ_API UClass* StaticClass<AFinalzGameMode>()
	{
		return AFinalzGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFinalzGameMode(Z_Construct_UClass_AFinalzGameMode, &AFinalzGameMode::StaticClass, TEXT("/Script/Finalz"), TEXT("AFinalzGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalzGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
