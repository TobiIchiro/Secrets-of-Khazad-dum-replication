#pragma once
#include "CoreMinimal.h"
#include "EItemPortability.generated.h"

UENUM(BlueprintType)
enum class EItemPortability : uint8 {
    Storable,
    HeavyCarry,
    AutoConsume,
};

