// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMV/MainController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMV_API UClass* Z_Construct_UClass_AMainController();
UMV_API UClass* Z_Construct_UClass_AMainController_NoRegister();
UMV_API UClass* Z_Construct_UClass_UUnitBase_NoRegister();
UMV_API UFunction* Z_Construct_UDelegateFunction_UMV_OnSelectedUnitsChanged__DelegateSignature();
UMV_API UFunction* Z_Construct_UDelegateFunction_UMV_OnTargetSelectedUnitChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMV();
// End Cross Module References

// Begin Delegate FOnSelectedUnitsChanged
struct Z_Construct_UDelegateFunction_UMV_OnSelectedUnitsChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMV_OnSelectedUnitsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMV, nullptr, "OnSelectedUnitsChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMV_OnSelectedUnitsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMV_OnSelectedUnitsChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMV_OnSelectedUnitsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMV_OnSelectedUnitsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSelectedUnitsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedUnitsChanged)
{
	OnSelectedUnitsChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnSelectedUnitsChanged

// Begin Delegate FOnTargetSelectedUnitChanged
struct Z_Construct_UDelegateFunction_UMV_OnTargetSelectedUnitChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMV_OnTargetSelectedUnitChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMV, nullptr, "OnTargetSelectedUnitChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMV_OnTargetSelectedUnitChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMV_OnTargetSelectedUnitChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMV_OnTargetSelectedUnitChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMV_OnTargetSelectedUnitChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTargetSelectedUnitChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTargetSelectedUnitChanged)
{
	OnTargetSelectedUnitChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnTargetSelectedUnitChanged

// Begin Class AMainController Function IsTargetISelectUnit
struct Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics
{
	struct MainController_eventIsTargetISelectUnit_Parms
	{
		UUnitBase* Unit;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainController_eventIsTargetISelectUnit_Parms, Unit), Z_Construct_UClass_UUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MainController_eventIsTargetISelectUnit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainController_eventIsTargetISelectUnit_Parms), &Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::NewProp_Unit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainController, nullptr, "IsTargetISelectUnit", nullptr, nullptr, Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::MainController_eventIsTargetISelectUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::MainController_eventIsTargetISelectUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainController_IsTargetISelectUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainController_IsTargetISelectUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainController::execIsTargetISelectUnit)
{
	P_GET_OBJECT(UUnitBase,Z_Param_Unit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTargetISelectUnit(Z_Param_Unit);
	P_NATIVE_END;
}
// End Class AMainController Function IsTargetISelectUnit

// Begin Class AMainController Function SetTargetSelectUnit
struct Z_Construct_UFunction_AMainController_SetTargetSelectUnit_Statics
{
	struct MainController_eventSetTargetSelectUnit_Parms
	{
		UUnitBase* Unit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainController_SetTargetSelectUnit_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainController_eventSetTargetSelectUnit_Parms, Unit), Z_Construct_UClass_UUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainController_SetTargetSelectUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainController_SetTargetSelectUnit_Statics::NewProp_Unit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainController_SetTargetSelectUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainController_SetTargetSelectUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainController, nullptr, "SetTargetSelectUnit", nullptr, nullptr, Z_Construct_UFunction_AMainController_SetTargetSelectUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainController_SetTargetSelectUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainController_SetTargetSelectUnit_Statics::MainController_eventSetTargetSelectUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainController_SetTargetSelectUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainController_SetTargetSelectUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainController_SetTargetSelectUnit_Statics::MainController_eventSetTargetSelectUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainController_SetTargetSelectUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainController_SetTargetSelectUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainController::execSetTargetSelectUnit)
{
	P_GET_OBJECT(UUnitBase,Z_Param_Unit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetSelectUnit(Z_Param_Unit);
	P_NATIVE_END;
}
// End Class AMainController Function SetTargetSelectUnit

// Begin Class AMainController
void AMainController::StaticRegisterNativesAMainController()
{
	UClass* Class = AMainController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsTargetISelectUnit", &AMainController::execIsTargetISelectUnit },
		{ "SetTargetSelectUnit", &AMainController::execSetTargetSelectUnit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainController);
UClass* Z_Construct_UClass_AMainController_NoRegister()
{
	return AMainController::StaticClass();
}
struct Z_Construct_UClass_AMainController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MainController.h" },
		{ "ModuleRelativePath", "MainController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MainController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MainController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MainController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedUnits_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "MainController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSelectedUnits_MetaData[] = {
		{ "ModuleRelativePath", "MainController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddedUnits_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "MainController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovedUnits_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "MainController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UISelectedUnit_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "MainController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectedUnitsChanged_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "MainController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetSelectedUnitChanged_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "MainController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeCell_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "MainController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommandAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedUnits_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SelectedUnits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSelectedUnits_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_NewSelectedUnits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddedUnits_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AddedUnits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemovedUnits_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_RemovedUnits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UISelectedUnit;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedUnitsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetSelectedUnitChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeCell;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainController_IsTargetISelectUnit, "IsTargetISelectUnit" }, // 2575976048
		{ &Z_Construct_UFunction_AMainController_SetTargetSelectUnit, "SetTargetSelectUnit" }, // 821758821
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_SelectionAction = { "SelectionAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainController, SelectionAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionAction_MetaData), NewProp_SelectionAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_CommandAction = { "CommandAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainController, CommandAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandAction_MetaData), NewProp_CommandAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_SelectedUnits_ElementProp = { "SelectedUnits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_SelectedUnits = { "SelectedUnits", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainController, SelectedUnits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedUnits_MetaData), NewProp_SelectedUnits_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_NewSelectedUnits_ElementProp = { "NewSelectedUnits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_NewSelectedUnits = { "NewSelectedUnits", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainController, NewSelectedUnits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSelectedUnits_MetaData), NewProp_NewSelectedUnits_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_AddedUnits_ElementProp = { "AddedUnits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_AddedUnits = { "AddedUnits", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainController, AddedUnits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddedUnits_MetaData), NewProp_AddedUnits_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_RemovedUnits_ElementProp = { "RemovedUnits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_RemovedUnits = { "RemovedUnits", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainController, RemovedUnits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovedUnits_MetaData), NewProp_RemovedUnits_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_UISelectedUnit = { "UISelectedUnit", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainController, UISelectedUnit), Z_Construct_UClass_UUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UISelectedUnit_MetaData), NewProp_UISelectedUnit_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_OnSelectedUnitsChanged = { "OnSelectedUnitsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainController, OnSelectedUnitsChanged), Z_Construct_UDelegateFunction_UMV_OnSelectedUnitsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelectedUnitsChanged_MetaData), NewProp_OnSelectedUnitsChanged_MetaData) }; // 1632559672
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_OnTargetSelectedUnitChanged = { "OnTargetSelectedUnitChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainController, OnTargetSelectedUnitChanged), Z_Construct_UDelegateFunction_UMV_OnTargetSelectedUnitChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTargetSelectedUnitChanged_MetaData), NewProp_OnTargetSelectedUnitChanged_MetaData) }; // 69870946
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_SizeCell = { "SizeCell", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainController, SizeCell), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeCell_MetaData), NewProp_SizeCell_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_SelectionAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_CommandAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_SelectedUnits_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_SelectedUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_NewSelectedUnits_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_NewSelectedUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_AddedUnits_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_AddedUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_RemovedUnits_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_RemovedUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_UISelectedUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_OnSelectedUnitsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_OnTargetSelectedUnitChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_SizeCell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainController_Statics::ClassParams = {
	&AMainController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainController()
{
	if (!Z_Registration_Info_UClass_AMainController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainController.OuterSingleton, Z_Construct_UClass_AMainController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainController.OuterSingleton;
}
template<> UMV_API UClass* StaticClass<AMainController>()
{
	return AMainController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainController);
AMainController::~AMainController() {}
// End Class AMainController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainController, AMainController::StaticClass, TEXT("AMainController"), &Z_Registration_Info_UClass_AMainController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainController), 503614916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h_3707092986(TEXT("/Script/UMV"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
