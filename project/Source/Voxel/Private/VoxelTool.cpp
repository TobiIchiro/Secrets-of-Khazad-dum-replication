#include "VoxelTool.h"
#include "Templates/SubclassOf.h"

UVoxelTool::UVoxelTool() {
    this->bShowInDropdown = true;
    this->bShowPaintMaterial = false;
    this->SharedConfig = NULL;
    this->bEnabled = false;
}

FVoxelToolTickData UVoxelTool::MakeVoxelToolTickData(APlayerController* PlayerController, bool bEdit, const TMap<FName, bool>& Keys, const TMap<FName, float>& Axes, FVector2D MousePosition, FVector CameraDirection, TEnumAsByte<ECollisionChannel> CollisionChannel) {
    return FVoxelToolTickData{};
}

UVoxelTool* UVoxelTool::MakeVoxelTool(TSubclassOf<UVoxelTool> ToolClass) {
    return NULL;
}

TMap<FName, bool> UVoxelTool::MakeToolKeys(bool bAlternativeMode) {
    return TMap<FName, bool>();
}

TMap<FName, float> UVoxelTool::MakeToolAxes(float BrushSizeDelta, float FalloffDelta, float StrengthDelta) {
    return TMap<FName, float>();
}

void UVoxelTool::K2_SimpleTick(APlayerController* PlayerController, bool bEdit, const TMap<FName, bool>& Keys, const TMap<FName, float>& Axes, const UVoxelTool::FDoEditDynamicOverride& DoEditOverride, TEnumAsByte<ECollisionChannel> CollisionChannel) {
}

void UVoxelTool::K2_AdvancedTick(UObject* WorldContextObject, const FVoxelToolTickData& TickData, const UVoxelTool::FDoEditDynamicOverride& DoEditOverride) {
}

bool UVoxelTool::IsKeyDown(FVoxelToolTickData TickData, FName Key) {
    return false;
}

bool UVoxelTool::IsAlternativeMode(FVoxelToolTickData TickData) {
    return false;
}

AVoxelWorld* UVoxelTool::GetVoxelWorld() const {
    return NULL;
}

FName UVoxelTool::GetToolName() const {
    return NAME_None;
}

FVector UVoxelTool::GetRayOrigin(FVoxelToolTickData TickData) {
    return FVector{};
}

FVector UVoxelTool::GetRayDirection(FVoxelToolTickData TickData) {
    return FVector{};
}

float UVoxelTool::GetAxis(FVoxelToolTickData TickData, FName Axis) {
    return 0.0f;
}

void UVoxelTool::EnableTool() {
}

void UVoxelTool::DisableTool() {
}

bool UVoxelTool::Deproject(FVoxelToolTickData TickData, FVector2D ScreenPosition, FVector& WorldPosition, FVector& WorldDirection) {
    return false;
}

void UVoxelTool::Apply(AVoxelWorld* World, FVector Position, FVector Normal, const TMap<FName, bool>& Keys, const TMap<FName, float>& Axes) {
}


