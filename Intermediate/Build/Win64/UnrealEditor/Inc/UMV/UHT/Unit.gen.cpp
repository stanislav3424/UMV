// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMV/Unit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnit() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
UMV_API UClass* Z_Construct_UClass_AUnit();
UMV_API UClass* Z_Construct_UClass_AUnit_NoRegister();
UMV_API UClass* Z_Construct_UClass_UInventory_NoRegister();
UMV_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UMV_API UClass* Z_Construct_UClass_UWeapon_NoRegister();
UMV_API UEnum* Z_Construct_UEnum_UMV_EEquipmentSlots();
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
		{ "ModuleRelativePath", "Unit.h" },
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

// Begin Class AUnit Function EquipmentSlotAvailable
struct Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics
{
	struct Unit_eventEquipmentSlotAvailable_Parms
	{
		EEquipmentSlots EquipmentSlots;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentSlots_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentSlots;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::NewProp_EquipmentSlots_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::NewProp_EquipmentSlots = { "EquipmentSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Unit_eventEquipmentSlotAvailable_Parms, EquipmentSlots), Z_Construct_UEnum_UMV_EEquipmentSlots, METADATA_PARAMS(0, nullptr) }; // 2337733646
void Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Unit_eventEquipmentSlotAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Unit_eventEquipmentSlotAvailable_Parms), &Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::NewProp_EquipmentSlots_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::NewProp_EquipmentSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "EquipmentSlotAvailable", nullptr, nullptr, Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::Unit_eventEquipmentSlotAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::Unit_eventEquipmentSlotAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnit_EquipmentSlotAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnit_EquipmentSlotAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnit::execEquipmentSlotAvailable)
{
	P_GET_ENUM(EEquipmentSlots,Z_Param_EquipmentSlots);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EquipmentSlotAvailable(EEquipmentSlots(Z_Param_EquipmentSlots));
	P_NATIVE_END;
}
// End Class AUnit Function EquipmentSlotAvailable

// Begin Class AUnit Function GetBackpack
struct Z_Construct_UFunction_AUnit_GetBackpack_Statics
{
	struct Unit_eventGetBackpack_Parms
	{
		UInventory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnit_GetBackpack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Unit_eventGetBackpack_Parms, ReturnValue), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnit_GetBackpack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_GetBackpack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_GetBackpack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_GetBackpack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "GetBackpack", nullptr, nullptr, Z_Construct_UFunction_AUnit_GetBackpack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_GetBackpack_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnit_GetBackpack_Statics::Unit_eventGetBackpack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_GetBackpack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnit_GetBackpack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUnit_GetBackpack_Statics::Unit_eventGetBackpack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnit_GetBackpack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnit_GetBackpack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnit::execGetBackpack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInventory**)Z_Param__Result=P_THIS->GetBackpack();
	P_NATIVE_END;
}
// End Class AUnit Function GetBackpack

// Begin Class AUnit Function GetSocketName
struct Z_Construct_UFunction_AUnit_GetSocketName_Statics
{
	struct Unit_eventGetSocketName_Parms
	{
		EEquipmentSlots EquipmentSlots;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentSlots_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentSlots;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUnit_GetSocketName_Statics::NewProp_EquipmentSlots_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUnit_GetSocketName_Statics::NewProp_EquipmentSlots = { "EquipmentSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Unit_eventGetSocketName_Parms, EquipmentSlots), Z_Construct_UEnum_UMV_EEquipmentSlots, METADATA_PARAMS(0, nullptr) }; // 2337733646
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AUnit_GetSocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Unit_eventGetSocketName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnit_GetSocketName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_GetSocketName_Statics::NewProp_EquipmentSlots_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_GetSocketName_Statics::NewProp_EquipmentSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_GetSocketName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_GetSocketName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_GetSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "GetSocketName", nullptr, nullptr, Z_Construct_UFunction_AUnit_GetSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_GetSocketName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnit_GetSocketName_Statics::Unit_eventGetSocketName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_GetSocketName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnit_GetSocketName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUnit_GetSocketName_Statics::Unit_eventGetSocketName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnit_GetSocketName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnit_GetSocketName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnit::execGetSocketName)
{
	P_GET_ENUM(EEquipmentSlots,Z_Param_EquipmentSlots);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSocketName(EEquipmentSlots(Z_Param_EquipmentSlots));
	P_NATIVE_END;
}
// End Class AUnit Function GetSocketName

// Begin Class AUnit Function PutOnEquipment
struct Z_Construct_UFunction_AUnit_PutOnEquipment_Statics
{
	struct Unit_eventPutOnEquipment_Parms
	{
		UItemBase* ItemBase;
		EEquipmentSlots EquipmentSlots;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unit.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::NewProp_ItemBase = { "ItemBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Unit_eventPutOnEquipment_Parms, ItemBase), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::NewProp_EquipmentSlots_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::NewProp_EquipmentSlots = { "EquipmentSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Unit_eventPutOnEquipment_Parms, EquipmentSlots), Z_Construct_UEnum_UMV_EEquipmentSlots, METADATA_PARAMS(0, nullptr) }; // 2337733646
void Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Unit_eventPutOnEquipment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Unit_eventPutOnEquipment_Parms), &Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::NewProp_ItemBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::NewProp_EquipmentSlots_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::NewProp_EquipmentSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "PutOnEquipment", nullptr, nullptr, Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::Unit_eventPutOnEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::Unit_eventPutOnEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnit_PutOnEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnit_PutOnEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnit::execPutOnEquipment)
{
	P_GET_OBJECT(UItemBase,Z_Param_ItemBase);
	P_GET_ENUM(EEquipmentSlots,Z_Param_EquipmentSlots);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PutOnEquipment(Z_Param_ItemBase,EEquipmentSlots(Z_Param_EquipmentSlots));
	P_NATIVE_END;
}
// End Class AUnit Function PutOnEquipment

// Begin Class AUnit Function SetSelect
struct Z_Construct_UFunction_AUnit_SetSelect_Statics
{
	struct Unit_eventSetSelect_Parms
	{
		bool bNewSelect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewSelect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AUnit_SetSelect_Statics::NewProp_bNewSelect_SetBit(void* Obj)
{
	((Unit_eventSetSelect_Parms*)Obj)->bNewSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnit_SetSelect_Statics::NewProp_bNewSelect = { "bNewSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Unit_eventSetSelect_Parms), &Z_Construct_UFunction_AUnit_SetSelect_Statics::NewProp_bNewSelect_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnit_SetSelect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_SetSelect_Statics::NewProp_bNewSelect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_SetSelect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_SetSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "SetSelect", nullptr, nullptr, Z_Construct_UFunction_AUnit_SetSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_SetSelect_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnit_SetSelect_Statics::Unit_eventSetSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_SetSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnit_SetSelect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUnit_SetSelect_Statics::Unit_eventSetSelect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnit_SetSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnit_SetSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnit::execSetSelect)
{
	P_GET_UBOOL(Z_Param_bNewSelect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelect(Z_Param_bNewSelect);
	P_NATIVE_END;
}
// End Class AUnit Function SetSelect

// Begin Class AUnit Function TakeOffEquipment
struct Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics
{
	struct Unit_eventTakeOffEquipment_Parms
	{
		UItemBase* ItemBase;
		EEquipmentSlots EquipmentSlots;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unit.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::NewProp_ItemBase = { "ItemBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Unit_eventTakeOffEquipment_Parms, ItemBase), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::NewProp_EquipmentSlots_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::NewProp_EquipmentSlots = { "EquipmentSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Unit_eventTakeOffEquipment_Parms, EquipmentSlots), Z_Construct_UEnum_UMV_EEquipmentSlots, METADATA_PARAMS(0, nullptr) }; // 2337733646
void Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Unit_eventTakeOffEquipment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Unit_eventTakeOffEquipment_Parms), &Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::NewProp_ItemBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::NewProp_EquipmentSlots_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::NewProp_EquipmentSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "TakeOffEquipment", nullptr, nullptr, Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::Unit_eventTakeOffEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::Unit_eventTakeOffEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnit_TakeOffEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnit_TakeOffEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnit::execTakeOffEquipment)
{
	P_GET_OBJECT(UItemBase,Z_Param_ItemBase);
	P_GET_ENUM(EEquipmentSlots,Z_Param_EquipmentSlots);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TakeOffEquipment(Z_Param_ItemBase,EEquipmentSlots(Z_Param_EquipmentSlots));
	P_NATIVE_END;
}
// End Class AUnit Function TakeOffEquipment

// Begin Class AUnit
void AUnit::StaticRegisterNativesAUnit()
{
	UClass* Class = AUnit::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EquipmentSlotAvailable", &AUnit::execEquipmentSlotAvailable },
		{ "GetBackpack", &AUnit::execGetBackpack },
		{ "GetSocketName", &AUnit::execGetSocketName },
		{ "PutOnEquipment", &AUnit::execPutOnEquipment },
		{ "SetSelect", &AUnit::execSetSelect },
		{ "TakeOffEquipment", &AUnit::execTakeOffEquipment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnit);
UClass* Z_Construct_UClass_AUnit_NoRegister()
{
	return AUnit::StaticClass();
}
struct Z_Construct_UClass_AUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Unit.h" },
		{ "ModuleRelativePath", "Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Select" },
		{ "ModuleRelativePath", "Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionTextComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Select" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Backpack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionTextComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Backpack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnit_EquipmentSlotAvailable, "EquipmentSlotAvailable" }, // 1251143401
		{ &Z_Construct_UFunction_AUnit_GetBackpack, "GetBackpack" }, // 750868010
		{ &Z_Construct_UFunction_AUnit_GetSocketName, "GetSocketName" }, // 3612771626
		{ &Z_Construct_UFunction_AUnit_PutOnEquipment, "PutOnEquipment" }, // 316158217
		{ &Z_Construct_UFunction_AUnit_SetSelect, "SetSelect" }, // 928336388
		{ &Z_Construct_UFunction_AUnit_TakeOffEquipment, "TakeOffEquipment" }, // 41472432
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AUnit_Statics::NewProp_bSelect_SetBit(void* Obj)
{
	((AUnit*)Obj)->bSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_bSelect = { "bSelect", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AUnit), &Z_Construct_UClass_AUnit_Statics::NewProp_bSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelect_MetaData), NewProp_bSelect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_SelectionTextComponent = { "SelectionTextComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit, SelectionTextComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionTextComponent_MetaData), NewProp_SelectionTextComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_Backpack = { "Backpack", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit, Backpack), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Backpack_MetaData), NewProp_Backpack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnit, Weapon), Z_Construct_UClass_UWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_bSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_SelectionTextComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_Backpack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUnit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnit_Statics::ClassParams = {
	&AUnit::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AUnit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnit()
{
	if (!Z_Registration_Info_UClass_AUnit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnit.OuterSingleton, Z_Construct_UClass_AUnit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnit.OuterSingleton;
}
template<> UMV_API UClass* StaticClass<AUnit>()
{
	return AUnit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnit);
AUnit::~AUnit() {}
// End Class AUnit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEquipmentSlots_StaticEnum, TEXT("EEquipmentSlots"), &Z_Registration_Info_UEnum_EEquipmentSlots, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2337733646U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnit, AUnit::StaticClass, TEXT("AUnit"), &Z_Registration_Info_UClass_AUnit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnit), 3902399549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h_2066498546(TEXT("/Script/UMV"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
