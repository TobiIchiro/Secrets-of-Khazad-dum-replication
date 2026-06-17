#pragma once
#include "CoreMinimal.h"
#include "EMorGeneratedBlockProxyState.generated.h"

UENUM(BlueprintType)
enum class EMorGeneratedBlockProxyState : uint8 {
    Eliminated,
    BrokenUp,
    Kept,
    Potential,
};

