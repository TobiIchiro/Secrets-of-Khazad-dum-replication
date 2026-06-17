#pragma once
#include "CoreMinimal.h"
#include "ESplineCompare.generated.h"

UENUM(BlueprintType)
enum class ESplineCompare : uint8 {
    MIN,
    MAX,
    AVERAGE,
};

