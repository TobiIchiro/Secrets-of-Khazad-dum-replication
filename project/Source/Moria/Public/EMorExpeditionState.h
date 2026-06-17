#pragma once
#include "CoreMinimal.h"
#include "EMorExpeditionState.generated.h"

UENUM(BlueprintType)
enum class EMorExpeditionState : uint8 {
    InMainWorld,
    MovingToExpedition,
    InExpedition,
    MovingToMainWorld,
};

