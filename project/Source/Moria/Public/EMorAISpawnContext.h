#pragma once
#include "CoreMinimal.h"
#include "EMorAISpawnContext.generated.h"

UENUM(BlueprintType)
enum class EMorAISpawnContext : uint8 {
    None,
    AIPopulation,
    AIPatrol,
    AIChallenge,
    AILair,
    AIWaveEncounter,
    AISavedSingleSpawner,
};

