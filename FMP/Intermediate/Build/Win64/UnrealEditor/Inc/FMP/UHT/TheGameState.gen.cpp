// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTheGameState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameState();
FMP_API UClass* Z_Construct_UClass_ATheGameState();
FMP_API UClass* Z_Construct_UClass_ATheGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATheGameState ************************************************************
void ATheGameState::StaticRegisterNativesATheGameState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATheGameState;
UClass* ATheGameState::GetPrivateStaticClass()
{
	using TClass = ATheGameState;
	if (!Z_Registration_Info_UClass_ATheGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TheGameState"),
			Z_Registration_Info_UClass_ATheGameState.InnerSingleton,
			StaticRegisterNativesATheGameState,
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
	return Z_Registration_Info_UClass_ATheGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_ATheGameState_NoRegister()
{
	return ATheGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATheGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheGameState.h" },
		{ "ModuleRelativePath", "Public/TheGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATheGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_FMP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheGameState_Statics::ClassParams = {
	&ATheGameState::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATheGameState()
{
	if (!Z_Registration_Info_UClass_ATheGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheGameState.OuterSingleton, Z_Construct_UClass_ATheGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATheGameState.OuterSingleton;
}
ATheGameState::ATheGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATheGameState);
ATheGameState::~ATheGameState() {}
// ********** End Class ATheGameState **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h__Script_FMP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheGameState, ATheGameState::StaticClass, TEXT("ATheGameState"), &Z_Registration_Info_UClass_ATheGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheGameState), 2613612161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h__Script_FMP_2218926051(TEXT("/Script/FMP"),
	Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h__Script_FMP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Siddg_Downloads_FMPGame_FMP_Source_FMP_Public_TheGameState_h__Script_FMP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
