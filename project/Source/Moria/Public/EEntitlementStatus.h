#pragma once
#include "CoreMinimal.h"
#include "EEntitlementStatus.generated.h"

UENUM(BlueprintType)
enum class EEntitlementStatus : uint8 {
    NotChecked,
    InProgress,
    EntitlementPermitted,
    EntitlementDenied,
    ConnectionTimeout,
};

