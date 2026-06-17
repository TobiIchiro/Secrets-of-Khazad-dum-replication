#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoxelPerlinWormsSettings.h"
#include "VoxelPlaceableItemsUtilities.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelPlaceableItemsUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAddWorm, FVector, Start, FVector, End, float, Radius);
    
    UVoxelPlaceableItemsUtilities();

    UFUNCTION(BlueprintCallable)
    static void AddWorms(UVoxelPlaceableItemsUtilities::FAddWorm AddWorm, FVoxelPerlinWormsSettings Settings);
    
};

