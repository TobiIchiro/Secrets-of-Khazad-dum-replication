#pragma once
#include "CoreMinimal.h"
#include "ESettlementType.generated.h"

UENUM(BlueprintType)
enum class ESettlementType : uint8 {
    Normal,
    Small,
    Void,
};

