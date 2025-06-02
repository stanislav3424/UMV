// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RepresentedUnitBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUnitBase;
#ifdef UMV_RepresentedUnitBase_generated_h
#error "RepresentedUnitBase.generated.h already included, missing '#pragma once' in RepresentedUnitBase.h"
#endif
#define UMV_RepresentedUnitBase_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedUnitBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitialization); \
	DECLARE_FUNCTION(execIndependentInitialization);


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedUnitBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARepresentedUnitBase(); \
	friend struct Z_Construct_UClass_ARepresentedUnitBase_Statics; \
public: \
	DECLARE_CLASS(ARepresentedUnitBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMV"), NO_API) \
	DECLARE_SERIALIZER(ARepresentedUnitBase)


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedUnitBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARepresentedUnitBase(ARepresentedUnitBase&&); \
	ARepresentedUnitBase(const ARepresentedUnitBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARepresentedUnitBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARepresentedUnitBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARepresentedUnitBase) \
	NO_API virtual ~ARepresentedUnitBase();


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedUnitBase_h_15_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedUnitBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedUnitBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedUnitBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedUnitBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMV_API UClass* StaticClass<class ARepresentedUnitBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedUnitBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
