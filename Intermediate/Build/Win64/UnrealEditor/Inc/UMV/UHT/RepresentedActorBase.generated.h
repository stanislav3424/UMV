// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RepresentedActorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemBase;
#ifdef UMV_RepresentedActorBase_generated_h
#error "RepresentedActorBase.generated.h already included, missing '#pragma once' in RepresentedActorBase.h"
#endif
#define UMV_RepresentedActorBase_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitialization); \
	DECLARE_FUNCTION(execIndependentInitialization);


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARepresentedActorBase(); \
	friend struct Z_Construct_UClass_ARepresentedActorBase_Statics; \
public: \
	DECLARE_CLASS(ARepresentedActorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMV"), NO_API) \
	DECLARE_SERIALIZER(ARepresentedActorBase)


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARepresentedActorBase(ARepresentedActorBase&&); \
	ARepresentedActorBase(const ARepresentedActorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARepresentedActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARepresentedActorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARepresentedActorBase) \
	NO_API virtual ~ARepresentedActorBase();


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_11_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMV_API UClass* StaticClass<class ARepresentedActorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_RepresentedActorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
