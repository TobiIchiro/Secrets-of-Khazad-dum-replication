#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoxelHaltonStream.h"
#include "VoxelMathLibrary.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelMathLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelMathLibrary();

    UFUNCTION(BlueprintCallable)
    static void ResetHaltonStream(const FVoxelHaltonStream& Stream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelHaltonStream MakeHaltonStream(int32 InitialSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetUnitVectorFromRandom(FVector2D Random);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetHalton3D(const FVoxelHaltonStream& Stream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetHalton2D(const FVoxelHaltonStream& Stream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHalton1D(const FVoxelHaltonStream& Stream);
    
};

