// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORK_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define WORK_SCharacter_generated_h

#define work_Source_work_SCharacter_h_16_SPARSE_DATA
#define work_Source_work_SCharacter_h_16_RPC_WRAPPERS
#define work_Source_work_SCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define work_Source_work_SCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/work"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define work_Source_work_SCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/work"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define work_Source_work_SCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define work_Source_work_SCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define work_Source_work_SCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ASCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ASCharacter, CameraComp); }


#define work_Source_work_SCharacter_h_13_PROLOG
#define work_Source_work_SCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	work_Source_work_SCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	work_Source_work_SCharacter_h_16_SPARSE_DATA \
	work_Source_work_SCharacter_h_16_RPC_WRAPPERS \
	work_Source_work_SCharacter_h_16_INCLASS \
	work_Source_work_SCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define work_Source_work_SCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	work_Source_work_SCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	work_Source_work_SCharacter_h_16_SPARSE_DATA \
	work_Source_work_SCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	work_Source_work_SCharacter_h_16_INCLASS_NO_PURE_DECLS \
	work_Source_work_SCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORK_API UClass* StaticClass<class ASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID work_Source_work_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
