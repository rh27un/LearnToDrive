// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnToDrive/BallCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallCamera() {}
// Cross Module References
	LEARNTODRIVE_API UClass* Z_Construct_UClass_ABallCamera_NoRegister();
	LEARNTODRIVE_API UClass* Z_Construct_UClass_ABallCamera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LearnToDrive();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ABallCamera::StaticRegisterNativesABallCamera()
	{
	}
	UClass* Z_Construct_UClass_ABallCamera_NoRegister()
	{
		return ABallCamera::StaticClass();
	}
	struct Z_Construct_UClass_ABallCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABallCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnToDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallCamera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BallCamera.h" },
		{ "ModuleRelativePath", "BallCamera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallCamera_Statics::NewProp_arrow_MetaData[] = {
		{ "Category", "BallCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BallCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallCamera_Statics::NewProp_arrow = { UE4CodeGen_Private::EPropertyClass::Object, "arrow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000090009, 1, nullptr, STRUCT_OFFSET(ABallCamera, arrow), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABallCamera_Statics::NewProp_arrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABallCamera_Statics::NewProp_arrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallCamera_Statics::NewProp_camera_MetaData[] = {
		{ "Category", "BallCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BallCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallCamera_Statics::NewProp_camera = { UE4CodeGen_Private::EPropertyClass::Object, "camera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000090009, 1, nullptr, STRUCT_OFFSET(ABallCamera, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABallCamera_Statics::NewProp_camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABallCamera_Statics::NewProp_camera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABallCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallCamera_Statics::NewProp_arrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallCamera_Statics::NewProp_camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABallCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABallCamera_Statics::ClassParams = {
		&ABallCamera::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ABallCamera_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABallCamera_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABallCamera_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABallCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABallCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABallCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABallCamera, 1293554065);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABallCamera(Z_Construct_UClass_ABallCamera, &ABallCamera::StaticClass, TEXT("/Script/LearnToDrive"), TEXT("ABallCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
