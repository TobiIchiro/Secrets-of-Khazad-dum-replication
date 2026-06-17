#pragma once
#include "CoreMinimal.h"
#include "EMorWaterDepthRequirement.generated.h"

UENUM(BlueprintType)
enum class EMorWaterDepthRequirement : uint8 {
    ForbiddenEverywhere,
    AllowLand,
    AllowShallowWater,
    AllowDeepWater = 8,
    AllowAllWater = 10,
    AllowAll,
};

