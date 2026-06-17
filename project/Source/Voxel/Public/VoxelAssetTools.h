#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "EVoxelAssetMergeMode.h"
#include "VoxelAssetItemReference.h"
#include "VoxelDisableEditsBoxItemReference.h"
#include "VoxelIntBox.h"
#include "VoxelMaterial.h"
#include "VoxelAssetTools.generated.h"

class AVoxelWorld;
class UObject;
class UVoxelDataAsset;
class UVoxelTransformableGeneratorInstanceWrapper;

UCLASS(Blueprintable)
class VOXEL_API UVoxelAssetTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelAssetTools();

    UFUNCTION(BlueprintCallable)
    static void SetDataAssetMaterial(UVoxelDataAsset* Asset, UVoxelDataAsset*& NewAsset, FVoxelMaterial Material);
    
    UFUNCTION(BlueprintCallable)
    static void InvertDataAsset(UVoxelDataAsset* Asset, UVoxelDataAsset*& InvertedAsset);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ImportModifierAssetAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bModifyValues, bool bModifyMaterials, bool bLockEntireWorld, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void ImportModifierAsset(AVoxelWorld* World, UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bModifyValues, bool bModifyMaterials, bool bLockEntireWorld, bool bConvertToVoxelSpace);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ImportDataAssetFastAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, UVoxelDataAsset* Asset, FVector Position, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void ImportDataAssetFast(AVoxelWorld* World, UVoxelDataAsset* Asset, FVector Position, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ImportAssetAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bSubtractive, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ImportAssetAsReferenceAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelAssetItemReference& Reference, AVoxelWorld* World, UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, int32 Priority, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void ImportAssetAsReference(FVoxelAssetItemReference& Reference, AVoxelWorld* World, UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, int32 Priority, bool bConvertToVoxelSpace, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable)
    static void ImportAsset(AVoxelWorld* World, UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bSubtractive, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace);
    
    UFUNCTION(BlueprintCallable)
    static UVoxelDataAsset* CreateDataAssetFromWorldSection(AVoxelWorld* World, FVoxelIntBox Bounds, bool bCopyMaterials);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AddDisableEditsBoxAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelDisableEditsBoxItemReference& Reference, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void AddDisableEditsBox(FVoxelDisableEditsBoxItemReference& Reference, AVoxelWorld* World, FVoxelIntBox Bounds);
    
};

