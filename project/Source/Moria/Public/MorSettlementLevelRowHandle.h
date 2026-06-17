#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorSettlementLevelRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorSettlementLevelRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorSettlementLevelRowHandle();
};

