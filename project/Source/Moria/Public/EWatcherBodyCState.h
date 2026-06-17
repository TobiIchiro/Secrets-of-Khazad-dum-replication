#pragma once
#include "CoreMinimal.h"
#include "EWatcherBodyCState.generated.h"

UENUM(BlueprintType)
enum class EWatcherBodyCState : uint8 {
    CSt_WatcherBody_Invisible,
    CSt_WatcherBody_Entree,
    CSt_WatcherBody_IdleSubmerged,
    CSt_WatcherBody_IdleSurfaced,
    CSt_WatcherBody_Scouting,
    CSt_WatcherBody_Submerging,
    CSt_WatcherBody_Surfacing,
    CSt_WatcherBody_MovingSubmerged,
    CSt_WatcherBody_MovingSurfaced,
    CSt_WatcherBody_MeleeAttack,
    CSt_WatcherBody_ZoneSwipeAnticipate,
    CSt_WatcherBody_ZoneSwipeAttack,
    CSt_WatcherBody_ShockWaveAttack,
    CSt_WatcherBody_Dead,
};

