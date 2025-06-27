// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuwaharaFilter/Private/KuwaharaFilterSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuwaharaFilterSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
KUWAHARAFILTER_API UClass* Z_Construct_UClass_UKuwaharaFilterSubsystem();
KUWAHARAFILTER_API UClass* Z_Construct_UClass_UKuwaharaFilterSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_KuwaharaFilter();
// End Cross Module References

// Begin Class UKuwaharaFilterSubsystem
void UKuwaharaFilterSubsystem::StaticRegisterNativesUKuwaharaFilterSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuwaharaFilterSubsystem);
UClass* Z_Construct_UClass_UKuwaharaFilterSubsystem_NoRegister()
{
	return UKuwaharaFilterSubsystem::StaticClass();
}
struct Z_Construct_UClass_UKuwaharaFilterSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "KuwaharaFilterSubsystem.h" },
		{ "ModuleRelativePath", "Private/KuwaharaFilterSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuwaharaFilterSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKuwaharaFilterSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_KuwaharaFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuwaharaFilterSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuwaharaFilterSubsystem_Statics::ClassParams = {
	&UKuwaharaFilterSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuwaharaFilterSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuwaharaFilterSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKuwaharaFilterSubsystem()
{
	if (!Z_Registration_Info_UClass_UKuwaharaFilterSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuwaharaFilterSubsystem.OuterSingleton, Z_Construct_UClass_UKuwaharaFilterSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKuwaharaFilterSubsystem.OuterSingleton;
}
template<> KUWAHARAFILTER_API UClass* StaticClass<UKuwaharaFilterSubsystem>()
{
	return UKuwaharaFilterSubsystem::StaticClass();
}
UKuwaharaFilterSubsystem::UKuwaharaFilterSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKuwaharaFilterSubsystem);
UKuwaharaFilterSubsystem::~UKuwaharaFilterSubsystem() {}
// End Class UKuwaharaFilterSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_shan_Plugins_KuwaharaFilter_Source_KuwaharaFilter_Private_KuwaharaFilterSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKuwaharaFilterSubsystem, UKuwaharaFilterSubsystem::StaticClass, TEXT("UKuwaharaFilterSubsystem"), &Z_Registration_Info_UClass_UKuwaharaFilterSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuwaharaFilterSubsystem), 991468804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shan_Plugins_KuwaharaFilter_Source_KuwaharaFilter_Private_KuwaharaFilterSubsystem_h_764449607(TEXT("/Script/KuwaharaFilter"),
	Z_CompiledInDeferFile_FID_shan_Plugins_KuwaharaFilter_Source_KuwaharaFilter_Private_KuwaharaFilterSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shan_Plugins_KuwaharaFilter_Source_KuwaharaFilter_Private_KuwaharaFilterSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
