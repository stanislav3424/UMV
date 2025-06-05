// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMV/ContainerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContainerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UMV_API UClass* Z_Construct_UClass_UContainerInterface();
UMV_API UClass* Z_Construct_UClass_UContainerInterface_NoRegister();
UMV_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMV();
// End Cross Module References

// Begin Interface UContainerInterface Function DeleteFromOwnerContainer
struct ContainerInterface_eventDeleteFromOwnerContainer_Parms
{
	UItemBase* ItemBase;
};
void IContainerInterface::DeleteFromOwnerContainer(UItemBase* ItemBase)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DeleteFromOwnerContainer instead.");
}
static FName NAME_UContainerInterface_DeleteFromOwnerContainer = FName(TEXT("DeleteFromOwnerContainer"));
void IContainerInterface::Execute_DeleteFromOwnerContainer(UObject* O, UItemBase* ItemBase)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UContainerInterface::StaticClass()));
	ContainerInterface_eventDeleteFromOwnerContainer_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UContainerInterface_DeleteFromOwnerContainer);
	if (Func)
	{
		Parms.ItemBase=ItemBase;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IContainerInterface*)(O->GetNativeInterfaceAddress(UContainerInterface::StaticClass())))
	{
		I->DeleteFromOwnerContainer_Implementation(ItemBase);
	}
}
struct Z_Construct_UFunction_UContainerInterface_DeleteFromOwnerContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Delete" },
		{ "ModuleRelativePath", "ContainerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContainerInterface_DeleteFromOwnerContainer_Statics::NewProp_ItemBase = { "ItemBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ContainerInterface_eventDeleteFromOwnerContainer_Parms, ItemBase), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContainerInterface_DeleteFromOwnerContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContainerInterface_DeleteFromOwnerContainer_Statics::NewProp_ItemBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerInterface_DeleteFromOwnerContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContainerInterface_DeleteFromOwnerContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContainerInterface, nullptr, "DeleteFromOwnerContainer", nullptr, nullptr, Z_Construct_UFunction_UContainerInterface_DeleteFromOwnerContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerInterface_DeleteFromOwnerContainer_Statics::PropPointers), sizeof(ContainerInterface_eventDeleteFromOwnerContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerInterface_DeleteFromOwnerContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UContainerInterface_DeleteFromOwnerContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(ContainerInterface_eventDeleteFromOwnerContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UContainerInterface_DeleteFromOwnerContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContainerInterface_DeleteFromOwnerContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IContainerInterface::execDeleteFromOwnerContainer)
{
	P_GET_OBJECT(UItemBase,Z_Param_ItemBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteFromOwnerContainer_Implementation(Z_Param_ItemBase);
	P_NATIVE_END;
}
// End Interface UContainerInterface Function DeleteFromOwnerContainer

// Begin Interface UContainerInterface
void UContainerInterface::StaticRegisterNativesUContainerInterface()
{
	UClass* Class = UContainerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteFromOwnerContainer", &IContainerInterface::execDeleteFromOwnerContainer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContainerInterface);
UClass* Z_Construct_UClass_UContainerInterface_NoRegister()
{
	return UContainerInterface::StaticClass();
}
struct Z_Construct_UClass_UContainerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ContainerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UContainerInterface_DeleteFromOwnerContainer, "DeleteFromOwnerContainer" }, // 3259717934
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IContainerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UContainerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UMV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContainerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContainerInterface_Statics::ClassParams = {
	&UContainerInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContainerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UContainerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContainerInterface()
{
	if (!Z_Registration_Info_UClass_UContainerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContainerInterface.OuterSingleton, Z_Construct_UClass_UContainerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContainerInterface.OuterSingleton;
}
template<> UMV_API UClass* StaticClass<UContainerInterface>()
{
	return UContainerInterface::StaticClass();
}
UContainerInterface::UContainerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContainerInterface);
UContainerInterface::~UContainerInterface() {}
// End Interface UContainerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContainerInterface, UContainerInterface::StaticClass, TEXT("UContainerInterface"), &Z_Registration_Info_UClass_UContainerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContainerInterface), 2828539559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_933307104(TEXT("/Script/UMV"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_UMV_Source_UMV_ContainerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
