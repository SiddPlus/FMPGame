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
FMP_API UClass* Z_Construct_UClass_ATheGameMode();
FMP_API UClass* Z_Construct_UClass_ATheGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATheGameMode *************************************************************
void ATheGameMode::StaticRegisterNativesATheGameMode()
{
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheGameMode.h" },
		{ "ModuleRelativePath", "Public/TheGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
ATheGameMode::ATheGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATheGameMode);
ATheGameMode::~ATheGameMode() {}
// ********** End Class ATheGameMode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h__Script_FMP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheGameMode, ATheGameMode::StaticClass, TEXT("ATheGameMode"), &Z_Registration_Info_UClass_ATheGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheGameMode), 495151397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h__Script_FMP_1352897806(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameMode_h__Script_FMP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
