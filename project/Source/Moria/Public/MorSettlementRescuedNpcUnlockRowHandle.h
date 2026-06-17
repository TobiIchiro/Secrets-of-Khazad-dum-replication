#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorSettlementRescuedNpcUnlockRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorSettlementRescuedNpcUnlockRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorSettlementRescuedNpcUnlockRowHandle();
};

