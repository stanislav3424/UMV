// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMV/RepresentedActorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepresentedActorBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UMV_API UClass* Z_Construct_UClass_ARepresentedActorBase();
UMV_API UClass* Z_Construct_UClass_ARepresentedActorBase_NoRegister();
UMV_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMV();
// End Cross Module References

// Begin Class ARepresentedActorBase
void ARepresentedActorBase::StaticRegisterNativesARepresentedActorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARepresentedActorBase);
UClass* Z_Construct_UClass_ARepresentedActorBase_NoRegister()
{
	return ARepresentedActorBase::StaticClass();
}
struct Z_Construct_UClass_ARepresentedActorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RepresentedActorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "RepresentedActorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerItem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OwnerItem" },
		{ "ModuleRelativePath", "RepresentedActorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RepresentedActorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RepresentedActorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARepresentedActorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_OwnerItem = { "OwnerItem", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARepresentedActorBase, OwnerItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerItem_MetaData), NewProp_OwnerItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARepresentedActorBase, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARepresentedActorBase, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARepresentedActorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_OwnerItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_ArrowComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentedActorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARepresentedActorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentedActorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARepresentedActorBase_Statics::ClassParams = {
	&ARepresentedActorBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARepresentedActorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentedActorBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentedActorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARepresentedActorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARepresentedActorBase()
{
	if (!Z_Registration_Info_UClass_ARepresentedActorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARepresentedActorBase.OuterSingleton, Z_Construct_UClass_ARepresentedActorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARepresentedActorBase.OuterSingleton;
}
template<> UMV_API UClass* StaticClass<ARepresentedActorBase>()
{
	return ARepresentedActorBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARepresentedActorBase);
ARepresentedActorBase::~ARepresentedActorBase() {}
// End Class ARepresentedActorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARepresentedActorBase, ARepresentedActorBase::StaticClass, TEXT("ARepresentedActorBase"), &Z_Registration_Info_UClass_ARepresentedActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARepresentedActorBase), 2748475936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_3321113459(TEXT("/Script/UMV"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
