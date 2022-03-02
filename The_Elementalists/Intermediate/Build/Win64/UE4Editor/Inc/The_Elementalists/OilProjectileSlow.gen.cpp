// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/OilProjectileSlow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOilProjectileSlow() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AOilProjectileSlow_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AOilProjectileSlow();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AProjectile();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AOilProjectileSlow::StaticRegisterNativesAOilProjectileSlow()
	{
	}
	UClass* Z_Construct_UClass_AOilProjectileSlow_NoRegister()
	{
		return AOilProjectileSlow::StaticClass();
	}
	struct Z_Construct_UClass_AOilProjectileSlow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOilProjectileSlow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOilProjectileSlow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OilProjectileSlow.h" },
		{ "ModuleRelativePath", "Public/OilProjectileSlow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOilProjectileSlow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOilProjectileSlow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOilProjectileSlow_Statics::ClassParams = {
		&AOilProjectileSlow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOilProjectileSlow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOilProjectileSlow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOilProjectileSlow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOilProjectileSlow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOilProjectileSlow, 2516172710);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AOilProjectileSlow>()
	{
		return AOilProjectileSlow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOilProjectileSlow(Z_Construct_UClass_AOilProjectileSlow, &AOilProjectileSlow::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AOilProjectileSlow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOilProjectileSlow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
