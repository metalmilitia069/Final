// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Finalz/LeosUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeosUserWidget() {}
// Cross Module References
	FINALZ_API UClass* Z_Construct_UClass_ULeosUserWidget_NoRegister();
	FINALZ_API UClass* Z_Construct_UClass_ULeosUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Finalz();
	FINALZ_API UClass* Z_Construct_UClass_AFinalzCharacter_NoRegister();
// End Cross Module References
	void ULeosUserWidget::StaticRegisterNativesULeosUserWidget()
	{
	}
	UClass* Z_Construct_UClass_ULeosUserWidget_NoRegister()
	{
		return ULeosUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULeosUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeosUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Finalz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeosUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LeosUserWidget.h" },
		{ "ModuleRelativePath", "LeosUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeosUserWidget_Statics::NewProp_player_MetaData[] = {
		{ "Category", "LeosUserWidget" },
		{ "ModuleRelativePath", "LeosUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeosUserWidget_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeosUserWidget, player), Z_Construct_UClass_AFinalzCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeosUserWidget_Statics::NewProp_player_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeosUserWidget_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeosUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeosUserWidget_Statics::NewProp_player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeosUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeosUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeosUserWidget_Statics::ClassParams = {
		&ULeosUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULeosUserWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULeosUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeosUserWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULeosUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeosUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeosUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeosUserWidget, 2256861941);
	template<> FINALZ_API UClass* StaticClass<ULeosUserWidget>()
	{
		return ULeosUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeosUserWidget(Z_Construct_UClass_ULeosUserWidget, &ULeosUserWidget::StaticClass, TEXT("/Script/Finalz"), TEXT("ULeosUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeosUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
