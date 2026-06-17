#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelPlaceableItemActorHelper.generated.h"

UCLASS(Blueprintable, Within=VoxelWorld)
class VOXEL_API UVoxelPlaceableItemActorHelper : public UObject {
    GENERATED_BODY()
public:
    UVoxelPlaceableItemActorHelper();

};

