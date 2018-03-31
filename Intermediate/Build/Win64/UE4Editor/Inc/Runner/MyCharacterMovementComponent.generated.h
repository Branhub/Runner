// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNNER_MyCharacterMovementComponent_generated_h
#error "MyCharacterMovementComponent.generated.h already included, missing '#pragma once' in MyCharacterMovementComponent.h"
#endif
#define RUNNER_MyCharacterMovementComponent_generated_h

#define Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_RPC_WRAPPERS
#define Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyCharacterMovementComponent(); \
	friend RUNNER_API class UClass* Z_Construct_UClass_UMyCharacterMovementComponent(); \
public: \
	DECLARE_CLASS(UMyCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Runner"), NO_API) \
	DECLARE_SERIALIZER(UMyCharacterMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyCharacterMovementComponent(); \
	friend RUNNER_API class UClass* Z_Construct_UClass_UMyCharacterMovementComponent(); \
public: \
	DECLARE_CLASS(UMyCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Runner"), NO_API) \
	DECLARE_SERIALIZER(UMyCharacterMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyCharacterMovementComponent(UMyCharacterMovementComponent&&); \
	NO_API UMyCharacterMovementComponent(const UMyCharacterMovementComponent&); \
public:


#define Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyCharacterMovementComponent(UMyCharacterMovementComponent&&); \
	NO_API UMyCharacterMovementComponent(const UMyCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyCharacterMovementComponent)


#define Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OriginalTransform() { return STRUCT_OFFSET(UMyCharacterMovementComponent, OriginalTransform); }


#define Runner_Source_Runner_Public_MyCharacterMovementComponent_h_12_PROLOG
#define Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_RPC_WRAPPERS \
	Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_INCLASS \
	Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
	Runner_Source_Runner_Public_MyCharacterMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Runner_Source_Runner_Public_MyCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
