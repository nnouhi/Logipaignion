// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Chapter3Level3GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter3Level3GameMode() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter3Level3GameMode_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter3Level3GameMode();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ABaseGameMode();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AOilSpillShooting_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AChapter3Level3GameMode::execDisplayObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayObjective();
		P_NATIVE_END;
	}
	void AChapter3Level3GameMode::StaticRegisterNativesAChapter3Level3GameMode()
	{
		UClass* Class = AChapter3Level3GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayObjective", &AChapter3Level3GameMode::execDisplayObjective },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChapter3Level3GameMode_DisplayObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChapter3Level3GameMode_DisplayObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chapter3Level3GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChapter3Level3GameMode_DisplayObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChapter3Level3GameMode, nullptr, "DisplayObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChapter3Level3GameMode_DisplayObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChapter3Level3GameMode_DisplayObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChapter3Level3GameMode_DisplayObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChapter3Level3GameMode_DisplayObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChapter3Level3GameMode_NoRegister()
	{
		return AChapter3Level3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChapter3Level3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OilSplillClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OilSplillClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapter3Level3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChapter3Level3GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChapter3Level3GameMode_DisplayObjective, "DisplayObjective" }, // 3899900355
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter3Level3GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chapter3Level3GameMode.h" },
		{ "ModuleRelativePath", "Public/Chapter3Level3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_CheckPlaceHoldersInRate_MetaData[] = {
		{ "Category", "Chapter3Level3GameMode" },
		{ "Comment", "// NN How frequent to check for placeholers number\n" },
		{ "ModuleRelativePath", "Public/Chapter3Level3GameMode.h" },
		{ "ToolTip", "NN How frequent to check for placeholers number" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_CheckPlaceHoldersInRate = { "CheckPlaceHoldersInRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapter3Level3GameMode, CheckPlaceHoldersInRate), METADATA_PARAMS(Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_CheckPlaceHoldersInRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_CheckPlaceHoldersInRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_GoDelay_MetaData[] = {
		{ "Category", "Chapter3Level3GameMode" },
		{ "ModuleRelativePath", "Public/Chapter3Level3GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_GoDelay = { "GoDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapter3Level3GameMode, GoDelay), METADATA_PARAMS(Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_GoDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_GoDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_SpawnDelay_MetaData[] = {
		{ "Category", "Chapter3Level3GameMode" },
		{ "ModuleRelativePath", "Public/Chapter3Level3GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_SpawnDelay = { "SpawnDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapter3Level3GameMode, SpawnDelay), METADATA_PARAMS(Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_SpawnDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_SpawnDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_OilSplillClass_MetaData[] = {
		{ "Category", "Chapter3Level3GameMode" },
		{ "ModuleRelativePath", "Public/Chapter3Level3GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_OilSplillClass = { "OilSplillClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapter3Level3GameMode, OilSplillClass), Z_Construct_UClass_AOilSpillShooting_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_OilSplillClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_OilSplillClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChapter3Level3GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_CheckPlaceHoldersInRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_GoDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_SpawnDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter3Level3GameMode_Statics::NewProp_OilSplillClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapter3Level3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter3Level3GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapter3Level3GameMode_Statics::ClassParams = {
		&AChapter3Level3GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChapter3Level3GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChapter3Level3GameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AChapter3Level3GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter3Level3GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapter3Level3GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapter3Level3GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapter3Level3GameMode, 3689085345);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AChapter3Level3GameMode>()
	{
		return AChapter3Level3GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapter3Level3GameMode(Z_Construct_UClass_AChapter3Level3GameMode, &AChapter3Level3GameMode::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AChapter3Level3GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter3Level3GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
