// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnemySpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemySpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
FMP_API UClass* Z_Construct_UClass_AEnemySpawner();
FMP_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnemySpawner Function ConfigureSpawner **********************************
struct Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics
{
	struct EnemySpawner_eventConfigureSpawner_Parms
	{
		float NewSpawnRate;
		int32 NewMaxConcurrentEnemies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning|Control" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpawnRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewMaxConcurrentEnemies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics::NewProp_NewSpawnRate = { "NewSpawnRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemySpawner_eventConfigureSpawner_Parms, NewSpawnRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics::NewProp_NewMaxConcurrentEnemies = { "NewMaxConcurrentEnemies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemySpawner_eventConfigureSpawner_Parms, NewMaxConcurrentEnemies), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics::NewProp_NewSpawnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics::NewProp_NewMaxConcurrentEnemies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemySpawner, nullptr, "ConfigureSpawner", Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics::EnemySpawner_eventConfigureSpawner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics::EnemySpawner_eventConfigureSpawner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemySpawner::execConfigureSpawner)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpawnRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewMaxConcurrentEnemies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureSpawner(Z_Param_NewSpawnRate,Z_Param_NewMaxConcurrentEnemies);
	P_NATIVE_END;
}
// ********** End Class AEnemySpawner Function ConfigureSpawner ************************************

// ********** Begin Class AEnemySpawner Function EndSpawningAndClearEnemies ************************
struct Z_Construct_UFunction_AEnemySpawner_EndSpawningAndClearEnemies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemySpawner_EndSpawningAndClearEnemies_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemySpawner, nullptr, "EndSpawningAndClearEnemies", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawner_EndSpawningAndClearEnemies_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemySpawner_EndSpawningAndClearEnemies_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemySpawner_EndSpawningAndClearEnemies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemySpawner_EndSpawningAndClearEnemies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemySpawner::execEndSpawningAndClearEnemies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndSpawningAndClearEnemies();
	P_NATIVE_END;
}
// ********** End Class AEnemySpawner Function EndSpawningAndClearEnemies **************************

// ********** Begin Class AEnemySpawner Function SpawnEnemy ****************************************
struct Z_Construct_UFunction_AEnemySpawner_SpawnEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemySpawner_SpawnEnemy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemySpawner, nullptr, "SpawnEnemy", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawner_SpawnEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemySpawner_SpawnEnemy_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemySpawner_SpawnEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemySpawner_SpawnEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemySpawner::execSpawnEnemy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnEnemy();
	P_NATIVE_END;
}
// ********** End Class AEnemySpawner Function SpawnEnemy ******************************************

// ********** Begin Class AEnemySpawner Function StartSpawningTimer ********************************
struct Z_Construct_UFunction_AEnemySpawner_StartSpawningTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemySpawner_StartSpawningTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemySpawner, nullptr, "StartSpawningTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawner_StartSpawningTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemySpawner_StartSpawningTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemySpawner_StartSpawningTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemySpawner_StartSpawningTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemySpawner::execStartSpawningTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSpawningTimer();
	P_NATIVE_END;
}
// ********** End Class AEnemySpawner Function StartSpawningTimer **********************************

// ********** Begin Class AEnemySpawner ************************************************************
void AEnemySpawner::StaticRegisterNativesAEnemySpawner()
{
	UClass* Class = AEnemySpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConfigureSpawner", &AEnemySpawner::execConfigureSpawner },
		{ "EndSpawningAndClearEnemies", &AEnemySpawner::execEndSpawningAndClearEnemies },
		{ "SpawnEnemy", &AEnemySpawner::execSpawnEnemy },
		{ "StartSpawningTimer", &AEnemySpawner::execStartSpawningTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemySpawner;
UClass* AEnemySpawner::GetPrivateStaticClass()
{
	using TClass = AEnemySpawner;
	if (!Z_Registration_Info_UClass_AEnemySpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemySpawner"),
			Z_Registration_Info_UClass_AEnemySpawner.InnerSingleton,
			StaticRegisterNativesAEnemySpawner,
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
	return Z_Registration_Info_UClass_AEnemySpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemySpawner_NoRegister()
{
	return AEnemySpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemySpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnemySpawner.h" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyToSpawnClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRate_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ClampMin", "0.5" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRadius_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ClampMin", "100.0" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentEnemies_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedEnemies_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyToSpawnClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentEnemies;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedEnemies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedEnemies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemySpawner_ConfigureSpawner, "ConfigureSpawner" }, // 2635230640
		{ &Z_Construct_UFunction_AEnemySpawner_EndSpawningAndClearEnemies, "EndSpawningAndClearEnemies" }, // 2736406896
		{ &Z_Construct_UFunction_AEnemySpawner_SpawnEnemy, "SpawnEnemy" }, // 1825267898
		{ &Z_Construct_UFunction_AEnemySpawner_StartSpawningTimer, "StartSpawningTimer" }, // 1476011976
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemyToSpawnClass = { "EnemyToSpawnClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, EnemyToSpawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyToSpawnClass_MetaData), NewProp_EnemyToSpawnClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnRate = { "SpawnRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, SpawnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRate_MetaData), NewProp_SpawnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnRadius = { "SpawnRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, SpawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRadius_MetaData), NewProp_SpawnRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_MaxConcurrentEnemies = { "MaxConcurrentEnemies", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, MaxConcurrentEnemies), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConcurrentEnemies_MetaData), NewProp_MaxConcurrentEnemies_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnedEnemies_Inner = { "SpawnedEnemies", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnedEnemies = { "SpawnedEnemies", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, SpawnedEnemies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedEnemies_MetaData), NewProp_SpawnedEnemies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemyToSpawnClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_MaxConcurrentEnemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnedEnemies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnedEnemies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemySpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawner_Statics::ClassParams = {
	&AEnemySpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemySpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemySpawner()
{
	if (!Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton, Z_Construct_UClass_AEnemySpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawner);
AEnemySpawner::~AEnemySpawner() {}
// ********** End Class AEnemySpawner **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h__Script_FMP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemySpawner, AEnemySpawner::StaticClass, TEXT("AEnemySpawner"), &Z_Registration_Info_UClass_AEnemySpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySpawner), 2481995447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h__Script_FMP_681335007(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_EnemySpawner_h__Script_FMP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
