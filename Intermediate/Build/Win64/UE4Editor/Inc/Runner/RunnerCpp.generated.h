// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNNER_RunnerCpp_generated_h
#error "RunnerCpp.generated.h already included, missing '#pragma once' in RunnerCpp.h"
#endif
#define RUNNER_RunnerCpp_generated_h

#define Runner_Source_Runner_Public_RunnerCpp_h_12_RPC_WRAPPERS
#define Runner_Source_Runner_Public_RunnerCpp_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Runner_Source_Runner_Public_RunnerCpp_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunnerCpp(); \
	friend RUNNER_API class UClass* Z_Construct_UClass_ARunnerCpp(); \
public: \
	DECLARE_CLASS(ARunnerCpp, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Runner"), NO_API) \
	DECLARE_SERIALIZER(ARunnerCpp) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Runner_Source_Runner_Public_RunnerCpp_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARunnerCpp(); \
	friend RUNNER_API class UClass* Z_Construct_UClass_ARunnerCpp(); \
public: \
	DECLARE_CLASS(ARunnerCpp, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Runner"), NO_API) \
	DECLARE_SERIALIZER(ARunnerCpp) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Runner_Source_Runner_Public_RunnerCpp_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunnerCpp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunnerCpp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunnerCpp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunnerCpp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunnerCpp(ARunnerCpp&&); \
	NO_API ARunnerCpp(const ARunnerCpp&); \
public:


#define Runner_Source_Runner_Public_RunnerCpp_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunnerCpp(ARunnerCpp&&); \
	NO_API ARunnerCpp(const ARunnerCpp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunnerCpp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunnerCpp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunnerCpp)


#define Runner_Source_Runner_Public_RunnerCpp_h_12_PRIVATE_PROPERTY_OFFSET
#define Runner_Source_Runner_Public_RunnerCpp_h_9_PROLOG
#define Runner_Source_Runner_Public_RunnerCpp_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Runner_Source_Runner_Public_RunnerCpp_h_12_PRIVATE_PROPERTY_OFFSET \
	Runner_Source_Runner_Public_RunnerCpp_h_12_RPC_WRAPPERS \
	Runner_Source_Runner_Public_RunnerCpp_h_12_INCLASS \
	Runner_Source_Runner_Public_RunnerCpp_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Runner_Source_Runner_Public_RunnerCpp_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Runner_Source_Runner_Public_RunnerCpp_h_12_PRIVATE_PROPERTY_OFFSET \
	Runner_Source_Runner_Public_RunnerCpp_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Runner_Source_Runner_Public_RunnerCpp_h_12_INCLASS_NO_PURE_DECLS \
	Runner_Source_Runner_Public_RunnerCpp_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Runner_Source_Runner_Public_RunnerCpp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
