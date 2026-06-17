#pragma once
#include "CoreMinimal.h"
#include "EPrimaryInputType.generated.h"

UENUM(BlueprintType)
enum class EPrimaryInputType : uint8 {
    None,
    TargetWorld,
    Throw,
    QuickShot,
    BashAttack,
    PressAttack,
    HeldAttack,
    JumpAttack,
    FallAttack,
    SprintAttack,
    Num,
};

