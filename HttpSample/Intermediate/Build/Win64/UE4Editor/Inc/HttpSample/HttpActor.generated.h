// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class FutabaRequestStatus : uint8;
#ifdef HTTPSAMPLE_HttpActor_generated_h
#error "HttpActor.generated.h already included, missing '#pragma once' in HttpActor.h"
#endif
#define HTTPSAMPLE_HttpActor_generated_h

#define HttpSample_Source_HttpSample_HttpActor_h_23_SPARSE_DATA
#define HttpSample_Source_HttpSample_HttpActor_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetThings); \
	DECLARE_FUNCTION(execSetAccessToken); \
	DECLARE_FUNCTION(execSetAccessTokenByConfigFile); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execShowConfiguration); \
	DECLARE_FUNCTION(execSetHostURL); \
	DECLARE_FUNCTION(execMyHttpMethodLambda); \
	DECLARE_FUNCTION(execMyHttpMethod);


#define HttpSample_Source_HttpSample_HttpActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetThings); \
	DECLARE_FUNCTION(execSetAccessToken); \
	DECLARE_FUNCTION(execSetAccessTokenByConfigFile); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execShowConfiguration); \
	DECLARE_FUNCTION(execSetHostURL); \
	DECLARE_FUNCTION(execMyHttpMethodLambda); \
	DECLARE_FUNCTION(execMyHttpMethod);


#define HttpSample_Source_HttpSample_HttpActor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHttpActor(); \
	friend struct Z_Construct_UClass_AHttpActor_Statics; \
public: \
	DECLARE_CLASS(AHttpActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HttpSample"), NO_API) \
	DECLARE_SERIALIZER(AHttpActor)


#define HttpSample_Source_HttpSample_HttpActor_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAHttpActor(); \
	friend struct Z_Construct_UClass_AHttpActor_Statics; \
public: \
	DECLARE_CLASS(AHttpActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HttpSample"), NO_API) \
	DECLARE_SERIALIZER(AHttpActor)


#define HttpSample_Source_HttpSample_HttpActor_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHttpActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHttpActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHttpActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHttpActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHttpActor(AHttpActor&&); \
	NO_API AHttpActor(const AHttpActor&); \
public:


#define HttpSample_Source_HttpSample_HttpActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHttpActor(AHttpActor&&); \
	NO_API AHttpActor(const AHttpActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHttpActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHttpActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHttpActor)


#define HttpSample_Source_HttpSample_HttpActor_h_23_PRIVATE_PROPERTY_OFFSET
#define HttpSample_Source_HttpSample_HttpActor_h_20_PROLOG
#define HttpSample_Source_HttpSample_HttpActor_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HttpSample_Source_HttpSample_HttpActor_h_23_PRIVATE_PROPERTY_OFFSET \
	HttpSample_Source_HttpSample_HttpActor_h_23_SPARSE_DATA \
	HttpSample_Source_HttpSample_HttpActor_h_23_RPC_WRAPPERS \
	HttpSample_Source_HttpSample_HttpActor_h_23_INCLASS \
	HttpSample_Source_HttpSample_HttpActor_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HttpSample_Source_HttpSample_HttpActor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HttpSample_Source_HttpSample_HttpActor_h_23_PRIVATE_PROPERTY_OFFSET \
	HttpSample_Source_HttpSample_HttpActor_h_23_SPARSE_DATA \
	HttpSample_Source_HttpSample_HttpActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HttpSample_Source_HttpSample_HttpActor_h_23_INCLASS_NO_PURE_DECLS \
	HttpSample_Source_HttpSample_HttpActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPSAMPLE_API UClass* StaticClass<class AHttpActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HttpSample_Source_HttpSample_HttpActor_h


#define FOREACH_ENUM_FUTABAREQUESTSTATUS(op) \
	op(FutabaRequestStatus::Success) \
	op(FutabaRequestStatus::User_Error) \
	op(FutabaRequestStatus::Platform_Error) 

enum class FutabaRequestStatus : uint8;
template<> HTTPSAMPLE_API UEnum* StaticEnum<FutabaRequestStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
