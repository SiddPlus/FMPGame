// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FMPPlayerController.h"

#ifdef FMP_FMPPlayerController_generated_h
#error "FMPPlayerController.generated.h already included, missing '#pragma once' in FMPPlayerController.h"
#endif
#define FMP_FMPPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFMPPlayerController *****************************************************
FMP_API UClass* Z_Construct_UClass_AFMPPlayerController_NoRegister();

#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFMPPlayerController(); \
	friend struct Z_Construct_UClass_AFMPPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMP_API UClass* Z_Construct_UClass_AFMPPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AFMPPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMP"), Z_Construct_UClass_AFMPPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AFMPPlayerController)


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFMPPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFMPPlayerController(AFMPPlayerController&&) = delete; \
	AFMPPlayerController(const AFMPPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFMPPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFMPPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFMPPlayerController) \
	NO_API virtual ~AFMPPlayerController();


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPPlayerController_h_16_PROLOG
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFMPPlayerController;

// ********** End Class AFMPPlayerController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
