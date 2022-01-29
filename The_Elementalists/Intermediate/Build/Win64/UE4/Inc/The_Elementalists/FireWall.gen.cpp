// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/FireWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireWall() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFireWall_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFireWall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFireWall::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AFireWall::StaticRegisterNativesAFireWall()
	{
		UClass* Class = AFireWall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AFireWall::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics
	{
		struct FireWall_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FireWall_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FireWall_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FireWall_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FireWall_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FireWall_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FireWall_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FireWall_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// CN Handles collision with pawn\n" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
		{ "ToolTip", "CN Handles collision with pawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFireWall, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(FireWall_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFireWall_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFireWall_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFireWall_NoRegister()
	{
		return AFireWall::StaticClass();
	}
	struct Z_Construct_UClass_AFireWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireParticles1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireParticles1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireParticles2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireParticles2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireParticles3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireParticles3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireParticles4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireParticles4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireParticles5_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireParticles5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireParticles6_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireParticles6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireParticles7_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireParticles7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireParticles8_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireParticles8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireParticles9_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireParticles9;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireParticles10_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireParticles10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFireWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFireWall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFireWall_OnOverlapBegin, "OnOverlapBegin" }, // 1136683301
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FireWall.h" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles1_MetaData[] = {
		{ "Category", "FireWall" },
		{ "Comment", "// CN Particle Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
		{ "ToolTip", "CN Particle Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles1 = { "FireParticles1", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireWall, FireParticles1), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles2_MetaData[] = {
		{ "Category", "FireWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles2 = { "FireParticles2", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireWall, FireParticles2), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles3_MetaData[] = {
		{ "Category", "FireWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles3 = { "FireParticles3", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireWall, FireParticles3), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles4_MetaData[] = {
		{ "Category", "FireWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles4 = { "FireParticles4", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireWall, FireParticles4), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles5_MetaData[] = {
		{ "Category", "FireWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles5 = { "FireParticles5", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireWall, FireParticles5), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles6_MetaData[] = {
		{ "Category", "FireWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles6 = { "FireParticles6", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireWall, FireParticles6), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles7_MetaData[] = {
		{ "Category", "FireWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles7 = { "FireParticles7", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireWall, FireParticles7), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles8_MetaData[] = {
		{ "Category", "FireWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles8 = { "FireParticles8", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireWall, FireParticles8), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles8_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles9_MetaData[] = {
		{ "Category", "FireWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles9 = { "FireParticles9", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireWall, FireParticles9), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles9_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles9_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles10_MetaData[] = {
		{ "Category", "FireWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles10 = { "FireParticles10", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireWall, FireParticles10), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireWall_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "FireWall" },
		{ "Comment", "// CN Collision box\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
		{ "ToolTip", "CN Collision box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireWall_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireWall, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireWall_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireWall_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "FireWall" },
		{ "Comment", "// CN Root\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
		{ "ToolTip", "CN Root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireWall_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireWall, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireWall_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireWall_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "FireWall" },
		{ "Comment", "// CN Fire speed. I beleive 100 is fine.\n" },
		{ "ModuleRelativePath", "Public/FireWall.h" },
		{ "ToolTip", "CN Fire speed. I beleive 100 is fine." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFireWall_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireWall, Speed), METADATA_PARAMS(Z_Construct_UClass_AFireWall_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFireWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireWall_Statics::NewProp_FireParticles10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireWall_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireWall_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireWall_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFireWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFireWall_Statics::ClassParams = {
		&AFireWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFireWall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFireWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFireWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFireWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFireWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFireWall, 1703974147);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AFireWall>()
	{
		return AFireWall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFireWall(Z_Construct_UClass_AFireWall, &AFireWall::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AFireWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
