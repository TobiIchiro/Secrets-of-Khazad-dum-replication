#pragma once
#include "CoreMinimal.h"
#include "EMorTeleportType.generated.h"

UENUM(BlueprintType)
enum class EMorTeleportType : uint8 {
    None,
    Respawn,
    Restore,
    FastTravel,
    PartyTravel,
    Development,
    SafeGroundTransform,
    RestoreInBed,
};

