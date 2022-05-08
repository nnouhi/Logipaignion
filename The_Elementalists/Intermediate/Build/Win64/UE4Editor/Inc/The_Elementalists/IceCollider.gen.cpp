// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/IceCollider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIceCollider() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_UIceCollider_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_UIceCollider();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void UIceCollider::StaticRegisterNativesUIceCollider()
	{
	}
	UClass* Z_Construct_UClass_UIceCollider_NoRegister()
	{
		return UIceCollider::StaticClass();
	}
	struct Z_Construct_UClass_UIceCollider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIceCollider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceCollider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "IceCollider.h" },
		{ "ModuleRelativePath", "Public/IceCollider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIceCollider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIceCollider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIceCollider_Statics::ClassParams = {
		&UIceCollider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIceCollider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIceCollider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIceCollider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIceCollider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIceCollider, 4125759553);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<UIceCollider>()
	{
		return UIceCollider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIceCollider(Z_Construct_UClass_UIceCollider, &UIceCollider::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("UIceCollider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIceCollider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
