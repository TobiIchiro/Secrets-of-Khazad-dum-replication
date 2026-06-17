#pragma once
#include "CoreMinimal.h"
#include "EMorDifficultyPreset.generated.h"

UENUM(BlueprintType)
enum class EMorDifficultyPreset : uint8 {
    Story,
    Solo,
    NormalDefault,
    Hard,
    Count,
    Custom,
};

