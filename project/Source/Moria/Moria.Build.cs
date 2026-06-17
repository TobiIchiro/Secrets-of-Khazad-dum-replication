using UnrealBuildTool;

public class Moria : ModuleRules {
    public Moria(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "ApexDestruction",
            "CommonInput",
            "CommonUI",
            "ControlRig",
            "Core",
            "CoreUObject",
            "DLSSBlueprint",
            "DeveloperSettings",
            "EasySkyV2",
            "Engine",
            "FGK",
            "FGKAnalytics",
            "FGKDebugMenu",
            "FGKStaticData",
            "FGKUIToolkit",
            "Foliage",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "NavigationSystem",
            "Niagara",
            "OnlineSubsystemUtils",
            "PhysicsCore",
            "PrefabAsset",
            "Slate",
            "SlateCore",
            "AudioMixer",
            "UMG",
            "Voxel",
        });
    }
}
