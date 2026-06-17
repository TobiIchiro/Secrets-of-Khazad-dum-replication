#pragma once
#include "CoreMinimal.h"
#include "EMorMemPerformanceMode.generated.h"

UENUM(BlueprintType)
enum class EMorMemPerformanceMode : uint8 {
    Normal,
    NoAI,
    SpawnAI,
};

