// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HealthSystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHealthSystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
FMP_API UClass* Z_Construct_UClass_UHealthSystem();
FMP_API UClass* Z_Construct_UClass_UHealthSystem_NoRegister();
FMP_API UFunction* Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FMP();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHealthChangedSignature *********************************************
struct Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics
{
	struct _Script_FMP_eventOnHealthChangedSignature_Parms
	{
		UHealthSystem* HealthComp;
		float Health;
		float HealthDelta;
		const UDamageType* DamageType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthDelta;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthComp = { "HealthComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMP_eventOnHealthChangedSignature_Parms, HealthComp), Z_Construct_UClass_UHealthSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComp_MetaData), NewProp_HealthComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMP_eventOnHealthChangedSignature_Parms, Health), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthDelta = { "HealthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMP_eventOnHealthChangedSignature_Parms, HealthDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMP_eventOnHealthChangedSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_FMP, nullptr, "OnHealthChangedSignature__DelegateSignature", Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::_Script_FMP_eventOnHealthChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::_Script_FMP_eventOnHealthChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, UHealthSystem* HealthComp, float Health, float HealthDelta, const UDamageType* DamageType)
{
	struct _Script_FMP_eventOnHealthChangedSignature_Parms
	{
		UHealthSystem* HealthComp;
		float Health;
		float HealthDelta;
		const UDamageType* DamageType;
	};
	_Script_FMP_eventOnHealthChangedSignature_Parms Parms;
	Parms.HealthComp=HealthComp;
	Parms.Health=Health;
	Parms.HealthDelta=HealthDelta;
	Parms.DamageType=DamageType;
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHealthChangedSignature ***********************************************

// ********** Begin Class UHealthSystem Function DecreaseHealth ************************************
struct Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics
{
	struct HealthSystem_eventDecreaseHealth_Parms
	{
		float HealthDelta;
		const UDamageType* DamageType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health|Modification" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthDelta;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics::NewProp_HealthDelta = { "HealthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthSystem_eventDecreaseHealth_Parms, HealthDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthSystem_eventDecreaseHealth_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics::NewProp_HealthDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics::NewProp_DamageType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealthSystem, nullptr, "DecreaseHealth", Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics::HealthSystem_eventDecreaseHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics::HealthSystem_eventDecreaseHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthSystem_DecreaseHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthSystem_DecreaseHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthSystem::execDecreaseHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealthDelta);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseHealth(Z_Param_HealthDelta,Z_Param_DamageType);
	P_NATIVE_END;
}
// ********** End Class UHealthSystem Function DecreaseHealth **************************************

// ********** Begin Class UHealthSystem Function HandleHealthChange ********************************
struct Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics
{
	struct HealthSystem_eventHandleHealthChange_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Core damage/healing function (Server Only)\n" },
#endif
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Core damage/healing function (Server Only)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthSystem_eventHandleHealthChange_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthSystem_eventHandleHealthChange_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthSystem_eventHandleHealthChange_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthSystem_eventHandleHealthChange_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthSystem_eventHandleHealthChange_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealthSystem, nullptr, "HandleHealthChange", Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::HealthSystem_eventHandleHealthChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::HealthSystem_eventHandleHealthChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthSystem_HandleHealthChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthSystem_HandleHealthChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthSystem::execHandleHealthChange)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHealthChange(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class UHealthSystem Function HandleHealthChange **********************************

// ********** Begin Class UHealthSystem Function IncreaseHealth ************************************
struct Z_Construct_UFunction_UHealthSystem_IncreaseHealth_Statics
{
	struct HealthSystem_eventIncreaseHealth_Parms
	{
		float HealthDelta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health|Modification" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthSystem_IncreaseHealth_Statics::NewProp_HealthDelta = { "HealthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthSystem_eventIncreaseHealth_Parms, HealthDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystem_IncreaseHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_IncreaseHealth_Statics::NewProp_HealthDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_IncreaseHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystem_IncreaseHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealthSystem, nullptr, "IncreaseHealth", Z_Construct_UFunction_UHealthSystem_IncreaseHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_IncreaseHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthSystem_IncreaseHealth_Statics::HealthSystem_eventIncreaseHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_IncreaseHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthSystem_IncreaseHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealthSystem_IncreaseHealth_Statics::HealthSystem_eventIncreaseHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthSystem_IncreaseHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthSystem_IncreaseHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthSystem::execIncreaseHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealthDelta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseHealth(Z_Param_HealthDelta);
	P_NATIVE_END;
}
// ********** End Class UHealthSystem Function IncreaseHealth **************************************

// ********** Begin Class UHealthSystem Function OnRep_Health **************************************
struct Z_Construct_UFunction_UHealthSystem_OnRep_Health_Statics
{
	struct HealthSystem_eventOnRep_Health_Parms
	{
		float OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **Multiplayer:** Function called on clients when CurrentHealth is updated by the server\n" },
#endif
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**Multiplayer:** Function called on clients when CurrentHealth is updated by the server" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthSystem_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthSystem_eventOnRep_Health_Parms, OldHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystem_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystem_OnRep_Health_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealthSystem, nullptr, "OnRep_Health", Z_Construct_UFunction_UHealthSystem_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthSystem_OnRep_Health_Statics::HealthSystem_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthSystem_OnRep_Health_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealthSystem_OnRep_Health_Statics::HealthSystem_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthSystem_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthSystem_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthSystem::execOnRep_Health)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_OldHealth);
	P_NATIVE_END;
}
// ********** End Class UHealthSystem Function OnRep_Health ****************************************

// ********** Begin Class UHealthSystem ************************************************************
void UHealthSystem::StaticRegisterNativesUHealthSystem()
{
	UClass* Class = UHealthSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecreaseHealth", &UHealthSystem::execDecreaseHealth },
		{ "HandleHealthChange", &UHealthSystem::execHandleHealthChange },
		{ "IncreaseHealth", &UHealthSystem::execIncreaseHealth },
		{ "OnRep_Health", &UHealthSystem::execOnRep_Health },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHealthSystem;
UClass* UHealthSystem::GetPrivateStaticClass()
{
	using TClass = UHealthSystem;
	if (!Z_Registration_Info_UClass_UHealthSystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HealthSystem"),
			Z_Registration_Info_UClass_UHealthSystem.InnerSingleton,
			StaticRegisterNativesUHealthSystem,
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
	return Z_Registration_Info_UClass_UHealthSystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UHealthSystem_NoRegister()
{
	return UHealthSystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHealthSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HealthSystem.h" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthSystem_DecreaseHealth, "DecreaseHealth" }, // 2065696228
		{ &Z_Construct_UFunction_UHealthSystem_HandleHealthChange, "HandleHealthChange" }, // 1676525991
		{ &Z_Construct_UFunction_UHealthSystem_IncreaseHealth, "IncreaseHealth" }, // 1312972814
		{ &Z_Construct_UFunction_UHealthSystem_OnRep_Health, "OnRep_Health" }, // 3217107835
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthSystem_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthSystem, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthSystem_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_Health", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthSystem, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthSystem_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthSystem, OnHealthChanged), Z_Construct_UDelegateFunction_FMP_OnHealthChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 1847516146
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthSystem_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthSystem_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthSystem_Statics::NewProp_OnHealthChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealthSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthSystem_Statics::ClassParams = {
	&UHealthSystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHealthSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealthSystem_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthSystem()
{
	if (!Z_Registration_Info_UClass_UHealthSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthSystem.OuterSingleton, Z_Construct_UClass_UHealthSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthSystem.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UHealthSystem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_MaxHealth(TEXT("MaxHealth"));
	static FName Name_CurrentHealth(TEXT("CurrentHealth"));
	const bool bIsValid = true
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UHealthSystem"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthSystem);
UHealthSystem::~UHealthSystem() {}
// ********** End Class UHealthSystem **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_HealthSystem_h__Script_FMP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthSystem, UHealthSystem::StaticClass, TEXT("UHealthSystem"), &Z_Registration_Info_UClass_UHealthSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthSystem), 488919104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_HealthSystem_h__Script_FMP_2010163977(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_HealthSystem_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_HealthSystem_h__Script_FMP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
