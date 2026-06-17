#pragma once
#include "CoreMinimal.h"
#include "EMorGameEffectDisplayBehavior.generated.h"

UENUM(BlueprintType)
enum class EMorGameEffectDisplayBehavior : uint8 {
    None,
    Depleting,
    Increasing,
    Custom,
};

