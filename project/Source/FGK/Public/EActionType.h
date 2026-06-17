#pragma once
#include "CoreMinimal.h"
#include "EActionType.generated.h"

UENUM(BlueprintType)
enum class EActionType : uint8 {
    Jump,
    Melee,
    Range,
    Taunt,
    GetUp,
    HitReaction,
    UltimateAttack,
    ChangeHero,
    Stomp,
    TurnLeft,
    TurnRight,
    SyncAnims,
};

