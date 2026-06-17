#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorCurrencyRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorCurrencyRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorCurrencyRowHandle();
};

