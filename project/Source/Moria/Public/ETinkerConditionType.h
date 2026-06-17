#pragma once
#include "CoreMinimal.h"
#include "ETinkerConditionType.generated.h"

UENUM(BlueprintType)
enum class ETinkerConditionType : uint8 {
    None,
    MatchRecycleResult,
    HasRecylableItem,
};

