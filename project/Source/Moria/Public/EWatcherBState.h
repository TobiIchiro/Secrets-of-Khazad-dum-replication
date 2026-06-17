#pragma once
#include "CoreMinimal.h"
#include "EWatcherBState.generated.h"

UENUM(BlueprintType)
enum class EWatcherBState : uint8 {
    BSt_Watcher_Invisible,
    BSt_Watcher_Entree,
    BSt_Watcher_IdleSubmerged,
    BSt_Watcher_IdleSurface,
    BSt_Watcher_Scouting,
    BSt_Watcher_MovingSubmerged,
    BSt_Watcher_MovingSurface,
    BSt_Watcher_TentacleAttack,
    BSt_Watcher_ZoneSwipeAnticipate,
    BSt_Watcher_ZoneSwipeAttack,
    BSt_Watcher_ShockWaveAttack,
    BSt_Watcher_Dead,
};

