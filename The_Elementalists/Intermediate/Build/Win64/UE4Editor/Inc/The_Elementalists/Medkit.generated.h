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
struct FHitResult;
#ifdef THE_ELEMENTALISTS_Medkit_generated_h
#error "Medkit.generated.h already included, missing '#pragma once' in Medkit.h"
#endif
#define THE_ELEMENTALISTS_Medkit_generated_h

#define The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_SPARSE_DATA
#define The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMedkit(); \
	friend struct Z_Construct_UClass_AMedkit_Statics; \
public: \
	DECLARE_CLASS(AMedkit, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AMedkit)


#define The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMedkit(); \
	friend struct Z_Construct_UClass_AMedkit_Statics; \
public: \
	DECLARE_CLASS(AMedkit, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AMedkit)


#define The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMedkit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMedkit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMedkit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMedkit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMedkit(AMedkit&&); \
	NO_API AMedkit(const AMedkit&); \
public:


#define The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMedkit(AMedkit&&); \
	NO_API AMedkit(const AMedkit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMedkit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMedkit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMedkit)


#define The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Box() { return STRUCT_OFFSET(AMedkit, Box); } \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AMedkit, Root); } \
	FORCEINLINE static uint32 __PPO__MedkitMesh() { return STRUCT_OFFSET(AMedkit, MedkitMesh); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AMedkit, Health); } \
	FORCEINLINE static uint32 __PPO__YawValue() { return STRUCT_OFFSET(AMedkit, YawValue); }


#define The_Elementalists_Source_The_Elementalists_Public_Medkit_h_9_PROLOG
#define The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_RPC_WRAPPERS \
	The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_INCLASS \
	The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_INCLASS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_Medkit_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE_ELEMENTALISTS_API UClass* StaticClass<class AMedkit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID The_Elementalists_Source_The_Elementalists_Public_Medkit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
