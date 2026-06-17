#pragma once
#include "CoreMinimal.h"
#include "EWaterColliderState.generated.h"

UENUM(BlueprintType)
enum class EWaterColliderState : uint8 {
    AboveWater,
    AtSurface,
    Submerged,
    Unknown,
};

