// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ClipboardFunctionsBPLibrary.generated.h"

UCLASS()
class UClipboardFunctionsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Copy to Clipboard"), Category = "Clipboard")
	static void CopyText(FString Text);

	UFUNCTION(BlueprintCallable, DisplayName = "Paste from Clipboard", Category = "Clipboard", BlueprintPure)
	static FString PasteText();
};