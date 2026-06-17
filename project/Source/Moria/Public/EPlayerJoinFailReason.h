#pragma once
#include "CoreMinimal.h"
#include "EPlayerJoinFailReason.generated.h"

UENUM(BlueprintType)
enum class EPlayerJoinFailReason : uint8 {
    None,
    NoMultiplayer,
    GameInProgress,
    NotFound,
    IncompatibleVersion,
    PartyFull,
    SystemTimeout,
    OssError,
    PragmaError,
    SystemError,
    CrossplayDisabled,
    LockedPlatform,
    UserBlocked,
    PasswordRequired,
    IncorrectPassword,
    WrongSession,
    NotDedicatedServer,
    InvalidDirectHost,
    InvalidPort,
    PreparingExpedition,
    MissingOptionalEntitlements,
};

