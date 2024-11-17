// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClipboardFunctionsBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIPBOARDFUNCTIONS_ClipboardFunctionsBPLibrary_generated_h
#error "ClipboardFunctionsBPLibrary.generated.h already included, missing '#pragma once' in ClipboardFunctionsBPLibrary.h"
#endif
#define CLIPBOARDFUNCTIONS_ClipboardFunctionsBPLibrary_generated_h

#define FID_GitHub_ClipboardFunctions5_5_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPasteText); \
	DECLARE_FUNCTION(execCopyText);


#define FID_GitHub_ClipboardFunctions5_5_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClipboardFunctionsBPLibrary(); \
	friend struct Z_Construct_UClass_UClipboardFunctionsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UClipboardFunctionsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClipboardFunctions"), NO_API) \
	DECLARE_SERIALIZER(UClipboardFunctionsBPLibrary)


#define FID_GitHub_ClipboardFunctions5_5_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClipboardFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClipboardFunctionsBPLibrary(UClipboardFunctionsBPLibrary&&); \
	UClipboardFunctionsBPLibrary(const UClipboardFunctionsBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClipboardFunctionsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClipboardFunctionsBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClipboardFunctionsBPLibrary) \
	NO_API virtual ~UClipboardFunctionsBPLibrary();


#define FID_GitHub_ClipboardFunctions5_5_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_8_PROLOG
#define FID_GitHub_ClipboardFunctions5_5_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_ClipboardFunctions5_5_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_ClipboardFunctions5_5_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_GitHub_ClipboardFunctions5_5_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIPBOARDFUNCTIONS_API UClass* StaticClass<class UClipboardFunctionsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_ClipboardFunctions5_5_ClipboardFunctions_HostProject_Plugins_ClipboardFunctions_Source_ClipboardFunctions_Public_ClipboardFunctionsBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
