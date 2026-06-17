#pragma once
#include "CoreMinimal.h"
#include "ERowEnabledState.generated.h"

UENUM(BlueprintType)
enum class ERowEnabledState : uint8 {
    Live,
    Test,
    Disabled,
};

