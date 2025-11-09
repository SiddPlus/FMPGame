// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoundManager.h"

#ifdef FMP_RoundManager_generated_h
#error "RoundManager.generated.h already included, missing '#pragma once' in RoundManager.h"
#endif
#define FMP_RoundManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARoundManager ************************************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_RoundManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentRoundNumber); \
	DECLARE_FUNCTION(execIsRoundActive); \
	DECLARE_FUNCTION(execGetRemainingTime); \
	DECLARE_FUNCTION(execBeginNewRound);


FMP_API UClass* Z_Construct_UClass_ARoundManager_NoRegister();

#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_RoundManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoundManager(); \
	friend struct Z_Construct_UClass_ARoundManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMP_API UClass* Z_Construct_UClass_ARoundManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ARoundManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMP"), Z_Construct_UClass_ARoundManager_NoRegister) \
	DECLARE_SERIALIZER(ARoundManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsRoundActive=NETFIELD_REP_START, \
		RoundTimer, \
		CurrentRoundNumber, \
		NETFIELD_REP_END=CurrentRoundNumber	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_RoundManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARoundManager(ARoundManager&&) = delete; \
	ARoundManager(const ARoundManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoundManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoundManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoundManager) \
	NO_API virtual ~ARoundManager();


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_RoundManager_h_12_PROLOG
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_RoundManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_RoundManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_RoundManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_RoundManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARoundManager;

// ********** End Class ARoundManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_RoundManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
