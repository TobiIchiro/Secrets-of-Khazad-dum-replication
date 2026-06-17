#pragma once
#include "CoreMinimal.h"
#include "EFGKMeleeTargetRangeMeasure.generated.h"

UENUM(BlueprintType)
enum class EFGKMeleeTargetRangeMeasure : uint8 {
    Untargeted,
    Distance,
    Velocity,
    Ranged,
};

