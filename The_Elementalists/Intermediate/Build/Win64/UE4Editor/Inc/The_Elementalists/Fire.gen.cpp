// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Fire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFire() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFire_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFire();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AFire::StaticRegisterNativesAFire()
	{
	}
	UClass* Z_Construct_UClass_AFire_NoRegister()
	{
		return AFire::StaticClass();
	}
	struct Z_Construct_UClass_AFire_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCameraShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HitCameraShakeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamagePerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExplosionChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointsAwarded_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointsAwarded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomizedExplosion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RandomizedExplosion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomizedFireHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RandomizedFireHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fire.h" },
		{ "ModuleRelativePath", "Public/Fire.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Fire" },
		{ "Comment", "// CN Root\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire.h" },
		{ "ToolTip", "CN Root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_CollisionMesh_MetaData[] = {
		{ "Category", "Fire" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_CollisionMesh = { "CollisionMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, CollisionMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_CollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_CollisionMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_FireParticles_MetaData[] = {
		{ "Category", "Fire" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_FireParticles = { "FireParticles", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, FireParticles), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_FireParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_FireParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_ExplosionParticles_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_ExplosionParticles = { "ExplosionParticles", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, ExplosionParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_ExplosionParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_ExplosionParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_DeathParticles_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_DeathParticles = { "DeathParticles", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, DeathParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_DeathParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_DeathParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_HitCameraShakeClass_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_HitCameraShakeClass = { "HitCameraShakeClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, HitCameraShakeClass), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_HitCameraShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_HitCameraShakeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_ExplosionDistance_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_ExplosionDistance = { "ExplosionDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, ExplosionDistance), METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_ExplosionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_ExplosionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_DamageDistance_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_DamageDistance = { "DamageDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, DamageDistance), METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_DamageDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_DamageDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_DamagePerSecond_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_DamagePerSecond = { "DamagePerSecond", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, DamagePerSecond), METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_DamagePerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_DamagePerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_ExplosionChance_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_ExplosionChance = { "ExplosionChance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, ExplosionChance), METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_ExplosionChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_ExplosionChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_BaseScale_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_BaseScale = { "BaseScale", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, BaseScale), METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_BaseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_BaseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_PointsAwarded_MetaData[] = {
		{ "Category", "Fire" },
		{ "Comment", "// CN Points awarded when putting out the fire\n" },
		{ "ModuleRelativePath", "Public/Fire.h" },
		{ "ToolTip", "CN Points awarded when putting out the fire" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_PointsAwarded = { "PointsAwarded", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, PointsAwarded), METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_PointsAwarded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_PointsAwarded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Fire" },
		{ "Comment", "// CN The health of the fire\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fire.h" },
		{ "ToolTip", "CN The health of the fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_RandomizedExplosion_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_RandomizedExplosion = { "RandomizedExplosion", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, RandomizedExplosion), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_RandomizedExplosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_RandomizedExplosion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Statics::NewProp_RandomizedFireHit_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_Statics::NewProp_RandomizedFireHit = { "RandomizedFireHit", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire, RandomizedFireHit), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::NewProp_RandomizedFireHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::NewProp_RandomizedFireHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_CollisionMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_FireParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_ExplosionParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_DeathParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_HitCameraShakeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_ExplosionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_DamageDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_DamagePerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_ExplosionChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_BaseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_PointsAwarded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_HealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_RandomizedExplosion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Statics::NewProp_RandomizedFireHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFire_Statics::ClassParams = {
		&AFire::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFire_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFire, 1045561393);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AFire>()
	{
		return AFire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFire(Z_Construct_UClass_AFire, &AFire::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AFire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
