// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Chapter2_AIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter2_AIController() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter2_AIController_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter2_AIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AChapter2_AIController::StaticRegisterNativesAChapter2_AIController()
	{
	}
	UClass* Z_Construct_UClass_AChapter2_AIController_NoRegister()
	{
		return AChapter2_AIController::StaticClass();
	}
	struct Z_Construct_UClass_AChapter2_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveTowardsDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveTowardsDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigableRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavigableRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapter2_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter2_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chapter2_AIController.h" },
		{ "ModuleRelativePath", "Public/Chapter2_AIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_ReachDistance_MetaData[] = {
		{ "Category", "Chapter2_AIController" },
		{ "Comment", "// NN Distance to activate line trace\n" },
		{ "ModuleRelativePath", "Public/Chapter2_AIController.h" },
		{ "ToolTip", "NN Distance to activate line trace" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_ReachDistance = { "ReachDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapter2_AIController, ReachDistance), METADATA_PARAMS(Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_ReachDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_ReachDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_MoveTowardsDistance_MetaData[] = {
		{ "Category", "Chapter2_AIController" },
		{ "Comment", "// NN Distance to start moving towards player\n" },
		{ "ModuleRelativePath", "Public/Chapter2_AIController.h" },
		{ "ToolTip", "NN Distance to start moving towards player" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_MoveTowardsDistance = { "MoveTowardsDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapter2_AIController, MoveTowardsDistance), METADATA_PARAMS(Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_MoveTowardsDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_MoveTowardsDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_NavigableRadius_MetaData[] = {
		{ "Category", "Chapter2_AIController" },
		{ "ModuleRelativePath", "Public/Chapter2_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_NavigableRadius = { "NavigableRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapter2_AIController, NavigableRadius), METADATA_PARAMS(Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_NavigableRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_NavigableRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_WaitTime_MetaData[] = {
		{ "Category", "Chapter2_AIController" },
		{ "ModuleRelativePath", "Public/Chapter2_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapter2_AIController, WaitTime), METADATA_PARAMS(Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_WaitTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChapter2_AIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_ReachDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_MoveTowardsDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_NavigableRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter2_AIController_Statics::NewProp_WaitTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapter2_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter2_AIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapter2_AIController_Statics::ClassParams = {
		&AChapter2_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChapter2_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChapter2_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChapter2_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter2_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapter2_AIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapter2_AIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapter2_AIController, 1472163702);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AChapter2_AIController>()
	{
		return AChapter2_AIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapter2_AIController(Z_Construct_UClass_AChapter2_AIController, &AChapter2_AIController::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AChapter2_AIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter2_AIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
