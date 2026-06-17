#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VoxelIntBox.h"
#include "VoxelIntBoxWithValidity.h"
#include "VoxelTool.h"
#include "VoxelToolBaseConfig.h"
#include "VoxelToolTickData.h"
#include "VoxelToolBase.generated.h"

class AVoxelWorld;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UStaticMesh;

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelToolBase : public UVoxelTool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVoxelWorld* VoxelWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ToolOverlayMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ToolMeshMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PlaneMeshMaterialInstance;
    
public:
    UVoxelToolBase();

    UFUNCTION(BlueprintCallable)
    void UpdateToolMesh(UStaticMesh* Mesh, UMaterialInterface* Material, const FTransform& Transform, FName ID);
    
    UFUNCTION(BlueprintCallable)
    void SetToolOverlayBounds(const FBox& Bounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LastFrameCanEdit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_UpdateRender(UMaterialInstanceDynamic* OverlayMaterialInstance, UMaterialInstanceDynamic* MeshMaterialInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Tick();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_GetToolConfig(FVoxelToolBaseConfig InConfig, FVoxelToolBaseConfig& OutConfig) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVoxelIntBoxWithValidity K2_DoEdit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValueAfterAxisInput(FName AxisName, float CurrentValue, float Min, float Max) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetToolPreviewPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetToolPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetToolNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetToolDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVoxelToolTickData GetTickData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseMovementSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVoxelToolTickData GetLastFrameTickData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeltaTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVoxelIntBox GetBoundsToCache(const FVoxelIntBox& Bounds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEdit() const;
    
};

