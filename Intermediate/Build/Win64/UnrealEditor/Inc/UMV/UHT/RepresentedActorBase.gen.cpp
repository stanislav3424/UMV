// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMV/RepresentedActorBase.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepresentedActorBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
UMV_API UClass* Z_Construct_UClass_AMainGameState_NoRegister();
UMV_API UClass* Z_Construct_UClass_ARepresentedActorBase();
UMV_API UClass* Z_Construct_UClass_ARepresentedActorBase_NoRegister();
UMV_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMV();
// End Cross Module References

// Begin Class ARepresentedActorBase Function IndependentInitialization
struct Z_Construct_UFunction_ARepresentedActorBase_IndependentInitialization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "RepresentedActorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARepresentedActorBase_IndependentInitialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARepresentedActorBase, nullptr, "IndependentInitialization", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARepresentedActorBase_IndependentInitialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARepresentedActorBase_IndependentInitialization_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARepresentedActorBase_IndependentInitialization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARepresentedActorBase_IndependentInitialization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARepresentedActorBase::execIndependentInitialization)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IndependentInitialization();
	P_NATIVE_END;
}
// End Class ARepresentedActorBase Function IndependentInitialization

// Begin Class ARepresentedActorBase Function Initialization
struct Z_Construct_UFunction_ARepresentedActorBase_Initialization_Statics
{
	struct RepresentedActorBase_eventInitialization_Parms
	{
		UItemBase* InitializationItemBase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "RepresentedActorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitializationItemBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARepresentedActorBase_Initialization_Statics::NewProp_InitializationItemBase = { "InitializationItemBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RepresentedActorBase_eventInitialization_Parms, InitializationItemBase), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARepresentedActorBase_Initialization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARepresentedActorBase_Initialization_Statics::NewProp_InitializationItemBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARepresentedActorBase_Initialization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARepresentedActorBase_Initialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARepresentedActorBase, nullptr, "Initialization", nullptr, nullptr, Z_Construct_UFunction_ARepresentedActorBase_Initialization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARepresentedActorBase_Initialization_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARepresentedActorBase_Initialization_Statics::RepresentedActorBase_eventInitialization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARepresentedActorBase_Initialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARepresentedActorBase_Initialization_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARepresentedActorBase_Initialization_Statics::RepresentedActorBase_eventInitialization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARepresentedActorBase_Initialization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARepresentedActorBase_Initialization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARepresentedActorBase::execInitialization)
{
	P_GET_OBJECT(UItemBase,Z_Param_InitializationItemBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialization(Z_Param_InitializationItemBase);
	P_NATIVE_END;
}
// End Class ARepresentedActorBase Function Initialization

// Begin Class ARepresentedActorBase
void ARepresentedActorBase::StaticRegisterNativesARepresentedActorBase()
{
	UClass* Class = ARepresentedActorBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IndependentInitialization", &ARepresentedActorBase::execIndependentInitialization },
		{ "Initialization", &ARepresentedActorBase::execInitialization },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "RepresentedActorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIndependent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "RepresentedActorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OwnerItem" },
		{ "ModuleRelativePath", "RepresentedActorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainGameState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static void NewProp_bIndependent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIndependent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainGameState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARepresentedActorBase_IndependentInitialization, "IndependentInitialization" }, // 975794712
		{ &Z_Construct_UFunction_ARepresentedActorBase_Initialization, "Initialization" }, // 3248045306
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARepresentedActorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARepresentedActorBase, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
void Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_bIndependent_SetBit(void* Obj)
{
	((ARepresentedActorBase*)Obj)->bIndependent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_bIndependent = { "bIndependent", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARepresentedActorBase), &Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_bIndependent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIndependent_MetaData), NewProp_bIndependent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_ItemBase = { "ItemBase", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARepresentedActorBase, ItemBase), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemBase_MetaData), NewProp_ItemBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_MainGameState = { "MainGameState", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARepresentedActorBase, MainGameState), Z_Construct_UClass_AMainGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainGameState_MetaData), NewProp_MainGameState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARepresentedActorBase, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARepresentedActorBase, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARepresentedActorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_bIndependent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_ItemBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepresentedActorBase_Statics::NewProp_MainGameState,
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
	FuncInfo,
	Z_Construct_UClass_ARepresentedActorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ARepresentedActorBase, ARepresentedActorBase::StaticClass, TEXT("ARepresentedActorBase"), &Z_Registration_Info_UClass_ARepresentedActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARepresentedActorBase), 2590072517U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_15831715(TEXT("/Script/UMV"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
