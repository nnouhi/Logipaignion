// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Chapter2InsideHouse_AIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter2InsideHouse_AIController() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter2InsideHouse_AIController_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter2InsideHouse_AIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AChapter2InsideHouse_AIController::StaticRegisterNativesAChapter2InsideHouse_AIController()
	{
	}
	UClass* Z_Construct_UClass_AChapter2InsideHouse_AIController_NoRegister()
	{
		return AChapter2InsideHouse_AIController::StaticClass();
	}
	struct Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chapter2InsideHouse_AIController.h" },
		{ "ModuleRelativePath", "Public/Chapter2InsideHouse_AIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::NewProp_ReachDistance_MetaData[] = {
		{ "Category", "Chapter2InsideHouse_AIController" },
		{ "Comment", "// NN Distance to activate line trace\n" },
		{ "ModuleRelativePath", "Public/Chapter2InsideHouse_AIController.h" },
		{ "ToolTip", "NN Distance to activate line trace" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::NewProp_ReachDistance = { "ReachDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapter2InsideHouse_AIController, ReachDistance), METADATA_PARAMS(Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::NewProp_ReachDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::NewProp_ReachDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::NewProp_ReachDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter2InsideHouse_AIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::ClassParams = {
		&AChapter2InsideHouse_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapter2InsideHouse_AIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapter2InsideHouse_AIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapter2InsideHouse_AIController, 644990896);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AChapter2InsideHouse_AIController>()
	{
		return AChapter2InsideHouse_AIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapter2InsideHouse_AIController(Z_Construct_UClass_AChapter2InsideHouse_AIController, &AChapter2InsideHouse_AIController::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AChapter2InsideHouse_AIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter2InsideHouse_AIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
