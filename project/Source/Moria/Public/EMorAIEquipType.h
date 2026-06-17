#pragma once
#include "CoreMinimal.h"
#include "EMorAIEquipType.generated.h"

UENUM(BlueprintType)
enum class EMorAIEquipType : uint8 {
    Ranged,
    Melee,
    Tool,
};

