// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralGeneration.h"

#ifdef FMP_ProceduralGeneration_generated_h
#error "ProceduralGeneration.generated.h already included, missing '#pragma once' in ProceduralGeneration.h"
#endif
#define FMP_ProceduralGeneration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMaterialInterface;

// ********** Begin ScriptStruct FSpawnedObjectInfo ************************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnedObjectInfo_Statics; \
	FMP_API static class UScriptStruct* StaticStruct();


struct FSpawnedObjectInfo;
// ********** End ScriptStruct FSpawnedObjectInfo **************************************************

// ********** Begin ScriptStruct FActorPopulationSetting *******************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorPopulationSetting_Statics; \
	FMP_API static class UScriptStruct* StaticStruct();


struct FActorPopulationSetting;
// ********** End ScriptStruct FActorPopulationSetting *********************************************

// ********** Begin ScriptStruct FMeshPopulationSetting ********************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics; \
	FMP_API static class UScriptStruct* StaticStruct();


struct FMeshPopulationSetting;
// ********** End ScriptStruct FMeshPopulationSetting **********************************************

// ********** Begin ScriptStruct FBorderMeshSpawnSetting *******************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics; \
	FMP_API static class UScriptStruct* StaticStruct();


struct FBorderMeshSpawnSetting;
// ********** End ScriptStruct FBorderMeshSpawnSetting *********************************************

// ********** Begin ScriptStruct FBorderActorSpawnSetting ******************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics; \
	FMP_API static class UScriptStruct* StaticStruct();


struct FBorderActorSpawnSetting;
// ********** End ScriptStruct FBorderActorSpawnSetting ********************************************

// ********** Begin Class AProceduralGeneration ****************************************************
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayerSpawnPoint); \
	DECLARE_FUNCTION(execApplyMaterialToTerrain); \
	DECLARE_FUNCTION(execOnRep_Seed);


FMP_API UClass* Z_Construct_UClass_AProceduralGeneration_NoRegister();

#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProceduralGeneration(); \
	friend struct Z_Construct_UClass_AProceduralGeneration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FMP_API UClass* Z_Construct_UClass_AProceduralGeneration_NoRegister(); \
public: \
	DECLARE_CLASS2(AProceduralGeneration, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMP"), Z_Construct_UClass_AProceduralGeneration_NoRegister) \
	DECLARE_SERIALIZER(AProceduralGeneration) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Seed=NETFIELD_REP_START, \
		NETFIELD_REP_END=Seed	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h_150_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProceduralGeneration(AProceduralGeneration&&) = delete; \
	AProceduralGeneration(const AProceduralGeneration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceduralGeneration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralGeneration); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProceduralGeneration) \
	NO_API virtual ~AProceduralGeneration();


#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h_147_PROLOG
#define FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h_150_INCLASS_NO_PURE_DECLS \
	FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProceduralGeneration;

// ********** End Class AProceduralGeneration ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h

// ********** Begin Enum EBorder *******************************************************************
#define FOREACH_ENUM_EBORDER(op) \
	op(EBorder::North) \
	op(EBorder::South) \
	op(EBorder::East) \
	op(EBorder::West) 

enum class EBorder : uint8;
template<> struct TIsUEnumClass<EBorder> { enum { Value = true }; };
template<> FMP_API UEnum* StaticEnum<EBorder>();
// ********** End Enum EBorder *********************************************************************

// ********** Begin Enum EBorderSpawnLocation ******************************************************
#define FOREACH_ENUM_EBORDERSPAWNLOCATION(op) \
	op(EBorderSpawnLocation::Middle) \
	op(EBorderSpawnLocation::Left) \
	op(EBorderSpawnLocation::Right) 

enum class EBorderSpawnLocation : uint8;
template<> struct TIsUEnumClass<EBorderSpawnLocation> { enum { Value = true }; };
template<> FMP_API UEnum* StaticEnum<EBorderSpawnLocation>();
// ********** End Enum EBorderSpawnLocation ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
