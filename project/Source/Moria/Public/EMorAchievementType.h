#pragma once
#include "CoreMinimal.h"
#include "EMorAchievementType.generated.h"

UENUM(BlueprintType)
enum class EMorAchievementType : uint8 {
    EnterArea,
    KillAmountOfEnemy,
    CraftSetOfItems,
    Manual,
};

