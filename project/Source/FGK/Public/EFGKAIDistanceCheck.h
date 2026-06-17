#pragma once
#include "CoreMinimal.h"
#include "EFGKAIDistanceCheck.generated.h"

UENUM(BlueprintType)
enum class EFGKAIDistanceCheck : uint8 {
    LessThan,
    LessThanOrEqualTo,
    EqualToOnly,
    GreaterThanOrEqualTo,
    GreaterThan,
};

