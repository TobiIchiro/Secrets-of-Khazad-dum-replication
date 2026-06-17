#pragma once
#include "CoreMinimal.h"
#include "EMorCharacterFallEffectParameter.generated.h"

UENUM(BlueprintType)
enum class EMorCharacterFallEffectParameter : uint8 {
    None,
    FallDistanceMeters,
    FallDistanceNormalizedToRange,
};

