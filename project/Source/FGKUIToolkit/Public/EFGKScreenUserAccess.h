#pragma once
#include "CoreMinimal.h"
#include "EFGKScreenUserAccess.generated.h"

UENUM(BlueprintType)
enum class EFGKScreenUserAccess : uint8 {
    Everyone,
    DevOnly,
};

