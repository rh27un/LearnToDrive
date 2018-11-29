// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
#ifdef LEARNTODRIVE_GolfStart_generated_h
#error "GolfStart.generated.h already included, missing '#pragma once' in GolfStart.h"
#endif
#define LEARNTODRIVE_GolfStart_generated_h

#define LearnToDrive_Source_LearnToDrive_GolfStart_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define LearnToDrive_Source_LearnToDrive_GolfStart_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define LearnToDrive_Source_LearnToDrive_GolfStart_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGolfStart(); \
	friend struct Z_Construct_UClass_AGolfStart_Statics; \
public: \
	DECLARE_CLASS(AGolfStart, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearnToDrive"), NO_API) \
	DECLARE_SERIALIZER(AGolfStart)


#define LearnToDrive_Source_LearnToDrive_GolfStart_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGolfStart(); \
	friend struct Z_Construct_UClass_AGolfStart_Statics; \
public: \
	DECLARE_CLASS(AGolfStart, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearnToDrive"), NO_API) \
	DECLARE_SERIALIZER(AGolfStart)


#define LearnToDrive_Source_LearnToDrive_GolfStart_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGolfStart(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGolfStart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGolfStart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGolfStart); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGolfStart(AGolfStart&&); \
	NO_API AGolfStart(const AGolfStart&); \
public:


#define LearnToDrive_Source_LearnToDrive_GolfStart_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGolfStart(AGolfStart&&); \
	NO_API AGolfStart(const AGolfStart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGolfStart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGolfStart); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGolfStart)


#define LearnToDrive_Source_LearnToDrive_GolfStart_h_13_PRIVATE_PROPERTY_OFFSET
#define LearnToDrive_Source_LearnToDrive_GolfStart_h_10_PROLOG
#define LearnToDrive_Source_LearnToDrive_GolfStart_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearnToDrive_Source_LearnToDrive_GolfStart_h_13_PRIVATE_PROPERTY_OFFSET \
	LearnToDrive_Source_LearnToDrive_GolfStart_h_13_RPC_WRAPPERS \
	LearnToDrive_Source_LearnToDrive_GolfStart_h_13_INCLASS \
	LearnToDrive_Source_LearnToDrive_GolfStart_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LearnToDrive_Source_LearnToDrive_GolfStart_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearnToDrive_Source_LearnToDrive_GolfStart_h_13_PRIVATE_PROPERTY_OFFSET \
	LearnToDrive_Source_LearnToDrive_GolfStart_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	LearnToDrive_Source_LearnToDrive_GolfStart_h_13_INCLASS_NO_PURE_DECLS \
	LearnToDrive_Source_LearnToDrive_GolfStart_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LearnToDrive_Source_LearnToDrive_GolfStart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
