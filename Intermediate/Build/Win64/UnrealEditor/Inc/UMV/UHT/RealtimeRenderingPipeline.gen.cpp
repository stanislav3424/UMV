// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMV/RealtimeRenderingPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtimeRenderingPipeline() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UMV_API UClass* Z_Construct_UClass_AMainController_NoRegister();
UMV_API UClass* Z_Construct_UClass_ARealtimeRenderingPipeline();
UMV_API UClass* Z_Construct_UClass_ARealtimeRenderingPipeline_NoRegister();
UMV_API UClass* Z_Construct_UClass_ARepresentedActorBase_NoRegister();
UMV_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMV();
// End Cross Module References

// Begin Class ARealtimeRenderingPipeline Function GetMID
struct Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics
{
	struct RealtimeRenderingPipeline_eventGetMID_Parms
	{
		UItemBase* ItemBase;
		FIntPoint Size;
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::NewProp_ItemBase = { "ItemBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeRenderingPipeline_eventGetMID_Parms, ItemBase), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeRenderingPipeline_eventGetMID_Parms, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeRenderingPipeline_eventGetMID_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::NewProp_ItemBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARealtimeRenderingPipeline, nullptr, "GetMID", nullptr, nullptr, Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::RealtimeRenderingPipeline_eventGetMID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::RealtimeRenderingPipeline_eventGetMID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARealtimeRenderingPipeline::execGetMID)
{
	P_GET_OBJECT(UItemBase,Z_Param_ItemBase);
	P_GET_STRUCT(FIntPoint,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetMID(Z_Param_ItemBase,Z_Param_Size);
	P_NATIVE_END;
}
// End Class ARealtimeRenderingPipeline Function GetMID

// Begin Class ARealtimeRenderingPipeline
void ARealtimeRenderingPipeline::StaticRegisterNativesARealtimeRenderingPipeline()
{
	UClass* Class = ARealtimeRenderingPipeline::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMID", &ARealtimeRenderingPipeline::execGetMID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARealtimeRenderingPipeline);
UClass* Z_Construct_UClass_ARealtimeRenderingPipeline_NoRegister()
{
	return ARealtimeRenderingPipeline::StaticClass();
}
struct Z_Construct_UClass_ARealtimeRenderingPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RealtimeRenderingPipeline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainController_MetaData[] = {
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapTextures_MetaData[] = {
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderActor_MetaData[] = {
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneCapture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapTextures_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapTextures_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MapTextures;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneCapture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpotLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARealtimeRenderingPipeline_GetMID, "GetMID" }, // 295126296
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeRenderingPipeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MainController = { "MainController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeRenderingPipeline, MainController), Z_Construct_UClass_AMainController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainController_MetaData), NewProp_MainController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MapTextures_ValueProp = { "MapTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MapTextures_Key_KeyProp = { "MapTextures_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MapTextures = { "MapTextures", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeRenderingPipeline, MapTextures), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapTextures_MetaData), NewProp_MapTextures_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_RenderActor = { "RenderActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeRenderingPipeline, RenderActor), Z_Construct_UClass_ARepresentedActorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderActor_MetaData), NewProp_RenderActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_SceneCapture = { "SceneCapture", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeRenderingPipeline, SceneCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneCapture_MetaData), NewProp_SceneCapture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_SpotLight = { "SpotLight", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeRenderingPipeline, SpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpotLight_MetaData), NewProp_SpotLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MaterialBase = { "MaterialBase", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeRenderingPipeline, MaterialBase), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialBase_MetaData), NewProp_MaterialBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MainController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MapTextures_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MapTextures_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MapTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_RenderActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_SceneCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_SpotLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MaterialBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::ClassParams = {
	&ARealtimeRenderingPipeline::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARealtimeRenderingPipeline()
{
	if (!Z_Registration_Info_UClass_ARealtimeRenderingPipeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeRenderingPipeline.OuterSingleton, Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeRenderingPipeline.OuterSingleton;
}
template<> UMV_API UClass* StaticClass<ARealtimeRenderingPipeline>()
{
	return ARealtimeRenderingPipeline::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARealtimeRenderingPipeline);
ARealtimeRenderingPipeline::~ARealtimeRenderingPipeline() {}
// End Class ARealtimeRenderingPipeline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RealtimeRenderingPipeline_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeRenderingPipeline, ARealtimeRenderingPipeline::StaticClass, TEXT("ARealtimeRenderingPipeline"), &Z_Registration_Info_UClass_ARealtimeRenderingPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeRenderingPipeline), 3407809175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RealtimeRenderingPipeline_h_2166774667(TEXT("/Script/UMV"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RealtimeRenderingPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RealtimeRenderingPipeline_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
