// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TheGameMode.h"

#ifdef FMP_TheGameMode_generated_h
#error "TheGameMode.generated.h already included, missing '#pragma once' in TheGameMode.h"
#endif
#define FMP_TheGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATheGameMode *************************************************************
FMP_API UClass* Z_Construct_UClass_ATheGameMode_NoRegister();

#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheGameMode(); \
	friend struct Z_Construct_UClass_ATheGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMP_API UClass* Z_Construct_UClass_ATheGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ATheGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMP"), Z_Construct_UClass_ATheGameMode_NoRegister) \
	DECLARE_SERIALIZER(ATheGameMode)


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATheGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATheGameMode(ATheGameMode&&) = delete; \
	ATheGameMode(const ATheGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATheGameMode) \
	NO_API virtual ~ATheGameMode();


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h_12_PROLOG
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATheGameMode;

// ********** End Class ATheGameMode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
