#pragma once
#include "CoreMinimal.h"
#include "EMorTeleportFailedReason.generated.h"

UENUM(BlueprintType)
enum class EMorTeleportFailedReason : uint8 {
    None,
    NotInBase,
    EnemyNearYou,
};

