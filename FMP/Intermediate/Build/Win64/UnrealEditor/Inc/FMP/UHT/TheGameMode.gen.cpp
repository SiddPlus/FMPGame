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
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
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

// ********** Begin Class ATheGameMode *************************************************************
void ATheGameMode::StaticRegisterNativesATheGameMode()
{
	UClass* Class = ATheGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayerReadyUp", &ATheGameMode::execPlayerReadyUp },
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
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheGameMode.h" },
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseRoundDuration_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoundSpawnRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoundMaxEnemies_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSpawners_MetaData[] = {
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseRoundDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRoundSpawnRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRoundMaxEnemies;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedSpawners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedSpawners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATheGameMode_PlayerReadyUp, "PlayerReadyUp" }, // 2198353830
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGameMode_Statics::NewProp_CachedSpawners_Inner = { "CachedSpawners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemySpawner_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATheGameMode_Statics::NewProp_CachedSpawners = { "CachedSpawners", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGameMode, CachedSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSpawners_MetaData), NewProp_CachedSpawners_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATheGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_BaseRoundDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_CurrentRoundSpawnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_CurrentRoundMaxEnemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_CachedSpawners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGameMode_Statics::NewProp_CachedSpawners,
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
		{ Z_Construct_UClass_ATheGameMode, ATheGameMode::StaticClass, TEXT("ATheGameMode"), &Z_Registration_Info_UClass_ATheGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheGameMode), 2805530336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h__Script_FMP_1409512469(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h__Script_FMP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
