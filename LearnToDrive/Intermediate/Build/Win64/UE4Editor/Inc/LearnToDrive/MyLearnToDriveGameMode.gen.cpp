// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnToDrive/MyLearnToDriveGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLearnToDriveGameMode() {}
// Cross Module References
	LEARNTODRIVE_API UClass* Z_Construct_UClass_AMyLearnToDriveGameMode_NoRegister();
	LEARNTODRIVE_API UClass* Z_Construct_UClass_AMyLearnToDriveGameMode();
	LEARNTODRIVE_API UClass* Z_Construct_UClass_ALearnToDriveGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LearnToDrive();
// End Cross Module References
	void AMyLearnToDriveGameMode::StaticRegisterNativesAMyLearnToDriveGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyLearnToDriveGameMode_NoRegister()
	{
		return AMyLearnToDriveGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyLearnToDriveGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyLearnToDriveGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALearnToDriveGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnToDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLearnToDriveGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyLearnToDriveGameMode.h" },
		{ "ModuleRelativePath", "MyLearnToDriveGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyLearnToDriveGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyLearnToDriveGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyLearnToDriveGameMode_Statics::ClassParams = {
		&AMyLearnToDriveGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyLearnToDriveGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyLearnToDriveGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyLearnToDriveGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyLearnToDriveGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyLearnToDriveGameMode, 323925364);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyLearnToDriveGameMode(Z_Construct_UClass_AMyLearnToDriveGameMode, &AMyLearnToDriveGameMode::StaticClass, TEXT("/Script/LearnToDrive"), TEXT("AMyLearnToDriveGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyLearnToDriveGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
