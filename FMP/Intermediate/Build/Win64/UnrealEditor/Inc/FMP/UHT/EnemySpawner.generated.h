// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemySpawner.h"

#ifdef FMP_EnemySpawner_generated_h
#error "EnemySpawner.generated.h already included, missing '#pragma once' in EnemySpawner.h"
#endif
#define FMP_EnemySpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class AEnemySpawner ************************************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SpawnPortalEffect_Implementation(FVector Location); \
	DECLARE_FUNCTION(execNotifyEnemyDeath); \
	DECLARE_FUNCTION(execEndSpawningAndClearEnemies); \
	DECLARE_FUNCTION(execStartSpawningTimer); \
	DECLARE_FUNCTION(execConfigureSpawner); \
	DECLARE_FUNCTION(execSpawnPortalEffect); \
	DECLARE_FUNCTION(execSpawnEnemy);


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h_14_CALLBACK_WRAPPERS
FMP_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();

#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemySpawner(); \
	friend struct Z_Construct_UClass_AEnemySpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMP_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemySpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMP"), Z_Construct_UClass_AEnemySpawner_NoRegister) \
	DECLARE_SERIALIZER(AEnemySpawner)


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemySpawner(AEnemySpawner&&) = delete; \
	AEnemySpawner(const AEnemySpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemySpawner) \
	NO_API virtual ~AEnemySpawner();


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h_11_PROLOG
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h_14_CALLBACK_WRAPPERS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemySpawner;

// ********** End Class AEnemySpawner **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
