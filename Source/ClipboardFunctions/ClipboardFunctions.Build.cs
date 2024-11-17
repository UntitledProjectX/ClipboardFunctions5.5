// Some copyright should be here...

using UnrealBuildTool;

public class ClipboardFunctions : ModuleRules
{
    public ClipboardFunctions(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[] {
				// ... add public include paths required here ...
			}
        );

        PrivateIncludePaths.AddRange(
            new string[] {
				// ... add other private include paths required here ...
			}
        );

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "ApplicationCore", 
				// ... add other public dependencies that you statically link with here ...
			}
        );

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicDefinitions.Add("PLATFORM_WINDOWS=1");
        }
        else if (Target.Platform == UnrealTargetPlatform.Linux)
        {
            PublicDefinitions.Add("PLATFORM_LINUX=1");
        }

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
        );

        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
				// ... add any modules that your module loads dynamically here ...
			}
        );
    }
}
