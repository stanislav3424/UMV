// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContainerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemBase;
#ifdef UMV_ContainerInterface_generated_h
#error "ContainerInterface.generated.h already included, missing '#pragma once' in ContainerInterface.h"
#endif
#define UMV_ContainerInterface_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DeleteFromOwnerContainer_Implementation(UItemBase* ItemBase) {}; \
	DECLARE_FUNCTION(execDeleteFromOwnerContainer);


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_12_CALLBACK_WRAPPERS
#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMV_API UContainerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UContainerInterface(UContainerInterface&&); \
	UContainerInterface(const UContainerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMV_API, UContainerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContainerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContainerInterface) \
	UMV_API virtual ~UContainerInterface();


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUContainerInterface(); \
	friend struct Z_Construct_UClass_UContainerInterface_Statics; \
public: \
	DECLARE_CLASS(UContainerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UMV"), UMV_API) \
	DECLARE_SERIALIZER(UContainerInterface)


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IContainerInterface() {} \
public: \
	typedef UContainerInterface UClassType; \
	typedef IContainerInterface ThisClass; \
	static void Execute_DeleteFromOwnerContainer(UObject* O, UItemBase* ItemBase); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_9_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_12_CALLBACK_WRAPPERS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMV_API UClass* StaticClass<class UContainerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
