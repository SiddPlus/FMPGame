// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootPool.h"
#include "PlayerPerks.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLootPool() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FMP_API UClass* Z_Construct_UClass_ULootPool();
FMP_API UClass* Z_Construct_UClass_ULootPool_NoRegister();
FMP_API UClass* Z_Construct_UClass_UPlayerPerks_NoRegister();
FMP_API UScriptStruct* Z_Construct_UScriptStruct_FPerks();
UPackage* Z_Construct_UPackage__Script_FMP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULootPool Function CanDrawPerk *******************************************
struct Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics
{
	struct LootPool_eventCanDrawPerk_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot Pool" },
		{ "ModuleRelativePath", "Public/LootPool.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LootPool_eventCanDrawPerk_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LootPool_eventCanDrawPerk_Parms), &Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULootPool, nullptr, "CanDrawPerk", Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics::LootPool_eventCanDrawPerk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics::LootPool_eventCanDrawPerk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULootPool_CanDrawPerk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootPool_CanDrawPerk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULootPool::execCanDrawPerk)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanDrawPerk();
	P_NATIVE_END;
}
// ********** End Class ULootPool Function CanDrawPerk *********************************************

// ********** Begin Class ULootPool Function DrawRandomPerk ****************************************
struct Z_Construct_UFunction_ULootPool_DrawRandomPerk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot Pool" },
		{ "ModuleRelativePath", "Public/LootPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootPool_DrawRandomPerk_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULootPool, nullptr, "DrawRandomPerk", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootPool_DrawRandomPerk_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootPool_DrawRandomPerk_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ULootPool_DrawRandomPerk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootPool_DrawRandomPerk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULootPool::execDrawRandomPerk)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawRandomPerk();
	P_NATIVE_END;
}
// ********** End Class ULootPool Function DrawRandomPerk ******************************************

// ********** Begin Class ULootPool Function ResetPool *********************************************
struct Z_Construct_UFunction_ULootPool_ResetPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Loot Pool" },
		{ "ModuleRelativePath", "Public/LootPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootPool_ResetPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULootPool, nullptr, "ResetPool", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootPool_ResetPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootPool_ResetPool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ULootPool_ResetPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootPool_ResetPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULootPool::execResetPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetPool();
	P_NATIVE_END;
}
// ********** End Class ULootPool Function ResetPool ***********************************************

// ********** Begin Class ULootPool Function ServerDrawRandomPerk **********************************
static FName NAME_ULootPool_ServerDrawRandomPerk = FName(TEXT("ServerDrawRandomPerk"));
void ULootPool::ServerDrawRandomPerk()
{
	UFunction* Func = FindFunctionChecked(NAME_ULootPool_ServerDrawRandomPerk);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ULootPool_ServerDrawRandomPerk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LootPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootPool_ServerDrawRandomPerk_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULootPool, nullptr, "ServerDrawRandomPerk", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootPool_ServerDrawRandomPerk_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootPool_ServerDrawRandomPerk_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ULootPool_ServerDrawRandomPerk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootPool_ServerDrawRandomPerk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULootPool::execServerDrawRandomPerk)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerDrawRandomPerk_Implementation();
	P_NATIVE_END;
}
// ********** End Class ULootPool Function ServerDrawRandomPerk ************************************

// ********** Begin Class ULootPool ****************************************************************
void ULootPool::StaticRegisterNativesULootPool()
{
	UClass* Class = ULootPool::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanDrawPerk", &ULootPool::execCanDrawPerk },
		{ "DrawRandomPerk", &ULootPool::execDrawRandomPerk },
		{ "ResetPool", &ULootPool::execResetPool },
		{ "ServerDrawRandomPerk", &ULootPool::execServerDrawRandomPerk },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULootPool;
UClass* ULootPool::GetPrivateStaticClass()
{
	using TClass = ULootPool;
	if (!Z_Registration_Info_UClass_ULootPool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LootPool"),
			Z_Registration_Info_UClass_ULootPool.InnerSingleton,
			StaticRegisterNativesULootPool,
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
	return Z_Registration_Info_UClass_ULootPool.InnerSingleton;
}
UClass* Z_Construct_UClass_ULootPool_NoRegister()
{
	return ULootPool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULootPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LootPool.h" },
		{ "ModuleRelativePath", "Public/LootPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPerksComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LootPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPerkPool_MetaData[] = {
		{ "Category", "Loot Pool | Runtime" },
		{ "ModuleRelativePath", "Public/LootPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPerksComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPerkPool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentPerkPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULootPool_CanDrawPerk, "CanDrawPerk" }, // 3598789637
		{ &Z_Construct_UFunction_ULootPool_DrawRandomPerk, "DrawRandomPerk" }, // 2637232248
		{ &Z_Construct_UFunction_ULootPool_ResetPool, "ResetPool" }, // 1957173866
		{ &Z_Construct_UFunction_ULootPool_ServerDrawRandomPerk, "ServerDrawRandomPerk" }, // 769915720
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootPool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULootPool_Statics::NewProp_PlayerPerksComponent = { "PlayerPerksComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootPool, PlayerPerksComponent), Z_Construct_UClass_UPlayerPerks_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPerksComponent_MetaData), NewProp_PlayerPerksComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULootPool_Statics::NewProp_CurrentPerkPool_Inner = { "CurrentPerkPool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPerks, METADATA_PARAMS(0, nullptr) }; // 3622194358
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULootPool_Statics::NewProp_CurrentPerkPool = { "CurrentPerkPool", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootPool, CurrentPerkPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPerkPool_MetaData), NewProp_CurrentPerkPool_MetaData) }; // 3622194358
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULootPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootPool_Statics::NewProp_PlayerPerksComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootPool_Statics::NewProp_CurrentPerkPool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootPool_Statics::NewProp_CurrentPerkPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootPool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULootPool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootPool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootPool_Statics::ClassParams = {
	&ULootPool::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULootPool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULootPool_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootPool_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootPool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULootPool()
{
	if (!Z_Registration_Info_UClass_ULootPool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootPool.OuterSingleton, Z_Construct_UClass_ULootPool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULootPool.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ULootPool::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurrentPerkPool(TEXT("CurrentPerkPool"));
	const bool bIsValid = true
		&& Name_CurrentPerkPool == ClassReps[(int32)ENetFields_Private::CurrentPerkPool].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULootPool"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ULootPool);
ULootPool::~ULootPool() {}
// ********** End Class ULootPool ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h__Script_FMP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULootPool, ULootPool::StaticClass, TEXT("ULootPool"), &Z_Registration_Info_UClass_ULootPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootPool), 4064776360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h__Script_FMP_1502392964(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_LootPool_h__Script_FMP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
