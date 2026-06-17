#pragma once
#include "CoreMinimal.h"
#include "EVelocityThresholdType.generated.h"

UENUM(BlueprintType)
enum class EVelocityThresholdType : uint8 {
    ThreeDimensional,
    Horizontal,
    Vertical,
    CharacterForward,
};

