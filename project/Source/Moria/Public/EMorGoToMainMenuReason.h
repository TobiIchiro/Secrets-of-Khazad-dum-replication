#pragma once
#include "CoreMinimal.h"
#include "EMorGoToMainMenuReason.generated.h"

UENUM(BlueprintType)
enum class EMorGoToMainMenuReason : uint8 {
    None,
    InviteAccepted,
    ErrorReadingWorldSaveGame,
    PragmaDisconnected,
    OssDisconnected,
    PragmaTampered,
    UserBlocked,
    HostLeft,
    NetworkFailure,
    LoadLastSave,
    RejectedPlatform,
    TravelFailure,
};

