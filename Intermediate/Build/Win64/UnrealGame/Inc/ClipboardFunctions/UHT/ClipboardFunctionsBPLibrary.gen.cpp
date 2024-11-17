// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClipboardFunctions/Public/ClipboardFunctionsBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClipboardFunctionsBPLibrary() {}

// Begin Cross Module References
CLIPBOARDFUNCTIONS_API UClass* Z_Construct_UClass_UClipboardFunctionsBPLibrary();
CLIPBOARDFUNCTIONS_API UClass* Z_Construct_UClass_UClipboardFunctionsBPLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_ClipboardFunctions();
// End Cross Module References

// Begin Class UClipboardFunctionsBPLibrary Function CopyText
struct Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText_Statics
{
	struct ClipboardFunctionsBPLibrary_eventCopyText_Parms
	{
		FString Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Clipboard" },
		{ "DisplayName", "Copy to Clipboard" },
		{ "ModuleRelativePath", "Public/ClipboardFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClipboardFunctionsBPLibrary_eventCopyText_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClipboardFunctionsBPLibrary, nullptr, "CopyText", nullptr, nullptr, Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText_Statics::ClipboardFunctionsBPLibrary_eventCopyText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText_Statics::ClipboardFunctionsBPLibrary_eventCopyText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClipboardFunctionsBPLibrary::execCopyText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	UClipboardFunctionsBPLibrary::CopyText(Z_Param_Text);
	P_NATIVE_END;
}
// End Class UClipboardFunctionsBPLibrary Function CopyText

// Begin Class UClipboardFunctionsBPLibrary Function PasteText
struct Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText_Statics
{
	struct ClipboardFunctionsBPLibrary_eventPasteText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Clipboard" },
		{ "DisplayName", "Paste from Clipboard" },
		{ "ModuleRelativePath", "Public/ClipboardFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClipboardFunctionsBPLibrary_eventPasteText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClipboardFunctionsBPLibrary, nullptr, "PasteText", nullptr, nullptr, Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText_Statics::ClipboardFunctionsBPLibrary_eventPasteText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText_Statics::ClipboardFunctionsBPLibrary_eventPasteText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClipboardFunctionsBPLibrary::execPasteText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UClipboardFunctionsBPLibrary::PasteText();
	P_NATIVE_END;
}
// End Class UClipboardFunctionsBPLibrary Function PasteText

// Begin Class UClipboardFunctionsBPLibrary
void UClipboardFunctionsBPLibrary::StaticRegisterNativesUClipboardFunctionsBPLibrary()
{
	UClass* Class = UClipboardFunctionsBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CopyText", &UClipboardFunctionsBPLibrary::execCopyText },
		{ "PasteText", &UClipboardFunctionsBPLibrary::execPasteText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClipboardFunctionsBPLibrary);
UClass* Z_Construct_UClass_UClipboardFunctionsBPLibrary_NoRegister()
{
	return UClipboardFunctionsBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UClipboardFunctionsBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ClipboardFunctionsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ClipboardFunctionsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UClipboardFunctionsBPLibrary_CopyText, "CopyText" }, // 121494123
		{ &Z_Construct_UFunction_UClipboardFunctionsBPLibrary_PasteText, "PasteText" }, // 1485262955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClipboardFunctionsBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClipboardFunctionsBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ClipboardFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClipboardFunctionsBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClipboardFunctionsBPLibrary_Statics::ClassParams = {
	&UClipboardFunctionsBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClipboardFunctionsBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UClipboardFunctionsBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClipboardFunctionsBPLibrary()
{
	if (!Z_Registration_Info_UClass_UClipboardFunctionsBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClipboardFunctionsBPLibrary.OuterSingleton, Z_Construct_UClass_UClipboardFunctionsBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClipboardFunctionsBPLibrary.OuterSingleton;
}
template<> CLIPBOARDFUNCTIONS_API UClass* StaticClass<UClipboardFunctionsBPLibrary>()
{
	return UClipboardFunctionsBPLibrary::StaticClass();
}
UClipboardFunctionsBPLibrary::UClipboardFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClipboardFunctionsBPLibrary);
UClipboardFunctionsBPLibrary::~UClipboardFunctionsBPLibrary() {}
// End Class UClipboardFunctionsBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_ClipboardFunctions5_5_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClipboardFunctionsBPLibrary, UClipboardFunctionsBPLibrary::StaticClass, TEXT("UClipboardFunctionsBPLibrary"), &Z_Registration_Info_UClass_UClipboardFunctionsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClipboardFunctionsBPLibrary), 1627480620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_ClipboardFunctions5_5_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_2276890010(TEXT("/Script/ClipboardFunctions"),
	Z_CompiledInDeferFile_FID_GitHub_ClipboardFunctions5_5_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_ClipboardFunctions5_5_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
