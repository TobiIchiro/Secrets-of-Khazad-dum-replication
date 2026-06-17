#pragma once
#include "CoreMinimal.h"
#include "EReticleType.generated.h"

UENUM(BlueprintType)
enum class EReticleType : uint8 {
    None,
    CanMine,
    CanRestore,
    Invalid,
    RangedWeapon,
};

