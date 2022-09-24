using UnrealBuildTool;

public class MultiplayerGameTarget : TargetRules
{
	public MultiplayerGameTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("MultiplayerGame");
	}
}
