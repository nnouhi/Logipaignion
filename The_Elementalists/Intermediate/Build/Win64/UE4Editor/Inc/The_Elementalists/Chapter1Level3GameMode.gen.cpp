// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Chapter1Level3GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter1Level3GameMode() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter1Level3GameMode_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter1Level3GameMode();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter1GameMode();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AChapter1Level3GameMode::StaticRegisterNativesAChapter1Level3GameMode()
	{
	}
	UClass* Z_Construct_UClass_AChapter1Level3GameMode_NoRegister()
	{
		return AChapter1Level3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChapter1Level3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvestigationMode_MetaData[];
#endif
		static void NewProp_bInvestigationMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvestigationMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapter1Level3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AChapter1GameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter1Level3GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chapter1Level3GameMode.h" },
		{ "ModuleRelativePath", "Public/Chapter1Level3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter1Level3GameMode_Statics::NewProp_bInvestigationMode_MetaData[] = {
		{ "Category", "Chapter1Level3GameMode" },
		{ "Comment", "// CN To check if in investigation mode\n" },
		{ "ModuleRelativePath", "Public/Chapter1Level3GameMode.h" },
		{ "ToolTip", "CN To check if in investigation mode" },
	};
#endif
	void Z_Construct_UClass_AChapter1Level3GameMode_Statics::NewProp_bInvestigationMode_SetBit(void* Obj)
	{
		((AChapter1Level3GameMode*)Obj)->bInvestigationMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChapter1Level3GameMode_Statics::NewProp_bInvestigationMode = { "bInvestigationMode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AChapter1Level3GameMode), &Z_Construct_UClass_AChapter1Level3GameMode_Statics::NewProp_bInvestigationMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChapter1Level3GameMode_Statics::NewProp_bInvestigationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter1Level3GameMode_Statics::NewProp_bInvestigationMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChapter1Level3GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter1Level3GameMode_Statics::NewProp_bInvestigationMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapter1Level3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter1Level3GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapter1Level3GameMode_Statics::ClassParams = {
		&AChapter1Level3GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChapter1Level3GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChapter1Level3GameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AChapter1Level3GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter1Level3GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapter1Level3GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapter1Level3GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapter1Level3GameMode, 60943920);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AChapter1Level3GameMode>()
	{
		return AChapter1Level3GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapter1Level3GameMode(Z_Construct_UClass_AChapter1Level3GameMode, &AChapter1Level3GameMode::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AChapter1Level3GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter1Level3GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
