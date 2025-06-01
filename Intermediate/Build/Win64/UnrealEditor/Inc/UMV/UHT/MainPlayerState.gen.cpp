// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMV/MainPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayerState() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UMV_API UClass* Z_Construct_UClass_AMainPlayerState();
UMV_API UClass* Z_Construct_UClass_AMainPlayerState_NoRegister();
UMV_API UClass* Z_Construct_UClass_ARealtimeRenderingPipeline_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMV();
// End Cross Module References

// Begin Class AMainPlayerState
void AMainPlayerState::StaticRegisterNativesAMainPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainPlayerState);
UClass* Z_Construct_UClass_AMainPlayerState_NoRegister()
{
	return AMainPlayerState::StaticClass();
}
struct Z_Construct_UClass_AMainPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MainPlayerState.h" },
		{ "ModuleRelativePath", "MainPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealtimeRenderingPipeline_MetaData[] = {
		{ "ModuleRelativePath", "MainPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealtimeRenderingPipelineClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "MainPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RealtimeRenderingPipeline;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RealtimeRenderingPipelineClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerState_Statics::NewProp_RealtimeRenderingPipeline = { "RealtimeRenderingPipeline", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerState, RealtimeRenderingPipeline), Z_Construct_UClass_ARealtimeRenderingPipeline_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealtimeRenderingPipeline_MetaData), NewProp_RealtimeRenderingPipeline_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerState_Statics::NewProp_RealtimeRenderingPipelineClass = { "RealtimeRenderingPipelineClass", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerState, RealtimeRenderingPipelineClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARealtimeRenderingPipeline_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealtimeRenderingPipelineClass_MetaData), NewProp_RealtimeRenderingPipelineClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerState_Statics::NewProp_RealtimeRenderingPipeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerState_Statics::NewProp_RealtimeRenderingPipelineClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayerState_Statics::ClassParams = {
	&AMainPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMainPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainPlayerState()
{
	if (!Z_Registration_Info_UClass_AMainPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainPlayerState.OuterSingleton, Z_Construct_UClass_AMainPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainPlayerState.OuterSingleton;
}
template<> UMV_API UClass* StaticClass<AMainPlayerState>()
{
	return AMainPlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayerState);
AMainPlayerState::~AMainPlayerState() {}
// End Class AMainPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainPlayerState, AMainPlayerState::StaticClass, TEXT("AMainPlayerState"), &Z_Registration_Info_UClass_AMainPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainPlayerState), 3915205499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainPlayerState_h_516779534(TEXT("/Script/UMV"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
