#pragma once
#include "CoreMinimal.h"
#include "FStartTimeType.generated.h"

UENUM(BlueprintType)
enum FStartTimeType {
    Zero,
    RangeSeconds,
    RangeNormalized,
};

