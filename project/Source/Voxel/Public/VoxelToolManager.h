#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "VoxelToolManager.generated.h"

class UVoxelTool;
class UVoxelToolSharedConfig;

UCLASS(Blueprintable)
class VOXEL_API UVoxelToolManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelToolSharedConfig* SharedConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVoxelTool* ActiveTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVoxelTool*> Tools;
    
public:
    UVoxelToolManager();

    UFUNCTION(BlueprintCallable)
    void SetActiveToolByName(FName NewActiveTool);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveToolByClass(TSubclassOf<UVoxelTool> NewActiveTool);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveTool(UVoxelTool* NewActiveTool);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVoxelToolSharedConfig* K2_GetSharedConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UVoxelTool*> GetTools() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVoxelTool* GetActiveTool() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateDefaultTools(bool bLoadBlueprints);
    
};

