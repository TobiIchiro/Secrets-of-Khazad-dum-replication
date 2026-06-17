#pragma once
#include "CoreMinimal.h"
#include "EActionEffectTiming.generated.h"

UENUM(BlueprintType)
enum class EActionEffectTiming : uint8 {
    Start,
    HitIdeal,
    HitTarget,
    HitFirstTarget,
    HitOtherTargets,
    HitWorld,
    HitGround,
    HitWall,
    End,
    EntireState,
    BeforeHit,
    HitWindow,
    MoveWindow,
    BeforeMontageStart,
};

