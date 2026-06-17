#pragma once
#include "CoreMinimal.h"
#include "EFuelBurningState.generated.h"

UENUM(BlueprintType)
enum class EFuelBurningState : uint8 {
    Empty,
    Burning,
};

