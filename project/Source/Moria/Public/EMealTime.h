#pragma once
#include "CoreMinimal.h"
#include "EMealTime.generated.h"

UENUM(BlueprintType)
enum class EMealTime : uint8 {
    None,
    Breakfast,
    Lunch,
    Dinner,
};

