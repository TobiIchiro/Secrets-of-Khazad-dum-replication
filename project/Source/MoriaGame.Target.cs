using UnrealBuildTool;

public class MoriaGameTarget : TargetRules {
	public MoriaGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Moria",
			"FGK",
			"FGKAnalytics",
			"FGKDebugMenu",
			"FGKLoadingScreen",
			"FGKNavPowerPlaceholder",
			"FGKStaticData",
			"FGKUE5Stubs",
			"FGKUIToolkit",
		});
	}
}
