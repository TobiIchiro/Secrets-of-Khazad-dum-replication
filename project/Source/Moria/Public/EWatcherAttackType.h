#pragma once
#include "CoreMinimal.h"
#include "EWatcherAttackType.generated.h"

UENUM(BlueprintType)
enum class EWatcherAttackType : uint8 {
    WatcherAttackType_Melee,
    WatcherAttackType_Push,
    WatcherAttackType_Slam,
    WatcherAttackType_Spin,
    WatcherAttackType_ZoneSwipe,
    WatcherAttackType_ShockWave,
};

