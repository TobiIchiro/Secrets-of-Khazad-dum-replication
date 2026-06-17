#pragma once
#include "CoreMinimal.h"
#include "EMorAIWaveEncounterKind.generated.h"

UENUM(BlueprintType)
enum class EMorAIWaveEncounterKind : uint8 {
    Horde,
    Harassment,
    Siege,
    Patrol,
    Unsaved,
    HordeOverride,
};

