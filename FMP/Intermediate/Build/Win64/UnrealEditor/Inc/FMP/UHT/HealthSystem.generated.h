// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HealthSystem.h"

#ifdef FMP_HealthSystem_generated_h
#error "HealthSystem.generated.h already included, missing '#pragma once' in HealthSystem.h"
#endif
#define FMP_HealthSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AController;
class UDamageType;
class UHealthSystem;

// ********** Begin Delegate FOnHealthChangedSignature *********************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_HealthSystem_h_9_DELEGATE \
FMP_API void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, UHealthSystem* HealthComp, float Health, float HealthDelta, const UDamageType* DamageType);


// ********** End Delegate FOnHealthChangedSignature ***********************************************

// ********** Begin Class UHealthSystem ************************************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_HealthSystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIncreaseHealth); \
	DECLARE_FUNCTION(execDecreaseHealth); \
	DECLARE_FUNCTION(execHandleHealthChange); \
	DECLARE_FUNCTION(execOnRep_Health);


FMP_API UClass* Z_Construct_UClass_UHealthSystem_NoRegister();

#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_HealthSystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthSystem(); \
	friend struct Z_Construct_UClass_UHealthSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMP_API UClass* Z_Construct_UClass_UHealthSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UHealthSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMP"), Z_Construct_UClass_UHealthSystem_NoRegister) \
	DECLARE_SERIALIZER(UHealthSystem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxHealth=NETFIELD_REP_START, \
		CurrentHealth, \
		NETFIELD_REP_END=CurrentHealth	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_HealthSystem_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHealthSystem(UHealthSystem&&) = delete; \
	UHealthSystem(const UHealthSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthSystem) \
	NO_API virtual ~UHealthSystem();


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_HealthSystem_h_11_PROLOG
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_HealthSystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_HealthSystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_HealthSystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_HealthSystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHealthSystem;

// ********** End Class UHealthSystem **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_HealthSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
