#pragma once
#include "CoreMinimal.h"
#include "EMorAISpawnRequestType.generated.h"

UENUM(BlueprintType)
enum class EMorAISpawnRequestType : uint8 {
    Simple,
    AdditionalParams,
    ZoneRosterEntry,
    BlueprintSpawns,
};

