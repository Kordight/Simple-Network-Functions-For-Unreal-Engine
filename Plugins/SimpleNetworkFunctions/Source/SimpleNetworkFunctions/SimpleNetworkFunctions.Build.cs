using UnrealBuildTool;

public class SimpleNetworkFunctions : ModuleRules
{
    public SimpleNetworkFunctions(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine" });

        PrivateDependencyModuleNames.AddRange(new string[] { "Sockets", "Networking" });
    }
}
