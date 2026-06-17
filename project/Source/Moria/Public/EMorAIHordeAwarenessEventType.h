#pragma once
#include "CoreMinimal.h"
#include "EMorAIHordeAwarenessEventType.generated.h"

UENUM(BlueprintType)
enum class EMorAIHordeAwarenessEventType : uint8 {
    Development,
    Mine,
    HitBreakable,
    SingingMiningStarted,
    SingingMiningCompleted,
    SingingTavernStarted,
    SingingTavernCompleted,
    SingingVenerationStarted,
    SingingVenerationCompleted,
    Building,
    FleeingOrcs,
    OrcCampScout,
    OrcCampGuard,
    OrcDied,
    CampDestroyed,
    OrcAwareOfPlayer,
    OrcTrapTriggered,
    ForgeCompleted,
    Count,
};

