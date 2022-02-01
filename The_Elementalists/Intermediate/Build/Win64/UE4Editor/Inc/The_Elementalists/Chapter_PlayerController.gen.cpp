// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Chapter_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter_PlayerController() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter_PlayerController_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AChapter_PlayerController::StaticRegisterNativesAChapter_PlayerController()
	{
	}
	UClass* Z_Construct_UClass_AChapter_PlayerController_NoRegister()
	{
		return AChapter_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AChapter_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CrosshairHUDClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapter_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chapter_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Chapter_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter_PlayerController_Statics::NewProp_CrosshairHUDClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "Comment", "// NN Objective widget displayed on screen\n" },
		{ "ModuleRelativePath", "Public/Chapter_PlayerController.h" },
		{ "ToolTip", "NN Objective widget displayed on screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChapter_PlayerController_Statics::NewProp_CrosshairHUDClass = { "CrosshairHUDClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapter_PlayerController, CrosshairHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChapter_PlayerController_Statics::NewProp_CrosshairHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter_PlayerController_Statics::NewProp_CrosshairHUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter_PlayerController_Statics::NewProp_CrosshairWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chapter_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChapter_PlayerController_Statics::NewProp_CrosshairWidget = { "CrosshairWidget", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapter_PlayerController, CrosshairWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChapter_PlayerController_Statics::NewProp_CrosshairWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter_PlayerController_Statics::NewProp_CrosshairWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChapter_PlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter_PlayerController_Statics::NewProp_CrosshairHUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter_PlayerController_Statics::NewProp_CrosshairWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapter_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapter_PlayerController_Statics::ClassParams = {
		&AChapter_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChapter_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChapter_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChapter_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapter_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapter_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapter_PlayerController, 4124720524);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AChapter_PlayerController>()
	{
		return AChapter_PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapter_PlayerController(Z_Construct_UClass_AChapter_PlayerController, &AChapter_PlayerController::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AChapter_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
