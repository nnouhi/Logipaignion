// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/OilSpillShooting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOilSpillShooting() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AOilSpillShooting_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AOilSpillShooting();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AOilSpill();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
	void AOilSpillShooting::StaticRegisterNativesAOilSpillShooting()
	{
	}
	UClass* Z_Construct_UClass_AOilSpillShooting_NoRegister()
	{
		return AOilSpillShooting::StaticClass();
	}
	struct Z_Construct_UClass_AOilSpillShooting_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreezeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FreezeMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOilSpillShooting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOilSpill,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOilSpillShooting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OilSpillShooting.h" },
		{ "ModuleRelativePath", "Public/OilSpillShooting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ProjectileSpawnPoint_MetaData[] = {
		{ "Category", "OilSpillShooting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OilSpillShooting.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ProjectileSpawnPoint = { "ProjectileSpawnPoint", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOilSpillShooting, ProjectileSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ProjectileSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ProjectileSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "OilSpillShooting" },
		{ "ModuleRelativePath", "Public/OilSpillShooting.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOilSpillShooting, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ShootingRange_MetaData[] = {
		{ "Category", "OilSpillShooting" },
		{ "ModuleRelativePath", "Public/OilSpillShooting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ShootingRange = { "ShootingRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOilSpillShooting, ShootingRange), METADATA_PARAMS(Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ShootingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ShootingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ShootingRate_MetaData[] = {
		{ "Category", "OilSpillShooting" },
		{ "ModuleRelativePath", "Public/OilSpillShooting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ShootingRate = { "ShootingRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOilSpillShooting, ShootingRate), METADATA_PARAMS(Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ShootingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ShootingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_LaunchAngle_MetaData[] = {
		{ "Category", "OilSpillShooting" },
		{ "ModuleRelativePath", "Public/OilSpillShooting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_LaunchAngle = { "LaunchAngle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOilSpillShooting, LaunchAngle), METADATA_PARAMS(Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_LaunchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_LaunchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_FreezeMaterial_MetaData[] = {
		{ "Category", "OilSpillShooting" },
		{ "ModuleRelativePath", "Public/OilSpillShooting.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_FreezeMaterial = { "FreezeMaterial", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOilSpillShooting, FreezeMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_FreezeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_FreezeMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOilSpillShooting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ProjectileSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ShootingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_ShootingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_LaunchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOilSpillShooting_Statics::NewProp_FreezeMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOilSpillShooting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOilSpillShooting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOilSpillShooting_Statics::ClassParams = {
		&AOilSpillShooting::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOilSpillShooting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOilSpillShooting_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOilSpillShooting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOilSpillShooting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOilSpillShooting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOilSpillShooting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOilSpillShooting, 1319959748);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AOilSpillShooting>()
	{
		return AOilSpillShooting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOilSpillShooting(Z_Construct_UClass_AOilSpillShooting, &AOilSpillShooting::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AOilSpillShooting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOilSpillShooting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
