// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PerkEffectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePerkEffectBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FMP_API UClass* Z_Construct_UClass_UPerkEffectBase();
FMP_API UClass* Z_Construct_UClass_UPerkEffectBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPerkEffectBase Function ApplyPerkEffect *********************************
struct PerkEffectBase_eventApplyPerkEffect_Parms
{
	AActor* TargetActor;
};
static FName NAME_UPerkEffectBase_ApplyPerkEffect = FName(TEXT("ApplyPerkEffect"));
void UPerkEffectBase::ApplyPerkEffect(AActor* TargetActor)
{
	PerkEffectBase_eventApplyPerkEffect_Parms Parms;
	Parms.TargetActor=TargetActor;
	UFunction* Func = FindFunctionChecked(NAME_UPerkEffectBase_ApplyPerkEffect);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perk Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Event triggered when this perk effect is applied to a target actor (player).\n\x09 * @param TargetActor The actor receiving the perk effect.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Event triggered when this perk effect is applied to a target actor (player).\n@param TargetActor The actor receiving the perk effect." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerkEffectBase_eventApplyPerkEffect_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPerkEffectBase, nullptr, "ApplyPerkEffect", Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::PropPointers), sizeof(PerkEffectBase_eventApplyPerkEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PerkEffectBase_eventApplyPerkEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPerkEffectBase Function ApplyPerkEffect ***********************************

// ********** Begin Class UPerkEffectBase Function UnapplyPerkEffect *******************************
struct PerkEffectBase_eventUnapplyPerkEffect_Parms
{
	AActor* TargetActor;
};
static FName NAME_UPerkEffectBase_UnapplyPerkEffect = FName(TEXT("UnapplyPerkEffect"));
void UPerkEffectBase::UnapplyPerkEffect(AActor* TargetActor)
{
	PerkEffectBase_eventUnapplyPerkEffect_Parms Parms;
	Parms.TargetActor=TargetActor;
	UFunction* Func = FindFunctionChecked(NAME_UPerkEffectBase_UnapplyPerkEffect);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPerkEffectBase_UnapplyPerkEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perk Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Event triggered when this perk effect is removed from a target actor.\n\x09 * @param TargetActor The actor losing the perk effect.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Event triggered when this perk effect is removed from a target actor.\n@param TargetActor The actor losing the perk effect." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkEffectBase_UnapplyPerkEffect_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerkEffectBase_eventUnapplyPerkEffect_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkEffectBase_UnapplyPerkEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkEffectBase_UnapplyPerkEffect_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkEffectBase_UnapplyPerkEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkEffectBase_UnapplyPerkEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPerkEffectBase, nullptr, "UnapplyPerkEffect", Z_Construct_UFunction_UPerkEffectBase_UnapplyPerkEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkEffectBase_UnapplyPerkEffect_Statics::PropPointers), sizeof(PerkEffectBase_eventUnapplyPerkEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkEffectBase_UnapplyPerkEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerkEffectBase_UnapplyPerkEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PerkEffectBase_eventUnapplyPerkEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerkEffectBase_UnapplyPerkEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerkEffectBase_UnapplyPerkEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPerkEffectBase Function UnapplyPerkEffect *********************************

// ********** Begin Class UPerkEffectBase **********************************************************
void UPerkEffectBase::StaticRegisterNativesUPerkEffectBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPerkEffectBase;
UClass* UPerkEffectBase::GetPrivateStaticClass()
{
	using TClass = UPerkEffectBase;
	if (!Z_Registration_Info_UClass_UPerkEffectBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PerkEffectBase"),
			Z_Registration_Info_UClass_UPerkEffectBase.InnerSingleton,
			StaticRegisterNativesUPerkEffectBase,
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
	return Z_Registration_Info_UClass_UPerkEffectBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UPerkEffectBase_NoRegister()
{
	return UPerkEffectBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPerkEffectBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Base class for defining the effects of perks applied to a player.\n * \n * This class contains a variety of stat multipliers and flat bonuses that can be \n * configured per-perk in Blueprint, as well as events for applying and removing effects.\n */" },
#endif
		{ "IncludePath", "PerkEffectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Base class for defining the effects of perks applied to a player.\n\nThis class contains a variety of stat multipliers and flat bonuses that can be\nconfigured per-perk in Blueprint, as well as events for applying and removing effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedMultiplier_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Multiplier applied to the player's base movement speed */" },
#endif
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Multiplier applied to the player's base movement speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthBonus_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Flat bonus added to the player's maximum health */" },
#endif
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Flat bonus added to the player's maximum health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Multiplier applied to the damage dealt by the player */" },
#endif
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Multiplier applied to the damage dealt by the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadSpeedMultiplier_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Multiplier applied to the weapon reload speed */" },
#endif
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Multiplier applied to the weapon reload speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilMultiplier_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Multiplier applied to weapon recoil */" },
#endif
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Multiplier applied to weapon recoil" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadMultiplier_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Multiplier applied to weapon spread/accuracy */" },
#endif
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Multiplier applied to weapon spread/accuracy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTakenMultiplier_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Multiplier applied to the damage taken by the player */" },
#endif
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Multiplier applied to the damage taken by the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmoMultiplier_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Multiplier applied to the maximum ammo capacity */" },
#endif
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Multiplier applied to the maximum ammo capacity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenAmount_MetaData[] = {
		{ "Category", "Stats|Special" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Amount of health regenerated passively over time */" },
#endif
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Amount of health regenerated passively over time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthPerKill_MetaData[] = {
		{ "Category", "Stats|Special" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Amount of health restored to the player per enemy killed */" },
#endif
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Amount of health restored to the player per enemy killed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemySlowAmmount_MetaData[] = {
		{ "Category", "Stats|Special" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Multiplier applied to slow down enemies (e.g., lower means slower) */" },
#endif
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Multiplier applied to slow down enemies (e.g., lower means slower)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealthBonus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageTakenMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAmmoMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthRegenAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPerKill;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemySlowAmmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect, "ApplyPerkEffect" }, // 1856635574
		{ &Z_Construct_UFunction_UPerkEffectBase_UnapplyPerkEffect, "UnapplyPerkEffect" }, // 4107981270
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerkEffectBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_MovementSpeedMultiplier = { "MovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerkEffectBase, MovementSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeedMultiplier_MetaData), NewProp_MovementSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_MaxHealthBonus = { "MaxHealthBonus", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerkEffectBase, MaxHealthBonus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealthBonus_MetaData), NewProp_MaxHealthBonus_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerkEffectBase, DamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplier_MetaData), NewProp_DamageMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_ReloadSpeedMultiplier = { "ReloadSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerkEffectBase, ReloadSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadSpeedMultiplier_MetaData), NewProp_ReloadSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_RecoilMultiplier = { "RecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerkEffectBase, RecoilMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilMultiplier_MetaData), NewProp_RecoilMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_SpreadMultiplier = { "SpreadMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerkEffectBase, SpreadMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadMultiplier_MetaData), NewProp_SpreadMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_DamageTakenMultiplier = { "DamageTakenMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerkEffectBase, DamageTakenMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTakenMultiplier_MetaData), NewProp_DamageTakenMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_MaxAmmoMultiplier = { "MaxAmmoMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerkEffectBase, MaxAmmoMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAmmoMultiplier_MetaData), NewProp_MaxAmmoMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_HealthRegenAmount = { "HealthRegenAmount", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerkEffectBase, HealthRegenAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegenAmount_MetaData), NewProp_HealthRegenAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_HealthPerKill = { "HealthPerKill", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerkEffectBase, HealthPerKill), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthPerKill_MetaData), NewProp_HealthPerKill_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_EnemySlowAmmount = { "EnemySlowAmmount", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerkEffectBase, EnemySlowAmmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemySlowAmmount_MetaData), NewProp_EnemySlowAmmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerkEffectBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_MovementSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_MaxHealthBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_ReloadSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_RecoilMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_SpreadMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_DamageTakenMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_MaxAmmoMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_HealthRegenAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_HealthPerKill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_EnemySlowAmmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerkEffectBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPerkEffectBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerkEffectBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerkEffectBase_Statics::ClassParams = {
	&UPerkEffectBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPerkEffectBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPerkEffectBase_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPerkEffectBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPerkEffectBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPerkEffectBase()
{
	if (!Z_Registration_Info_UClass_UPerkEffectBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerkEffectBase.OuterSingleton, Z_Construct_UClass_UPerkEffectBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPerkEffectBase.OuterSingleton;
}
UPerkEffectBase::UPerkEffectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPerkEffectBase);
UPerkEffectBase::~UPerkEffectBase() {}
// ********** End Class UPerkEffectBase ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerkEffectBase_h__Script_FMP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPerkEffectBase, UPerkEffectBase::StaticClass, TEXT("UPerkEffectBase"), &Z_Registration_Info_UClass_UPerkEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerkEffectBase), 3485389906U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerkEffectBase_h__Script_FMP_2961868487(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerkEffectBase_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerkEffectBase_h__Script_FMP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
