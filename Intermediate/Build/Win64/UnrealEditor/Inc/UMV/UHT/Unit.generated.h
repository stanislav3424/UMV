// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Unit.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventory;
class UItemBase;
enum class EEquipmentSlots : uint8;
#ifdef UMV_Unit_generated_h
#error "Unit.generated.h already included, missing '#pragma once' in Unit.h"
#endif
#define UMV_Unit_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTakeOffEquipment); \
	DECLARE_FUNCTION(execPutOnEquipment); \
	DECLARE_FUNCTION(execEquipmentSlotAvailable); \
	DECLARE_FUNCTION(execGetSocketName); \
	DECLARE_FUNCTION(execGetBackpack); \
	DECLARE_FUNCTION(execSetSelect);


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnit(); \
	friend struct Z_Construct_UClass_AUnit_Statics; \
public: \
	DECLARE_CLASS(AUnit, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMV"), NO_API) \
	DECLARE_SERIALIZER(AUnit)


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUnit(AUnit&&); \
	AUnit(const AUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnit) \
	NO_API virtual ~AUnit();


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h_19_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMV_API UClass* StaticClass<class AUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Unit_h


#define FOREACH_ENUM_EEQUIPMENTSLOTS(op) \
	op(EEquipmentSlots::Backpack) \
	op(EEquipmentSlots::Weapon) 

enum class EEquipmentSlots : uint8;
template<> struct TIsUEnumClass<EEquipmentSlots> { enum { Value = true }; };
template<> UMV_API UEnum* StaticEnum<EEquipmentSlots>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
