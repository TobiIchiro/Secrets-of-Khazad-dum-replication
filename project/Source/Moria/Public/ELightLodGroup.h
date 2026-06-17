#pragma once
#include "CoreMinimal.h"
#include "ELightLodGroup.generated.h"

UENUM(BlueprintType)
enum class ELightLodGroup : uint8 {
    World,
    Ambient,
    PlayerTorch,
    EnemyTorch,
    ThrowableLight,
    PlayerPlacedLight,
    LocalPlayerTorch,
    LightShaft,
    Count,
};

