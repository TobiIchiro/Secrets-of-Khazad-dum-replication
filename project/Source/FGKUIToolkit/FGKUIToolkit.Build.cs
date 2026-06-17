using UnrealBuildTool;

public class FGKUIToolkit : ModuleRules {
    public FGKUIToolkit(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "FGKStaticData",
            "GameplayTags",
            "SlateCore",
            "UMG",
        });
    }
}
