#pragma once
#include "CoreMinimal.h"
#include "EZoneSet.generated.h"

UENUM(BlueprintType)
enum class EZoneSet : uint8 {
    Moria,
    SandboxSmall,
    SandboxMedium,
    SandboxLarge,
    Expedition,
    ExpeditionRescue,
    ExpeditionGrendel,
    ExpeditionForge,
    All,
};

