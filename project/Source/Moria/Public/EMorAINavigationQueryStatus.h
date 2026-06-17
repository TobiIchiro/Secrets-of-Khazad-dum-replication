#pragma once
#include "CoreMinimal.h"
#include "EMorAINavigationQueryStatus.generated.h"

UENUM(BlueprintType)
enum class EMorAINavigationQueryStatus : uint8 {
    Invalid,
    Success,
    Pending,
    Failed,
};

