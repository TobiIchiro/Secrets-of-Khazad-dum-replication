#pragma once
#include "CoreMinimal.h"
#include "EMorProgressRowNumberCompareType.generated.h"

UENUM(BlueprintType)
enum class EMorProgressRowNumberCompareType : uint8 {
    LessThan,
    LessThanOrEqualTo,
    GreaterThan,
    GreaterThanOrEqualTo,
    EqualTo,
    NotEqualTo,
};

