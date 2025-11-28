// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LootPool.h"

#ifdef FMP_LootPool_generated_h
#error "LootPool.generated.h already included, missing '#pragma once' in LootPool.h"
#endif
#define FMP_LootPool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULootPool ****************************************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerDrawRandomPerk_Implementation(); \
	DECLARE_FUNCTION(execCanDrawPerk); \
	DECLARE_FUNCTION(execResetPool); \
	DECLARE_FUNCTION(execServerDrawRandomPerk); \
	DECLARE_FUNCTION(execDrawRandomPerk);


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h_14_CALLBACK_WRAPPERS
FMP_API UClass* Z_Construct_UClass_ULootPool_NoRegister();

#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootPool(); \
	friend struct Z_Construct_UClass_ULootPool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMP_API UClass* Z_Construct_UClass_ULootPool_NoRegister(); \
public: \
	DECLARE_CLASS2(ULootPool, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMP"), Z_Construct_UClass_ULootPool_NoRegister) \
	DECLARE_SERIALIZER(ULootPool) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentPerkPool=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentPerkPool	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULootPool(ULootPool&&) = delete; \
	ULootPool(const ULootPool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootPool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootPool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULootPool) \
	NO_API virtual ~ULootPool();


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h_11_PROLOG
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h_14_CALLBACK_WRAPPERS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULootPool;

// ********** End Class ULootPool ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
