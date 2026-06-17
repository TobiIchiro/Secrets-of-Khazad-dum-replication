#pragma once
#include "CoreMinimal.h"
#include "EMorMorGameplayAbility_RangedAttackAmmoType.generated.h"

UENUM(BlueprintType)
enum class EMorMorGameplayAbility_RangedAttackAmmoType : uint8 {
    None,
    ItemCount,
    EquippedWithTag,
};

