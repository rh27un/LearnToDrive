// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef LEARNTODRIVE_GolfBall_generated_h
#error "GolfBall.generated.h already included, missing '#pragma once' in GolfBall.h"
#endif
#define LEARNTODRIVE_GolfBall_generated_h

#define LearnToDrive_Source_LearnToDrive_GolfBall_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetForwardVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_fwd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForwardVector(Z_Param_fwd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define LearnToDrive_Source_LearnToDrive_GolfBall_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetForwardVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_fwd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForwardVector(Z_Param_fwd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define LearnToDrive_Source_LearnToDrive_GolfBall_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGolfBall(); \
	friend struct Z_Construct_UClass_AGolfBall_Statics; \
public: \
	DECLARE_CLASS(AGolfBall, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearnToDrive"), NO_API) \
	DECLARE_SERIALIZER(AGolfBall)


#define LearnToDrive_Source_LearnToDrive_GolfBall_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGolfBall(); \
	friend struct Z_Construct_UClass_AGolfBall_Statics; \
public: \
	DECLARE_CLASS(AGolfBall, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearnToDrive"), NO_API) \
	DECLARE_SERIALIZER(AGolfBall)


#define LearnToDrive_Source_LearnToDrive_GolfBall_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGolfBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGolfBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGolfBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGolfBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGolfBall(AGolfBall&&); \
	NO_API AGolfBall(const AGolfBall&); \
public:


#define LearnToDrive_Source_LearnToDrive_GolfBall_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGolfBall(AGolfBall&&); \
	NO_API AGolfBall(const AGolfBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGolfBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGolfBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGolfBall)


#define LearnToDrive_Source_LearnToDrive_GolfBall_h_13_PRIVATE_PROPERTY_OFFSET
#define LearnToDrive_Source_LearnToDrive_GolfBall_h_10_PROLOG
#define LearnToDrive_Source_LearnToDrive_GolfBall_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearnToDrive_Source_LearnToDrive_GolfBall_h_13_PRIVATE_PROPERTY_OFFSET \
	LearnToDrive_Source_LearnToDrive_GolfBall_h_13_RPC_WRAPPERS \
	LearnToDrive_Source_LearnToDrive_GolfBall_h_13_INCLASS \
	LearnToDrive_Source_LearnToDrive_GolfBall_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LearnToDrive_Source_LearnToDrive_GolfBall_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearnToDrive_Source_LearnToDrive_GolfBall_h_13_PRIVATE_PROPERTY_OFFSET \
	LearnToDrive_Source_LearnToDrive_GolfBall_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	LearnToDrive_Source_LearnToDrive_GolfBall_h_13_INCLASS_NO_PURE_DECLS \
	LearnToDrive_Source_LearnToDrive_GolfBall_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LearnToDrive_Source_LearnToDrive_GolfBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
