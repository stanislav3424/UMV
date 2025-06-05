// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemBase;
struct FInventoryData;
struct FItemPositionData;
struct FLine;
#ifdef UMV_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define UMV_Inventory_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_11_DELEGATE \
UMV_API void FOnInventoryChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryChanged);


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryData_Statics; \
	UMV_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> UMV_API UScriptStruct* StaticStruct<struct FInventoryData>();

#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemPositionData_Statics; \
	UMV_API static class UScriptStruct* StaticStruct();


template<> UMV_API UScriptStruct* StaticStruct<struct FItemPositionData>();

#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLine_Statics; \
	UMV_API static class UScriptStruct* StaticStruct();


template<> UMV_API UScriptStruct* StaticStruct<struct FLine>();

#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDrawLines); \
	DECLARE_FUNCTION(execGetItemIndex); \
	DECLARE_FUNCTION(execRemoveItemIndex); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execTryAddToInventory); \
	DECLARE_FUNCTION(execAddToInventory); \
	DECLARE_FUNCTION(execGetTopLeftIndex); \
	DECLARE_FUNCTION(execGetItemsPositionData); \
	DECLARE_FUNCTION(execGetInventoryData);


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UItemBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMV"), NO_API) \
	DECLARE_SERIALIZER(UInventory) \
	virtual UObject* _getUObject() const override { return const_cast<UInventory*>(this); }


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventory(UInventory&&); \
	UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory) \
	NO_API virtual ~UInventory();


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_53_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_56_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMV_API UClass* StaticClass<class UInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
