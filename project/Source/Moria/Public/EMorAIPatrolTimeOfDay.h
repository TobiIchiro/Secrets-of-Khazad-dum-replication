#pragma once
#include "CoreMinimal.h"
#include "EMorAIPatrolTimeOfDay.generated.h"

UENUM(BlueprintType)
enum class EMorAIPatrolTimeOfDay : uint8 {
    Both,
    Day,
    Night,
};

