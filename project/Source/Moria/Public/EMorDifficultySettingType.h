#pragma once
#include "CoreMinimal.h"
#include "EMorDifficultySettingType.generated.h"

UENUM(BlueprintType)
enum class EMorDifficultySettingType : uint8 {
    DwarfAttribute,
    EnemyAttribute,
    CombatGridOverride,
    Generic,
};

