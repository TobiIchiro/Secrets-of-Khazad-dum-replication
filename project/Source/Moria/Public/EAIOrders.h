#pragma once
#include "CoreMinimal.h"
#include "EAIOrders.generated.h"

UENUM(BlueprintType)
enum class EAIOrders : uint8 {
    None,
    Patrol,
    Investigate,
    Attack,
};

