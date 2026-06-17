#pragma once
#include "CoreMinimal.h"
#include "EMorZoneLightingBehavior.generated.h"

UENUM(BlueprintType)
enum class EMorZoneLightingBehavior : uint8 {
    Normal,
    HordeLightingWhileBossAlive,
    AlwaysPrimary,
};

