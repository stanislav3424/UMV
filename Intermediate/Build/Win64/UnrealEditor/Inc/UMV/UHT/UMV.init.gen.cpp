// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMV_init() {}
	UMV_API UFunction* Z_Construct_UDelegateFunction_UMV_OnSelectedUnitsChanged__DelegateSignature();
	UMV_API UFunction* Z_Construct_UDelegateFunction_UMV_OnTargetSelectedUnitChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UMV;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UMV()
	{
		if (!Z_Registration_Info_UPackage__Script_UMV.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UMV_OnSelectedUnitsChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UMV_OnTargetSelectedUnitChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UMV",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x097B3FC0,
				0x79DE35A7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UMV.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UMV.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UMV(Z_Construct_UPackage__Script_UMV, TEXT("/Script/UMV"), Z_Registration_Info_UPackage__Script_UMV, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x097B3FC0, 0x79DE35A7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
