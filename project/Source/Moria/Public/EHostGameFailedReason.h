#pragma once
#include "CoreMinimal.h"
#include "EHostGameFailedReason.generated.h"

UENUM(BlueprintType)
enum class EHostGameFailedReason : uint8 {
    None,
    GameInProgress,
    NoMultiplayer,
    PragmaSystemError,
    PartySetupFailed,
    HostFailed,
    CreateGameFailed,
    TimedOut,
    NoPremiumSubscription,
    InviteCodeCollision,
};

