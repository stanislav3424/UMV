// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMV/Inventory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UMV_API UClass* Z_Construct_UClass_UInventory();
UMV_API UClass* Z_Construct_UClass_UInventory_NoRegister();
UMV_API UClass* Z_Construct_UClass_UItemBase();
UMV_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UMV_API UFunction* Z_Construct_UDelegateFunction_UMV_OnInventoryChanged__DelegateSignature();
UMV_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryData();
UMV_API UScriptStruct* Z_Construct_UScriptStruct_FItemPositionData();
UMV_API UScriptStruct* Z_Construct_UScriptStruct_FLine();
UPackage* Z_Construct_UPackage__Script_UMV();
// End Cross Module References

// Begin Delegate FOnInventoryChanged
struct Z_Construct_UDelegateFunction_UMV_OnInventoryChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMV_OnInventoryChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMV, nullptr, "OnInventoryChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMV_OnInventoryChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMV_OnInventoryChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMV_OnInventoryChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMV_OnInventoryChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryChanged)
{
	OnInventoryChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnInventoryChanged

// Begin ScriptStruct FInventoryData
static_assert(std::is_polymorphic<FInventoryData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventoryData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryData;
class UScriptStruct* FInventoryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryData, (UObject*)Z_Construct_UPackage__Script_UMV(), TEXT("InventoryData"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryData.OuterSingleton;
}
template<> UMV_API UScriptStruct* StaticStruct<FInventoryData>()
{
	return FInventoryData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "InventoryData" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryData, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"InventoryData",
	Z_Construct_UScriptStruct_FInventoryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryData_Statics::PropPointers),
	sizeof(FInventoryData),
	alignof(FInventoryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryData()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryData.InnerSingleton, Z_Construct_UScriptStruct_FInventoryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryData.InnerSingleton;
}
// End ScriptStruct FInventoryData

// Begin ScriptStruct FItemPositionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemPositionData;
class UScriptStruct* FItemPositionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemPositionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemPositionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemPositionData, (UObject*)Z_Construct_UPackage__Script_UMV(), TEXT("ItemPositionData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemPositionData.OuterSingleton;
}
template<> UMV_API UScriptStruct* StaticStruct<FItemPositionData>()
{
	return FItemPositionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemPositionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "ItemPositionData" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "ItemPositionData" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemPositionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemPositionData_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemPositionData, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemPositionData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemPositionData, Position), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemPositionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemPositionData_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemPositionData_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemPositionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemPositionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
	nullptr,
	&NewStructOps,
	"ItemPositionData",
	Z_Construct_UScriptStruct_FItemPositionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemPositionData_Statics::PropPointers),
	sizeof(FItemPositionData),
	alignof(FItemPositionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemPositionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemPositionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemPositionData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemPositionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemPositionData.InnerSingleton, Z_Construct_UScriptStruct_FItemPositionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemPositionData.InnerSingleton;
}
// End ScriptStruct FItemPositionData

// Begin ScriptStruct FLine
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Line;
class UScriptStruct* FLine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Line.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Line.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLine, (UObject*)Z_Construct_UPackage__Script_UMV(), TEXT("Line"));
	}
	return Z_Registration_Info_UScriptStruct_Line.OuterSingleton;
}
template<> UMV_API UScriptStruct* StaticStruct<FLine>()
{
	return FLine::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartX_MetaData[] = {
		{ "Category", "Line" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartY_MetaData[] = {
		{ "Category", "Line" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndX_MetaData[] = {
		{ "Category", "Line" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndY_MetaData[] = {
		{ "Category", "Line" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLine>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLine_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLine, StartX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartX_MetaData), NewProp_StartX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLine_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLine, StartY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartY_MetaData), NewProp_StartY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLine_Statics::NewProp_EndX = { "EndX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLine, EndX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndX_MetaData), NewProp_EndX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLine_Statics::NewProp_EndY = { "EndY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLine, EndY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndY_MetaData), NewProp_EndY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLine_Statics::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLine_Statics::NewProp_StartY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLine_Statics::NewProp_EndX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLine_Statics::NewProp_EndY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLine_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
	nullptr,
	&NewStructOps,
	"Line",
	Z_Construct_UScriptStruct_FLine_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLine_Statics::PropPointers),
	sizeof(FLine),
	alignof(FLine),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLine_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLine()
{
	if (!Z_Registration_Info_UScriptStruct_Line.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Line.InnerSingleton, Z_Construct_UScriptStruct_FLine_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Line.InnerSingleton;
}
// End ScriptStruct FLine

// Begin Class UInventory Function AddToInventory
struct Z_Construct_UFunction_UInventory_AddToInventory_Statics
{
	struct Inventory_eventAddToInventory_Parms
	{
		UItemBase* AddItem;
		int32 IndexInventory;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_IndexInventory", "-1" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInventory;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_AddItem = { "AddItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventAddToInventory_Parms, AddItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_IndexInventory = { "IndexInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventAddToInventory_Parms, IndexInventory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventAddToInventory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventAddToInventory_Parms), &Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_AddToInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_AddItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_IndexInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddToInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddToInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "AddToInventory", nullptr, nullptr, Z_Construct_UFunction_UInventory_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddToInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_AddToInventory_Statics::Inventory_eventAddToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_AddToInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_AddToInventory_Statics::Inventory_eventAddToInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_AddToInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_AddToInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execAddToInventory)
{
	P_GET_OBJECT(UItemBase,Z_Param_AddItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddToInventory(Z_Param_AddItem,Z_Param_IndexInventory);
	P_NATIVE_END;
}
// End Class UInventory Function AddToInventory

// Begin Class UInventory Function GetDrawLines
struct Z_Construct_UFunction_UInventory_GetDrawLines_Statics
{
	struct Inventory_eventGetDrawLines_Parms
	{
		TArray<FLine> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetDrawLines_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLine, METADATA_PARAMS(0, nullptr) }; // 291439513
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetDrawLines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetDrawLines_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 291439513
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetDrawLines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetDrawLines_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetDrawLines_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetDrawLines_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetDrawLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetDrawLines", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetDrawLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetDrawLines_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetDrawLines_Statics::Inventory_eventGetDrawLines_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetDrawLines_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetDrawLines_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetDrawLines_Statics::Inventory_eventGetDrawLines_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetDrawLines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetDrawLines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetDrawLines)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FLine>*)Z_Param__Result=P_THIS->GetDrawLines();
	P_NATIVE_END;
}
// End Class UInventory Function GetDrawLines

// Begin Class UInventory Function GetInventoryData
struct Z_Construct_UFunction_UInventory_GetInventoryData_Statics
{
	struct Inventory_eventGetInventoryData_Parms
	{
		FInventoryData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetInventoryData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetInventoryData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1514318799
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetInventoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetInventoryData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetInventoryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetInventoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetInventoryData", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetInventoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetInventoryData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetInventoryData_Statics::Inventory_eventGetInventoryData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetInventoryData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetInventoryData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetInventoryData_Statics::Inventory_eventGetInventoryData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetInventoryData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetInventoryData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetInventoryData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryData*)Z_Param__Result=P_THIS->GetInventoryData();
	P_NATIVE_END;
}
// End Class UInventory Function GetInventoryData

// Begin Class UInventory Function GetItemIndex
struct Z_Construct_UFunction_UInventory_GetItemIndex_Statics
{
	struct Inventory_eventGetItemIndex_Parms
	{
		int32 IndexInventory;
		UItemBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemIndex_Statics::NewProp_IndexInventory = { "IndexInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemIndex_Parms, IndexInventory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_GetItemIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemIndex_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemIndex_Statics::NewProp_IndexInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemIndex", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetItemIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetItemIndex_Statics::Inventory_eventGetItemIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetItemIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetItemIndex_Statics::Inventory_eventGetItemIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetItemIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetItemIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetItemIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemBase**)Z_Param__Result=P_THIS->GetItemIndex(Z_Param_IndexInventory);
	P_NATIVE_END;
}
// End Class UInventory Function GetItemIndex

// Begin Class UInventory Function GetItemsPositionData
struct Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics
{
	struct Inventory_eventGetItemsPositionData_Parms
	{
		TArray<FItemPositionData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemPositionData, METADATA_PARAMS(0, nullptr) }; // 1794012567
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetItemsPositionData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1794012567
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemsPositionData", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::Inventory_eventGetItemsPositionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::Inventory_eventGetItemsPositionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetItemsPositionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetItemsPositionData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FItemPositionData>*)Z_Param__Result=P_THIS->GetItemsPositionData();
	P_NATIVE_END;
}
// End Class UInventory Function GetItemsPositionData

// Begin Class UInventory Function GetTopLeftIndex
struct Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics
{
	struct Inventory_eventGetTopLeftIndex_Parms
	{
		UItemBase* TestItem;
		FVector2D Vector2D;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2D;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::NewProp_TestItem = { "TestItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetTopLeftIndex_Parms, TestItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::NewProp_Vector2D = { "Vector2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetTopLeftIndex_Parms, Vector2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventGetTopLeftIndex_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::NewProp_TestItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::NewProp_Vector2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetTopLeftIndex", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::Inventory_eventGetTopLeftIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::Inventory_eventGetTopLeftIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_GetTopLeftIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetTopLeftIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execGetTopLeftIndex)
{
	P_GET_OBJECT(UItemBase,Z_Param_TestItem);
	P_GET_STRUCT(FVector2D,Z_Param_Vector2D);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTopLeftIndex(Z_Param_TestItem,Z_Param_Vector2D);
	P_NATIVE_END;
}
// End Class UInventory Function GetTopLeftIndex

// Begin Class UInventory Function RemoveItem
struct Z_Construct_UFunction_UInventory_RemoveItem_Statics
{
	struct Inventory_eventRemoveItem_Parms
	{
		UItemBase* RemoveItem;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemoveItem;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_RemoveItem_Statics::NewProp_RemoveItem = { "RemoveItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRemoveItem_Parms, RemoveItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_RemoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventRemoveItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_RemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventRemoveItem_Parms), &Z_Construct_UFunction_UInventory_RemoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveItem_Statics::NewProp_RemoveItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RemoveItem", nullptr, nullptr, Z_Construct_UFunction_UInventory_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_RemoveItem_Statics::Inventory_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RemoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RemoveItem_Statics::Inventory_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRemoveItem)
{
	P_GET_OBJECT(UItemBase,Z_Param_RemoveItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItem(Z_Param_RemoveItem);
	P_NATIVE_END;
}
// End Class UInventory Function RemoveItem

// Begin Class UInventory Function RemoveItemIndex
struct Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics
{
	struct Inventory_eventRemoveItemIndex_Parms
	{
		int32 IndexInventory;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInventory;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::NewProp_IndexInventory = { "IndexInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventRemoveItemIndex_Parms, IndexInventory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventRemoveItemIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventRemoveItemIndex_Parms), &Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::NewProp_IndexInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RemoveItemIndex", nullptr, nullptr, Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::Inventory_eventRemoveItemIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::Inventory_eventRemoveItemIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_RemoveItemIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_RemoveItemIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execRemoveItemIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItemIndex(Z_Param_IndexInventory);
	P_NATIVE_END;
}
// End Class UInventory Function RemoveItemIndex

// Begin Class UInventory Function TryAddToInventory
struct Z_Construct_UFunction_UInventory_TryAddToInventory_Statics
{
	struct Inventory_eventTryAddToInventory_Parms
	{
		UItemBase* AddItem;
		int32 IndexInventory;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInventory;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_AddItem = { "AddItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventTryAddToInventory_Parms, AddItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_IndexInventory = { "IndexInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inventory_eventTryAddToInventory_Parms, IndexInventory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inventory_eventTryAddToInventory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inventory_eventTryAddToInventory_Parms), &Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_AddItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_IndexInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "TryAddToInventory", nullptr, nullptr, Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::Inventory_eventTryAddToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::Inventory_eventTryAddToInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventory_TryAddToInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_TryAddToInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execTryAddToInventory)
{
	P_GET_OBJECT(UItemBase,Z_Param_AddItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryAddToInventory(Z_Param_AddItem,Z_Param_IndexInventory);
	P_NATIVE_END;
}
// End Class UInventory Function TryAddToInventory

// Begin Class UInventory
void UInventory::StaticRegisterNativesUInventory()
{
	UClass* Class = UInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToInventory", &UInventory::execAddToInventory },
		{ "GetDrawLines", &UInventory::execGetDrawLines },
		{ "GetInventoryData", &UInventory::execGetInventoryData },
		{ "GetItemIndex", &UInventory::execGetItemIndex },
		{ "GetItemsPositionData", &UInventory::execGetItemsPositionData },
		{ "GetTopLeftIndex", &UInventory::execGetTopLeftIndex },
		{ "RemoveItem", &UInventory::execRemoveItem },
		{ "RemoveItemIndex", &UInventory::execRemoveItemIndex },
		{ "TryAddToInventory", &UInventory::execTryAddToInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventory);
UClass* Z_Construct_UClass_UInventory_NoRegister()
{
	return UInventory::StaticClass();
}
struct Z_Construct_UClass_UInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inventory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryData_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryChanged_MetaData[] = {
		{ "Category", "Add / Remove Item" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryData;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_AddToInventory, "AddToInventory" }, // 1793647833
		{ &Z_Construct_UFunction_UInventory_GetDrawLines, "GetDrawLines" }, // 1567101141
		{ &Z_Construct_UFunction_UInventory_GetInventoryData, "GetInventoryData" }, // 3196463756
		{ &Z_Construct_UFunction_UInventory_GetItemIndex, "GetItemIndex" }, // 2929894597
		{ &Z_Construct_UFunction_UInventory_GetItemsPositionData, "GetItemsPositionData" }, // 2314710998
		{ &Z_Construct_UFunction_UInventory_GetTopLeftIndex, "GetTopLeftIndex" }, // 108533136
		{ &Z_Construct_UFunction_UInventory_RemoveItem, "RemoveItem" }, // 1596545155
		{ &Z_Construct_UFunction_UInventory_RemoveItemIndex, "RemoveItemIndex" }, // 2957161688
		{ &Z_Construct_UFunction_UInventory_TryAddToInventory, "TryAddToInventory" }, // 1474289952
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_InventoryData = { "InventoryData", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, InventoryData), Z_Construct_UScriptStruct_FInventoryData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryData_MetaData), NewProp_InventoryData_MetaData) }; // 1514318799
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnInventoryChanged = { "OnInventoryChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, OnInventoryChanged), Z_Construct_UDelegateFunction_UMV_OnInventoryChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryChanged_MetaData), NewProp_OnInventoryChanged_MetaData) }; // 252849279
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Inventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_InventoryData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnInventoryChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
	&UInventory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventory()
{
	if (!Z_Registration_Info_UClass_UInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventory.OuterSingleton, Z_Construct_UClass_UInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventory.OuterSingleton;
}
template<> UMV_API UClass* StaticClass<UInventory>()
{
	return UInventory::StaticClass();
}
UInventory::UInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
UInventory::~UInventory() {}
// End Class UInventory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryData::StaticStruct, Z_Construct_UScriptStruct_FInventoryData_Statics::NewStructOps, TEXT("InventoryData"), &Z_Registration_Info_UScriptStruct_InventoryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryData), 1514318799U) },
		{ FItemPositionData::StaticStruct, Z_Construct_UScriptStruct_FItemPositionData_Statics::NewStructOps, TEXT("ItemPositionData"), &Z_Registration_Info_UScriptStruct_ItemPositionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemPositionData), 1794012567U) },
		{ FLine::StaticStruct, Z_Construct_UScriptStruct_FLine_Statics::NewStructOps, TEXT("Line"), &Z_Registration_Info_UScriptStruct_Line, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLine), 291439513U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventory, UInventory::StaticClass, TEXT("UInventory"), &Z_Registration_Info_UClass_UInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventory), 4016787192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_3974780370(TEXT("/Script/UMV"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
