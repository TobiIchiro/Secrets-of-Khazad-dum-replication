#pragma once
#include "CoreMinimal.h"
#include "EMorAISpawnType.generated.h"

UENUM(BlueprintType)
enum class EMorAISpawnType : uint8 {
    Fallback,
    FromBelow,
    FromAbove,
};

