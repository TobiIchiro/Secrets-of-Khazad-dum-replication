#pragma once
#include "CoreMinimal.h"
#include "EMorExpeditionPlayerReturnPlacement.generated.h"

UENUM(BlueprintType)
enum class EMorExpeditionPlayerReturnPlacement : uint8 {
    LastPosition,
    MapTable,
    RespawnIfNotAtTable,
    Respawn,
};

