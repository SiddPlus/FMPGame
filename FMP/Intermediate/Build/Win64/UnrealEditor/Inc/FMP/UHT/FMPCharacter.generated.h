// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FMPCharacter.h"

#ifdef FMP_FMPCharacter_generated_h
#error "FMPCharacter.generated.h already included, missing '#pragma once' in FMPCharacter.h"
#endif
#define FMP_FMPCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFMPCharacter ************************************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


FMP_API UClass* Z_Construct_UClass_AFMPCharacter_NoRegister();

#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFMPCharacter(); \
	friend struct Z_Construct_UClass_AFMPCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMP_API UClass* Z_Construct_UClass_AFMPCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFMPCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMP"), Z_Construct_UClass_AFMPCharacter_NoRegister) \
	DECLARE_SERIALIZER(AFMPCharacter)


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPCharacter_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFMPCharacter(AFMPCharacter&&) = delete; \
	AFMPCharacter(const AFMPCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFMPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFMPCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFMPCharacter) \
	NO_API virtual ~AFMPCharacter();


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPCharacter_h_23_PROLOG
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPCharacter_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFMPCharacter;

// ********** End Class AFMPCharacter **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
