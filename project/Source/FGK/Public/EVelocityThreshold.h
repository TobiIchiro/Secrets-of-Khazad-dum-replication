#pragma once
#include "CoreMinimal.h"
#include "EVelocityThreshold.generated.h"

UENUM(BlueprintType)
enum class EVelocityThreshold : uint8 {
    None,
    MinSpeed,
    MaxSpeed,
};

