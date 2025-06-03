// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMV/RepresentedUnitBase.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepresentedUnitBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
UMV_API UClass* Z_Construct_UClass_AMainGameState_NoRegister();
UMV_API UClass* Z_Construct_UClass_ARepresentedUnitBase();
UMV_API UClass* Z_Construct_UClass_ARepresentedUnitBase_NoRegister();
UMV_API UClass* Z_Construct_UClass_UUnitBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMV();
// End Cross Module References

// Begin Class ARepresentedUnitBase Function IndependentInitialization
struct Z_Construct_UFunction_ARepresentedUnitBase_IndependentInitialization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "RepresentedUnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARepresentedUnitBase_IndependentInitialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARepresentedUnitBase, nullptr, "IndependentInitialization", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARepresentedUnitBase_IndependentInitialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARepresentedUnitBase_IndependentInitialization_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARepresentedUnitBase_IndependentInitialization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARepresentedUnitBase_IndependentInitialization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARepresentedUnitBase::execIndependentInitialization)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IndependentInitialization();
	P_NATIVE_END;
}
// End Class ARepresentedUnitBase Function IndependentInitialization

// Begin Class ARepresentedUnitBase Function Initialization
struct Z_Construct_UFunction_ARepresentedUnitBase_Initialization_Statics
{
	struct RepresentedUnitBase_eventInitialization_Parms
	{
		UUnitBase* InitializationUnitBase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "RepresentedUnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitializationUnitBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARepresentedUnitBase_Initialization_Statics::NewProp_InitializationUnitBase = { "InitializationUnitBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RepresentedUnitBase_eventInitialization_Parms, InitializationUnitBase), Z_Construct_UClass_UUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARepresentedUnitBase_Initialization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARepresentedUnitBase_Initialization_Statics::NewProp_InitializationUnitBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARepresentedUnitBase_Initialization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARepresentedUnitBase_Initialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARepresentedUnitBase, nullptr, "Initialization", nullptr, nullptr, Z_Construct_UFunction_ARepresentedUnitBase_Initialization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARepresentedUnitBase_Initialization_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARepresentedUnitBase_Initialization_Statics::RepresentedUnitBase_eventInitialization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARepresentedUnitBase_Initialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARepresentedUnitBase_Initialization_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARepresentedUnitBase_Initialization_Statics::RepresentedUnitBase_eventInitialization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARepresentedUnitBase_Initialization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARepresentedUnitBase_Initialization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARepresentedUnitBase::execInitialization)
{
	P_GET_OBJECT(UUnitBase,Z_Param_InitializationUnitBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialization(Z_Param_InitializationUnitBase);
	P_NATIVE_END;
}
// End Class ARepresentedUnitBase Function Initialization

// Begin Class ARepresentedUnitBase
void ARepresentedUnitBase::StaticRegisterNativesARepresentedUnitBase()
{
	UClass* Class = ARepresentedUnitBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IndependentInitialization", &ARepresentedUnitBase::execIndependentInitialization },
		{ "Initialization", &ARepresentedUnitBase::execInitialization },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARepresentedUnitBase);
UClass* Z_Construct_UClass_ARepresentedUnitBase_NoRegister()
{
	return ARepresentedUnitBase::StaticClass();
}
struct Z_Construct_UClass_ARepresentedUnitBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RepresentedUnitBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "RepresentedUnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "RepresentedUnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIndependent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "RepresentedUnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Owner UnitBase" },
		{ "ModuleRelativePath", "RepresentedUnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainGameState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "RepresentedUnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionTextComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Select" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RepresentedUnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static void NewProp_bIndependent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIndependent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainGameState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionTextComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARepresentedUnitBase_IndependentInitialization, "IndependentInitialization" }, // 1752770523
		{ &Z_Construct_UFunction_ARepresentedUnitBase_Initialization, "Initialization" }, // 1923722445
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARepresentedUnitBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARepresentedUnitBase_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARepresentedUnitBase, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
void Z_Construct_UClass_ARepresentedUnitBase_Statics::NewProp_bIndependent_SetBit(void* Obj)
{
	((ARepresentedUnitBase*)Obj)->bIndependent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARepresentedUnitBase_Statics::NewProp_bIndependent = { "bIndependent", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARepresentedUnitBase), &Z_Construct_UClass_ARepresentedUnitBase_Statics::NewProp_bIndependent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIndependent_MetaData), NewProp_bIndependent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARepresentedUnitBase_Statics::NewProp_UnitBase = { "UnitBase", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARepresentedUnitBase, UnitBase), Z_Construct_UClass_UUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitBase_MetaData), NewProp_UnitBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARepresentedUnitBase_Statics::NewProp_MainGameState = { "MainGameState", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARepresentedUnitBase, MainGameState), Z_Construct_UClass_AMainGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainGameState_MetaData), NewProp_MainGameState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARepresentedUnitBase_Statics::NewProp_SelectionTextComponent = { "SelectionTextComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARepresentedUnitBase, SelectionTextComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionTextComponent_MetaData), NewProp_SelectionTextComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARepresentedUnitBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepresentedUnitBase_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepresentedUnitBase_Statics::NewProp_bIndependent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepresentedUnitBase_Statics::NewProp_UnitBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepresentedUnitBase_Statics::NewProp_MainGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepresentedUnitBase_Statics::NewProp_SelectionTextComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentedUnitBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARepresentedUnitBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentedUnitBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARepresentedUnitBase_Statics::ClassParams = {
	&ARepresentedUnitBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARepresentedUnitBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentedUnitBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentedUnitBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARepresentedUnitBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARepresentedUnitBase()
{
	if (!Z_Registration_Info_UClass_ARepresentedUnitBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARepresentedUnitBase.OuterSingleton, Z_Construct_UClass_ARepresentedUnitBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARepresentedUnitBase.OuterSingleton;
}
template<> UMV_API UClass* StaticClass<ARepresentedUnitBase>()
{
	return ARepresentedUnitBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARepresentedUnitBase);
ARepresentedUnitBase::~ARepresentedUnitBase() {}
// End Class ARepresentedUnitBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedUnitBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARepresentedUnitBase, ARepresentedUnitBase::StaticClass, TEXT("ARepresentedUnitBase"), &Z_Registration_Info_UClass_ARepresentedUnitBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARepresentedUnitBase), 3175344331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedUnitBase_h_4060954903(TEXT("/Script/UMV"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedUnitBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedUnitBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
