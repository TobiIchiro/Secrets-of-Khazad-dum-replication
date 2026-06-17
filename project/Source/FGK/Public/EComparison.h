#pragma once
#include "CoreMinimal.h"
#include "EComparison.generated.h"

UENUM(BlueprintType)
enum class EComparison : uint8 {
    Never,
    Always,
    Equals,
    NotEquals,
    LessThan,
    LessThanEqual,
    GreaterThan,
    GreaterThanEqual,
};

