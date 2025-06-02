// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnitBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventory;
class UItemBase;
enum class EEquipmentSlots : uint8;
#ifdef UMV_UnitBase_generated_h
#error "UnitBase.generated.h already included, missing '#pragma once' in UnitBase.h"
#endif
#define UMV_UnitBase_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUnitData_Statics; \
	UMV_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> UMV_API UScriptStruct* StaticStruct<struct FUnitData>();

#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTakeOffEquipment); \
	DECLARE_FUNCTION(execPutOnEquipment); \
	DECLARE_FUNCTION(execEquipmentSlotAvailable); \
	DECLARE_FUNCTION(execGetSocketName); \
	DECLARE_FUNCTION(execGetBackpack); \
	DECLARE_FUNCTION(execSetSelect);


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnitBase(); \
	friend struct Z_Construct_UClass_UUnitBase_Statics; \
public: \
	DECLARE_CLASS(UUnitBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMV"), NO_API) \
	DECLARE_SERIALIZER(UUnitBase)


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnitBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUnitBase(UUnitBase&&); \
	UUnitBase(const UUnitBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnitBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnitBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnitBase) \
	NO_API virtual ~UUnitBase();


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_39_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_42_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMV_API UClass* StaticClass<class UUnitBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_UnitBase_h


#define FOREACH_ENUM_EEQUIPMENTSLOTS(op) \
	op(EEquipmentSlots::Backpack) \
	op(EEquipmentSlots::Weapon) 

enum class EEquipmentSlots : uint8;
template<> struct TIsUEnumClass<EEquipmentSlots> { enum { Value = true }; };
template<> UMV_API UEnum* StaticEnum<EEquipmentSlots>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
