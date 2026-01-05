// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PerformanceData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePerformanceData() {}

// ********** Begin Cross Module References ********************************************************
FMP_API UScriptStruct* Z_Construct_UScriptStruct_FPerformanceMetrics();
UPackage* Z_Construct_UPackage__Script_FMP();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPerformanceMetrics ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPerformanceMetrics;
class UScriptStruct* FPerformanceMetrics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPerformanceMetrics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPerformanceMetrics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerformanceMetrics, (UObject*)Z_Construct_UPackage__Script_FMP(), TEXT("PerformanceMetrics"));
	}
	return Z_Registration_Info_UScriptStruct_FPerformanceMetrics.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPerformanceMetrics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerformanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time elapsed since logging started (in seconds)\n" },
#endif
		{ "ModuleRelativePath", "Public/PerformanceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time elapsed since logging started (in seconds)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPS_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Frame rendering time (in milliseconds)\n" },
#endif
		{ "ModuleRelativePath", "Public/PerformanceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Frame rendering time (in milliseconds)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPUCycles_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerformanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryUsedMB_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cumulative CPU time used by the process (in seconds)\n" },
#endif
		{ "ModuleRelativePath", "Public/PerformanceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cumulative CPU time used by the process (in seconds)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FPS;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_CPUCycles;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_MemoryUsedMB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerformanceMetrics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerformanceMetrics, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::NewProp_FrameTime = { "FrameTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerformanceMetrics, FrameTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameTime_MetaData), NewProp_FrameTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerformanceMetrics, FPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPS_MetaData), NewProp_FPS_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::NewProp_CPUCycles = { "CPUCycles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerformanceMetrics, CPUCycles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPUCycles_MetaData), NewProp_CPUCycles_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::NewProp_MemoryUsedMB = { "MemoryUsedMB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerformanceMetrics, MemoryUsedMB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryUsedMB_MetaData), NewProp_MemoryUsedMB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::NewProp_FrameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::NewProp_FPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::NewProp_CPUCycles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::NewProp_MemoryUsedMB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
	nullptr,
	&NewStructOps,
	"PerformanceMetrics",
	Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::PropPointers),
	sizeof(FPerformanceMetrics),
	alignof(FPerformanceMetrics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerformanceMetrics()
{
	if (!Z_Registration_Info_UScriptStruct_FPerformanceMetrics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPerformanceMetrics.InnerSingleton, Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPerformanceMetrics.InnerSingleton;
}
// ********** End ScriptStruct FPerformanceMetrics *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerformanceData_h__Script_FMP_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPerformanceMetrics::StaticStruct, Z_Construct_UScriptStruct_FPerformanceMetrics_Statics::NewStructOps, TEXT("PerformanceMetrics"), &Z_Registration_Info_UScriptStruct_FPerformanceMetrics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerformanceMetrics), 703462521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerformanceData_h__Script_FMP_2515900409(TEXT("/Script/FMP"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerformanceData_h__Script_FMP_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerformanceData_h__Script_FMP_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
