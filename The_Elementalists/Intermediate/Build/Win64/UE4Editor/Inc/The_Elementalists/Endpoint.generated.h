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
#ifdef THE_ELEMENTALISTS_Endpoint_generated_h
#error "Endpoint.generated.h already included, missing '#pragma once' in Endpoint.h"
#endif
#define THE_ELEMENTALISTS_Endpoint_generated_h

#define The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_SPARSE_DATA
#define The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEndpoint(); \
	friend struct Z_Construct_UClass_AEndpoint_Statics; \
public: \
	DECLARE_CLASS(AEndpoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AEndpoint)


#define The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEndpoint(); \
	friend struct Z_Construct_UClass_AEndpoint_Statics; \
public: \
	DECLARE_CLASS(AEndpoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AEndpoint)


#define The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEndpoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEndpoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndpoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndpoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEndpoint(AEndpoint&&); \
	NO_API AEndpoint(const AEndpoint&); \
public:


#define The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEndpoint(AEndpoint&&); \
	NO_API AEndpoint(const AEndpoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndpoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndpoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEndpoint)


#define The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Box() { return STRUCT_OFFSET(AEndpoint, Box); } \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AEndpoint, Root); } \
	FORCEINLINE static uint32 __PPO__EndpointParticle() { return STRUCT_OFFSET(AEndpoint, EndpointParticle); }


#define The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_9_PROLOG
#define The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_RPC_WRAPPERS \
	The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_INCLASS \
	The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_INCLASS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_Endpoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE_ELEMENTALISTS_API UClass* StaticClass<class AEndpoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID The_Elementalists_Source_The_Elementalists_Public_Endpoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
