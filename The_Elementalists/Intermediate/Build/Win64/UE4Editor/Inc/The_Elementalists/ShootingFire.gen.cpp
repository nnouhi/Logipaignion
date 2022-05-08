// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/ShootingFire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingFire() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AShootingFire_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AShootingFire();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFire();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	void AShootingFire::StaticRegisterNativesAShootingFire()
	{
	}
	UClass* Z_Construct_UClass_AShootingFire_NoRegister()
	{
		return AShootingFire::StaticClass();
	}
	struct Z_Construct_UClass_AShootingFire_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShootingRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShootingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingFire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFire,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingFire_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShootingFire.h" },
		{ "ModuleRelativePath", "Public/ShootingFire.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingFire_Statics::NewProp_ProjectileSpawnPoint_MetaData[] = {
		{ "Category", "ShootingFire" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootingFire.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingFire_Statics::NewProp_ProjectileSpawnPoint = { "ProjectileSpawnPoint", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingFire, ProjectileSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootingFire_Statics::NewProp_ProjectileSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingFire_Statics::NewProp_ProjectileSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingFire_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "ShootingFire" },
		{ "ModuleRelativePath", "Public/ShootingFire.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShootingFire_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingFire, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShootingFire_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingFire_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingFire_Statics::NewProp_ShootingRange_MetaData[] = {
		{ "Category", "ShootingFire" },
		{ "ModuleRelativePath", "Public/ShootingFire.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingFire_Statics::NewProp_ShootingRange = { "ShootingRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingFire, ShootingRange), METADATA_PARAMS(Z_Construct_UClass_AShootingFire_Statics::NewProp_ShootingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingFire_Statics::NewProp_ShootingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingFire_Statics::NewProp_ShootingRate_MetaData[] = {
		{ "Category", "ShootingFire" },
		{ "ModuleRelativePath", "Public/ShootingFire.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingFire_Statics::NewProp_ShootingRate = { "ShootingRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingFire, ShootingRate), METADATA_PARAMS(Z_Construct_UClass_AShootingFire_Statics::NewProp_ShootingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingFire_Statics::NewProp_ShootingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingFire_Statics::NewProp_LaunchAngle_MetaData[] = {
		{ "Category", "ShootingFire" },
		{ "ModuleRelativePath", "Public/ShootingFire.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingFire_Statics::NewProp_LaunchAngle = { "LaunchAngle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingFire, LaunchAngle), METADATA_PARAMS(Z_Construct_UClass_AShootingFire_Statics::NewProp_LaunchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingFire_Statics::NewProp_LaunchAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootingFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingFire_Statics::NewProp_ProjectileSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingFire_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingFire_Statics::NewProp_ShootingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingFire_Statics::NewProp_ShootingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingFire_Statics::NewProp_LaunchAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingFire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingFire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootingFire_Statics::ClassParams = {
		&AShootingFire::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShootingFire_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootingFire_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShootingFire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingFire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootingFire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShootingFire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShootingFire, 2745624285);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AShootingFire>()
	{
		return AShootingFire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShootingFire(Z_Construct_UClass_AShootingFire, &AShootingFire::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AShootingFire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingFire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
