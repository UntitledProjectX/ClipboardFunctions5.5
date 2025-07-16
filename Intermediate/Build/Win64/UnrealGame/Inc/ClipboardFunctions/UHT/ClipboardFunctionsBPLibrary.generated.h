// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClipboardFunctionsBPLibrary.h"

#ifdef CLIPBOARDFUNCTIONS_ClipboardFunctionsBPLibrary_generated_h
#error "ClipboardFunctionsBPLibrary.generated.h already included, missing '#pragma once' in ClipboardFunctionsBPLibrary.h"
#endif
#define CLIPBOARDFUNCTIONS_ClipboardFunctionsBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClipboardFunctionsBPLibrary *********************************************
#define FID_Unreal_Plugins_New_folder_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPasteText); \
	DECLARE_FUNCTION(execCopyText);


CLIPBOARDFUNCTIONS_API UClass* Z_Construct_UClass_UClipboardFunctionsBPLibrary_NoRegister();

#define FID_Unreal_Plugins_New_folder_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClipboardFunctionsBPLibrary(); \
	friend struct Z_Construct_UClass_UClipboardFunctionsBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIPBOARDFUNCTIONS_API UClass* Z_Construct_UClass_UClipboardFunctionsBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UClipboardFunctionsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClipboardFunctions"), Z_Construct_UClass_UClipboardFunctionsBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UClipboardFunctionsBPLibrary)


#define FID_Unreal_Plugins_New_folder_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClipboardFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClipboardFunctionsBPLibrary(UClipboardFunctionsBPLibrary&&) = delete; \
	UClipboardFunctionsBPLibrary(const UClipboardFunctionsBPLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClipboardFunctionsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClipboardFunctionsBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClipboardFunctionsBPLibrary) \
	NO_API virtual ~UClipboardFunctionsBPLibrary();


#define FID_Unreal_Plugins_New_folder_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_8_PROLOG
#define FID_Unreal_Plugins_New_folder_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Plugins_New_folder_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Plugins_New_folder_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Plugins_New_folder_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClipboardFunctionsBPLibrary;

// ********** End Class UClipboardFunctionsBPLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Plugins_New_folder_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
