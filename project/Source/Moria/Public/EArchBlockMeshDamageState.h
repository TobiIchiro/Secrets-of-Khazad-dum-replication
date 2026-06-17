#pragma once
#include "CoreMinimal.h"
#include "EArchBlockMeshDamageState.generated.h"

UENUM(BlueprintType)
enum class EArchBlockMeshDamageState : uint8 {
    Pristine,
    Low,
    Medium,
    High,
};

