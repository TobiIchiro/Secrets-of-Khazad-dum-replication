#pragma once
#include "CoreMinimal.h"
#include "ETargetRangeType.generated.h"

UENUM(BlueprintType)
enum class ETargetRangeType : uint8 {
    Invalid,
    Alert,
    RangeAttack,
    MinRangeAttack,
    MeleeAttack,
    Custom = 254,
    NoLimit,
};

