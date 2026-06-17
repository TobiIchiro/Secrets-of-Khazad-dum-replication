#pragma once
#include "CoreMinimal.h"
#include "EConstructionValidity.generated.h"

UENUM(BlueprintType)
enum class EConstructionValidity : uint8 {
    Valid,
    Invalid,
    MarginallyStable,
    Unstable,
};

