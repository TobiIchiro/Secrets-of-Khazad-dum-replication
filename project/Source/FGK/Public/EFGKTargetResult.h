#pragma once
#include "CoreMinimal.h"
#include "EFGKTargetResult.generated.h"

UENUM(BlueprintType)
enum class EFGKTargetResult : uint8 {
    Success,
    LineOfSightBad,
    RangeBad,
    ElevationBad,
    AngleBad,
    TargetNotFound,
};

