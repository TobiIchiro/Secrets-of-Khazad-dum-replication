#pragma once
#include "CoreMinimal.h"
#include "EWaterTriggerBoxCategory.generated.h"

UENUM(BlueprintType)
enum class EWaterTriggerBoxCategory : uint8 {
    Shallow,
    Deep,
    Puddle,
    Shadow,
};

