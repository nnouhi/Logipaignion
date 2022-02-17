// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/SwingDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwingDoor() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ASwingDoor_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ASwingDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASwingDoor::execOpenDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenDoor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASwingDoor::execControlDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ControlDoor();
		P_NATIVE_END;
	}
	void ASwingDoor::StaticRegisterNativesASwingDoor()
	{
		UClass* Class = ASwingDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ControlDoor", &ASwingDoor::execControlDoor },
			{ "OpenDoor", &ASwingDoor::execOpenDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASwingDoor_ControlDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwingDoor_ControlDoor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// NN Handles door rotation\n" },
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
		{ "ToolTip", "NN Handles door rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwingDoor_ControlDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwingDoor, nullptr, "ControlDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwingDoor_ControlDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_ControlDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwingDoor_ControlDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwingDoor_ControlDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// NN Method that is called from the Character class to trigger door opening\n" },
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
		{ "ToolTip", "NN Method that is called from the Character class to trigger door opening" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwingDoor, nullptr, "OpenDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwingDoor_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASwingDoor_NoRegister()
	{
		return ASwingDoor::StaticClass();
	}
	struct Z_Construct_UClass_ASwingDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpenDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwingDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASwingDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASwingDoor_ControlDoor, "ControlDoor" }, // 655709383
		{ &Z_Construct_UFunction_ASwingDoor_OpenDoor, "OpenDoor" }, // 1118128805
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwingDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SwingDoor.h" },
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorFrame_MetaData[] = {
		{ "Category", "SwingDoor" },
		{ "Comment", "// NN will act as root comp\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
		{ "ToolTip", "NN will act as root comp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorFrame = { "DoorFrame", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwingDoor, DoorFrame), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwingDoor_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "SwingDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwingDoor_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwingDoor, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwingDoor_Statics::NewProp_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::NewProp_Door_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorCurve_MetaData[] = {
		{ "Category", "SwingDoor" },
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorCurve = { "DoorCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwingDoor, DoorCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwingDoor_Statics::NewProp_OpenDistance_MetaData[] = {
		{ "Category", "SwingDoor" },
		{ "Comment", "// NN Open distance if distance (player - door) > OpenDistance\n" },
		{ "ModuleRelativePath", "Public/SwingDoor.h" },
		{ "ToolTip", "NN Open distance if distance (player - door) > OpenDistance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASwingDoor_Statics::NewProp_OpenDistance = { "OpenDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwingDoor, OpenDistance), METADATA_PARAMS(Z_Construct_UClass_ASwingDoor_Statics::NewProp_OpenDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::NewProp_OpenDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwingDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwingDoor_Statics::NewProp_Door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwingDoor_Statics::NewProp_OpenDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwingDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwingDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwingDoor_Statics::ClassParams = {
		&ASwingDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASwingDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASwingDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwingDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwingDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwingDoor, 564244958);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<ASwingDoor>()
	{
		return ASwingDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwingDoor(Z_Construct_UClass_ASwingDoor, &ASwingDoor::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("ASwingDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwingDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
