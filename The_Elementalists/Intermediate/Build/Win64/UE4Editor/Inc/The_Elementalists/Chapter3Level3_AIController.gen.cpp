// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Chapter3Level3_AIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter3Level3_AIController() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter3Level3_AIController_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter3Level3_AIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AChapter3Level3_AIController::StaticRegisterNativesAChapter3Level3_AIController()
	{
	}
	UClass* Z_Construct_UClass_AChapter3Level3_AIController_NoRegister()
	{
		return AChapter3Level3_AIController::StaticClass();
	}
	struct Z_Construct_UClass_AChapter3Level3_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckPlaceHoldersInRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CheckPlaceHoldersInRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GoDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapter3Level3_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter3Level3_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chapter3Level3_AIController.h" },
		{ "ModuleRelativePath", "Public/Chapter3Level3_AIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter3Level3_AIController_Statics::NewProp_CheckPlaceHoldersInRate_MetaData[] = {
		{ "Category", "Chapter3Level3_AIController" },
		{ "Comment", "// NN How frequent to check for placeholers number\n" },
		{ "ModuleRelativePath", "Public/Chapter3Level3_AIController.h" },
		{ "ToolTip", "NN How frequent to check for placeholers number" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChapter3Level3_AIController_Statics::NewProp_CheckPlaceHoldersInRate = { "CheckPlaceHoldersInRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapter3Level3_AIController, CheckPlaceHoldersInRate), METADATA_PARAMS(Z_Construct_UClass_AChapter3Level3_AIController_Statics::NewProp_CheckPlaceHoldersInRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter3Level3_AIController_Statics::NewProp_CheckPlaceHoldersInRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter3Level3_AIController_Statics::NewProp_GoDelay_MetaData[] = {
		{ "Category", "Chapter3Level3_AIController" },
		{ "ModuleRelativePath", "Public/Chapter3Level3_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChapter3Level3_AIController_Statics::NewProp_GoDelay = { "GoDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapter3Level3_AIController, GoDelay), METADATA_PARAMS(Z_Construct_UClass_AChapter3Level3_AIController_Statics::NewProp_GoDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter3Level3_AIController_Statics::NewProp_GoDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChapter3Level3_AIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter3Level3_AIController_Statics::NewProp_CheckPlaceHoldersInRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter3Level3_AIController_Statics::NewProp_GoDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapter3Level3_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter3Level3_AIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapter3Level3_AIController_Statics::ClassParams = {
		&AChapter3Level3_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChapter3Level3_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChapter3Level3_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChapter3Level3_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter3Level3_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapter3Level3_AIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapter3Level3_AIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapter3Level3_AIController, 2803035019);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AChapter3Level3_AIController>()
	{
		return AChapter3Level3_AIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapter3Level3_AIController(Z_Construct_UClass_AChapter3Level3_AIController, &AChapter3Level3_AIController::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AChapter3Level3_AIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter3Level3_AIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
