#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorOrderDeckRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorOrderDeckRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorOrderDeckRowHandle();
};

