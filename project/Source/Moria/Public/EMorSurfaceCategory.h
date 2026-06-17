#pragma once
#include "CoreMinimal.h"
#include "EMorSurfaceCategory.generated.h"

UENUM(BlueprintType)
enum class EMorSurfaceCategory : uint8 {
    Stone,
    Wood,
    Dirt,
    Metal,
    Flesh,
    Bone,
    Foliage,
    Glass,
    Cloth,
    Leather,
    Water,
    Num,
};

