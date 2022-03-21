// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/TriggerCollisionProfileName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerCollisionProfileName() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_UTriggerCollisionProfileName_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_UTriggerCollisionProfileName();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void UTriggerCollisionProfileName::StaticRegisterNativesUTriggerCollisionProfileName()
	{
	}
	UClass* Z_Construct_UClass_UTriggerCollisionProfileName_NoRegister()
	{
		return UTriggerCollisionProfileName::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerCollisionProfileName_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerCollisionProfileName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerCollisionProfileName_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TriggerCollisionProfileName.h" },
		{ "ModuleRelativePath", "Public/TriggerCollisionProfileName.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerCollisionProfileName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerCollisionProfileName>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerCollisionProfileName_Statics::ClassParams = {
		&UTriggerCollisionProfileName::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerCollisionProfileName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerCollisionProfileName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerCollisionProfileName()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerCollisionProfileName_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerCollisionProfileName, 3505253340);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<UTriggerCollisionProfileName>()
	{
		return UTriggerCollisionProfileName::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerCollisionProfileName(Z_Construct_UClass_UTriggerCollisionProfileName, &UTriggerCollisionProfileName::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("UTriggerCollisionProfileName"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerCollisionProfileName);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
