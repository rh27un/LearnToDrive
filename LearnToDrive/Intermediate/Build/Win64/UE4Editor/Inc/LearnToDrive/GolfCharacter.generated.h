// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEARNTODRIVE_GolfCharacter_generated_h
#error "GolfCharacter.generated.h already included, missing '#pragma once' in GolfCharacter.h"
#endif
#define LEARNTODRIVE_GolfCharacter_generated_h

#define LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGolfCharacter(); \
	friend struct Z_Construct_UClass_AGolfCharacter_Statics; \
public: \
	DECLARE_CLASS(AGolfCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearnToDrive"), NO_API) \
	DECLARE_SERIALIZER(AGolfCharacter)


#define LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGolfCharacter(); \
	friend struct Z_Construct_UClass_AGolfCharacter_Statics; \
public: \
	DECLARE_CLASS(AGolfCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearnToDrive"), NO_API) \
	DECLARE_SERIALIZER(AGolfCharacter)


#define LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGolfCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGolfCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGolfCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGolfCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGolfCharacter(AGolfCharacter&&); \
	NO_API AGolfCharacter(const AGolfCharacter&); \
public:


#define LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGolfCharacter(AGolfCharacter&&); \
	NO_API AGolfCharacter(const AGolfCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGolfCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGolfCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGolfCharacter)


#define LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define LearnToDrive_Source_LearnToDrive_GolfCharacter_h_9_PROLOG
#define LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_RPC_WRAPPERS \
	LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_INCLASS \
	LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_INCLASS_NO_PURE_DECLS \
	LearnToDrive_Source_LearnToDrive_GolfCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LearnToDrive_Source_LearnToDrive_GolfCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
