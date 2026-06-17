#pragma once
#include "CoreMinimal.h"
#include "EMorBreakableAttachType.generated.h"

UENUM(BlueprintType)
enum class EMorBreakableAttachType : uint8 {
    Unknown,
    Deco,
    StabilityDependency,
    LevelPlacement,
    SpawnedActor,
};

