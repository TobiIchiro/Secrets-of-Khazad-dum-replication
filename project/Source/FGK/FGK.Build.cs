using UnrealBuildTool;

public class FGK : ModuleRules {
    public FGK(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "CinematicCamera",
            "CommonInput",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "EnhancedInput",
            "FGKNavPowerPlaceholder",
            "FGKUE5Stubs",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "Landscape",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "NavigationSystem",
            "Niagara",
            "PhysicsCore",
            "SlateCore",
            "UMG",
        });
    }
}
