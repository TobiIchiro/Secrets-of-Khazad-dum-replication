#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorConstructionStabilityRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorConstructionStabilityRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorConstructionStabilityRowHandle();
};

