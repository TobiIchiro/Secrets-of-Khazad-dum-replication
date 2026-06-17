#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorAIPopulationDistributionRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAIPopulationDistributionRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorAIPopulationDistributionRowHandle();
};

