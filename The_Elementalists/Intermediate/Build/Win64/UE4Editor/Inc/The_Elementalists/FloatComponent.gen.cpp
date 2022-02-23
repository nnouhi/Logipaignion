// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/FloatComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatComponent() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_UFloatComponent_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_UFloatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void UFloatComponent::StaticRegisterNativesUFloatComponent()
	{
	}
	UClass* Z_Construct_UClass_UFloatComponent_NoRegister()
	{
		return UFloatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFloatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FloatComponent.h" },
		{ "ModuleRelativePath", "Public/FloatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatComponent_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "FloatComponent" },
		{ "ModuleRelativePath", "Public/FloatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloatComponent_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloatComponent, Amount), METADATA_PARAMS(Z_Construct_UClass_UFloatComponent_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatComponent_Statics::NewProp_Amount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloatComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatComponent_Statics::NewProp_Amount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFloatComponent_Statics::ClassParams = {
		&UFloatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFloatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFloatComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFloatComponent, 2206488926);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<UFloatComponent>()
	{
		return UFloatComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFloatComponent(Z_Construct_UClass_UFloatComponent, &UFloatComponent::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("UFloatComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
