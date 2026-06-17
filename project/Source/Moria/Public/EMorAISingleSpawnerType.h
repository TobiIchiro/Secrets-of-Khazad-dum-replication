#pragma once
#include "CoreMinimal.h"
#include "EMorAISingleSpawnerType.generated.h"

UENUM(BlueprintType)
enum class EMorAISingleSpawnerType : uint8 {
    Explicit,
    PerZone,
};

