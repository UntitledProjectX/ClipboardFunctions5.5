// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClipboardFunctionsBPLibrary.h"
#include "ClipboardFunctions.h"
#include "HAL/PlatformApplicationMisc.h"

#if PLATFORM_LINUX
#include "Misc/LinuxPlatformApplicationMisc.h"
#endif

void UClipboardFunctionsBPLibrary::CopyText(FString Text)
{
    // Copies text to clipboard
    FPlatformApplicationMisc::ClipboardCopy(*Text);
}

FString UClipboardFunctionsBPLibrary::PasteText()
{
    FString LocalString;

    // Pastes text from clipboard
    FPlatformApplicationMisc::ClipboardPaste(LocalString);

    return LocalString;
}
