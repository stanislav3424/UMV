// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMV/UI_Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_Item() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMV_API UClass* Z_Construct_UClass_UUI_Item();
UMV_API UClass* Z_Construct_UClass_UUI_Item_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMV();
// End Cross Module References

// Begin Class UUI_Item
void UUI_Item::StaticRegisterNativesUUI_Item()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUI_Item);
UClass* Z_Construct_UClass_UUI_Item_NoRegister()
{
	return UUI_Item::StaticClass();
}
struct Z_Construct_UClass_UUI_Item_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI_Item.h" },
		{ "ModuleRelativePath", "UI_Item.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_Item>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUI_Item_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Item_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUI_Item_Statics::ClassParams = {
	&UUI_Item::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_Item_Statics::Class_MetaDataParams), Z_Construct_UClass_UUI_Item_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUI_Item()
{
	if (!Z_Registration_Info_UClass_UUI_Item.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUI_Item.OuterSingleton, Z_Construct_UClass_UUI_Item_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUI_Item.OuterSingleton;
}
template<> UMV_API UClass* StaticClass<UUI_Item>()
{
	return UUI_Item::StaticClass();
}
UUI_Item::UUI_Item(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_Item);
UUI_Item::~UUI_Item() {}
// End Class UUI_Item

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UI_Item_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUI_Item, UUI_Item::StaticClass, TEXT("UUI_Item"), &Z_Registration_Info_UClass_UUI_Item, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUI_Item), 2027259315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UI_Item_h_3042221369(TEXT("/Script/UMV"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UI_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UI_Item_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
