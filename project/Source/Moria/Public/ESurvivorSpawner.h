#pragma once
#include "CoreMinimal.h"
#include "ESurvivorSpawner.generated.h"

UENUM(BlueprintType)
enum class ESurvivorSpawner : uint8 {
    CaptiveNPC,
    DeadNPC,
    FightingNPC,
    HidingNPC,
    Count,
};

