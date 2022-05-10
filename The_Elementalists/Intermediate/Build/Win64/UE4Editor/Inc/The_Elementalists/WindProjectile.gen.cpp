// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/WindProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindProjectile() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AWindProjectile_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AWindProjectile();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AProjectile();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AWindProjectile::StaticRegisterNativesAWindProjectile()
	{
	}
	UClass* Z_Construct_UClass_AWindProjectile_NoRegister()
	{
		return AWindProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AWindProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestroyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWindProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindProjectile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WindProjectile.h" },
		{ "ModuleRelativePath", "Public/WindProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindProjectile_Statics::NewProp_DestroyTime_MetaData[] = {
		{ "Category", "WindProjectile" },
		{ "ModuleRelativePath", "Public/WindProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWindProjectile_Statics::NewProp_DestroyTime = { "DestroyTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindProjectile, DestroyTime), METADATA_PARAMS(Z_Construct_UClass_AWindProjectile_Statics::NewProp_DestroyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindProjectile_Statics::NewProp_DestroyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindProjectile_Statics::NewProp_LaunchForce_MetaData[] = {
		{ "Category", "WindProjectile" },
		{ "ModuleRelativePath", "Public/WindProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWindProjectile_Statics::NewProp_LaunchForce = { "LaunchForce", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindProjectile, LaunchForce), METADATA_PARAMS(Z_Construct_UClass_AWindProjectile_Statics::NewProp_LaunchForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindProjectile_Statics::NewProp_LaunchForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindProjectile_Statics::NewProp_ImpulseForce_MetaData[] = {
		{ "Category", "WindProjectile" },
		{ "ModuleRelativePath", "Public/WindProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWindProjectile_Statics::NewProp_ImpulseForce = { "ImpulseForce", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindProjectile, ImpulseForce), METADATA_PARAMS(Z_Construct_UClass_AWindProjectile_Statics::NewProp_ImpulseForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindProjectile_Statics::NewProp_ImpulseForce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWindProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindProjectile_Statics::NewProp_DestroyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindProjectile_Statics::NewProp_LaunchForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindProjectile_Statics::NewProp_ImpulseForce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWindProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWindProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWindProjectile_Statics::ClassParams = {
		&AWindProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWindProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWindProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWindProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWindProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWindProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWindProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWindProjectile, 3789649185);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AWindProjectile>()
	{
		return AWindProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWindProjectile(Z_Construct_UClass_AWindProjectile, &AWindProjectile::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AWindProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWindProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
