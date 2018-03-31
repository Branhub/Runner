// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MyCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterMovementComponent() {}
// Cross Module References
	RUNNER_API UClass* Z_Construct_UClass_UMyCharacterMovementComponent_NoRegister();
	RUNNER_API UClass* Z_Construct_UClass_UMyCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Runner();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void UMyCharacterMovementComponent::StaticRegisterNativesUMyCharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UMyCharacterMovementComponent_NoRegister()
	{
		return UMyCharacterMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Runner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Movement" },
				{ "IncludePath", "MyCharacterMovementComponent.h" },
				{ "ModuleRelativePath", "Public/MyCharacterMovementComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalTransform_MetaData[] = {
				{ "ModuleRelativePath", "Public/MyCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "OriginalTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMyCharacterMovementComponent, OriginalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_OriginalTransform_MetaData, ARRAY_COUNT(NewProp_OriginalTransform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OriginalTransform,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMyCharacterMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMyCharacterMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyCharacterMovementComponent, 2223286631);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyCharacterMovementComponent(Z_Construct_UClass_UMyCharacterMovementComponent, &UMyCharacterMovementComponent::StaticClass, TEXT("/Script/Runner"), TEXT("UMyCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
