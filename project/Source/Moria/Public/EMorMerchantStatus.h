#pragma once
#include "CoreMinimal.h"
#include "EMorMerchantStatus.generated.h"

UENUM(BlueprintType)
enum class EMorMerchantStatus : uint8 {
    Locked,
    Unlocked,
    Priority,
};

