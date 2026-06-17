#pragma once
#include "CoreMinimal.h"
#include "EMorStatBuffRemoveCondition.generated.h"

UENUM(BlueprintType)
enum class EMorStatBuffRemoveCondition : uint8 {
    Never,
    WhenFalse,
};

