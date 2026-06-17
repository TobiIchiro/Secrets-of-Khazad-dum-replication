#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "VoxelToolTickData.h"
#include "VoxelTool.generated.h"

class APlayerController;
class AVoxelWorld;
class UVoxelTool;
class UVoxelToolSharedConfig;

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelTool : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDoEditDynamicOverride, FVector, Position, FVector, Normal);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ToolName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Tooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInDropdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPaintMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelToolSharedConfig* SharedConfig;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVoxelToolTickData FrozenTickData;
    
public:
    UVoxelTool();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelToolTickData MakeVoxelToolTickData(APlayerController* PlayerController, bool bEdit, const TMap<FName, bool>& Keys, const TMap<FName, float>& Axes, FVector2D MousePosition, FVector CameraDirection, TEnumAsByte<ECollisionChannel> CollisionChannel);
    
    UFUNCTION(BlueprintCallable)
    static UVoxelTool* MakeVoxelTool(TSubclassOf<UVoxelTool> ToolClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FName, bool> MakeToolKeys(bool bAlternativeMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FName, float> MakeToolAxes(float BrushSizeDelta, float FalloffDelta, float StrengthDelta);
    
    UFUNCTION(BlueprintCallable)
    void K2_SimpleTick(APlayerController* PlayerController, bool bEdit, const TMap<FName, bool>& Keys, const TMap<FName, float>& Axes, const UVoxelTool::FDoEditDynamicOverride& DoEditOverride, TEnumAsByte<ECollisionChannel> CollisionChannel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void K2_AdvancedTick(UObject* WorldContextObject, const FVoxelToolTickData& TickData, const UVoxelTool::FDoEditDynamicOverride& DoEditOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKeyDown(FVoxelToolTickData TickData, FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAlternativeMode(FVoxelToolTickData TickData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVoxelWorld* GetVoxelWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetToolName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRayOrigin(FVoxelToolTickData TickData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRayDirection(FVoxelToolTickData TickData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAxis(FVoxelToolTickData TickData, FName Axis);
    
    UFUNCTION(BlueprintCallable)
    void EnableTool();
    
    UFUNCTION(BlueprintCallable)
    void DisableTool();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Deproject(FVoxelToolTickData TickData, FVector2D ScreenPosition, FVector& WorldPosition, FVector& WorldDirection);
    
    UFUNCTION(BlueprintCallable)
    void Apply(AVoxelWorld* World, FVector Position, FVector Normal, const TMap<FName, bool>& Keys, const TMap<FName, float>& Axes);
    
};

