#pragma once
#include "CoreMinimal.h"
#include "EMorMultiplayerSessionMode.generated.h"

UENUM(BlueprintType)
enum class EMorMultiplayerSessionMode : uint8 {
    PlatformLocked,
    CrossPlay,
};

