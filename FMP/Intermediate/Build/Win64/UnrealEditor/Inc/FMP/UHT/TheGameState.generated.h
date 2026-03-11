// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TheGameState.h"

#ifdef FMP_TheGameState_generated_h
#error "TheGameState.generated.h already included, missing '#pragma once' in TheGameState.h"
#endif
#define FMP_TheGameState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnRoundStateChange ***************************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h_9_DELEGATE \
FMP_API void FOnRoundStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnRoundStateChange, bool IsActive);


// ********** End Delegate FOnRoundStateChange *****************************************************

// ********** Begin Delegate FOnPlayerReadyChange **************************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h_10_DELEGATE \
FMP_API void FOnPlayerReadyChange_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerReadyChange, int32 CurrentReadyPlayers);


// ********** End Delegate FOnPlayerReadyChange ****************************************************

// ********** Begin Class ATheGameState ************************************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_ReadyPlayers); \
	DECLARE_FUNCTION(execOnRep_IsRoundActive);


FMP_API UClass* Z_Construct_UClass_ATheGameState_NoRegister();

#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheGameState(); \
	friend struct Z_Construct_UClass_ATheGameState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMP_API UClass* Z_Construct_UClass_ATheGameState_NoRegister(); \
public: \
	DECLARE_CLASS2(ATheGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMP"), Z_Construct_UClass_ATheGameState_NoRegister) \
	DECLARE_SERIALIZER(ATheGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsRoundActive=NETFIELD_REP_START, \
		RoundTimer, \
		CurrentRoundNumber, \
		ReadyPlayersCount, \
		TotalPlayersInGame, \
		NETFIELD_REP_END=TotalPlayersInGame	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATheGameState(ATheGameState&&) = delete; \
	ATheGameState(const ATheGameState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATheGameState) \
	NO_API virtual ~ATheGameState();


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h_12_PROLOG
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATheGameState;

// ********** End Class ATheGameState **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
