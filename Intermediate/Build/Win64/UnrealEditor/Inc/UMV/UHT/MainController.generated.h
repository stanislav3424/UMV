// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUnitBase;
#ifdef UMV_MainController_generated_h
#error "MainController.generated.h already included, missing '#pragma once' in MainController.h"
#endif
#define UMV_MainController_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h_17_DELEGATE \
UMV_API void FOnSelectedUnitsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedUnitsChanged);


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h_18_DELEGATE \
UMV_API void FOnUISelectedUnitChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUISelectedUnitChanged);


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUISelectUnit);


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainController(); \
	friend struct Z_Construct_UClass_AMainController_Statics; \
public: \
	DECLARE_CLASS(AMainController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMV"), NO_API) \
	DECLARE_SERIALIZER(AMainController)


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainController(AMainController&&); \
	AMainController(const AMainController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainController) \
	NO_API virtual ~AMainController();


#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h_20_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMV_API UClass* StaticClass<class AMainController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_MainController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
