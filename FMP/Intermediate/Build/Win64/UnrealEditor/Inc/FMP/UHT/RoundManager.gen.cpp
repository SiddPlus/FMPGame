// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoundManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRoundManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
FMP_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();
FMP_API UClass* Z_Construct_UClass_ARoundManager();
FMP_API UClass* Z_Construct_UClass_ARoundManager_NoRegister();
FMP_API UFunction* Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature();
FMP_API UFunction* Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FMP();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRoundStateChanged **************************************************
struct Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics
{
	struct _Script_FMP_eventOnRoundStateChanged_Parms
	{
		bool IsActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics::NewProp_IsActive_SetBit(void* Obj)
{
	((_Script_FMP_eventOnRoundStateChanged_Parms*)Obj)->IsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_FMP_eventOnRoundStateChanged_Parms), &Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics::NewProp_IsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_FMP, nullptr, "OnRoundStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics::_Script_FMP_eventOnRoundStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics::_Script_FMP_eventOnRoundStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRoundStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRoundStateChanged, bool IsActive)
{
	struct _Script_FMP_eventOnRoundStateChanged_Parms
	{
		bool IsActive;
	};
	_Script_FMP_eventOnRoundStateChanged_Parms Parms;
	Parms.IsActive=IsActive ? true : false;
	OnRoundStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRoundStateChanged ****************************************************

// ********** Begin Delegate FOnPlayerReadyChanged *************************************************
struct Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature_Statics
{
	struct _Script_FMP_eventOnPlayerReadyChanged_Parms
	{
		int32 CurrentReadyPlayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentReadyPlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature_Statics::NewProp_CurrentReadyPlayers = { "CurrentReadyPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMP_eventOnPlayerReadyChanged_Parms, CurrentReadyPlayers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature_Statics::NewProp_CurrentReadyPlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_FMP, nullptr, "OnPlayerReadyChanged__DelegateSignature", Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature_Statics::_Script_FMP_eventOnPlayerReadyChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature_Statics::_Script_FMP_eventOnPlayerReadyChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerReadyChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerReadyChanged, int32 CurrentReadyPlayers)
{
	struct _Script_FMP_eventOnPlayerReadyChanged_Parms
	{
		int32 CurrentReadyPlayers;
	};
	_Script_FMP_eventOnPlayerReadyChanged_Parms Parms;
	Parms.CurrentReadyPlayers=CurrentReadyPlayers;
	OnPlayerReadyChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPlayerReadyChanged ***************************************************

// ********** Begin Class ARoundManager Function BeginNewRound *************************************
struct Z_Construct_UFunction_ARoundManager_BeginNewRound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundManager_BeginNewRound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundManager, nullptr, "BeginNewRound", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_BeginNewRound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundManager_BeginNewRound_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARoundManager_BeginNewRound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundManager_BeginNewRound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundManager::execBeginNewRound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginNewRound();
	P_NATIVE_END;
}
// ********** End Class ARoundManager Function BeginNewRound ***************************************

// ********** Begin Class ARoundManager Function GetCurrentRoundNumber *****************************
struct Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber_Statics
{
	struct RoundManager_eventGetCurrentRoundNumber_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoundManager_eventGetCurrentRoundNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundManager, nullptr, "GetCurrentRoundNumber", Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber_Statics::RoundManager_eventGetCurrentRoundNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber_Statics::RoundManager_eventGetCurrentRoundNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundManager::execGetCurrentRoundNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentRoundNumber();
	P_NATIVE_END;
}
// ********** End Class ARoundManager Function GetCurrentRoundNumber *******************************

// ********** Begin Class ARoundManager Function GetRemainingTime **********************************
struct Z_Construct_UFunction_ARoundManager_GetRemainingTime_Statics
{
	struct RoundManager_eventGetRemainingTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARoundManager_GetRemainingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoundManager_eventGetRemainingTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundManager_GetRemainingTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundManager_GetRemainingTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_GetRemainingTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundManager_GetRemainingTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundManager, nullptr, "GetRemainingTime", Z_Construct_UFunction_ARoundManager_GetRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_GetRemainingTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoundManager_GetRemainingTime_Statics::RoundManager_eventGetRemainingTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_GetRemainingTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundManager_GetRemainingTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARoundManager_GetRemainingTime_Statics::RoundManager_eventGetRemainingTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoundManager_GetRemainingTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundManager_GetRemainingTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundManager::execGetRemainingTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRemainingTime();
	P_NATIVE_END;
}
// ********** End Class ARoundManager Function GetRemainingTime ************************************

// ********** Begin Class ARoundManager Function IsRoundActive *************************************
struct Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics
{
	struct RoundManager_eventIsRoundActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoundManager_eventIsRoundActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoundManager_eventIsRoundActive_Parms), &Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundManager, nullptr, "IsRoundActive", Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics::RoundManager_eventIsRoundActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics::RoundManager_eventIsRoundActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoundManager_IsRoundActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundManager_IsRoundActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundManager::execIsRoundActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRoundActive();
	P_NATIVE_END;
}
// ********** End Class ARoundManager Function IsRoundActive ***************************************

// ********** Begin Class ARoundManager Function OnRep_IsRoundActive *******************************
struct Z_Construct_UFunction_ARoundManager_OnRep_IsRoundActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundManager_OnRep_IsRoundActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundManager, nullptr, "OnRep_IsRoundActive", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_OnRep_IsRoundActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundManager_OnRep_IsRoundActive_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARoundManager_OnRep_IsRoundActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundManager_OnRep_IsRoundActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundManager::execOnRep_IsRoundActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsRoundActive();
	P_NATIVE_END;
}
// ********** End Class ARoundManager Function OnRep_IsRoundActive *********************************

// ********** Begin Class ARoundManager Function OnRep_ReadyPlayers ********************************
struct Z_Construct_UFunction_ARoundManager_OnRep_ReadyPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundManager_OnRep_ReadyPlayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundManager, nullptr, "OnRep_ReadyPlayers", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_OnRep_ReadyPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundManager_OnRep_ReadyPlayers_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARoundManager_OnRep_ReadyPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundManager_OnRep_ReadyPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundManager::execOnRep_ReadyPlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ReadyPlayers();
	P_NATIVE_END;
}
// ********** End Class ARoundManager Function OnRep_ReadyPlayers **********************************

// ********** Begin Class ARoundManager Function OnRep_RoundTimer **********************************
struct Z_Construct_UFunction_ARoundManager_OnRep_RoundTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Calls the Blueprint event delegate\n" },
#endif
		{ "ModuleRelativePath", "Public/RoundManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls the Blueprint event delegate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundManager_OnRep_RoundTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundManager, nullptr, "OnRep_RoundTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_OnRep_RoundTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundManager_OnRep_RoundTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARoundManager_OnRep_RoundTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundManager_OnRep_RoundTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundManager::execOnRep_RoundTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RoundTimer();
	P_NATIVE_END;
}
// ********** End Class ARoundManager Function OnRep_RoundTimer ************************************

// ********** Begin Class ARoundManager Function Server_BeginNewRound ******************************
static FName NAME_ARoundManager_Server_BeginNewRound = FName(TEXT("Server_BeginNewRound"));
void ARoundManager::Server_BeginNewRound()
{
	UFunction* Func = FindFunctionChecked(NAME_ARoundManager_Server_BeginNewRound);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ARoundManager_Server_BeginNewRound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundManager_Server_BeginNewRound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundManager, nullptr, "Server_BeginNewRound", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_Server_BeginNewRound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundManager_Server_BeginNewRound_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARoundManager_Server_BeginNewRound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundManager_Server_BeginNewRound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundManager::execServer_BeginNewRound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_BeginNewRound_Implementation();
	P_NATIVE_END;
}
// ********** End Class ARoundManager Function Server_BeginNewRound ********************************

// ********** Begin Class ARoundManager Function Server_PlayerReadyUp ******************************
struct RoundManager_eventServer_PlayerReadyUp_Parms
{
	APlayerController* PlayerController;
};
static FName NAME_ARoundManager_Server_PlayerReadyUp = FName(TEXT("Server_PlayerReadyUp"));
void ARoundManager::Server_PlayerReadyUp(APlayerController* PlayerController)
{
	RoundManager_eventServer_PlayerReadyUp_Parms Parms;
	Parms.PlayerController=PlayerController;
	UFunction* Func = FindFunctionChecked(NAME_ARoundManager_Server_PlayerReadyUp);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARoundManager_Server_PlayerReadyUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoundManager_Server_PlayerReadyUp_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoundManager_eventServer_PlayerReadyUp_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundManager_Server_PlayerReadyUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundManager_Server_PlayerReadyUp_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_Server_PlayerReadyUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundManager_Server_PlayerReadyUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARoundManager, nullptr, "Server_PlayerReadyUp", Z_Construct_UFunction_ARoundManager_Server_PlayerReadyUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_Server_PlayerReadyUp_Statics::PropPointers), sizeof(RoundManager_eventServer_PlayerReadyUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundManager_Server_PlayerReadyUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoundManager_Server_PlayerReadyUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RoundManager_eventServer_PlayerReadyUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoundManager_Server_PlayerReadyUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundManager_Server_PlayerReadyUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoundManager::execServer_PlayerReadyUp)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_PlayerReadyUp_Implementation(Z_Param_PlayerController);
	P_NATIVE_END;
}
// ********** End Class ARoundManager Function Server_PlayerReadyUp ********************************

// ********** Begin Class ARoundManager ************************************************************
void ARoundManager::StaticRegisterNativesARoundManager()
{
	UClass* Class = ARoundManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginNewRound", &ARoundManager::execBeginNewRound },
		{ "GetCurrentRoundNumber", &ARoundManager::execGetCurrentRoundNumber },
		{ "GetRemainingTime", &ARoundManager::execGetRemainingTime },
		{ "IsRoundActive", &ARoundManager::execIsRoundActive },
		{ "OnRep_IsRoundActive", &ARoundManager::execOnRep_IsRoundActive },
		{ "OnRep_ReadyPlayers", &ARoundManager::execOnRep_ReadyPlayers },
		{ "OnRep_RoundTimer", &ARoundManager::execOnRep_RoundTimer },
		{ "Server_BeginNewRound", &ARoundManager::execServer_BeginNewRound },
		{ "Server_PlayerReadyUp", &ARoundManager::execServer_PlayerReadyUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARoundManager;
UClass* ARoundManager::GetPrivateStaticClass()
{
	using TClass = ARoundManager;
	if (!Z_Registration_Info_UClass_ARoundManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RoundManager"),
			Z_Registration_Info_UClass_ARoundManager.InnerSingleton,
			StaticRegisterNativesARoundManager,
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
	return Z_Registration_Info_UClass_ARoundManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ARoundManager_NoRegister()
{
	return ARoundManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARoundManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RoundManager.h" },
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundDuration_MetaData[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoundSpawnRate_MetaData[] = {
		{ "Category", "Round Management|Spawning" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoundMaxEnemies_MetaData[] = {
		{ "Category", "Round Management|Spawning" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadyPlayersCount_MetaData[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalPlayersInGame_MetaData[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRoundStateChanged_MetaData[] = {
		{ "Category", "Round Management|Events" },
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerReadyChanged_MetaData[] = {
		{ "Category", "Round Management|Events" },
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRoundActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasRoundEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoundNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllEnemySpawners_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadyPlayersSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRoundSpawnRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRoundMaxEnemies;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReadyPlayersCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalPlayersInGame;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoundStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerReadyChanged;
	static void NewProp_bIsRoundActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRoundActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundTimer;
	static void NewProp_bHasRoundEnded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRoundEnded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRoundNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllEnemySpawners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllEnemySpawners;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadyPlayersSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReadyPlayersSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoundManager_BeginNewRound, "BeginNewRound" }, // 304577051
		{ &Z_Construct_UFunction_ARoundManager_GetCurrentRoundNumber, "GetCurrentRoundNumber" }, // 2980271853
		{ &Z_Construct_UFunction_ARoundManager_GetRemainingTime, "GetRemainingTime" }, // 2707733129
		{ &Z_Construct_UFunction_ARoundManager_IsRoundActive, "IsRoundActive" }, // 3534383667
		{ &Z_Construct_UFunction_ARoundManager_OnRep_IsRoundActive, "OnRep_IsRoundActive" }, // 1059117315
		{ &Z_Construct_UFunction_ARoundManager_OnRep_ReadyPlayers, "OnRep_ReadyPlayers" }, // 261544180
		{ &Z_Construct_UFunction_ARoundManager_OnRep_RoundTimer, "OnRep_RoundTimer" }, // 3864482630
		{ &Z_Construct_UFunction_ARoundManager_Server_BeginNewRound, "Server_BeginNewRound" }, // 2847664847
		{ &Z_Construct_UFunction_ARoundManager_Server_PlayerReadyUp, "Server_PlayerReadyUp" }, // 2444841154
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoundManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_RoundDuration = { "RoundDuration", nullptr, (EPropertyFlags)0x0010000000000021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundManager, RoundDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundDuration_MetaData), NewProp_RoundDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_CurrentRoundSpawnRate = { "CurrentRoundSpawnRate", nullptr, (EPropertyFlags)0x0010000000000021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundManager, CurrentRoundSpawnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRoundSpawnRate_MetaData), NewProp_CurrentRoundSpawnRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_CurrentRoundMaxEnemies = { "CurrentRoundMaxEnemies", nullptr, (EPropertyFlags)0x0010000000000021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundManager, CurrentRoundMaxEnemies), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRoundMaxEnemies_MetaData), NewProp_CurrentRoundMaxEnemies_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_ReadyPlayersCount = { "ReadyPlayersCount", "OnRep_ReadyPlayers", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundManager, ReadyPlayersCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadyPlayersCount_MetaData), NewProp_ReadyPlayersCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_TotalPlayersInGame = { "TotalPlayersInGame", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundManager, TotalPlayersInGame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalPlayersInGame_MetaData), NewProp_TotalPlayersInGame_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_OnRoundStateChanged = { "OnRoundStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundManager, OnRoundStateChanged), Z_Construct_UDelegateFunction_FMP_OnRoundStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRoundStateChanged_MetaData), NewProp_OnRoundStateChanged_MetaData) }; // 3220125843
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_OnPlayerReadyChanged = { "OnPlayerReadyChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundManager, OnPlayerReadyChanged), Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerReadyChanged_MetaData), NewProp_OnPlayerReadyChanged_MetaData) }; // 1718373453
void Z_Construct_UClass_ARoundManager_Statics::NewProp_bIsRoundActive_SetBit(void* Obj)
{
	((ARoundManager*)Obj)->bIsRoundActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_bIsRoundActive = { "bIsRoundActive", "OnRep_IsRoundActive", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARoundManager), &Z_Construct_UClass_ARoundManager_Statics::NewProp_bIsRoundActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRoundActive_MetaData), NewProp_bIsRoundActive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_RoundTimer = { "RoundTimer", "OnRep_RoundTimer", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundManager, RoundTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundTimer_MetaData), NewProp_RoundTimer_MetaData) };
void Z_Construct_UClass_ARoundManager_Statics::NewProp_bHasRoundEnded_SetBit(void* Obj)
{
	((ARoundManager*)Obj)->bHasRoundEnded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_bHasRoundEnded = { "bHasRoundEnded", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARoundManager), &Z_Construct_UClass_ARoundManager_Statics::NewProp_bHasRoundEnded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasRoundEnded_MetaData), NewProp_bHasRoundEnded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_CurrentRoundNumber = { "CurrentRoundNumber", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundManager, CurrentRoundNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRoundNumber_MetaData), NewProp_CurrentRoundNumber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_AllEnemySpawners_Inner = { "AllEnemySpawners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemySpawner_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_AllEnemySpawners = { "AllEnemySpawners", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundManager, AllEnemySpawners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllEnemySpawners_MetaData), NewProp_AllEnemySpawners_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_ReadyPlayersSet_ElementProp = { "ReadyPlayersSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ARoundManager_Statics::NewProp_ReadyPlayersSet = { "ReadyPlayersSet", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundManager, ReadyPlayersSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadyPlayersSet_MetaData), NewProp_ReadyPlayersSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoundManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_RoundDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_CurrentRoundSpawnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_CurrentRoundMaxEnemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_ReadyPlayersCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_TotalPlayersInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_OnRoundStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_OnPlayerReadyChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_bIsRoundActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_RoundTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_bHasRoundEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_CurrentRoundNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_AllEnemySpawners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_AllEnemySpawners,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_ReadyPlayersSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundManager_Statics::NewProp_ReadyPlayersSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoundManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARoundManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoundManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoundManager_Statics::ClassParams = {
	&ARoundManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARoundManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARoundManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoundManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoundManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARoundManager()
{
	if (!Z_Registration_Info_UClass_ARoundManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoundManager.OuterSingleton, Z_Construct_UClass_ARoundManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoundManager.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ARoundManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_RoundDuration(TEXT("RoundDuration"));
	static FName Name_CurrentRoundSpawnRate(TEXT("CurrentRoundSpawnRate"));
	static FName Name_CurrentRoundMaxEnemies(TEXT("CurrentRoundMaxEnemies"));
	static FName Name_ReadyPlayersCount(TEXT("ReadyPlayersCount"));
	static FName Name_TotalPlayersInGame(TEXT("TotalPlayersInGame"));
	static FName Name_bIsRoundActive(TEXT("bIsRoundActive"));
	static FName Name_RoundTimer(TEXT("RoundTimer"));
	static FName Name_CurrentRoundNumber(TEXT("CurrentRoundNumber"));
	const bool bIsValid = true
		&& Name_RoundDuration == ClassReps[(int32)ENetFields_Private::RoundDuration].Property->GetFName()
		&& Name_CurrentRoundSpawnRate == ClassReps[(int32)ENetFields_Private::CurrentRoundSpawnRate].Property->GetFName()
		&& Name_CurrentRoundMaxEnemies == ClassReps[(int32)ENetFields_Private::CurrentRoundMaxEnemies].Property->GetFName()
		&& Name_ReadyPlayersCount == ClassReps[(int32)ENetFields_Private::ReadyPlayersCount].Property->GetFName()
		&& Name_TotalPlayersInGame == ClassReps[(int32)ENetFields_Private::TotalPlayersInGame].Property->GetFName()
		&& Name_bIsRoundActive == ClassReps[(int32)ENetFields_Private::bIsRoundActive].Property->GetFName()
		&& Name_RoundTimer == ClassReps[(int32)ENetFields_Private::RoundTimer].Property->GetFName()
		&& Name_CurrentRoundNumber == ClassReps[(int32)ENetFields_Private::CurrentRoundNumber].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARoundManager"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ARoundManager);
ARoundManager::~ARoundManager() {}
// ********** End Class ARoundManager **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_RoundManager_h__Script_FMP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoundManager, ARoundManager::StaticClass, TEXT("ARoundManager"), &Z_Registration_Info_UClass_ARoundManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoundManager), 801490752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_RoundManager_h__Script_FMP_548083884(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_RoundManager_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_RoundManager_h__Script_FMP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
