#pragma once
#include "CoreMinimal.h"
#include "EVelocityMoveFinalSpeed.generated.h"

UENUM(BlueprintType)
enum class EVelocityMoveFinalSpeed : uint8 {
    Absolute,
    Add,
    AddAndChangeDirection,
};

