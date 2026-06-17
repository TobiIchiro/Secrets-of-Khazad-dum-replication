#pragma once
#include "CoreMinimal.h"
#include "EMorStabilityBehavior.generated.h"

UENUM(BlueprintType)
enum class EMorStabilityBehavior : uint8 {
    NewConstruction,
    Indeterminate,
    Specified,
    Foundation,
};

