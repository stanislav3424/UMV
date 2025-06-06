// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARepresentedActorBase;
class UMaterialInstanceDynamic;
struct FDataTableRowHandle;
#ifdef UMV_ItemBase_generated_h
#error "ItemBase.generated.h already included, missing '#pragma once' in ItemBase.h"
#endif
#define UMV_ItemBase_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_18_DELEGATE \
UMV_API void FOnDradAndDropRotated_DelegateWrapper(const FMulticastScriptDelegate& OnDradAndDropRotated);


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	UMV_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> UMV_API UScriptStruct* StaticStruct<struct FItemData>();

#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMID); \
	DECLARE_FUNCTION(execDradAndDropRotated); \
	DECLARE_FUNCTION(execInitialization);


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemBase(); \
	friend struct Z_Construct_UClass_UItemBase_Statics; \
public: \
	DECLARE_CLASS(UItemBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMV"), NO_API) \
	DECLARE_SERIALIZER(UItemBase)


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemBase(UItemBase&&); \
	UItemBase(const UItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemBase) \
	NO_API virtual ~UItemBase();


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_44_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_47_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMV_API UClass* StaticClass<class UItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
