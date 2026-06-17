#pragma once
#include "CoreMinimal.h"
#include "EUnableSleepState.generated.h"

UENUM(BlueprintType)
enum class EUnableSleepState : uint8 {
    Claimed,
    NotSleepTime,
    Cooldown,
    Debuff,
    Enemy,
    TooCold,
    Siege,
    Starving,
};

