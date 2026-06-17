#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "VoxelDataItemConstructionInfo.h"
#include "VoxelPlaceableItemManager.generated.h"

class UVoxelGeneratorCache;

UCLASS(Blueprintable, EditInlineNew)
class VOXEL_API UVoxelPlaceableItemManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugBounds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVoxelDataItemConstructionInfo> DataItemInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVoxelGeneratorCache* GeneratorCache;
    
public:
    UVoxelPlaceableItemManager();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGenerate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVoxelGeneratorCache* GetGeneratorCache() const;
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugPoint(FVector Position, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugLine(FVector Start, FVector End, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void AddDataItem(FVoxelDataItemConstructionInfo Info);
    
};

