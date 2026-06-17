#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EVoxelFalloff.h"
#include "VoxelToolLibrary.generated.h"

class UMaterialInstanceDynamic;
class UVoxelToolBase;

UCLASS(Blueprintable)
class VOXEL_API UVoxelToolLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelToolLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateSphereOverlayMaterial(UVoxelToolBase* Tool, UMaterialInstanceDynamic* OverlayMaterialInstance, EVoxelFalloff FalloffType, float Falloff);
    
};

