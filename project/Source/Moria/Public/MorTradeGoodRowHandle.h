#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorTradeGoodRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorTradeGoodRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorTradeGoodRowHandle();
};

