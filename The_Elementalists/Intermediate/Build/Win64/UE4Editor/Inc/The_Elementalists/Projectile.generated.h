// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef THE_ELEMENTALISTS_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define THE_ELEMENTALISTS_Projectile_generated_h

#define The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_SPARSE_DATA
#define The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComponent() { return STRUCT_OFFSET(AProjectile, ProjectileMovementComponent); } \
	FORCEINLINE static uint32 __PPO__Particles() { return STRUCT_OFFSET(AProjectile, Particles); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AProjectile, Damage); } \
	FORCEINLINE static uint32 __PPO__HitParticles() { return STRUCT_OFFSET(AProjectile, HitParticles); } \
	FORCEINLINE static uint32 __PPO__LaunchSound() { return STRUCT_OFFSET(AProjectile, LaunchSound); } \
	FORCEINLINE static uint32 __PPO__HitSound() { return STRUCT_OFFSET(AProjectile, HitSound); }


#define The_Elementalists_Source_The_Elementalists_Public_Projectile_h_9_PROLOG
#define The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_RPC_WRAPPERS \
	The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_INCLASS \
	The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_INCLASS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE_ELEMENTALISTS_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID The_Elementalists_Source_The_Elementalists_Public_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
