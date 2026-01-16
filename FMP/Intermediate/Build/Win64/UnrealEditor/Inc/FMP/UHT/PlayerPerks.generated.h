// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerPerks.h"

#ifdef FMP_PlayerPerks_generated_h
#error "PlayerPerks.generated.h already included, missing '#pragma once' in PlayerPerks.h"
#endif
#define FMP_PlayerPerks_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FPerks;

// ********** Begin Delegate FOnPerkSelectionNeeded ************************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h_9_DELEGATE \
FMP_API void FOnPerkSelectionNeeded_DelegateWrapper(const FMulticastScriptDelegate& OnPerkSelectionNeeded, bool IsActive);


// ********** End Delegate FOnPerkSelectionNeeded **************************************************

// ********** Begin ScriptStruct FPerks ************************************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerks_Statics; \
	FMP_API static class UScriptStruct* StaticStruct();


struct FPerks;
// ********** End ScriptStruct FPerks **************************************************************

// ********** Begin Class UPlayerPerks *************************************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerFinishedPerkSelection_Implementation(); \
	virtual void ServerEquipPerk_Implementation(const FString& PerkName); \
	virtual void ServerUnlockPerk_Implementation(const FString& PerkName); \
	DECLARE_FUNCTION(execOnRep_LastEquippedPerk); \
	DECLARE_FUNCTION(execOnRep_IsPerkSelectionActive); \
	DECLARE_FUNCTION(execServerFinishedPerkSelection); \
	DECLARE_FUNCTION(execServerEquipPerk); \
	DECLARE_FUNCTION(execServerUnlockPerk); \
	DECLARE_FUNCTION(execFinishedPerkSelection); \
	DECLARE_FUNCTION(execIsPerkSelectionActive); \
	DECLARE_FUNCTION(execCheckAndUnlockPerks); \
	DECLARE_FUNCTION(execEquipPerk); \
	DECLARE_FUNCTION(execUnlockPerk);


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h_33_CALLBACK_WRAPPERS
FMP_API UClass* Z_Construct_UClass_UPlayerPerks_NoRegister();

#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerPerks(); \
	friend struct Z_Construct_UClass_UPlayerPerks_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMP_API UClass* Z_Construct_UClass_UPlayerPerks_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayerPerks, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMP"), Z_Construct_UClass_UPlayerPerks_NoRegister) \
	DECLARE_SERIALIZER(UPlayerPerks) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsPerkSelectionActive=NETFIELD_REP_START, \
		LastEquippedPerk, \
		LockedPerks, \
		UnlockedPerks, \
		EquippedPerks, \
		NETFIELD_REP_END=EquippedPerks	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayerPerks(UPlayerPerks&&) = delete; \
	UPlayerPerks(const UPlayerPerks&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerPerks); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerPerks); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerPerks) \
	NO_API virtual ~UPlayerPerks();


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h_30_PROLOG
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h_33_CALLBACK_WRAPPERS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h_33_INCLASS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayerPerks;

// ********** End Class UPlayerPerks ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
