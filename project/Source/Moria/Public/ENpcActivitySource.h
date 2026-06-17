#pragma once
#include "CoreMinimal.h"
#include "ENpcActivitySource.generated.h"

UENUM(BlueprintType)
enum class ENpcActivitySource : uint8 {
    Custom,
    RoleGatherNothingFound,
};

