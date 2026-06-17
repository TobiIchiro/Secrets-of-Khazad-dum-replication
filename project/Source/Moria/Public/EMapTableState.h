#pragma once
#include "CoreMinimal.h"
#include "EMapTableState.generated.h"

UENUM(BlueprintType)
enum class EMapTableState : uint8 {
    Idle,
    Activated,
    Countdown,
};

