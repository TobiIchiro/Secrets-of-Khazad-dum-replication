#pragma once
#include "CoreMinimal.h"
#include "EWatcherZone.generated.h"

UENUM(BlueprintType)
enum class EWatcherZone : uint8 {
    WatcherZone_Player,
    WatcherZone_Neutral,
    WatcherZone_Watcher,
};

