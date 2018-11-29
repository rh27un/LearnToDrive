// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearnToDrive/GolfBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGolfBall() {}
// Cross Module References
	LEARNTODRIVE_API UClass* Z_Construct_UClass_AGolfBall_NoRegister();
	LEARNTODRIVE_API UClass* Z_Construct_UClass_AGolfBall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LearnToDrive();
	LEARNTODRIVE_API UFunction* Z_Construct_UFunction_AGolfBall_OnHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LEARNTODRIVE_API UFunction* Z_Construct_UFunction_AGolfBall_SetForwardVector();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	void AGolfBall::StaticRegisterNativesAGolfBall()
	{
		UClass* Class = AGolfBall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &AGolfBall::execOnHit },
			{ "SetForwardVector", &AGolfBall::execSetForwardVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGolfBall_OnHit_Statics
	{
		struct GolfBall_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(GolfBall_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_NormalImpulse = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalImpulse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GolfBall_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GolfBall_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GolfBall_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_HitComp = { UE4CodeGen_Private::EPropertyClass::Object, "HitComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GolfBall_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_HitComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGolfBall_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGolfBall_OnHit_Statics::NewProp_HitComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGolfBall_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GolfBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGolfBall_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGolfBall, "OnHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(GolfBall_eventOnHit_Parms), Z_Construct_UFunction_AGolfBall_OnHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGolfBall_OnHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGolfBall_OnHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGolfBall_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGolfBall_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGolfBall_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGolfBall_SetForwardVector_Statics
	{
		struct GolfBall_eventSetForwardVector_Parms
		{
			FVector fwd;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_fwd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGolfBall_SetForwardVector_Statics::NewProp_fwd = { UE4CodeGen_Private::EPropertyClass::Struct, "fwd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GolfBall_eventSetForwardVector_Parms, fwd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGolfBall_SetForwardVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGolfBall_SetForwardVector_Statics::NewProp_fwd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGolfBall_SetForwardVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GolfBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGolfBall_SetForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGolfBall, "SetForwardVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(GolfBall_eventSetForwardVector_Parms), Z_Construct_UFunction_AGolfBall_SetForwardVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGolfBall_SetForwardVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGolfBall_SetForwardVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGolfBall_SetForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGolfBall_SetForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGolfBall_SetForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGolfBall_NoRegister()
	{
		return AGolfBall::StaticClass();
	}
	struct Z_Construct_UClass_AGolfBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GolfballMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GolfballMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_swingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_swingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_powerMod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_powerMod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGolfBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearnToDrive,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGolfBall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGolfBall_OnHit, "OnHit" }, // 659707885
		{ &Z_Construct_UFunction_AGolfBall_SetForwardVector, "SetForwardVector" }, // 1044418610
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGolfBall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GolfBall.h" },
		{ "ModuleRelativePath", "GolfBall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGolfBall_Statics::NewProp_GolfballMat_MetaData[] = {
		{ "Category", "Golf" },
		{ "ModuleRelativePath", "GolfBall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGolfBall_Statics::NewProp_GolfballMat = { UE4CodeGen_Private::EPropertyClass::Object, "GolfballMat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AGolfBall, GolfballMat), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGolfBall_Statics::NewProp_GolfballMat_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGolfBall_Statics::NewProp_GolfballMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGolfBall_Statics::NewProp_swingSpeed_MetaData[] = {
		{ "Category", "Golf" },
		{ "ModuleRelativePath", "GolfBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGolfBall_Statics::NewProp_swingSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "swingSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AGolfBall, swingSpeed), METADATA_PARAMS(Z_Construct_UClass_AGolfBall_Statics::NewProp_swingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGolfBall_Statics::NewProp_swingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGolfBall_Statics::NewProp_maxPower_MetaData[] = {
		{ "Category", "Golf" },
		{ "ModuleRelativePath", "GolfBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGolfBall_Statics::NewProp_maxPower = { UE4CodeGen_Private::EPropertyClass::Float, "maxPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AGolfBall, maxPower), METADATA_PARAMS(Z_Construct_UClass_AGolfBall_Statics::NewProp_maxPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGolfBall_Statics::NewProp_maxPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGolfBall_Statics::NewProp_powerMod_MetaData[] = {
		{ "Category", "Golf" },
		{ "ModuleRelativePath", "GolfBall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGolfBall_Statics::NewProp_powerMod = { UE4CodeGen_Private::EPropertyClass::Float, "powerMod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AGolfBall, powerMod), METADATA_PARAMS(Z_Construct_UClass_AGolfBall_Statics::NewProp_powerMod_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGolfBall_Statics::NewProp_powerMod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGolfBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGolfBall_Statics::NewProp_GolfballMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGolfBall_Statics::NewProp_swingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGolfBall_Statics::NewProp_maxPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGolfBall_Statics::NewProp_powerMod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGolfBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGolfBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGolfBall_Statics::ClassParams = {
		&AGolfBall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AGolfBall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AGolfBall_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGolfBall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGolfBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGolfBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGolfBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGolfBall, 113191320);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGolfBall(Z_Construct_UClass_AGolfBall, &AGolfBall::StaticClass, TEXT("/Script/LearnToDrive"), TEXT("AGolfBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGolfBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
