// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralGeneration.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProceduralGeneration() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
FMP_API UClass* Z_Construct_UClass_AProceduralGeneration();
FMP_API UClass* Z_Construct_UClass_AProceduralGeneration_NoRegister();
FMP_API UEnum* Z_Construct_UEnum_FMP_EBorder();
FMP_API UEnum* Z_Construct_UEnum_FMP_EBorderSpawnLocation();
FMP_API UScriptStruct* Z_Construct_UScriptStruct_FActorPopulationSetting();
FMP_API UScriptStruct* Z_Construct_UScriptStruct_FBorderActorSpawnSetting();
FMP_API UScriptStruct* Z_Construct_UScriptStruct_FBorderMeshSpawnSetting();
FMP_API UScriptStruct* Z_Construct_UScriptStruct_FMeshPopulationSetting();
FMP_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnedObjectInfo();
UPackage* Z_Construct_UPackage__Script_FMP();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EBorder *******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBorder;
static UEnum* EBorder_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBorder.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBorder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FMP_EBorder, (UObject*)Z_Construct_UPackage__Script_FMP(), TEXT("EBorder"));
	}
	return Z_Registration_Info_UEnum_EBorder.OuterSingleton;
}
template<> FMP_API UEnum* StaticEnum<EBorder>()
{
	return EBorder_StaticEnum();
}
struct Z_Construct_UEnum_FMP_EBorder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "East.Name", "EBorder::East" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
		{ "North.Name", "EBorder::North" },
		{ "South.Name", "EBorder::South" },
		{ "West.Name", "EBorder::West" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBorder::North", (int64)EBorder::North },
		{ "EBorder::South", (int64)EBorder::South },
		{ "EBorder::East", (int64)EBorder::East },
		{ "EBorder::West", (int64)EBorder::West },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FMP_EBorder_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FMP,
	nullptr,
	"EBorder",
	"EBorder",
	Z_Construct_UEnum_FMP_EBorder_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FMP_EBorder_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FMP_EBorder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FMP_EBorder_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FMP_EBorder()
{
	if (!Z_Registration_Info_UEnum_EBorder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBorder.InnerSingleton, Z_Construct_UEnum_FMP_EBorder_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBorder.InnerSingleton;
}
// ********** End Enum EBorder *********************************************************************

// ********** Begin Enum EBorderSpawnLocation ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBorderSpawnLocation;
static UEnum* EBorderSpawnLocation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBorderSpawnLocation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBorderSpawnLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FMP_EBorderSpawnLocation, (UObject*)Z_Construct_UPackage__Script_FMP(), TEXT("EBorderSpawnLocation"));
	}
	return Z_Registration_Info_UEnum_EBorderSpawnLocation.OuterSingleton;
}
template<> FMP_API UEnum* StaticEnum<EBorderSpawnLocation>()
{
	return EBorderSpawnLocation_StaticEnum();
}
struct Z_Construct_UEnum_FMP_EBorderSpawnLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Left.Name", "EBorderSpawnLocation::Left" },
		{ "Middle.Name", "EBorderSpawnLocation::Middle" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
		{ "Right.Name", "EBorderSpawnLocation::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBorderSpawnLocation::Middle", (int64)EBorderSpawnLocation::Middle },
		{ "EBorderSpawnLocation::Left", (int64)EBorderSpawnLocation::Left },
		{ "EBorderSpawnLocation::Right", (int64)EBorderSpawnLocation::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FMP_EBorderSpawnLocation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FMP,
	nullptr,
	"EBorderSpawnLocation",
	"EBorderSpawnLocation",
	Z_Construct_UEnum_FMP_EBorderSpawnLocation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FMP_EBorderSpawnLocation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FMP_EBorderSpawnLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FMP_EBorderSpawnLocation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FMP_EBorderSpawnLocation()
{
	if (!Z_Registration_Info_UEnum_EBorderSpawnLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBorderSpawnLocation.InnerSingleton, Z_Construct_UEnum_FMP_EBorderSpawnLocation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBorderSpawnLocation.InnerSingleton;
}
// ********** End Enum EBorderSpawnLocation ********************************************************

// ********** Begin ScriptStruct FSpawnedObjectInfo ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSpawnedObjectInfo;
class UScriptStruct* FSpawnedObjectInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSpawnedObjectInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSpawnedObjectInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnedObjectInfo, (UObject*)Z_Construct_UPackage__Script_FMP(), TEXT("SpawnedObjectInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FSpawnedObjectInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSpawnedObjectInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnedObjectInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnedObjectInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
	nullptr,
	&NewStructOps,
	"SpawnedObjectInfo",
	nullptr,
	0,
	sizeof(FSpawnedObjectInfo),
	alignof(FSpawnedObjectInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnedObjectInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnedObjectInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnedObjectInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FSpawnedObjectInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSpawnedObjectInfo.InnerSingleton, Z_Construct_UScriptStruct_FSpawnedObjectInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSpawnedObjectInfo.InnerSingleton;
}
// ********** End ScriptStruct FSpawnedObjectInfo **************************************************

// ********** Begin ScriptStruct FActorPopulationSetting *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActorPopulationSetting;
class UScriptStruct* FActorPopulationSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActorPopulationSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActorPopulationSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPopulationSetting, (UObject*)Z_Construct_UPackage__Script_FMP(), TEXT("ActorPopulationSetting"));
	}
	return Z_Registration_Info_UScriptStruct_FActorPopulationSetting.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FActorPopulationSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Actor Setting" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
		{ "Category", "Actor Setting" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Actor Setting" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnCount_MetaData[] = {
		{ "Category", "Actor Setting" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpawnCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPopulationSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPopulationSetting, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPopulationSetting, Density), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Density_MetaData), NewProp_Density_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPopulationSetting, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::NewProp_MaxSpawnCount = { "MaxSpawnCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPopulationSetting, MaxSpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpawnCount_MetaData), NewProp_MaxSpawnCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::NewProp_Density,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::NewProp_MaxSpawnCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
	nullptr,
	&NewStructOps,
	"ActorPopulationSetting",
	Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::PropPointers),
	sizeof(FActorPopulationSetting),
	alignof(FActorPopulationSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorPopulationSetting()
{
	if (!Z_Registration_Info_UScriptStruct_FActorPopulationSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActorPopulationSetting.InnerSingleton, Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FActorPopulationSetting.InnerSingleton;
}
// ********** End ScriptStruct FActorPopulationSetting *********************************************

// ********** Begin ScriptStruct FMeshPopulationSetting ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMeshPopulationSetting;
class UScriptStruct* FMeshPopulationSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMeshPopulationSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMeshPopulationSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshPopulationSetting, (UObject*)Z_Construct_UPackage__Script_FMP(), TEXT("MeshPopulationSetting"));
	}
	return Z_Registration_Info_UScriptStruct_FMeshPopulationSetting.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh Setting" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
		{ "Category", "Mesh Setting" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Mesh Setting" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Mesh Setting" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnCount_MetaData[] = {
		{ "Category", "Mesh Setting" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMin_MetaData[] = {
		{ "Category", "Mesh Setting" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMax_MetaData[] = {
		{ "Category", "Mesh Setting" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMin_MetaData[] = {
		{ "Category", "Mesh Setting" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMax_MetaData[] = {
		{ "Category", "Mesh Setting" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpawnCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshPopulationSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshPopulationSetting, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshPopulationSetting, Density), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Density_MetaData), NewProp_Density_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshPopulationSetting, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshPopulationSetting, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_MaxSpawnCount = { "MaxSpawnCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshPopulationSetting, MaxSpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpawnCount_MetaData), NewProp_MaxSpawnCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_RotationMin = { "RotationMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshPopulationSetting, RotationMin), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMin_MetaData), NewProp_RotationMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_RotationMax = { "RotationMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshPopulationSetting, RotationMax), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMax_MetaData), NewProp_RotationMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_ScaleMin = { "ScaleMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshPopulationSetting, ScaleMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMin_MetaData), NewProp_ScaleMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_ScaleMax = { "ScaleMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshPopulationSetting, ScaleMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMax_MetaData), NewProp_ScaleMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_Density,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_MaxSpawnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_RotationMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_RotationMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_ScaleMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewProp_ScaleMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
	nullptr,
	&NewStructOps,
	"MeshPopulationSetting",
	Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::PropPointers),
	sizeof(FMeshPopulationSetting),
	alignof(FMeshPopulationSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshPopulationSetting()
{
	if (!Z_Registration_Info_UScriptStruct_FMeshPopulationSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMeshPopulationSetting.InnerSingleton, Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMeshPopulationSetting.InnerSingleton;
}
// ********** End ScriptStruct FMeshPopulationSetting **********************************************

// ********** Begin ScriptStruct FBorderMeshSpawnSetting *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBorderMeshSpawnSetting;
class UScriptStruct* FBorderMeshSpawnSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBorderMeshSpawnSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBorderMeshSpawnSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBorderMeshSpawnSetting, (UObject*)Z_Construct_UPackage__Script_FMP(), TEXT("BorderMeshSpawnSetting"));
	}
	return Z_Registration_Info_UScriptStruct_FBorderMeshSpawnSetting.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Border Mesh Spawn Setting" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Border Mesh Spawn Setting" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Border Mesh Spawn Setting" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Added this property as it is needed by SetupHISMComponents\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Added this property as it is needed by SetupHISMComponents" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMin_MetaData[] = {
		{ "Category", "Border Mesh Spawn Setting" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMax_MetaData[] = {
		{ "Category", "Border Mesh Spawn Setting" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMin_MetaData[] = {
		{ "Category", "Border Mesh Spawn Setting" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMax_MetaData[] = {
		{ "Category", "Border Mesh Spawn Setting" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCountPerSide_MetaData[] = {
		{ "Category", "Border Mesh Spawn Setting" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardOffsetFromBorder_MetaData[] = {
		{ "Category", "Border Mesh Spawn Setting" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCountPerSide;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardOffsetFromBorder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBorderMeshSpawnSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBorderMeshSpawnSetting, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBorderMeshSpawnSetting, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBorderMeshSpawnSetting, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_ScaleMin = { "ScaleMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBorderMeshSpawnSetting, ScaleMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMin_MetaData), NewProp_ScaleMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_ScaleMax = { "ScaleMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBorderMeshSpawnSetting, ScaleMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMax_MetaData), NewProp_ScaleMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_RotationMin = { "RotationMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBorderMeshSpawnSetting, RotationMin), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMin_MetaData), NewProp_RotationMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_RotationMax = { "RotationMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBorderMeshSpawnSetting, RotationMax), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMax_MetaData), NewProp_RotationMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_MaxCountPerSide = { "MaxCountPerSide", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBorderMeshSpawnSetting, MaxCountPerSide), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCountPerSide_MetaData), NewProp_MaxCountPerSide_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_ForwardOffsetFromBorder = { "ForwardOffsetFromBorder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBorderMeshSpawnSetting, ForwardOffsetFromBorder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardOffsetFromBorder_MetaData), NewProp_ForwardOffsetFromBorder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_ScaleMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_ScaleMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_RotationMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_RotationMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_MaxCountPerSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewProp_ForwardOffsetFromBorder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
	nullptr,
	&NewStructOps,
	"BorderMeshSpawnSetting",
	Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::PropPointers),
	sizeof(FBorderMeshSpawnSetting),
	alignof(FBorderMeshSpawnSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBorderMeshSpawnSetting()
{
	if (!Z_Registration_Info_UScriptStruct_FBorderMeshSpawnSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBorderMeshSpawnSetting.InnerSingleton, Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBorderMeshSpawnSetting.InnerSingleton;
}
// ********** End ScriptStruct FBorderMeshSpawnSetting *********************************************

// ********** Begin ScriptStruct FBorderActorSpawnSetting ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBorderActorSpawnSetting;
class UScriptStruct* FBorderActorSpawnSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBorderActorSpawnSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBorderActorSpawnSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBorderActorSpawnSetting, (UObject*)Z_Construct_UPackage__Script_FMP(), TEXT("BorderActorSpawnSetting"));
	}
	return Z_Registration_Info_UScriptStruct_FBorderActorSpawnSetting.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Border Actor Spawn Setting" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Border Actor Spawn Setting" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCountPerSide_MetaData[] = {
		{ "Category", "Border Actor Spawn Setting" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardOffsetFromBorder_MetaData[] = {
		{ "Category", "Border Actor Spawn Setting" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCountPerSide;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardOffsetFromBorder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBorderActorSpawnSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBorderActorSpawnSetting, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBorderActorSpawnSetting, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::NewProp_MaxCountPerSide = { "MaxCountPerSide", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBorderActorSpawnSetting, MaxCountPerSide), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCountPerSide_MetaData), NewProp_MaxCountPerSide_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::NewProp_ForwardOffsetFromBorder = { "ForwardOffsetFromBorder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBorderActorSpawnSetting, ForwardOffsetFromBorder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardOffsetFromBorder_MetaData), NewProp_ForwardOffsetFromBorder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::NewProp_MaxCountPerSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::NewProp_ForwardOffsetFromBorder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
	nullptr,
	&NewStructOps,
	"BorderActorSpawnSetting",
	Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::PropPointers),
	sizeof(FBorderActorSpawnSetting),
	alignof(FBorderActorSpawnSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBorderActorSpawnSetting()
{
	if (!Z_Registration_Info_UScriptStruct_FBorderActorSpawnSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBorderActorSpawnSetting.InnerSingleton, Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBorderActorSpawnSetting.InnerSingleton;
}
// ********** End ScriptStruct FBorderActorSpawnSetting ********************************************

// ********** Begin Class AProceduralGeneration Function ApplyMaterialToTerrain ********************
struct Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain_Statics
{
	struct ProceduralGeneration_eventApplyMaterialToTerrain_Parms
	{
		UMaterialInterface* NewMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Generation" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralGeneration_eventApplyMaterialToTerrain_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain_Statics::NewProp_NewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProceduralGeneration, nullptr, "ApplyMaterialToTerrain", Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain_Statics::ProceduralGeneration_eventApplyMaterialToTerrain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain_Statics::ProceduralGeneration_eventApplyMaterialToTerrain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProceduralGeneration::execApplyMaterialToTerrain)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyMaterialToTerrain(Z_Param_NewMaterial);
	P_NATIVE_END;
}
// ********** End Class AProceduralGeneration Function ApplyMaterialToTerrain **********************

// ********** Begin Class AProceduralGeneration Function GetPlayerSpawnPoint ***********************
struct Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint_Statics
{
	struct ProceduralGeneration_eventGetPlayerSpawnPoint_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Generation|Player" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralGeneration_eventGetPlayerSpawnPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProceduralGeneration, nullptr, "GetPlayerSpawnPoint", Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint_Statics::ProceduralGeneration_eventGetPlayerSpawnPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint_Statics::ProceduralGeneration_eventGetPlayerSpawnPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProceduralGeneration::execGetPlayerSpawnPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPlayerSpawnPoint();
	P_NATIVE_END;
}
// ********** End Class AProceduralGeneration Function GetPlayerSpawnPoint *************************

// ********** Begin Class AProceduralGeneration Function OnRep_Seed ********************************
struct Z_Construct_UFunction_AProceduralGeneration_OnRep_Seed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **Multiplayer Change:** RepNotify function\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**Multiplayer Change:** RepNotify function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralGeneration_OnRep_Seed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProceduralGeneration, nullptr, "OnRep_Seed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralGeneration_OnRep_Seed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProceduralGeneration_OnRep_Seed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProceduralGeneration_OnRep_Seed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProceduralGeneration_OnRep_Seed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProceduralGeneration::execOnRep_Seed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Seed();
	P_NATIVE_END;
}
// ********** End Class AProceduralGeneration Function OnRep_Seed **********************************

// ********** Begin Class AProceduralGeneration ****************************************************
void AProceduralGeneration::StaticRegisterNativesAProceduralGeneration()
{
	UClass* Class = AProceduralGeneration::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyMaterialToTerrain", &AProceduralGeneration::execApplyMaterialToTerrain },
		{ "GetPlayerSpawnPoint", &AProceduralGeneration::execGetPlayerSpawnPoint },
		{ "OnRep_Seed", &AProceduralGeneration::execOnRep_Seed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProceduralGeneration;
UClass* AProceduralGeneration::GetPrivateStaticClass()
{
	using TClass = AProceduralGeneration;
	if (!Z_Registration_Info_UClass_AProceduralGeneration.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProceduralGeneration"),
			Z_Registration_Info_UClass_AProceduralGeneration.InnerSingleton,
			StaticRegisterNativesAProceduralGeneration,
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
	return Z_Registration_Info_UClass_AProceduralGeneration.InnerSingleton;
}
UClass* Z_Construct_UClass_AProceduralGeneration_NoRegister()
{
	return AProceduralGeneration::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProceduralGeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralGeneration.h" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XSize_MetaData[] = {
		{ "Category", "ProceduralGeneration" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YSize_MetaData[] = {
		{ "Category", "ProceduralGeneration" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZMultiplier_MetaData[] = {
		{ "Category", "ProceduralGeneration" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[] = {
		{ "Category", "ProceduralGeneration" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "ProceduralGeneration" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[] = {
		{ "Category", "ProceduralGeneration" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "ProceduralGeneration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **Multiplayer Change:** ReplicatedUsing added to synchronize the seed\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**Multiplayer Change:** ReplicatedUsing added to synchronize the seed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshPopulationSettings_MetaData[] = {
		{ "Category", "Procedural Generation|Population Settings" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorPopulationSettings_MetaData[] = {
		{ "Category", "Procedural Generation|Population Settings" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderMeshSpawnSettings_MetaData[] = {
		{ "Category", "Procedural Generation|Population Settings" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderActorSpawnSettings_MetaData[] = {
		{ "Category", "Procedural Generation|Population Settings" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSlopeAngle_MetaData[] = {
		{ "Category", "Procedural Generation|Population Settings" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCellSize_MetaData[] = {
		{ "Category", "Procedural Generation|Performance" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderExclusion_MetaData[] = {
		{ "Category", "Procedural Generation|Population Settings" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderSpawnOffsetFraction_MetaData[] = {
		{ "Category", "Procedural Generation|Population Settings" },
		{ "ClampMax", "0.500000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutOfBoundsDepth_MetaData[] = {
		{ "Category", "Procedural Generation|Out of Bounds" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutOfBoundsCountdownDuration_MetaData[] = {
		{ "Category", "Procedural Generation|Out of Bounds" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSpawnForwardOffset_MetaData[] = {
		{ "Category", "Procedural Generation|Player" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerrainMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_XSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_YSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UVScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshPopulationSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshPopulationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorPopulationSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorPopulationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderMeshSpawnSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BorderMeshSpawnSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderActorSpawnSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BorderActorSpawnSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSlopeAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridCellSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BorderExclusion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BorderSpawnOffsetFraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutOfBoundsDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutOfBoundsCountdownDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerSpawnForwardOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TerrainMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProceduralGeneration_ApplyMaterialToTerrain, "ApplyMaterialToTerrain" }, // 1920220649
		{ &Z_Construct_UFunction_AProceduralGeneration_GetPlayerSpawnPoint, "GetPlayerSpawnPoint" }, // 1876644709
		{ &Z_Construct_UFunction_AProceduralGeneration_OnRep_Seed, "OnRep_Seed" }, // 3323994431
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralGeneration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_XSize = { "XSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, XSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XSize_MetaData), NewProp_XSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_YSize = { "YSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, YSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YSize_MetaData), NewProp_YSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_ZMultiplier = { "ZMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, ZMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZMultiplier_MetaData), NewProp_ZMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, NoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseScale_MetaData), NewProp_NoiseScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, UVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVScale_MetaData), NewProp_UVScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_Seed = { "Seed", "OnRep_Seed", (EPropertyFlags)0x0010000100000021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_MeshPopulationSettings_Inner = { "MeshPopulationSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshPopulationSetting, METADATA_PARAMS(0, nullptr) }; // 528403059
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_MeshPopulationSettings = { "MeshPopulationSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, MeshPopulationSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshPopulationSettings_MetaData), NewProp_MeshPopulationSettings_MetaData) }; // 528403059
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_ActorPopulationSettings_Inner = { "ActorPopulationSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorPopulationSetting, METADATA_PARAMS(0, nullptr) }; // 1346981080
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_ActorPopulationSettings = { "ActorPopulationSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, ActorPopulationSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorPopulationSettings_MetaData), NewProp_ActorPopulationSettings_MetaData) }; // 1346981080
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_BorderMeshSpawnSettings_Inner = { "BorderMeshSpawnSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBorderMeshSpawnSetting, METADATA_PARAMS(0, nullptr) }; // 868047433
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_BorderMeshSpawnSettings = { "BorderMeshSpawnSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, BorderMeshSpawnSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderMeshSpawnSettings_MetaData), NewProp_BorderMeshSpawnSettings_MetaData) }; // 868047433
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_BorderActorSpawnSettings_Inner = { "BorderActorSpawnSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBorderActorSpawnSetting, METADATA_PARAMS(0, nullptr) }; // 3243213933
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_BorderActorSpawnSettings = { "BorderActorSpawnSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, BorderActorSpawnSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderActorSpawnSettings_MetaData), NewProp_BorderActorSpawnSettings_MetaData) }; // 3243213933
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_MaxSlopeAngle = { "MaxSlopeAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, MaxSlopeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSlopeAngle_MetaData), NewProp_MaxSlopeAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_GridCellSize = { "GridCellSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, GridCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCellSize_MetaData), NewProp_GridCellSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_BorderExclusion = { "BorderExclusion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, BorderExclusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderExclusion_MetaData), NewProp_BorderExclusion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_BorderSpawnOffsetFraction = { "BorderSpawnOffsetFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, BorderSpawnOffsetFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderSpawnOffsetFraction_MetaData), NewProp_BorderSpawnOffsetFraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_OutOfBoundsDepth = { "OutOfBoundsDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, OutOfBoundsDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutOfBoundsDepth_MetaData), NewProp_OutOfBoundsDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_OutOfBoundsCountdownDuration = { "OutOfBoundsCountdownDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, OutOfBoundsCountdownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutOfBoundsCountdownDuration_MetaData), NewProp_OutOfBoundsCountdownDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_PlayerSpawnForwardOffset = { "PlayerSpawnForwardOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, PlayerSpawnForwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSpawnForwardOffset_MetaData), NewProp_PlayerSpawnForwardOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_TerrainMaterial = { "TerrainMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, TerrainMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerrainMaterial_MetaData), NewProp_TerrainMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralGeneration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_XSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_YSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_ZMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_UVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_MeshPopulationSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_MeshPopulationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_ActorPopulationSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_ActorPopulationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_BorderMeshSpawnSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_BorderMeshSpawnSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_BorderActorSpawnSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_BorderActorSpawnSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_MaxSlopeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_GridCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_BorderExclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_BorderSpawnOffsetFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_OutOfBoundsDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_OutOfBoundsCountdownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_PlayerSpawnForwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_TerrainMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralGeneration_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProceduralGeneration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralGeneration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProceduralGeneration_Statics::ClassParams = {
	&AProceduralGeneration::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProceduralGeneration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralGeneration_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralGeneration_Statics::Class_MetaDataParams), Z_Construct_UClass_AProceduralGeneration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProceduralGeneration()
{
	if (!Z_Registration_Info_UClass_AProceduralGeneration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralGeneration.OuterSingleton, Z_Construct_UClass_AProceduralGeneration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProceduralGeneration.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AProceduralGeneration::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Seed(TEXT("Seed"));
	const bool bIsValid = true
		&& Name_Seed == ClassReps[(int32)ENetFields_Private::Seed].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AProceduralGeneration"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralGeneration);
AProceduralGeneration::~AProceduralGeneration() {}
// ********** End Class AProceduralGeneration ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h__Script_FMP_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBorder_StaticEnum, TEXT("EBorder"), &Z_Registration_Info_UEnum_EBorder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2755615595U) },
		{ EBorderSpawnLocation_StaticEnum, TEXT("EBorderSpawnLocation"), &Z_Registration_Info_UEnum_EBorderSpawnLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2362132801U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpawnedObjectInfo::StaticStruct, Z_Construct_UScriptStruct_FSpawnedObjectInfo_Statics::NewStructOps, TEXT("SpawnedObjectInfo"), &Z_Registration_Info_UScriptStruct_FSpawnedObjectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnedObjectInfo), 2395699293U) },
		{ FActorPopulationSetting::StaticStruct, Z_Construct_UScriptStruct_FActorPopulationSetting_Statics::NewStructOps, TEXT("ActorPopulationSetting"), &Z_Registration_Info_UScriptStruct_FActorPopulationSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorPopulationSetting), 1346981080U) },
		{ FMeshPopulationSetting::StaticStruct, Z_Construct_UScriptStruct_FMeshPopulationSetting_Statics::NewStructOps, TEXT("MeshPopulationSetting"), &Z_Registration_Info_UScriptStruct_FMeshPopulationSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshPopulationSetting), 528403059U) },
		{ FBorderMeshSpawnSetting::StaticStruct, Z_Construct_UScriptStruct_FBorderMeshSpawnSetting_Statics::NewStructOps, TEXT("BorderMeshSpawnSetting"), &Z_Registration_Info_UScriptStruct_FBorderMeshSpawnSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBorderMeshSpawnSetting), 868047433U) },
		{ FBorderActorSpawnSetting::StaticStruct, Z_Construct_UScriptStruct_FBorderActorSpawnSetting_Statics::NewStructOps, TEXT("BorderActorSpawnSetting"), &Z_Registration_Info_UScriptStruct_FBorderActorSpawnSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBorderActorSpawnSetting), 3243213933U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralGeneration, AProceduralGeneration::StaticClass, TEXT("AProceduralGeneration"), &Z_Registration_Info_UClass_AProceduralGeneration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralGeneration), 1443354387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h__Script_FMP_3183333746(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h__Script_FMP_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h__Script_FMP_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h__Script_FMP_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h__Script_FMP_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_ProceduralGeneration_h__Script_FMP_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
