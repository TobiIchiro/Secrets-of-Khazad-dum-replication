#pragma once
#include "CoreMinimal.h"
#include "ECraftRefundPolicy.generated.h"

UENUM(BlueprintType)
enum class ECraftRefundPolicy : uint8 {
    NoRefunds,
    GiveToCrafter,
    DropAtComponentOwner,
};

