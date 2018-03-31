// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/RoadMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoadMovementComponent() {}
// Cross Module References
	RUNNER_API UClass* Z_Construct_UClass_URoadMovementComponent_NoRegister();
	RUNNER_API UClass* Z_Construct_UClass_URoadMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Runner();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	void URoadMovementComponent::StaticRegisterNativesURoadMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_URoadMovementComponent_NoRegister()
	{
		return URoadMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_URoadMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Runner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Movement" },
				{ "IncludePath", "RoadMovementComponent.h" },
				{ "ModuleRelativePath", "Public/RoadMovementComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tickMoveHit_MetaData[] = {
				{ "ModuleRelativePath", "Public/RoadMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_tickMoveHit = { UE4CodeGen_Private::EPropertyClass::Struct, "tickMoveHit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(URoadMovementComponent, tickMoveHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_tickMoveHit_MetaData, ARRAY_COUNT(NewProp_tickMoveHit_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tickMoveHit,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<URoadMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URoadMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URoadMovementComponent, 25590587);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URoadMovementComponent(Z_Construct_UClass_URoadMovementComponent, &URoadMovementComponent::StaticClass, TEXT("/Script/Runner"), TEXT("URoadMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoadMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
