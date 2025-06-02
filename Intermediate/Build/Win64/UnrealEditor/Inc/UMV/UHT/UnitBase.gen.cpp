// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMV/UnitBase.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UMV_API UClass* Z_Construct_UClass_AMainGameState_NoRegister();
UMV_API UClass* Z_Construct_UClass_ARepresentedUnitBase_NoRegister();
UMV_API UClass* Z_Construct_UClass_UInventory_NoRegister();
UMV_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UMV_API UClass* Z_Construct_UClass_UUnitBase();
UMV_API UClass* Z_Construct_UClass_UUnitBase_NoRegister();
UMV_API UClass* Z_Construct_UClass_UWeapon_NoRegister();
UMV_API UEnum* Z_Construct_UEnum_UMV_EEquipmentSlots();
UMV_API UScriptStruct* Z_Construct_UScriptStruct_FUnitData();
UPackage* Z_Construct_UPackage__Script_UMV();
// End Cross Module References

// Begin Enum EEquipmentSlots
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEquipmentSlots;
static UEnum* EEquipmentSlots_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEquipmentSlots.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEquipmentSlots.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMV_EEquipmentSlots, (UObject*)Z_Construct_UPackage__Script_UMV(), TEXT("EEquipmentSlots"));
	}
	return Z_Registration_Info_UEnum_EEquipmentSlots.OuterSingleton;
}
template<> UMV_API UEnum* StaticEnum<EEquipmentSlots>()
{
	return EEquipmentSlots_StaticEnum();
}
struct Z_Construct_UEnum_UMV_EEquipmentSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backpack.DisplayName", "Backpack" },
		{ "Backpack.Name", "EEquipmentSlots::Backpack" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UnitBase.h" },
		{ "Weapon.DisplayName", "Weapon" },
		{ "Weapon.Name", "EEquipmentSlots::Weapon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEquipmentSlots::Backpack", (int64)EEquipmentSlots::Backpack },
		{ "EEquipmentSlots::Weapon", (int64)EEquipmentSlots::Weapon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMV_EEquipmentSlots_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UMV,
	nullptr,
	"EEquipmentSlots",
	"EEquipmentSlots",
	Z_Construct_UEnum_UMV_EEquipmentSlots_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UMV_EEquipmentSlots_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UMV_EEquipmentSlots_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UMV_EEquipmentSlots_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UMV_EEquipmentSlots()
{
	if (!Z_Registration_Info_UEnum_EEquipmentSlots.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEquipmentSlots.InnerSingleton, Z_Construct_UEnum_UMV_EEquipmentSlots_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEquipmentSlots.InnerSingleton;
}
// End Enum EEquipmentSlots

// Begin ScriptStruct FUnitData
static_assert(std::is_polymorphic<FUnitData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUnitData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UnitData;
class UScriptStruct* FUnitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UnitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UnitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnitData, (UObject*)Z_Construct_UPackage__Script_UMV(), TEXT("UnitData"));
	}
	return Z_Registration_Info_UScriptStruct_UnitData.OuterSingleton;
}
template<> UMV_API UScriptStruct* StaticStruct<FUnitData>()
{
	return FUnitData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUnitData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitBase_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepresentedUnitBase_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnitBase;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RepresentedUnitBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnitData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_UnitBase = { "UnitBase", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, UnitBase), Z_Construct_UClass_UClass, Z_Construct_UClass_UUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitBase_MetaData), NewProp_UnitBase_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_RepresentedUnitBase = { "RepresentedUnitBase", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, RepresentedUnitBase), Z_Construct_UClass_UClass, Z_Construct_UClass_ARepresentedUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepresentedUnitBase_MetaData), NewProp_RepresentedUnitBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnitData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_UnitBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_RepresentedUnitBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnitData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"UnitData",
	Z_Construct_UScriptStruct_FUnitData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitData_Statics::PropPointers),
	sizeof(FUnitData),
	alignof(FUnitData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnitData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnitData()
{
	if (!Z_Registration_Info_UScriptStruct_UnitData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UnitData.InnerSingleton, Z_Construct_UScriptStruct_FUnitData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UnitData.InnerSingleton;
}
// End ScriptStruct FUnitData

// Begin Class UUnitBase Function EquipmentSlotAvailable
struct Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics
{
	struct UnitBase_eventEquipmentSlotAvailable_Parms
	{
		EEquipmentSlots EquipmentSlots;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentSlots_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentSlots;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::NewProp_EquipmentSlots_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::NewProp_EquipmentSlots = { "EquipmentSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventEquipmentSlotAvailable_Parms, EquipmentSlots), Z_Construct_UEnum_UMV_EEquipmentSlots, METADATA_PARAMS(0, nullptr) }; // 145235594
void Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UnitBase_eventEquipmentSlotAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnitBase_eventEquipmentSlotAvailable_Parms), &Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::NewProp_EquipmentSlots_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::NewProp_EquipmentSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnitBase, nullptr, "EquipmentSlotAvailable", nullptr, nullptr, Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::UnitBase_eventEquipmentSlotAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::UnitBase_eventEquipmentSlotAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnitBase::execEquipmentSlotAvailable)
{
	P_GET_ENUM(EEquipmentSlots,Z_Param_EquipmentSlots);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EquipmentSlotAvailable(EEquipmentSlots(Z_Param_EquipmentSlots));
	P_NATIVE_END;
}
// End Class UUnitBase Function EquipmentSlotAvailable

// Begin Class UUnitBase Function GetSocketName
struct Z_Construct_UFunction_UUnitBase_GetSocketName_Statics
{
	struct UnitBase_eventGetSocketName_Parms
	{
		EEquipmentSlots EquipmentSlots;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentSlots_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentSlots;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::NewProp_EquipmentSlots_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::NewProp_EquipmentSlots = { "EquipmentSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventGetSocketName_Parms, EquipmentSlots), Z_Construct_UEnum_UMV_EEquipmentSlots, METADATA_PARAMS(0, nullptr) }; // 145235594
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventGetSocketName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::NewProp_EquipmentSlots_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::NewProp_EquipmentSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnitBase, nullptr, "GetSocketName", nullptr, nullptr, Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::UnitBase_eventGetSocketName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::UnitBase_eventGetSocketName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnitBase_GetSocketName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnitBase_GetSocketName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnitBase::execGetSocketName)
{
	P_GET_ENUM(EEquipmentSlots,Z_Param_EquipmentSlots);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSocketName(EEquipmentSlots(Z_Param_EquipmentSlots));
	P_NATIVE_END;
}
// End Class UUnitBase Function GetSocketName

// Begin Class UUnitBase Function PutOnEquipment
struct Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics
{
	struct UnitBase_eventPutOnEquipment_Parms
	{
		UItemBase* ItemBase;
		EEquipmentSlots EquipmentSlots;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBase;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentSlots_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentSlots;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::NewProp_ItemBase = { "ItemBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventPutOnEquipment_Parms, ItemBase), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::NewProp_EquipmentSlots_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::NewProp_EquipmentSlots = { "EquipmentSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventPutOnEquipment_Parms, EquipmentSlots), Z_Construct_UEnum_UMV_EEquipmentSlots, METADATA_PARAMS(0, nullptr) }; // 145235594
void Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UnitBase_eventPutOnEquipment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnitBase_eventPutOnEquipment_Parms), &Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::NewProp_ItemBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::NewProp_EquipmentSlots_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::NewProp_EquipmentSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnitBase, nullptr, "PutOnEquipment", nullptr, nullptr, Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::UnitBase_eventPutOnEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::UnitBase_eventPutOnEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnitBase_PutOnEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnitBase_PutOnEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnitBase::execPutOnEquipment)
{
	P_GET_OBJECT(UItemBase,Z_Param_ItemBase);
	P_GET_ENUM(EEquipmentSlots,Z_Param_EquipmentSlots);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PutOnEquipment(Z_Param_ItemBase,EEquipmentSlots(Z_Param_EquipmentSlots));
	P_NATIVE_END;
}
// End Class UUnitBase Function PutOnEquipment

// Begin Class UUnitBase Function SetSelect
struct Z_Construct_UFunction_UUnitBase_SetSelect_Statics
{
	struct UnitBase_eventSetSelect_Parms
	{
		bool bNewSelect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewSelect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUnitBase_SetSelect_Statics::NewProp_bNewSelect_SetBit(void* Obj)
{
	((UnitBase_eventSetSelect_Parms*)Obj)->bNewSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnitBase_SetSelect_Statics::NewProp_bNewSelect = { "bNewSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnitBase_eventSetSelect_Parms), &Z_Construct_UFunction_UUnitBase_SetSelect_Statics::NewProp_bNewSelect_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnitBase_SetSelect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_SetSelect_Statics::NewProp_bNewSelect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_SetSelect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnitBase_SetSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnitBase, nullptr, "SetSelect", nullptr, nullptr, Z_Construct_UFunction_UUnitBase_SetSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_SetSelect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnitBase_SetSelect_Statics::UnitBase_eventSetSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_SetSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnitBase_SetSelect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUnitBase_SetSelect_Statics::UnitBase_eventSetSelect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnitBase_SetSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnitBase_SetSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnitBase::execSetSelect)
{
	P_GET_UBOOL(Z_Param_bNewSelect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelect(Z_Param_bNewSelect);
	P_NATIVE_END;
}
// End Class UUnitBase Function SetSelect

// Begin Class UUnitBase Function TakeOffEquipment
struct Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics
{
	struct UnitBase_eventTakeOffEquipment_Parms
	{
		UItemBase* ItemBase;
		EEquipmentSlots EquipmentSlots;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBase;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentSlots_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentSlots;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::NewProp_ItemBase = { "ItemBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventTakeOffEquipment_Parms, ItemBase), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::NewProp_EquipmentSlots_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::NewProp_EquipmentSlots = { "EquipmentSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventTakeOffEquipment_Parms, EquipmentSlots), Z_Construct_UEnum_UMV_EEquipmentSlots, METADATA_PARAMS(0, nullptr) }; // 145235594
void Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UnitBase_eventTakeOffEquipment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnitBase_eventTakeOffEquipment_Parms), &Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::NewProp_ItemBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::NewProp_EquipmentSlots_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::NewProp_EquipmentSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnitBase, nullptr, "TakeOffEquipment", nullptr, nullptr, Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::UnitBase_eventTakeOffEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::UnitBase_eventTakeOffEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnitBase_TakeOffEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnitBase_TakeOffEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnitBase::execTakeOffEquipment)
{
	P_GET_OBJECT(UItemBase,Z_Param_ItemBase);
	P_GET_ENUM(EEquipmentSlots,Z_Param_EquipmentSlots);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TakeOffEquipment(Z_Param_ItemBase,EEquipmentSlots(Z_Param_EquipmentSlots));
	P_NATIVE_END;
}
// End Class UUnitBase Function TakeOffEquipment

// Begin Class UUnitBase
void UUnitBase::StaticRegisterNativesUUnitBase()
{
	UClass* Class = UUnitBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EquipmentSlotAvailable", &UUnitBase::execEquipmentSlotAvailable },
		{ "GetSocketName", &UUnitBase::execGetSocketName },
		{ "PutOnEquipment", &UUnitBase::execPutOnEquipment },
		{ "SetSelect", &UUnitBase::execSetSelect },
		{ "TakeOffEquipment", &UUnitBase::execTakeOffEquipment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnitBase);
UClass* Z_Construct_UClass_UUnitBase_NoRegister()
{
	return UUnitBase::StaticClass();
}
struct Z_Construct_UClass_UUnitBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnitBase.h" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainGameState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepresentedUnitBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RepresentedUnitBase" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Select" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Backpack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainGameState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RepresentedUnitBase;
	static void NewProp_bSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Backpack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnitBase_EquipmentSlotAvailable, "EquipmentSlotAvailable" }, // 1222489107
		{ &Z_Construct_UFunction_UUnitBase_GetSocketName, "GetSocketName" }, // 1858175197
		{ &Z_Construct_UFunction_UUnitBase_PutOnEquipment, "PutOnEquipment" }, // 240430030
		{ &Z_Construct_UFunction_UUnitBase_SetSelect, "SetSelect" }, // 3767131485
		{ &Z_Construct_UFunction_UUnitBase_TakeOffEquipment, "TakeOffEquipment" }, // 907132704
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnitBase_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitBase, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitBase_Statics::NewProp_MainGameState = { "MainGameState", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitBase, MainGameState), Z_Construct_UClass_AMainGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainGameState_MetaData), NewProp_MainGameState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitBase_Statics::NewProp_RepresentedUnitBase = { "RepresentedUnitBase", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitBase, RepresentedUnitBase), Z_Construct_UClass_ARepresentedUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepresentedUnitBase_MetaData), NewProp_RepresentedUnitBase_MetaData) };
void Z_Construct_UClass_UUnitBase_Statics::NewProp_bSelect_SetBit(void* Obj)
{
	((UUnitBase*)Obj)->bSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnitBase_Statics::NewProp_bSelect = { "bSelect", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUnitBase), &Z_Construct_UClass_UUnitBase_Statics::NewProp_bSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelect_MetaData), NewProp_bSelect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitBase_Statics::NewProp_Backpack = { "Backpack", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitBase, Backpack), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Backpack_MetaData), NewProp_Backpack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitBase_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitBase, Weapon), Z_Construct_UClass_UWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnitBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitBase_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitBase_Statics::NewProp_MainGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitBase_Statics::NewProp_RepresentedUnitBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitBase_Statics::NewProp_bSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitBase_Statics::NewProp_Backpack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitBase_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUnitBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnitBase_Statics::ClassParams = {
	&UUnitBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUnitBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUnitBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnitBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnitBase()
{
	if (!Z_Registration_Info_UClass_UUnitBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnitBase.OuterSingleton, Z_Construct_UClass_UUnitBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnitBase.OuterSingleton;
}
template<> UMV_API UClass* StaticClass<UUnitBase>()
{
	return UUnitBase::StaticClass();
}
UUnitBase::UUnitBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitBase);
UUnitBase::~UUnitBase() {}
// End Class UUnitBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEquipmentSlots_StaticEnum, TEXT("EEquipmentSlots"), &Z_Registration_Info_UEnum_EEquipmentSlots, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 145235594U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUnitData::StaticStruct, Z_Construct_UScriptStruct_FUnitData_Statics::NewStructOps, TEXT("UnitData"), &Z_Registration_Info_UScriptStruct_UnitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnitData), 1236317019U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnitBase, UUnitBase::StaticClass, TEXT("UUnitBase"), &Z_Registration_Info_UClass_UUnitBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitBase), 2501488038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_4039495600(TEXT("/Script/UMV"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
