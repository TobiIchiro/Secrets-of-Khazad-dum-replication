#pragma once
#include "CoreMinimal.h"
#include "ENpcSchedule.generated.h"

UENUM(BlueprintType)
enum class ENpcSchedule : uint8 {
    None,
    Meal,
    Work,
    Recreation,
    Sleep,
};

