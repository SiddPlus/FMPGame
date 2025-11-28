// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerPerks.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerPerks() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FMP_API UClass* Z_Construct_UClass_UPlayerPerks();
FMP_API UClass* Z_Construct_UClass_UPlayerPerks_NoRegister();
FMP_API UScriptStruct* Z_Construct_UScriptStruct_FPerks();
UPackage* Z_Construct_UPackage__Script_FMP();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPerks ************************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPerks;
class UScriptStruct* FPerks::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPerks.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPerks.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerks, (UObject*)Z_Construct_UPackage__Script_FMP(), TEXT("Perks"));
	}
	return Z_Registration_Info_UScriptStruct_FPerks.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPerks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Perk Details" },
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Perk Details" },
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundLevelUnlockAmount_MetaData[] = {
		{ "Category", "Perk Details" },
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoundLevelUnlockAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerks>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerks_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerks, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerks_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerks, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerks_Statics::NewProp_RoundLevelUnlockAmount = { "RoundLevelUnlockAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerks, RoundLevelUnlockAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundLevelUnlockAmount_MetaData), NewProp_RoundLevelUnlockAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerks_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerks_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerks_Statics::NewProp_RoundLevelUnlockAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerks_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
	nullptr,
	&NewStructOps,
	"Perks",
	Z_Construct_UScriptStruct_FPerks_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerks_Statics::PropPointers),
	sizeof(FPerks),
	alignof(FPerks),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerks_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerks_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerks()
{
	if (!Z_Registration_Info_UScriptStruct_FPerks.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPerks.InnerSingleton, Z_Construct_UScriptStruct_FPerks_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPerks.InnerSingleton;
}
// ********** End ScriptStruct FPerks **************************************************************

// ********** Begin Class UPlayerPerks Function EquipPerk ******************************************
struct Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics
{
	struct PlayerPerks_eventEquipPerk_Parms
	{
		FString PerkName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perk Functions" },
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerkName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PerkName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::NewProp_PerkName = { "PerkName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerPerks_eventEquipPerk_Parms, PerkName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerkName_MetaData), NewProp_PerkName_MetaData) };
void Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerPerks_eventEquipPerk_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerPerks_eventEquipPerk_Parms), &Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::NewProp_PerkName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerPerks, nullptr, "EquipPerk", Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::PlayerPerks_eventEquipPerk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::PlayerPerks_eventEquipPerk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerPerks_EquipPerk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerPerks_EquipPerk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerPerks::execEquipPerk)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PerkName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EquipPerk(Z_Param_PerkName);
	P_NATIVE_END;
}
// ********** End Class UPlayerPerks Function EquipPerk ********************************************

// ********** Begin Class UPlayerPerks Function OnPerkEquipped_ClientEvent *************************
struct PlayerPerks_eventOnPerkEquipped_ClientEvent_Parms
{
	FPerks NewPerk;
};
static FName NAME_UPlayerPerks_OnPerkEquipped_ClientEvent = FName(TEXT("OnPerkEquipped_ClientEvent"));
void UPlayerPerks::OnPerkEquipped_ClientEvent(FPerks const& NewPerk)
{
	PlayerPerks_eventOnPerkEquipped_ClientEvent_Parms Parms;
	Parms.NewPerk=NewPerk;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerPerks_OnPerkEquipped_ClientEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerPerks_OnPerkEquipped_ClientEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perk UI" },
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPerk_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPerk;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerPerks_OnPerkEquipped_ClientEvent_Statics::NewProp_NewPerk = { "NewPerk", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerPerks_eventOnPerkEquipped_ClientEvent_Parms, NewPerk), Z_Construct_UScriptStruct_FPerks, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPerk_MetaData), NewProp_NewPerk_MetaData) }; // 4124859362
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerPerks_OnPerkEquipped_ClientEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerPerks_OnPerkEquipped_ClientEvent_Statics::NewProp_NewPerk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_OnPerkEquipped_ClientEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerPerks_OnPerkEquipped_ClientEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerPerks, nullptr, "OnPerkEquipped_ClientEvent", Z_Construct_UFunction_UPlayerPerks_OnPerkEquipped_ClientEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_OnPerkEquipped_ClientEvent_Statics::PropPointers), sizeof(PlayerPerks_eventOnPerkEquipped_ClientEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_OnPerkEquipped_ClientEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerPerks_OnPerkEquipped_ClientEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerPerks_eventOnPerkEquipped_ClientEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerPerks_OnPerkEquipped_ClientEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerPerks_OnPerkEquipped_ClientEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UPlayerPerks Function OnPerkEquipped_ClientEvent ***************************

// ********** Begin Class UPlayerPerks Function OnRep_LastEquippedPerk *****************************
struct Z_Construct_UFunction_UPlayerPerks_OnRep_LastEquippedPerk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerPerks_OnRep_LastEquippedPerk_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerPerks, nullptr, "OnRep_LastEquippedPerk", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_OnRep_LastEquippedPerk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerPerks_OnRep_LastEquippedPerk_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPlayerPerks_OnRep_LastEquippedPerk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerPerks_OnRep_LastEquippedPerk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerPerks::execOnRep_LastEquippedPerk)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LastEquippedPerk();
	P_NATIVE_END;
}
// ********** End Class UPlayerPerks Function OnRep_LastEquippedPerk *******************************

// ********** Begin Class UPlayerPerks Function ServerEquipPerk ************************************
struct PlayerPerks_eventServerEquipPerk_Parms
{
	FString PerkName;
};
static FName NAME_UPlayerPerks_ServerEquipPerk = FName(TEXT("ServerEquipPerk"));
void UPlayerPerks::ServerEquipPerk(const FString& PerkName)
{
	PlayerPerks_eventServerEquipPerk_Parms Parms;
	Parms.PerkName=PerkName;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerPerks_ServerEquipPerk);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerPerks_ServerEquipPerk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerkName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PerkName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerPerks_ServerEquipPerk_Statics::NewProp_PerkName = { "PerkName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerPerks_eventServerEquipPerk_Parms, PerkName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerkName_MetaData), NewProp_PerkName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerPerks_ServerEquipPerk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerPerks_ServerEquipPerk_Statics::NewProp_PerkName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_ServerEquipPerk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerPerks_ServerEquipPerk_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerPerks, nullptr, "ServerEquipPerk", Z_Construct_UFunction_UPlayerPerks_ServerEquipPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_ServerEquipPerk_Statics::PropPointers), sizeof(PlayerPerks_eventServerEquipPerk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_ServerEquipPerk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerPerks_ServerEquipPerk_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerPerks_eventServerEquipPerk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerPerks_ServerEquipPerk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerPerks_ServerEquipPerk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerPerks::execServerEquipPerk)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PerkName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerEquipPerk_Implementation(Z_Param_PerkName);
	P_NATIVE_END;
}
// ********** End Class UPlayerPerks Function ServerEquipPerk **************************************

// ********** Begin Class UPlayerPerks Function ServerUnlockPerk ***********************************
struct PlayerPerks_eventServerUnlockPerk_Parms
{
	FString PerkName;
};
static FName NAME_UPlayerPerks_ServerUnlockPerk = FName(TEXT("ServerUnlockPerk"));
void UPlayerPerks::ServerUnlockPerk(const FString& PerkName)
{
	PlayerPerks_eventServerUnlockPerk_Parms Parms;
	Parms.PerkName=PerkName;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerPerks_ServerUnlockPerk);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerPerks_ServerUnlockPerk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerkName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PerkName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerPerks_ServerUnlockPerk_Statics::NewProp_PerkName = { "PerkName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerPerks_eventServerUnlockPerk_Parms, PerkName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerkName_MetaData), NewProp_PerkName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerPerks_ServerUnlockPerk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerPerks_ServerUnlockPerk_Statics::NewProp_PerkName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_ServerUnlockPerk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerPerks_ServerUnlockPerk_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerPerks, nullptr, "ServerUnlockPerk", Z_Construct_UFunction_UPlayerPerks_ServerUnlockPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_ServerUnlockPerk_Statics::PropPointers), sizeof(PlayerPerks_eventServerUnlockPerk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_ServerUnlockPerk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerPerks_ServerUnlockPerk_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerPerks_eventServerUnlockPerk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerPerks_ServerUnlockPerk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerPerks_ServerUnlockPerk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerPerks::execServerUnlockPerk)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PerkName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerUnlockPerk_Implementation(Z_Param_PerkName);
	P_NATIVE_END;
}
// ********** End Class UPlayerPerks Function ServerUnlockPerk *************************************

// ********** Begin Class UPlayerPerks Function UnlockPerk *****************************************
struct Z_Construct_UFunction_UPlayerPerks_UnlockPerk_Statics
{
	struct PlayerPerks_eventUnlockPerk_Parms
	{
		FString PerkName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perk Functions" },
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerkName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PerkName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerPerks_UnlockPerk_Statics::NewProp_PerkName = { "PerkName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerPerks_eventUnlockPerk_Parms, PerkName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerkName_MetaData), NewProp_PerkName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerPerks_UnlockPerk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerPerks_UnlockPerk_Statics::NewProp_PerkName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_UnlockPerk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerPerks_UnlockPerk_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerPerks, nullptr, "UnlockPerk", Z_Construct_UFunction_UPlayerPerks_UnlockPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_UnlockPerk_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerPerks_UnlockPerk_Statics::PlayerPerks_eventUnlockPerk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerks_UnlockPerk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerPerks_UnlockPerk_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerPerks_UnlockPerk_Statics::PlayerPerks_eventUnlockPerk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerPerks_UnlockPerk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerPerks_UnlockPerk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerPerks::execUnlockPerk)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PerkName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnlockPerk(Z_Param_PerkName);
	P_NATIVE_END;
}
// ********** End Class UPlayerPerks Function UnlockPerk *******************************************

// ********** Begin Class UPlayerPerks *************************************************************
void UPlayerPerks::StaticRegisterNativesUPlayerPerks()
{
	UClass* Class = UPlayerPerks::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EquipPerk", &UPlayerPerks::execEquipPerk },
		{ "OnRep_LastEquippedPerk", &UPlayerPerks::execOnRep_LastEquippedPerk },
		{ "ServerEquipPerk", &UPlayerPerks::execServerEquipPerk },
		{ "ServerUnlockPerk", &UPlayerPerks::execServerUnlockPerk },
		{ "UnlockPerk", &UPlayerPerks::execUnlockPerk },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerPerks;
UClass* UPlayerPerks::GetPrivateStaticClass()
{
	using TClass = UPlayerPerks;
	if (!Z_Registration_Info_UClass_UPlayerPerks.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerPerks"),
			Z_Registration_Info_UClass_UPlayerPerks.InnerSingleton,
			StaticRegisterNativesUPlayerPerks,
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
	return Z_Registration_Info_UClass_UPlayerPerks.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerPerks_NoRegister()
{
	return UPlayerPerks::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerPerks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerPerks.h" },
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastEquippedPerk_MetaData[] = {
		{ "Category", "Perks|Client" },
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedPerks_MetaData[] = {
		{ "Category", "Perks" },
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockedPerks_MetaData[] = {
		{ "Category", "Perks" },
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedPerks_MetaData[] = {
		{ "Category", "Perks" },
		{ "ModuleRelativePath", "Public/PlayerPerks.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastEquippedPerk;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockedPerks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LockedPerks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnlockedPerks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockedPerks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquippedPerks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EquippedPerks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerPerks_EquipPerk, "EquipPerk" }, // 161918881
		{ &Z_Construct_UFunction_UPlayerPerks_OnPerkEquipped_ClientEvent, "OnPerkEquipped_ClientEvent" }, // 3066845085
		{ &Z_Construct_UFunction_UPlayerPerks_OnRep_LastEquippedPerk, "OnRep_LastEquippedPerk" }, // 2699304897
		{ &Z_Construct_UFunction_UPlayerPerks_ServerEquipPerk, "ServerEquipPerk" }, // 502088429
		{ &Z_Construct_UFunction_UPlayerPerks_ServerUnlockPerk, "ServerUnlockPerk" }, // 191257337
		{ &Z_Construct_UFunction_UPlayerPerks_UnlockPerk, "UnlockPerk" }, // 2828244395
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerPerks>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerPerks_Statics::NewProp_LastEquippedPerk = { "LastEquippedPerk", "OnRep_LastEquippedPerk", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerPerks, LastEquippedPerk), Z_Construct_UScriptStruct_FPerks, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastEquippedPerk_MetaData), NewProp_LastEquippedPerk_MetaData) }; // 4124859362
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerPerks_Statics::NewProp_LockedPerks_Inner = { "LockedPerks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPerks, METADATA_PARAMS(0, nullptr) }; // 4124859362
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerPerks_Statics::NewProp_LockedPerks = { "LockedPerks", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerPerks, LockedPerks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedPerks_MetaData), NewProp_LockedPerks_MetaData) }; // 4124859362
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerPerks_Statics::NewProp_UnlockedPerks_Inner = { "UnlockedPerks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPerks, METADATA_PARAMS(0, nullptr) }; // 4124859362
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerPerks_Statics::NewProp_UnlockedPerks = { "UnlockedPerks", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerPerks, UnlockedPerks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockedPerks_MetaData), NewProp_UnlockedPerks_MetaData) }; // 4124859362
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerPerks_Statics::NewProp_EquippedPerks_Inner = { "EquippedPerks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPerks, METADATA_PARAMS(0, nullptr) }; // 4124859362
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerPerks_Statics::NewProp_EquippedPerks = { "EquippedPerks", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerPerks, EquippedPerks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedPerks_MetaData), NewProp_EquippedPerks_MetaData) }; // 4124859362
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerPerks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPerks_Statics::NewProp_LastEquippedPerk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPerks_Statics::NewProp_LockedPerks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPerks_Statics::NewProp_LockedPerks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPerks_Statics::NewProp_UnlockedPerks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPerks_Statics::NewProp_UnlockedPerks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPerks_Statics::NewProp_EquippedPerks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPerks_Statics::NewProp_EquippedPerks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPerks_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerPerks_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPerks_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerPerks_Statics::ClassParams = {
	&UPlayerPerks::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerPerks_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPerks_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPerks_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerPerks_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerPerks()
{
	if (!Z_Registration_Info_UClass_UPlayerPerks.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerPerks.OuterSingleton, Z_Construct_UClass_UPlayerPerks_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerPerks.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UPlayerPerks::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_LastEquippedPerk(TEXT("LastEquippedPerk"));
	static FName Name_LockedPerks(TEXT("LockedPerks"));
	static FName Name_UnlockedPerks(TEXT("UnlockedPerks"));
	static FName Name_EquippedPerks(TEXT("EquippedPerks"));
	const bool bIsValid = true
		&& Name_LastEquippedPerk == ClassReps[(int32)ENetFields_Private::LastEquippedPerk].Property->GetFName()
		&& Name_LockedPerks == ClassReps[(int32)ENetFields_Private::LockedPerks].Property->GetFName()
		&& Name_UnlockedPerks == ClassReps[(int32)ENetFields_Private::UnlockedPerks].Property->GetFName()
		&& Name_EquippedPerks == ClassReps[(int32)ENetFields_Private::EquippedPerks].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPlayerPerks"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerPerks);
UPlayerPerks::~UPlayerPerks() {}
// ********** End Class UPlayerPerks ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h__Script_FMP_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPerks::StaticStruct, Z_Construct_UScriptStruct_FPerks_Statics::NewStructOps, TEXT("Perks"), &Z_Registration_Info_UScriptStruct_FPerks, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerks), 4124859362U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerPerks, UPlayerPerks::StaticClass, TEXT("UPlayerPerks"), &Z_Registration_Info_UClass_UPlayerPerks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerPerks), 3127808306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h__Script_FMP_944053242(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h__Script_FMP_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h__Script_FMP_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PlayerPerks_h__Script_FMP_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
