// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTheGameState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameState();
FMP_API UClass* Z_Construct_UClass_ATheGameState();
FMP_API UClass* Z_Construct_UClass_ATheGameState_NoRegister();
FMP_API UClass* Z_Construct_UClass_UPerformanceLogger_NoRegister();
FMP_API UFunction* Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature();
FMP_API UFunction* Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FMP();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRoundStateChange ***************************************************
struct Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics
{
	struct _Script_FMP_eventOnRoundStateChange_Parms
	{
		bool IsActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheGameState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics::NewProp_IsActive_SetBit(void* Obj)
{
	((_Script_FMP_eventOnRoundStateChange_Parms*)Obj)->IsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_FMP_eventOnRoundStateChange_Parms), &Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics::NewProp_IsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_FMP, nullptr, "OnRoundStateChange__DelegateSignature", Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics::_Script_FMP_eventOnRoundStateChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics::_Script_FMP_eventOnRoundStateChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRoundStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnRoundStateChange, bool IsActive)
{
	struct _Script_FMP_eventOnRoundStateChange_Parms
	{
		bool IsActive;
	};
	_Script_FMP_eventOnRoundStateChange_Parms Parms;
	Parms.IsActive=IsActive ? true : false;
	OnRoundStateChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRoundStateChange *****************************************************

// ********** Begin Delegate FOnPlayerReadyChange **************************************************
struct Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature_Statics
{
	struct _Script_FMP_eventOnPlayerReadyChange_Parms
	{
		int32 CurrentReadyPlayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentReadyPlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature_Statics::NewProp_CurrentReadyPlayers = { "CurrentReadyPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMP_eventOnPlayerReadyChange_Parms, CurrentReadyPlayers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature_Statics::NewProp_CurrentReadyPlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_FMP, nullptr, "OnPlayerReadyChange__DelegateSignature", Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature_Statics::_Script_FMP_eventOnPlayerReadyChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature_Statics::_Script_FMP_eventOnPlayerReadyChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerReadyChange_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerReadyChange, int32 CurrentReadyPlayers)
{
	struct _Script_FMP_eventOnPlayerReadyChange_Parms
	{
		int32 CurrentReadyPlayers;
	};
	_Script_FMP_eventOnPlayerReadyChange_Parms Parms;
	Parms.CurrentReadyPlayers=CurrentReadyPlayers;
	OnPlayerReadyChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPlayerReadyChange ****************************************************

// ********** Begin Class ATheGameState Function OnRep_IsRoundActive *******************************
struct Z_Construct_UFunction_ATheGameState_OnRep_IsRoundActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGameState_OnRep_IsRoundActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGameState, nullptr, "OnRep_IsRoundActive", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGameState_OnRep_IsRoundActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGameState_OnRep_IsRoundActive_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATheGameState_OnRep_IsRoundActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGameState_OnRep_IsRoundActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGameState::execOnRep_IsRoundActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsRoundActive();
	P_NATIVE_END;
}
// ********** End Class ATheGameState Function OnRep_IsRoundActive *********************************

// ********** Begin Class ATheGameState Function OnRep_ReadyPlayers ********************************
struct Z_Construct_UFunction_ATheGameState_OnRep_ReadyPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGameState_OnRep_ReadyPlayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGameState, nullptr, "OnRep_ReadyPlayers", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGameState_OnRep_ReadyPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGameState_OnRep_ReadyPlayers_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATheGameState_OnRep_ReadyPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGameState_OnRep_ReadyPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGameState::execOnRep_ReadyPlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ReadyPlayers();
	P_NATIVE_END;
}
// ********** End Class ATheGameState Function OnRep_ReadyPlayers **********************************

// ********** Begin Class ATheGameState ************************************************************
void ATheGameState::StaticRegisterNativesATheGameState()
{
	UClass* Class = ATheGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_IsRoundActive", &ATheGameState::execOnRep_IsRoundActive },
		{ "OnRep_ReadyPlayers", &ATheGameState::execOnRep_ReadyPlayers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATheGameState;
UClass* ATheGameState::GetPrivateStaticClass()
{
	using TClass = ATheGameState;
	if (!Z_Registration_Info_UClass_ATheGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TheGameState"),
			Z_Registration_Info_UClass_ATheGameState.InnerSingleton,
			StaticRegisterNativesATheGameState,
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
	return Z_Registration_Info_UClass_ATheGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_ATheGameState_NoRegister()
{
	return ATheGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATheGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheGameState.h" },
		{ "ModuleRelativePath", "Public/TheGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerformanceLogger_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TheGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRoundActive_MetaData[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "Public/TheGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundTimer_MetaData[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "Public/TheGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoundNumber_MetaData[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "Public/TheGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadyPlayersCount_MetaData[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "Public/TheGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalPlayersInGame_MetaData[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "Public/TheGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRoundStateChange_MetaData[] = {
		{ "Category", "Round Management|Events" },
		{ "ModuleRelativePath", "Public/TheGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerReadyChange_MetaData[] = {
		{ "Category", "Round Management|Events" },
		{ "ModuleRelativePath", "Public/TheGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerformanceLogger;
	static void NewProp_bIsRoundActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRoundActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundTimer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRoundNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReadyPlayersCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalPlayersInGame;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoundStateChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerReadyChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATheGameState_OnRep_IsRoundActive, "OnRep_IsRoundActive" }, // 553750608
		{ &Z_Construct_UFunction_ATheGameState_OnRep_ReadyPlayers, "OnRep_ReadyPlayers" }, // 2305477266
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGameState_Statics::NewProp_PerformanceLogger = { "PerformanceLogger", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameState, PerformanceLogger), Z_Construct_UClass_UPerformanceLogger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerformanceLogger_MetaData), NewProp_PerformanceLogger_MetaData) };
void Z_Construct_UClass_ATheGameState_Statics::NewProp_bIsRoundActive_SetBit(void* Obj)
{
	((ATheGameState*)Obj)->bIsRoundActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATheGameState_Statics::NewProp_bIsRoundActive = { "bIsRoundActive", "OnRep_IsRoundActive", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATheGameState), &Z_Construct_UClass_ATheGameState_Statics::NewProp_bIsRoundActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRoundActive_MetaData), NewProp_bIsRoundActive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATheGameState_Statics::NewProp_RoundTimer = { "RoundTimer", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameState, RoundTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundTimer_MetaData), NewProp_RoundTimer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATheGameState_Statics::NewProp_CurrentRoundNumber = { "CurrentRoundNumber", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameState, CurrentRoundNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRoundNumber_MetaData), NewProp_CurrentRoundNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATheGameState_Statics::NewProp_ReadyPlayersCount = { "ReadyPlayersCount", "OnRep_ReadyPlayers", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameState, ReadyPlayersCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadyPlayersCount_MetaData), NewProp_ReadyPlayersCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATheGameState_Statics::NewProp_TotalPlayersInGame = { "TotalPlayersInGame", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameState, TotalPlayersInGame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalPlayersInGame_MetaData), NewProp_TotalPlayersInGame_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATheGameState_Statics::NewProp_OnRoundStateChange = { "OnRoundStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameState, OnRoundStateChange), Z_Construct_UDelegateFunction_FMP_OnRoundStateChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRoundStateChange_MetaData), NewProp_OnRoundStateChange_MetaData) }; // 1407912862
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATheGameState_Statics::NewProp_OnPlayerReadyChange = { "OnPlayerReadyChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameState, OnPlayerReadyChange), Z_Construct_UDelegateFunction_FMP_OnPlayerReadyChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerReadyChange_MetaData), NewProp_OnPlayerReadyChange_MetaData) }; // 1418456057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATheGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameState_Statics::NewProp_PerformanceLogger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameState_Statics::NewProp_bIsRoundActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameState_Statics::NewProp_RoundTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameState_Statics::NewProp_CurrentRoundNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameState_Statics::NewProp_ReadyPlayersCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameState_Statics::NewProp_TotalPlayersInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameState_Statics::NewProp_OnRoundStateChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameState_Statics::NewProp_OnPlayerReadyChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATheGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheGameState_Statics::ClassParams = {
	&ATheGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATheGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATheGameState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATheGameState()
{
	if (!Z_Registration_Info_UClass_ATheGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheGameState.OuterSingleton, Z_Construct_UClass_ATheGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATheGameState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ATheGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_bIsRoundActive(TEXT("bIsRoundActive"));
	static FName Name_RoundTimer(TEXT("RoundTimer"));
	static FName Name_CurrentRoundNumber(TEXT("CurrentRoundNumber"));
	static FName Name_ReadyPlayersCount(TEXT("ReadyPlayersCount"));
	static FName Name_TotalPlayersInGame(TEXT("TotalPlayersInGame"));
	const bool bIsValid = true
		&& Name_bIsRoundActive == ClassReps[(int32)ENetFields_Private::bIsRoundActive].Property->GetFName()
		&& Name_RoundTimer == ClassReps[(int32)ENetFields_Private::RoundTimer].Property->GetFName()
		&& Name_CurrentRoundNumber == ClassReps[(int32)ENetFields_Private::CurrentRoundNumber].Property->GetFName()
		&& Name_ReadyPlayersCount == ClassReps[(int32)ENetFields_Private::ReadyPlayersCount].Property->GetFName()
		&& Name_TotalPlayersInGame == ClassReps[(int32)ENetFields_Private::TotalPlayersInGame].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATheGameState"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ATheGameState);
ATheGameState::~ATheGameState() {}
// ********** End Class ATheGameState **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h__Script_FMP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheGameState, ATheGameState::StaticClass, TEXT("ATheGameState"), &Z_Registration_Info_UClass_ATheGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheGameState), 2526161185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h__Script_FMP_3697783942(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h__Script_FMP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
