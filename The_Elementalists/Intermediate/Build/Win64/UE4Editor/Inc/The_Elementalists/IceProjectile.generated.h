// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THE_ELEMENTALISTS_IceProjectile_generated_h
#error "IceProjectile.generated.h already included, missing '#pragma once' in IceProjectile.h"
#endif
#define THE_ELEMENTALISTS_IceProjectile_generated_h

#define The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_SPARSE_DATA
#define The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_RPC_WRAPPERS
#define The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIceProjectile(); \
	friend struct Z_Construct_UClass_AIceProjectile_Statics; \
public: \
	DECLARE_CLASS(AIceProjectile, AProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AIceProjectile)


#define The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAIceProjectile(); \
	friend struct Z_Construct_UClass_AIceProjectile_Statics; \
public: \
	DECLARE_CLASS(AIceProjectile, AProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AIceProjectile)


#define The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIceProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIceProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIceProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIceProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIceProjectile(AIceProjectile&&); \
	NO_API AIceProjectile(const AIceProjectile&); \
public:


#define The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIceProjectile(AIceProjectile&&); \
	NO_API AIceProjectile(const AIceProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIceProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIceProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIceProjectile)


#define The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IceCubeSpawnedSound() { return STRUCT_OFFSET(AIceProjectile, IceCubeSpawnedSound); } \
	FORCEINLINE static uint32 __PPO__IceCubeFloorHitSound() { return STRUCT_OFFSET(AIceProjectile, IceCubeFloorHitSound); } \
	FORCEINLINE static uint32 __PPO__OilSpillFrozeSound() { return STRUCT_OFFSET(AIceProjectile, OilSpillFrozeSound); } \
	FORCEINLINE static uint32 __PPO__IceCubeClass() { return STRUCT_OFFSET(AIceProjectile, IceCubeClass); }


#define The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_12_PROLOG
#define The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_RPC_WRAPPERS \
	The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_INCLASS \
	The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_INCLASS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE_ELEMENTALISTS_API UClass* StaticClass<class AIceProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID The_Elementalists_Source_The_Elementalists_Public_IceProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
