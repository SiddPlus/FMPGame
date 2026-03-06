// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMPGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFMPGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
FMP_API UClass* Z_Construct_UClass_AFMPGameMode();
FMP_API UClass* Z_Construct_UClass_AFMPGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFMPGameMode Function PlayerReadyUp **************************************
struct Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp_Statics
{
	struct FMPGameMode_eventPlayerReadyUp_Parms
	{
		APlayerController* PC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "FMPGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMPGameMode_eventPlayerReadyUp_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp_Statics::NewProp_PC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFMPGameMode, nullptr, "PlayerReadyUp", Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp_Statics::FMPGameMode_eventPlayerReadyUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp_Statics::FMPGameMode_eventPlayerReadyUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFMPGameMode::execPlayerReadyUp)
{
	P_GET_OBJECT(APlayerController,Z_Param_PC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerReadyUp(Z_Param_PC);
	P_NATIVE_END;
}
// ********** End Class AFMPGameMode Function PlayerReadyUp ****************************************

// ********** Begin Class AFMPGameMode *************************************************************
void AFMPGameMode::StaticRegisterNativesAFMPGameMode()
{
	UClass* Class = AFMPGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayerReadyUp", &AFMPGameMode::execPlayerReadyUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFMPGameMode;
UClass* AFMPGameMode::GetPrivateStaticClass()
{
	using TClass = AFMPGameMode;
	if (!Z_Registration_Info_UClass_AFMPGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FMPGameMode"),
			Z_Registration_Info_UClass_AFMPGameMode.InnerSingleton,
			StaticRegisterNativesAFMPGameMode,
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
	return Z_Registration_Info_UClass_AFMPGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AFMPGameMode_NoRegister()
{
	return AFMPGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFMPGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FMPGameMode.h" },
		{ "ModuleRelativePath", "FMPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundDuration_MetaData[] = {
		{ "Category", "Round Management" },
		{ "ModuleRelativePath", "FMPGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoundSpawnRate_MetaData[] = {
		{ "Category", "Round Management|Spawning" },
		{ "ModuleRelativePath", "FMPGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoundMaxEnemies_MetaData[] = {
		{ "Category", "Round Management|Spawning" },
		{ "ModuleRelativePath", "FMPGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRoundSpawnRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRoundMaxEnemies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFMPGameMode_PlayerReadyUp, "PlayerReadyUp" }, // 3261295712
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFMPGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFMPGameMode_Statics::NewProp_RoundDuration = { "RoundDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFMPGameMode, RoundDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundDuration_MetaData), NewProp_RoundDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFMPGameMode_Statics::NewProp_CurrentRoundSpawnRate = { "CurrentRoundSpawnRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFMPGameMode, CurrentRoundSpawnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRoundSpawnRate_MetaData), NewProp_CurrentRoundSpawnRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFMPGameMode_Statics::NewProp_CurrentRoundMaxEnemies = { "CurrentRoundMaxEnemies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFMPGameMode, CurrentRoundMaxEnemies), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRoundMaxEnemies_MetaData), NewProp_CurrentRoundMaxEnemies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFMPGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFMPGameMode_Statics::NewProp_RoundDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFMPGameMode_Statics::NewProp_CurrentRoundSpawnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFMPGameMode_Statics::NewProp_CurrentRoundMaxEnemies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFMPGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFMPGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFMPGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFMPGameMode_Statics::ClassParams = {
	&AFMPGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFMPGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFMPGameMode_Statics::PropPointers),
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFMPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFMPGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFMPGameMode()
{
	if (!Z_Registration_Info_UClass_AFMPGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFMPGameMode.OuterSingleton, Z_Construct_UClass_AFMPGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFMPGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFMPGameMode);
AFMPGameMode::~AFMPGameMode() {}
// ********** End Class AFMPGameMode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPGameMode_h__Script_FMP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFMPGameMode, AFMPGameMode::StaticClass, TEXT("AFMPGameMode"), &Z_Registration_Info_UClass_AFMPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFMPGameMode), 3586687774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPGameMode_h__Script_FMP_1167710447(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPGameMode_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_FMPGameMode_h__Script_FMP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
