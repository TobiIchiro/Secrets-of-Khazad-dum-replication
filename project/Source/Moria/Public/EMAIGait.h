#pragma once
#include "CoreMinimal.h"
#include "EMAIGait.generated.h"

UENUM(BlueprintType)
enum class EMAIGait : uint8 {
    Undefined,
    Patrol,
    Alert,
};

