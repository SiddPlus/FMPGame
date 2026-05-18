// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTheGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
FMP_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();
FMP_API UClass* Z_Construct_UClass_ATheGameMode();
FMP_API UClass* Z_Construct_UClass_ATheGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATheGameMode Function CanSpawnMoreEnemiesGlobal **************************
struct Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics
{
	struct TheGameMode_eventCanSpawnMoreEnemiesGlobal_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameMode|Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Checks if the total map population has reached the global ceiling */" },
#endif
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Checks if the total map population has reached the global ceiling" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TheGameMode_eventCanSpawnMoreEnemiesGlobal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TheGameMode_eventCanSpawnMoreEnemiesGlobal_Parms), &Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGameMode, nullptr, "CanSpawnMoreEnemiesGlobal", Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics::TheGameMode_eventCanSpawnMoreEnemiesGlobal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics::TheGameMode_eventCanSpawnMoreEnemiesGlobal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGameMode::execCanSpawnMoreEnemiesGlobal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSpawnMoreEnemiesGlobal();
	P_NATIVE_END;
}
// ********** End Class ATheGameMode Function CanSpawnMoreEnemiesGlobal ****************************

// ********** Begin Class ATheGameMode Function PlayerReadyUp **************************************
struct Z_Construct_UFunction_ATheGameMode_PlayerReadyUp_Statics
{
	struct TheGameMode_eventPlayerReadyUp_Parms
	{
		APlayerController* PC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Round" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Marks a player as ready to start the next round.\n\x09 * @param PC The PlayerController of the player who is ready.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Marks a player as ready to start the next round.\n@param PC The PlayerController of the player who is ready." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATheGameMode_PlayerReadyUp_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TheGameMode_eventPlayerReadyUp_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheGameMode_PlayerReadyUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheGameMode_PlayerReadyUp_Statics::NewProp_PC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGameMode_PlayerReadyUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGameMode_PlayerReadyUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGameMode, nullptr, "PlayerReadyUp", Z_Construct_UFunction_ATheGameMode_PlayerReadyUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGameMode_PlayerReadyUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATheGameMode_PlayerReadyUp_Statics::TheGameMode_eventPlayerReadyUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGameMode_PlayerReadyUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGameMode_PlayerReadyUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATheGameMode_PlayerReadyUp_Statics::TheGameMode_eventPlayerReadyUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATheGameMode_PlayerReadyUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGameMode_PlayerReadyUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGameMode::execPlayerReadyUp)
{
	P_GET_OBJECT(APlayerController,Z_Param_PC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerReadyUp(Z_Param_PC);
	P_NATIVE_END;
}
// ********** End Class ATheGameMode Function PlayerReadyUp ****************************************

// ********** Begin Class ATheGameMode Function RegisterEnemyDespawned *****************************
struct Z_Construct_UFunction_ATheGameMode_RegisterEnemyDespawned_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameMode|Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Call when an enemy dies or is destroyed */" },
#endif
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Call when an enemy dies or is destroyed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGameMode_RegisterEnemyDespawned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGameMode, nullptr, "RegisterEnemyDespawned", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGameMode_RegisterEnemyDespawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGameMode_RegisterEnemyDespawned_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATheGameMode_RegisterEnemyDespawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGameMode_RegisterEnemyDespawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGameMode::execRegisterEnemyDespawned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterEnemyDespawned();
	P_NATIVE_END;
}
// ********** End Class ATheGameMode Function RegisterEnemyDespawned *******************************

// ********** Begin Class ATheGameMode Function RegisterEnemySpawned *******************************
struct Z_Construct_UFunction_ATheGameMode_RegisterEnemySpawned_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameMode|Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Call when an enemy successfully spawns into the map */" },
#endif
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Call when an enemy successfully spawns into the map" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGameMode_RegisterEnemySpawned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGameMode, nullptr, "RegisterEnemySpawned", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGameMode_RegisterEnemySpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGameMode_RegisterEnemySpawned_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATheGameMode_RegisterEnemySpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGameMode_RegisterEnemySpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGameMode::execRegisterEnemySpawned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterEnemySpawned();
	P_NATIVE_END;
}
// ********** End Class ATheGameMode Function RegisterEnemySpawned *********************************

// ********** Begin Class ATheGameMode Function RegisterPlayerDown *********************************
struct Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown_Statics
{
	struct TheGameMode_eventRegisterPlayerDown_Parms
	{
		APlayerController* PC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Registers a player as downed or out of action.\n\x09 * @param PC The PlayerController of the downed player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Registers a player as downed or out of action.\n@param PC The PlayerController of the downed player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TheGameMode_eventRegisterPlayerDown_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown_Statics::NewProp_PC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGameMode, nullptr, "RegisterPlayerDown", Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown_Statics::TheGameMode_eventRegisterPlayerDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown_Statics::TheGameMode_eventRegisterPlayerDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGameMode::execRegisterPlayerDown)
{
	P_GET_OBJECT(APlayerController,Z_Param_PC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterPlayerDown(Z_Param_PC);
	P_NATIVE_END;
}
// ********** End Class ATheGameMode Function RegisterPlayerDown ***********************************

// ********** Begin Class ATheGameMode *************************************************************
void ATheGameMode::StaticRegisterNativesATheGameMode()
{
	UClass* Class = ATheGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanSpawnMoreEnemiesGlobal", &ATheGameMode::execCanSpawnMoreEnemiesGlobal },
		{ "PlayerReadyUp", &ATheGameMode::execPlayerReadyUp },
		{ "RegisterEnemyDespawned", &ATheGameMode::execRegisterEnemyDespawned },
		{ "RegisterEnemySpawned", &ATheGameMode::execRegisterEnemySpawned },
		{ "RegisterPlayerDown", &ATheGameMode::execRegisterPlayerDown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATheGameMode;
UClass* ATheGameMode::GetPrivateStaticClass()
{
	using TClass = ATheGameMode;
	if (!Z_Registration_Info_UClass_ATheGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TheGameMode"),
			Z_Registration_Info_UClass_ATheGameMode.InnerSingleton,
			StaticRegisterNativesATheGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATheGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATheGameMode_NoRegister()
{
	return ATheGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATheGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Game mode class that manages rules, scoring, and round progression.\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheGameMode.h" },
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Game mode class that manages rules, scoring, and round progression." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseRoundDuration_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Base duration for a single round in seconds */" },
#endif
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Base duration for a single round in seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoundSpawnRate_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Rate at which enemies spawn in the current round */" },
#endif
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Rate at which enemies spawn in the current round" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoundMaxEnemies_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Maximum number of enemies that can be active in the current round */" },
#endif
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Maximum number of enemies that can be active in the current round" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalMaxEnemiesLimit_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Hard map-wide ceiling to prevent game crashes, set dynamically by player count */" },
#endif
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Hard map-wide ceiling to prevent game crashes, set dynamically by player count" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalActiveEnemyCount_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Track total globally spawned active enemies currently alive on the map */" },
#endif
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Track total globally spawned active enemies currently alive on the map" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetHealthMult_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Health multiplier of enemies in the current round */" },
#endif
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Health multiplier of enemies in the current round" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSpeedMult_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Speed multiplier of enemies in the current round */" },
#endif
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Speed multiplier of enemies in the current round" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSpawners_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief List of cached enemy spawners in the map */" },
#endif
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief List of cached enemy spawners in the map" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownPlayers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief List of players currently in the downed state */" },
#endif
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief List of players currently in the downed state" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseRoundDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRoundSpawnRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRoundMaxEnemies;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalMaxEnemiesLimit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalActiveEnemyCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetHealthMult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetSpeedMult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedSpawners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedSpawners;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownPlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DownPlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATheGameMode_CanSpawnMoreEnemiesGlobal, "CanSpawnMoreEnemiesGlobal" }, // 594915928
		{ &Z_Construct_UFunction_ATheGameMode_PlayerReadyUp, "PlayerReadyUp" }, // 2178071328
		{ &Z_Construct_UFunction_ATheGameMode_RegisterEnemyDespawned, "RegisterEnemyDespawned" }, // 3721834006
		{ &Z_Construct_UFunction_ATheGameMode_RegisterEnemySpawned, "RegisterEnemySpawned" }, // 724791962
		{ &Z_Construct_UFunction_ATheGameMode_RegisterPlayerDown, "RegisterPlayerDown" }, // 852680447
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATheGameMode_Statics::NewProp_BaseRoundDuration = { "BaseRoundDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameMode, BaseRoundDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseRoundDuration_MetaData), NewProp_BaseRoundDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATheGameMode_Statics::NewProp_CurrentRoundSpawnRate = { "CurrentRoundSpawnRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameMode, CurrentRoundSpawnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRoundSpawnRate_MetaData), NewProp_CurrentRoundSpawnRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATheGameMode_Statics::NewProp_CurrentRoundMaxEnemies = { "CurrentRoundMaxEnemies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameMode, CurrentRoundMaxEnemies), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRoundMaxEnemies_MetaData), NewProp_CurrentRoundMaxEnemies_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATheGameMode_Statics::NewProp_GlobalMaxEnemiesLimit = { "GlobalMaxEnemiesLimit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameMode, GlobalMaxEnemiesLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalMaxEnemiesLimit_MetaData), NewProp_GlobalMaxEnemiesLimit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATheGameMode_Statics::NewProp_GlobalActiveEnemyCount = { "GlobalActiveEnemyCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameMode, GlobalActiveEnemyCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalActiveEnemyCount_MetaData), NewProp_GlobalActiveEnemyCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATheGameMode_Statics::NewProp_TargetHealthMult = { "TargetHealthMult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameMode, TargetHealthMult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetHealthMult_MetaData), NewProp_TargetHealthMult_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATheGameMode_Statics::NewProp_TargetSpeedMult = { "TargetSpeedMult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameMode, TargetSpeedMult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSpeedMult_MetaData), NewProp_TargetSpeedMult_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGameMode_Statics::NewProp_CachedSpawners_Inner = { "CachedSpawners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemySpawner_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATheGameMode_Statics::NewProp_CachedSpawners = { "CachedSpawners", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameMode, CachedSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSpawners_MetaData), NewProp_CachedSpawners_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGameMode_Statics::NewProp_DownPlayers_Inner = { "DownPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATheGameMode_Statics::NewProp_DownPlayers = { "DownPlayers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameMode, DownPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownPlayers_MetaData), NewProp_DownPlayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATheGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_BaseRoundDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_CurrentRoundSpawnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_CurrentRoundMaxEnemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_GlobalMaxEnemiesLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_GlobalActiveEnemyCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_TargetHealthMult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_TargetSpeedMult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_CachedSpawners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_CachedSpawners,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_DownPlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_DownPlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATheGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheGameMode_Statics::ClassParams = {
	&ATheGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATheGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATheGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATheGameMode()
{
	if (!Z_Registration_Info_UClass_ATheGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheGameMode.OuterSingleton, Z_Construct_UClass_ATheGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATheGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATheGameMode);
ATheGameMode::~ATheGameMode() {}
// ********** End Class ATheGameMode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h__Script_FMP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheGameMode, ATheGameMode::StaticClass, TEXT("ATheGameMode"), &Z_Registration_Info_UClass_ATheGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheGameMode), 1013443507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h__Script_FMP_3656858741(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h__Script_FMP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
