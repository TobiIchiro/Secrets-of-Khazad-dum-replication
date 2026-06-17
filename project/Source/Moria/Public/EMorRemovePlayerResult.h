#pragma once
#include "CoreMinimal.h"
#include "EMorRemovePlayerResult.generated.h"

UENUM(BlueprintType)
enum class EMorRemovePlayerResult : uint8 {
    Removed,
    NotInGame,
    CannotRemove,
    Error,
    NotRequested,
};

