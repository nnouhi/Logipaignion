// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Flashback_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashback_PlayerController() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlashback_PlayerController_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlashback_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFlashback_PlayerController::execGetObjectiveMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetObjectiveMessage();
		P_NATIVE_END;
	}
	void AFlashback_PlayerController::StaticRegisterNativesAFlashback_PlayerController()
	{
		UClass* Class = AFlashback_PlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetObjectiveMessage", &AFlashback_PlayerController::execGetObjectiveMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlashback_PlayerController_GetObjectiveMessage_Statics
	{
		struct Flashback_PlayerController_eventGetObjectiveMessage_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFlashback_PlayerController_GetObjectiveMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Flashback_PlayerController_eventGetObjectiveMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlashback_PlayerController_GetObjectiveMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlashback_PlayerController_GetObjectiveMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlashback_PlayerController_GetObjectiveMessage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// NN BlueprintCallable method that will obtained the appropriate text to show on screen\n" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
		{ "ToolTip", "NN BlueprintCallable method that will obtained the appropriate text to show on screen" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlashback_PlayerController_GetObjectiveMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlashback_PlayerController, nullptr, "GetObjectiveMessage", nullptr, nullptr, sizeof(Flashback_PlayerController_eventGetObjectiveMessage_Parms), Z_Construct_UFunction_AFlashback_PlayerController_GetObjectiveMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashback_PlayerController_GetObjectiveMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlashback_PlayerController_GetObjectiveMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashback_PlayerController_GetObjectiveMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlashback_PlayerController_GetObjectiveMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlashback_PlayerController_GetObjectiveMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlashback_PlayerController_NoRegister()
	{
		return AFlashback_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFlashback_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectiveHUDClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MinimapHUDClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MinimapWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthbarClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HealthbarClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthbarWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthbarWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlashback_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlashback_PlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlashback_PlayerController_GetObjectiveMessage, "GetObjectiveMessage" }, // 1794319476
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Flashback_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveHUDClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "Comment", "// NN Objective widget displayed on screen\n" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
		{ "ToolTip", "NN Objective widget displayed on screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveHUDClass = { "ObjectiveHUDClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, ObjectiveHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveHUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveWidget = { "ObjectiveWidget", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, ObjectiveWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapHUDClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "Comment", "// NN Minimap widget displayed on screen\n" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
		{ "ToolTip", "NN Minimap widget displayed on screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapHUDClass = { "MinimapHUDClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, MinimapHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapHUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapWidget = { "MinimapWidget", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, MinimapWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarClass = { "HealthbarClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, HealthbarClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarWidget = { "HealthbarWidget", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, HealthbarWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlashback_PlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveHUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapHUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlashback_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlashback_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlashback_PlayerController_Statics::ClassParams = {
		&AFlashback_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlashback_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlashback_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlashback_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlashback_PlayerController, 58570958);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AFlashback_PlayerController>()
	{
		return AFlashback_PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlashback_PlayerController(Z_Construct_UClass_AFlashback_PlayerController, &AFlashback_PlayerController::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AFlashback_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlashback_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
