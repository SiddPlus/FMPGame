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
	UFunction* Func = FindFunctionChecked(NAME_UPerkEffectBase_ApplyPerkEffect);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		PerkEffectBase_eventApplyPerkEffect_Parms Parms;
		Parms.TargetActor=TargetActor;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ApplyPerkEffect_Implementation(TargetActor);
	}
}
struct Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perk Logic" },
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPerkEffectBase, nullptr, "ApplyPerkEffect", Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::PropPointers), sizeof(PerkEffectBase_eventApplyPerkEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect_Statics::Function_MetaDataParams)},  };
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
DEFINE_FUNCTION(UPerkEffectBase::execApplyPerkEffect)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyPerkEffect_Implementation(Z_Param_TargetActor);
	P_NATIVE_END;
}
// ********** End Class UPerkEffectBase Function ApplyPerkEffect ***********************************

// ********** Begin Class UPerkEffectBase **********************************************************
void UPerkEffectBase::StaticRegisterNativesUPerkEffectBase()
{
	UClass* Class = UPerkEffectBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyPerkEffect", &UPerkEffectBase::execApplyPerkEffect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PerkEffectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedMultiplier_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthBonus_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/PerkEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealthBonus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerkEffectBase_ApplyPerkEffect, "ApplyPerkEffect" }, // 1718903928
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerkEffectBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_MovementSpeedMultiplier = { "MovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerkEffectBase, MovementSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeedMultiplier_MetaData), NewProp_MovementSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_MaxHealthBonus = { "MaxHealthBonus", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerkEffectBase, MaxHealthBonus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealthBonus_MetaData), NewProp_MaxHealthBonus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerkEffectBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_MovementSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkEffectBase_Statics::NewProp_MaxHealthBonus,
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
		{ Z_Construct_UClass_UPerkEffectBase, UPerkEffectBase::StaticClass, TEXT("UPerkEffectBase"), &Z_Registration_Info_UClass_UPerkEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerkEffectBase), 1600556776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerkEffectBase_h__Script_FMP_1317590590(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerkEffectBase_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerkEffectBase_h__Script_FMP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
