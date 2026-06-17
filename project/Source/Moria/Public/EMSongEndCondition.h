#pragma once
#include "CoreMinimal.h"
#include "EMSongEndCondition.generated.h"

UENUM(BlueprintType)
enum class EMSongEndCondition : uint8 {
    None,
    EndOfEvent,
    MusicSyncExit,
    UserCueCompleted = 4,
    UserCueSongEnd = 8,
};

