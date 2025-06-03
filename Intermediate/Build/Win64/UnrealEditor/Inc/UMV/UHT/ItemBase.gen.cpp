// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMV/ItemBase.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UMV_API UClass* Z_Construct_UClass_AMainController_NoRegister();
UMV_API UClass* Z_Construct_UClass_AMainGameState_NoRegister();
UMV_API UClass* Z_Construct_UClass_ARepresentedActorBase_NoRegister();
UMV_API UClass* Z_Construct_UClass_UItemBase();
UMV_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UMV_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UPackage* Z_Construct_UPackage__Script_UMV();
// End Cross Module References

// Begin ScriptStruct FItemData
static_assert(std::is_polymorphic<FItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_UMV(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> UMV_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassItemBase_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassRepresentedActorBase_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassItemBase;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassRepresentedActorBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ClassItemBase = { "ClassItemBase", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ClassItemBase), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassItemBase_MetaData), NewProp_ClassItemBase_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ClassRepresentedActorBase = { "ClassRepresentedActorBase", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ClassRepresentedActorBase), Z_Construct_UClass_UClass, Z_Construct_UClass_ARepresentedActorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassRepresentedActorBase_MetaData), NewProp_ClassRepresentedActorBase_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ClassItemBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ClassRepresentedActorBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemData",
	Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
	sizeof(FItemData),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
}
// End ScriptStruct FItemData

// Begin Class UItemBase Function GetMID
struct Z_Construct_UFunction_UItemBase_GetMID_Statics
{
	struct ItemBase_eventGetMID_Parms
	{
		FIntPoint Size;
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemBase_GetMID_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventGetMID_Parms, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemBase_GetMID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventGetMID_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_GetMID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_GetMID_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_GetMID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetMID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_GetMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "GetMID", nullptr, nullptr, Z_Construct_UFunction_UItemBase_GetMID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetMID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_GetMID_Statics::ItemBase_eventGetMID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetMID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_GetMID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_GetMID_Statics::ItemBase_eventGetMID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_GetMID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_GetMID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execGetMID)
{
	P_GET_STRUCT(FIntPoint,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetMID(Z_Param_Size);
	P_NATIVE_END;
}
// End Class UItemBase Function GetMID

// Begin Class UItemBase Function Initialization
struct Z_Construct_UFunction_UItemBase_Initialization_Statics
{
	struct ItemBase_eventInitialization_Parms
	{
		FDataTableRowHandle InitializationDataTableRowHandle;
		ARepresentedActorBase* InitializationRepresentedActorBase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_InitializationRepresentedActorBase", "None" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitializationDataTableRowHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitializationRepresentedActorBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemBase_Initialization_Statics::NewProp_InitializationDataTableRowHandle = { "InitializationDataTableRowHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventInitialization_Parms, InitializationDataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 1360917958
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemBase_Initialization_Statics::NewProp_InitializationRepresentedActorBase = { "InitializationRepresentedActorBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventInitialization_Parms, InitializationRepresentedActorBase), Z_Construct_UClass_ARepresentedActorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_Initialization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_Initialization_Statics::NewProp_InitializationDataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_Initialization_Statics::NewProp_InitializationRepresentedActorBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_Initialization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_Initialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "Initialization", nullptr, nullptr, Z_Construct_UFunction_UItemBase_Initialization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_Initialization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_Initialization_Statics::ItemBase_eventInitialization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_Initialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_Initialization_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_Initialization_Statics::ItemBase_eventInitialization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_Initialization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_Initialization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execInitialization)
{
	P_GET_STRUCT(FDataTableRowHandle,Z_Param_InitializationDataTableRowHandle);
	P_GET_OBJECT(ARepresentedActorBase,Z_Param_InitializationRepresentedActorBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialization(Z_Param_InitializationDataTableRowHandle,Z_Param_InitializationRepresentedActorBase);
	P_NATIVE_END;
}
// End Class UItemBase Function Initialization

// Begin Class UItemBase Function IsRotated
struct Z_Construct_UFunction_UItemBase_IsRotated_Statics
{
	struct ItemBase_eventIsRotated_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemBase_IsRotated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemBase_eventIsRotated_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBase_IsRotated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemBase_eventIsRotated_Parms), &Z_Construct_UFunction_UItemBase_IsRotated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_IsRotated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_IsRotated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsRotated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_IsRotated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "IsRotated", nullptr, nullptr, Z_Construct_UFunction_UItemBase_IsRotated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsRotated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_IsRotated_Statics::ItemBase_eventIsRotated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsRotated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_IsRotated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_IsRotated_Statics::ItemBase_eventIsRotated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_IsRotated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_IsRotated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execIsRotated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRotated();
	P_NATIVE_END;
}
// End Class UItemBase Function IsRotated

// Begin Class UItemBase Function Rotate
struct Z_Construct_UFunction_UItemBase_Rotate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_Rotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "Rotate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_Rotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_Rotate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UItemBase_Rotate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_Rotate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execRotate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Rotate();
	P_NATIVE_END;
}
// End Class UItemBase Function Rotate

// Begin Class UItemBase
void UItemBase::StaticRegisterNativesUItemBase()
{
	UClass* Class = UItemBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMID", &UItemBase::execGetMID },
		{ "Initialization", &UItemBase::execInitialization },
		{ "IsRotated", &UItemBase::execIsRotated },
		{ "Rotate", &UItemBase::execRotate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemBase);
UClass* Z_Construct_UClass_UItemBase_NoRegister()
{
	return UItemBase::StaticClass();
}
struct Z_Construct_UClass_UItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ItemBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepresentedActorBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainGameState_MetaData[] = {
		{ "Category", "ItemBase" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainController_MetaData[] = {
		{ "Category", "ItemBase" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "ItemBase" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotated_MetaData[] = {
		{ "Category", "ItemBase" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RepresentedActorBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnitName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainGameState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
	static void NewProp_bRotated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemBase_GetMID, "GetMID" }, // 2661776818
		{ &Z_Construct_UFunction_UItemBase_Initialization, "Initialization" }, // 755466836
		{ &Z_Construct_UFunction_UItemBase_IsRotated, "IsRotated" }, // 3102517885
		{ &Z_Construct_UFunction_UItemBase_Rotate, "Rotate" }, // 3508339206
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_RepresentedActorBase = { "RepresentedActorBase", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, RepresentedActorBase), Z_Construct_UClass_ARepresentedActorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepresentedActorBase_MetaData), NewProp_RepresentedActorBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_UnitName = { "UnitName", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, UnitName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitName_MetaData), NewProp_UnitName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_MainGameState = { "MainGameState", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, MainGameState), Z_Construct_UClass_AMainGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainGameState_MetaData), NewProp_MainGameState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_MainController = { "MainController", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, MainController), Z_Construct_UClass_AMainController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainController_MetaData), NewProp_MainController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, ItemData), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) }; // 1108347412
void Z_Construct_UClass_UItemBase_Statics::NewProp_bRotated_SetBit(void* Obj)
{
	((UItemBase*)Obj)->bRotated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_bRotated = { "bRotated", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemBase), &Z_Construct_UClass_UItemBase_Statics::NewProp_bRotated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotated_MetaData), NewProp_bRotated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_RepresentedActorBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_UnitName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_MainGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_MainController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_bRotated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemBase_Statics::ClassParams = {
	&UItemBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemBase()
{
	if (!Z_Registration_Info_UClass_UItemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemBase.OuterSingleton, Z_Construct_UClass_UItemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemBase.OuterSingleton;
}
template<> UMV_API UClass* StaticClass<UItemBase>()
{
	return UItemBase::StaticClass();
}
UItemBase::UItemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemBase);
UItemBase::~UItemBase() {}
// End Class UItemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 1108347412U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemBase, UItemBase::StaticClass, TEXT("UItemBase"), &Z_Registration_Info_UClass_UItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemBase), 514022303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_2639692024(TEXT("/Script/UMV"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
