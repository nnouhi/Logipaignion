// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/SpawnPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnPlayer() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ASpawnPlayer_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ASpawnPlayer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void ASpawnPlayer::StaticRegisterNativesASpawnPlayer()
	{
	}
	UClass* Z_Construct_UClass_ASpawnPlayer_NoRegister()
	{
		return ASpawnPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnPlayer.h" },
		{ "ModuleRelativePath", "Public/SpawnPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnPlayer_Statics::ClassParams = {
		&ASpawnPlayer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpawnPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnPlayer, 3374395725);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<ASpawnPlayer>()
	{
		return ASpawnPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnPlayer(Z_Construct_UClass_ASpawnPlayer, &ASpawnPlayer::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("ASpawnPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
