#pragma once
#include "CoreMinimal.h"
#include "EEntitlementCheckState.generated.h"

UENUM(BlueprintType)
enum class EEntitlementCheckState : uint8 {
    Unknown,
    Pending,
    UpToDate,
};

