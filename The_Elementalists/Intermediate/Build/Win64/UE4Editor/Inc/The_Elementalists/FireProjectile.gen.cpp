// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/FireProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireProjectile() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFireProjectile_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFireProjectile();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AProjectile();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
// End Cross Module References
	void AFireProjectile::StaticRegisterNativesAFireProjectile()
	{
	}
	UClass* Z_Construct_UClass_AFireProjectile_NoRegister()
	{
		return AFireProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AFireProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCameraShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HitCameraShakeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFireProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FireProjectile.h" },
		{ "ModuleRelativePath", "Public/FireProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireProjectile_Statics::NewProp_HitCameraShakeClass_MetaData[] = {
		{ "Category", "FireProjectile" },
		{ "ModuleRelativePath", "Public/FireProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFireProjectile_Statics::NewProp_HitCameraShakeClass = { "HitCameraShakeClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireProjectile, HitCameraShakeClass), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFireProjectile_Statics::NewProp_HitCameraShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireProjectile_Statics::NewProp_HitCameraShakeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFireProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireProjectile_Statics::NewProp_HitCameraShakeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFireProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFireProjectile_Statics::ClassParams = {
		&AFireProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFireProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFireProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFireProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFireProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFireProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFireProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFireProjectile, 483793577);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AFireProjectile>()
	{
		return AFireProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFireProjectile(Z_Construct_UClass_AFireProjectile, &AFireProjectile::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AFireProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
