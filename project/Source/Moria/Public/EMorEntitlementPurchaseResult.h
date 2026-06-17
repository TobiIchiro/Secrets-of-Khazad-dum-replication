#pragma once
#include "CoreMinimal.h"
#include "EMorEntitlementPurchaseResult.generated.h"

UENUM(BlueprintType)
enum class EMorEntitlementPurchaseResult : uint8 {
    Failed,
    InProgress,
    Purchased,
    NotPurchased,
    Refresh,
};

