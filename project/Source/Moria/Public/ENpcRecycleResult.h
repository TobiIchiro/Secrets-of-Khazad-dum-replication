#pragma once
#include "CoreMinimal.h"
#include "ENpcRecycleResult.generated.h"

UENUM(BlueprintType)
enum class ENpcRecycleResult : uint8 {
    None,
    Successful,
    NotEnoughSpace,
    NoRecyclableItem,
};

