#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EVoxelDataType.h"
#include "VoxelIntBox.h"
#include "VoxelDebugUtilities.generated.h"

class AVoxelWorld;

UCLASS(Blueprintable)
class VOXEL_API UVoxelDebugUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelDebugUtilities();

    UFUNCTION(BlueprintCallable)
    static void DrawDebugIntBox(AVoxelWorld* World, FVoxelIntBox Bounds, FTransform Transform, float LifeTime, float Thickness, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDataOctree(AVoxelWorld* World, EVoxelDataType DataType, float LifeTime, bool bShowSingle, bool bShowCached, FColor SingleColor, FColor SingleDirtyColor, FColor CachedColor, FColor DirtyColor);
    
    UFUNCTION(BlueprintCallable)
    static void DebugVoxelsInsideBounds(AVoxelWorld* World, FVoxelIntBox Bounds, FLinearColor Color, float LifeTime, float Thickness, bool bDebugDensities, FLinearColor TextColor);
    
};

