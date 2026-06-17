using UnrealBuildTool;

public class MoriaEditorTarget : TargetRules {
	public MoriaEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
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
