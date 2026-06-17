#pragma once
#include "CoreMinimal.h"
#include "EMorOverheadIndicatorRange.generated.h"

UENUM(BlueprintType)
enum class EMorOverheadIndicatorRange : uint8 {
    Interact,
    Near,
    Far,
    OutOfRange,
    NoIcon,
};

