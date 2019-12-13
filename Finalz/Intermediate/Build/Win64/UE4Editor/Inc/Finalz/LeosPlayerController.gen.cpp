// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Finalz/LeosPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeosPlayerController() {}
// Cross Module References
	FINALZ_API UClass* Z_Construct_UClass_ALeosPlayerController_NoRegister();
	FINALZ_API UClass* Z_Construct_UClass_ALeosPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Finalz();
	FINALZ_API UClass* Z_Construct_UClass_ULeosUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ALeosPlayerController::StaticRegisterNativesALeosPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ALeosPlayerController_NoRegister()
	{
		return ALeosPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALeosPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALeosPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Finalz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeosPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LeosPlayerController.h" },
		{ "ModuleRelativePath", "LeosPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeosPlayerController_Statics::NewProp_HUDOverlay_MetaData[] = {
		{ "Category", "widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LeosPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeosPlayerController_Statics::NewProp_HUDOverlay = { "HUDOverlay", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeosPlayerController, HUDOverlay), Z_Construct_UClass_ULeosUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALeosPlayerController_Statics::NewProp_HUDOverlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALeosPlayerController_Statics::NewProp_HUDOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeosPlayerController_Statics::NewProp_HUDAsset_MetaData[] = {
		{ "Category", "widgets" },
		{ "ModuleRelativePath", "LeosPlayerController.h" },
		{ "ToolTip", "ITEM1\n/\nTSubclassOf<class UUserWidget> HUDAsset;/" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALeosPlayerController_Statics::NewProp_HUDAsset = { "HUDAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeosPlayerController, HUDAsset), Z_Construct_UClass_ULeosUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALeosPlayerController_Statics::NewProp_HUDAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALeosPlayerController_Statics::NewProp_HUDAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALeosPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeosPlayerController_Statics::NewProp_HUDOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeosPlayerController_Statics::NewProp_HUDAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALeosPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeosPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALeosPlayerController_Statics::ClassParams = {
		&ALeosPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALeosPlayerController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ALeosPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALeosPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALeosPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALeosPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALeosPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALeosPlayerController, 1860673305);
	template<> FINALZ_API UClass* StaticClass<ALeosPlayerController>()
	{
		return ALeosPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALeosPlayerController(Z_Construct_UClass_ALeosPlayerController, &ALeosPlayerController::StaticClass, TEXT("/Script/Finalz"), TEXT("ALeosPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALeosPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
