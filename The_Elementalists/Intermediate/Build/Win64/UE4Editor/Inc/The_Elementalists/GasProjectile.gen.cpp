// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/GasProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGasProjectile() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AGasProjectile_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AGasProjectile();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AProjectile();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
// End Cross Module References
	void AGasProjectile::StaticRegisterNativesAGasProjectile()
	{
	}
	UClass* Z_Construct_UClass_AGasProjectile_NoRegister()
	{
		return AGasProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AGasProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NauseaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NauseaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NauseaCameraShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NauseaCameraShakeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGasProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGasProjectile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GasProjectile.h" },
		{ "ModuleRelativePath", "Public/GasProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGasProjectile_Statics::NewProp_NauseaTime_MetaData[] = {
		{ "Category", "GasProjectile" },
		{ "ModuleRelativePath", "Public/GasProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGasProjectile_Statics::NewProp_NauseaTime = { "NauseaTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGasProjectile, NauseaTime), METADATA_PARAMS(Z_Construct_UClass_AGasProjectile_Statics::NewProp_NauseaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGasProjectile_Statics::NewProp_NauseaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGasProjectile_Statics::NewProp_NauseaCameraShakeClass_MetaData[] = {
		{ "Category", "GasProjectile" },
		{ "ModuleRelativePath", "Public/GasProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGasProjectile_Statics::NewProp_NauseaCameraShakeClass = { "NauseaCameraShakeClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGasProjectile, NauseaCameraShakeClass), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGasProjectile_Statics::NewProp_NauseaCameraShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGasProjectile_Statics::NewProp_NauseaCameraShakeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGasProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGasProjectile_Statics::NewProp_NauseaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGasProjectile_Statics::NewProp_NauseaCameraShakeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGasProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGasProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGasProjectile_Statics::ClassParams = {
		&AGasProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGasProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGasProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGasProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGasProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGasProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGasProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGasProjectile, 3901272744);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AGasProjectile>()
	{
		return AGasProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGasProjectile(Z_Construct_UClass_AGasProjectile, &AGasProjectile::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AGasProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGasProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
