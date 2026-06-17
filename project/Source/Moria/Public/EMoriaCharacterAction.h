#pragma once
#include "CoreMinimal.h"
#include "EMoriaCharacterAction.generated.h"

UENUM(BlueprintType)
enum class EMoriaCharacterAction : uint8 {
    Undefined,
    Aim,
    Block,
    Use,
    Throw,
    UseCharge,
    AltAttack,
    JumpAttack,
    QuickAttack,
    SprintAttack,
    FallAttack,
    PushAttack,
    ThrowPrimary,
    ThrowOffhand,
    ChargedAttackLow,
    ChargedAttackFull,
    Summon,
    Autopickup,
    Reload,
    NUM_ACTIONS,
};

