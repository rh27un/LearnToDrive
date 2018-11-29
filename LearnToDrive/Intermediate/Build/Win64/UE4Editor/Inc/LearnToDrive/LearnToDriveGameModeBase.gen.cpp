// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnToDrive/LearnToDriveGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearnToDriveGameModeBase() {}
// Cross Module References
	LEARNTODRIVE_API UClass* Z_Construct_UClass_ALearnToDriveGameModeBase_NoRegister();
	LEARNTODRIVE_API UClass* Z_Construct_UClass_ALearnToDriveGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LearnToDrive();
// End Cross Module References
	void ALearnToDriveGameModeBase::StaticRegisterNativesALearnToDriveGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ALearnToDriveGameModeBase_NoRegister()
	{
		return ALearnToDriveGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALearnToDriveGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALearnToDriveGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnToDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearnToDriveGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LearnToDriveGameModeBase.h" },
		{ "ModuleRelativePath", "LearnToDriveGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALearnToDriveGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALearnToDriveGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALearnToDriveGameModeBase_Statics::ClassParams = {
		&ALearnToDriveGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALearnToDriveGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALearnToDriveGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALearnToDriveGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALearnToDriveGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALearnToDriveGameModeBase, 4220967982);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALearnToDriveGameModeBase(Z_Construct_UClass_ALearnToDriveGameModeBase, &ALearnToDriveGameModeBase::StaticClass, TEXT("/Script/LearnToDrive"), TEXT("ALearnToDriveGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALearnToDriveGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
