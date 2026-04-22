// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PerformanceLogger.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePerformanceLogger() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FMP_API UClass* Z_Construct_UClass_UPerformanceLogger();
FMP_API UClass* Z_Construct_UClass_UPerformanceLogger_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPerformanceLogger *******************************************************
void UPerformanceLogger::StaticRegisterNativesUPerformanceLogger()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPerformanceLogger;
UClass* UPerformanceLogger::GetPrivateStaticClass()
{
	using TClass = UPerformanceLogger;
	if (!Z_Registration_Info_UClass_UPerformanceLogger.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PerformanceLogger"),
			Z_Registration_Info_UClass_UPerformanceLogger.InnerSingleton,
			StaticRegisterNativesUPerformanceLogger,
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
	return Z_Registration_Info_UClass_UPerformanceLogger.InnerSingleton;
}
UClass* Z_Construct_UClass_UPerformanceLogger_NoRegister()
{
	return UPerformanceLogger::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPerformanceLogger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Component responsible for tracking and logging game performance metrics.\n * \n * This component collects data such as frame rate and execution times, storing them\n * over the session and writing them to a log file upon session end.\n */" },
#endif
		{ "IncludePath", "PerformanceLogger.h" },
		{ "ModuleRelativePath", "Public/PerformanceLogger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Component responsible for tracking and logging game performance metrics.\n\nThis component collects data such as frame rate and execution times, storing them\nover the session and writing them to a log file upon session end." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogFrequency_MetaData[] = {
		{ "Category", "Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @brief Sets the frequency for logging data in seconds (default: 0.5 seconds) */" },
#endif
		{ "ModuleRelativePath", "Public/PerformanceLogger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Sets the frequency for logging data in seconds (default: 0.5 seconds)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LogFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerformanceLogger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerformanceLogger_Statics::NewProp_LogFrequency = { "LogFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerformanceLogger, LogFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogFrequency_MetaData), NewProp_LogFrequency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerformanceLogger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerformanceLogger_Statics::NewProp_LogFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerformanceLogger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPerformanceLogger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerformanceLogger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerformanceLogger_Statics::ClassParams = {
	&UPerformanceLogger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPerformanceLogger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPerformanceLogger_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPerformanceLogger_Statics::Class_MetaDataParams), Z_Construct_UClass_UPerformanceLogger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPerformanceLogger()
{
	if (!Z_Registration_Info_UClass_UPerformanceLogger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerformanceLogger.OuterSingleton, Z_Construct_UClass_UPerformanceLogger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPerformanceLogger.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPerformanceLogger);
UPerformanceLogger::~UPerformanceLogger() {}
// ********** End Class UPerformanceLogger *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerformanceLogger_h__Script_FMP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPerformanceLogger, UPerformanceLogger::StaticClass, TEXT("UPerformanceLogger"), &Z_Registration_Info_UClass_UPerformanceLogger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerformanceLogger), 12507908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerformanceLogger_h__Script_FMP_3003068067(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerformanceLogger_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_PerformanceLogger_h__Script_FMP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
