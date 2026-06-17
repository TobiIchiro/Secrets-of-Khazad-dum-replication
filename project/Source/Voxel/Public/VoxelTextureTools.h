#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoxelFloatTexture.h"
#include "VoxelTextureTools.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelTextureTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelTextureTools();

    UFUNCTION(BlueprintCallable)
    static FVoxelFloatTexture Minimum(FVoxelFloatTexture Texture, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelFloatTexture Maximum(FVoxelFloatTexture Texture, float Radius);
    
};

