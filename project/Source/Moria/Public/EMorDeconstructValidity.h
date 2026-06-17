#pragma once
#include "CoreMinimal.h"
#include "EMorDeconstructValidity.generated.h"

UENUM(BlueprintType)
enum class EMorDeconstructValidity : uint8 {
    Valid,
    ActiveSettlementStone,
    Monument,
    NonPlayerConstruction,
    NoValidTarget,
};

