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
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UMV_API UClass* Z_Construct_UClass_UInventory();
UMV_API UClass* Z_Construct_UClass_UInventory_NoRegister();
UMV_API UClass* Z_Construct_UClass_UItemBase();
UMV_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UMV_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryData();
UMV_API UScriptStruct* Z_Construct_UScriptStruct_FItemPositionData();
UPackage* Z_Construct_UPackage__Script_UMV();
// End Cross Module References

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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemsPositionData", nullptr, nullptr, Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::Inventory_eventGetItemsPositionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_GetItemsPositionData_Statics::Function_MetaDataParams) };
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

// Begin Class UInventory Function Initialization
struct Z_Construct_UFunction_UInventory_Initialization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_Initialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "Initialization", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_Initialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventory_Initialization_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventory_Initialization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_Initialization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventory::execInitialization)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialization();
	P_NATIVE_END;
}
// End Class UInventory Function Initialization

// Begin Class UInventory
void UInventory::StaticRegisterNativesUInventory()
{
	UClass* Class = UInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInventoryData", &UInventory::execGetInventoryData },
		{ "GetItemsPositionData", &UInventory::execGetItemsPositionData },
		{ "Initialization", &UInventory::execInitialization },
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
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_GetInventoryData, "GetInventoryData" }, // 3196463756
		{ &Z_Construct_UFunction_UInventory_GetItemsPositionData, "GetItemsPositionData" }, // 38588959
		{ &Z_Construct_UFunction_UInventory_Initialization, "Initialization" }, // 4086388312
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Inventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Inventory,
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
	0x001000A0u,
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
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventory, UInventory::StaticClass, TEXT("UInventory"), &Z_Registration_Info_UClass_UInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventory), 112887285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_3798376004(TEXT("/Script/UMV"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
