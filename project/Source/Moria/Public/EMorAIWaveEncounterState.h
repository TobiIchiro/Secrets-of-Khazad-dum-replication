#pragma once
#include "CoreMinimal.h"
#include "EMorAIWaveEncounterState.generated.h"

UENUM(BlueprintType)
enum class EMorAIWaveEncounterState : uint8 {
    None,
    WaitingForFirstWave,
    SpawningWaves,
    WavesOver,
    PlayersVictorious,
    PlayersDefeated,
};

