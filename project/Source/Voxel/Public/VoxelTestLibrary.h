#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoxelIntBox.h"
#include "VoxelTestValues.h"
#include "VoxelTestLibrary.generated.h"

class AVoxelWorld;

UCLASS(Blueprintable)
class VOXEL_API UVoxelTestLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelTestLibrary();

    UFUNCTION(BlueprintCallable)
    static void TestValues(FVoxelTestValues ValuesA, FVoxelTestValues ValuesB);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelTestValues ReadValues(AVoxelWorld* World, FVoxelIntBox Bounds);
    
};

