#pragma once
#include "CoreMinimal.h"
#include "EPlayerControllerLeaveGameState.generated.h"

UENUM(BlueprintType)
enum class EPlayerControllerLeaveGameState : uint8 {
    Initiate,
    ConfirmRequest,
};

