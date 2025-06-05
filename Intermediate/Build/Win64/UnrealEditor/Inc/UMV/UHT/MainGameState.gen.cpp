// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMV/MainGameState.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "UMV/Inventory.h"
#include "UMV/ItemBase.h"
#include "UMV/UnitBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameState() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
UMV_API UClass* Z_Construct_UClass_AMainGameState();
UMV_API UClass* Z_Construct_UClass_AMainGameState_NoRegister();
UMV_API UClass* Z_Construct_UClass_ARepresentedActorBase_NoRegister();
UMV_API UClass* Z_Construct_UClass_ARepresentedUnitBase_NoRegister();
UMV_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UMV_API UClass* Z_Construct_UClass_UUnitBase_NoRegister();
UMV_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryData();
UMV_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UMV_API UScriptStruct* Z_Construct_UScriptStruct_FUnitData();
UPackage* Z_Construct_UPackage__Script_UMV();
// End Cross Module References

// Begin Class AMainGameState Function CreateItemBase
struct Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics
{
	struct MainGameState_eventCreateItemBase_Parms
	{
		FDataTableRowHandle DataTableRowHandle;
		UItemBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Create" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventCreateItemBase_Parms, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventCreateItemBase_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameState, nullptr, "CreateItemBase", nullptr, nullptr, Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics::MainGameState_eventCreateItemBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics::MainGameState_eventCreateItemBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainGameState_CreateItemBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameState_CreateItemBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameState::execCreateItemBase)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_DataTableRowHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemBase**)Z_Param__Result=P_THIS->CreateItemBase(Z_Param_Out_DataTableRowHandle);
	P_NATIVE_END;
}
// End Class AMainGameState Function CreateItemBase

// Begin Class AMainGameState Function CreateUnitBase
struct Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics
{
	struct MainGameState_eventCreateUnitBase_Parms
	{
		FDataTableRowHandle DataTableRowHandle;
		UUnitBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Create" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create / Spawn\n" },
#endif
		{ "ModuleRelativePath", "MainGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create / Spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventCreateUnitBase_Parms, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventCreateUnitBase_Parms, ReturnValue), Z_Construct_UClass_UUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameState, nullptr, "CreateUnitBase", nullptr, nullptr, Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics::MainGameState_eventCreateUnitBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics::MainGameState_eventCreateUnitBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainGameState_CreateUnitBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameState_CreateUnitBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameState::execCreateUnitBase)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_DataTableRowHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUnitBase**)Z_Param__Result=P_THIS->CreateUnitBase(Z_Param_Out_DataTableRowHandle);
	P_NATIVE_END;
}
// End Class AMainGameState Function CreateUnitBase

// Begin Class AMainGameState Function GetInventoryData
struct Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics
{
	struct MainGameState_eventGetInventoryData_Parms
	{
		FDataTableRowHandle DataTableRowHandle;
		FInventoryData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventGetInventoryData_Parms, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventGetInventoryData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1514318799
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameState, nullptr, "GetInventoryData", nullptr, nullptr, Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics::MainGameState_eventGetInventoryData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics::MainGameState_eventGetInventoryData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainGameState_GetInventoryData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameState_GetInventoryData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameState::execGetInventoryData)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_DataTableRowHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryData*)Z_Param__Result=P_THIS->GetInventoryData(Z_Param_Out_DataTableRowHandle);
	P_NATIVE_END;
}
// End Class AMainGameState Function GetInventoryData

// Begin Class AMainGameState Function GetItemData
struct Z_Construct_UFunction_AMainGameState_GetItemData_Statics
{
	struct MainGameState_eventGetItemData_Parms
	{
		FDataTableRowHandle DataTableRowHandle;
		FItemData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_GetItemData_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventGetItemData_Parms, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventGetItemData_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1176079311
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameState_GetItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_GetItemData_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_GetItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_GetItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameState_GetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameState, nullptr, "GetItemData", nullptr, nullptr, Z_Construct_UFunction_AMainGameState_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_GetItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameState_GetItemData_Statics::MainGameState_eventGetItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_GetItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameState_GetItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainGameState_GetItemData_Statics::MainGameState_eventGetItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainGameState_GetItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameState_GetItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameState::execGetItemData)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_DataTableRowHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FItemData*)Z_Param__Result=P_THIS->GetItemData(Z_Param_Out_DataTableRowHandle);
	P_NATIVE_END;
}
// End Class AMainGameState Function GetItemData

// Begin Class AMainGameState Function GetUnitsData
struct Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics
{
	struct MainGameState_eventGetUnitsData_Parms
	{
		FDataTableRowHandle DataTableRowHandle;
		FUnitData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventGetUnitsData_Parms, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventGetUnitsData_Parms, ReturnValue), Z_Construct_UScriptStruct_FUnitData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2941446389
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameState, nullptr, "GetUnitsData", nullptr, nullptr, Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics::MainGameState_eventGetUnitsData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics::MainGameState_eventGetUnitsData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainGameState_GetUnitsData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameState_GetUnitsData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameState::execGetUnitsData)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_DataTableRowHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUnitData*)Z_Param__Result=P_THIS->GetUnitsData(Z_Param_Out_DataTableRowHandle);
	P_NATIVE_END;
}
// End Class AMainGameState Function GetUnitsData

// Begin Class AMainGameState Function SpawnItem
struct Z_Construct_UFunction_AMainGameState_SpawnItem_Statics
{
	struct MainGameState_eventSpawnItem_Parms
	{
		FDataTableRowHandle DataTableRowHandle;
		FTransform SpawnTransform;
		ARepresentedActorBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Create" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventSpawnItem_Parms, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventSpawnItem_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventSpawnItem_Parms, ReturnValue), Z_Construct_UClass_ARepresentedActorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameState, nullptr, "SpawnItem", nullptr, nullptr, Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::MainGameState_eventSpawnItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::MainGameState_eventSpawnItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainGameState_SpawnItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameState_SpawnItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameState::execSpawnItem)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_DataTableRowHandle);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ARepresentedActorBase**)Z_Param__Result=P_THIS->SpawnItem(Z_Param_Out_DataTableRowHandle,Z_Param_Out_SpawnTransform);
	P_NATIVE_END;
}
// End Class AMainGameState Function SpawnItem

// Begin Class AMainGameState Function SpawnUnit
struct Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics
{
	struct MainGameState_eventSpawnUnit_Parms
	{
		FDataTableRowHandle DataTableRowHandle;
		FTransform SpawnTransform;
		ARepresentedUnitBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Create" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventSpawnUnit_Parms, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventSpawnUnit_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventSpawnUnit_Parms, ReturnValue), Z_Construct_UClass_ARepresentedUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameState, nullptr, "SpawnUnit", nullptr, nullptr, Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::MainGameState_eventSpawnUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::MainGameState_eventSpawnUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainGameState_SpawnUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameState_SpawnUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameState::execSpawnUnit)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_DataTableRowHandle);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ARepresentedUnitBase**)Z_Param__Result=P_THIS->SpawnUnit(Z_Param_Out_DataTableRowHandle,Z_Param_Out_SpawnTransform);
	P_NATIVE_END;
}
// End Class AMainGameState Function SpawnUnit

// Begin Class AMainGameState
void AMainGameState::StaticRegisterNativesAMainGameState()
{
	UClass* Class = AMainGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateItemBase", &AMainGameState::execCreateItemBase },
		{ "CreateUnitBase", &AMainGameState::execCreateUnitBase },
		{ "GetInventoryData", &AMainGameState::execGetInventoryData },
		{ "GetItemData", &AMainGameState::execGetItemData },
		{ "GetUnitsData", &AMainGameState::execGetUnitsData },
		{ "SpawnItem", &AMainGameState::execSpawnItem },
		{ "SpawnUnit", &AMainGameState::execSpawnUnit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainGameState);
UClass* Z_Construct_UClass_AMainGameState_NoRegister()
{
	return AMainGameState::StaticClass();
}
struct Z_Construct_UClass_AMainGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MainGameState.h" },
		{ "ModuleRelativePath", "MainGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitsDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI\n" },
#endif
		{ "ModuleRelativePath", "MainGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitsDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryDataTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainGameState_CreateItemBase, "CreateItemBase" }, // 3421345362
		{ &Z_Construct_UFunction_AMainGameState_CreateUnitBase, "CreateUnitBase" }, // 3299614855
		{ &Z_Construct_UFunction_AMainGameState_GetInventoryData, "GetInventoryData" }, // 3142284565
		{ &Z_Construct_UFunction_AMainGameState_GetItemData, "GetItemData" }, // 1782311668
		{ &Z_Construct_UFunction_AMainGameState_GetUnitsData, "GetUnitsData" }, // 3220076819
		{ &Z_Construct_UFunction_AMainGameState_SpawnItem, "SpawnItem" }, // 3336751462
		{ &Z_Construct_UFunction_AMainGameState_SpawnUnit, "SpawnUnit" }, // 1751523811
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_UnitsDataTable = { "UnitsDataTable", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, UnitsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitsDataTable_MetaData), NewProp_UnitsDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_ItemDataTable = { "ItemDataTable", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, ItemDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataTable_MetaData), NewProp_ItemDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_InventoryDataTable = { "InventoryDataTable", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, InventoryDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryDataTable_MetaData), NewProp_InventoryDataTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_UnitsDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_ItemDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_InventoryDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainGameState_Statics::ClassParams = {
	&AMainGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainGameState()
{
	if (!Z_Registration_Info_UClass_AMainGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainGameState.OuterSingleton, Z_Construct_UClass_AMainGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainGameState.OuterSingleton;
}
template<> UMV_API UClass* StaticClass<AMainGameState>()
{
	return AMainGameState::StaticClass();
}
AMainGameState::AMainGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGameState);
AMainGameState::~AMainGameState() {}
// End Class AMainGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainGameState, AMainGameState::StaticClass, TEXT("AMainGameState"), &Z_Registration_Info_UClass_AMainGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainGameState), 2352249146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainGameState_h_3912544295(TEXT("/Script/UMV"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
