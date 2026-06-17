#pragma once
#include "CoreMinimal.h"
#include "EMorButtonsTypes.generated.h"

UENUM(BlueprintType)
enum class EMorButtonsTypes : uint8 {
    Default,
    Informative,
    ActionBottom,
    ActionLeft,
    ActionTop,
    ActionRight,
};

