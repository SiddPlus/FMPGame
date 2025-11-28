// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FMPGameMode.h"

#ifdef FMP_FMPGameMode_generated_h
#error "FMPGameMode.generated.h already included, missing '#pragma once' in FMPGameMode.h"
#endif
#define FMP_FMPGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFMPGameMode *************************************************************
FMP_API UClass* Z_Construct_UClass_AFMPGameMode_NoRegister();

#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFMPGameMode(); \
	friend struct Z_Construct_UClass_AFMPGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMP_API UClass* Z_Construct_UClass_AFMPGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AFMPGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMP"), Z_Construct_UClass_AFMPGameMode_NoRegister) \
	DECLARE_SERIALIZER(AFMPGameMode)


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFMPGameMode(AFMPGameMode&&) = delete; \
	AFMPGameMode(const AFMPGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFMPGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFMPGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFMPGameMode) \
	NO_API virtual ~AFMPGameMode();


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPGameMode_h_12_PROLOG
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFMPGameMode;

// ********** End Class AFMPGameMode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
