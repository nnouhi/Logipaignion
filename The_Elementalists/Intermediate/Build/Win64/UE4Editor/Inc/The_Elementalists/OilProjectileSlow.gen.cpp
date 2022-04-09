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
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OilHitFloorSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OilHitFloorSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOilProjectileSlow_Statics::NewProp_OilHitFloorSound_MetaData[] = {
		{ "Category", "OilProjectileSlow" },
		{ "ModuleRelativePath", "Public/OilProjectileSlow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOilProjectileSlow_Statics::NewProp_OilHitFloorSound = { "OilHitFloorSound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOilProjectileSlow, OilHitFloorSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOilProjectileSlow_Statics::NewProp_OilHitFloorSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOilProjectileSlow_Statics::NewProp_OilHitFloorSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOilProjectileSlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOilProjectileSlow_Statics::NewProp_OilHitFloorSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOilProjectileSlow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOilProjectileSlow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOilProjectileSlow_Statics::ClassParams = {
		&AOilProjectileSlow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOilProjectileSlow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOilProjectileSlow_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AOilProjectileSlow, 313568692);
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
