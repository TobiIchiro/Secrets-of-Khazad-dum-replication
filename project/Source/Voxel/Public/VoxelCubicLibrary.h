#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoxelCubicLibrary.generated.h"

class AVoxelWorld;

UCLASS(Blueprintable)
class UVoxelCubicLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelCubicLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetCubicVoxelValue(AVoxelWorld* World, FIntVector Position, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCubicVoxelValue(AVoxelWorld* World, FIntVector Position);
    
    UFUNCTION(BlueprintCallable)
    static FIntVector GetCubicVoxelPositionFromHit(AVoxelWorld* World, FVector HitPosition, FVector HitNormal, bool bSelectVoxelOutside);
    
};

