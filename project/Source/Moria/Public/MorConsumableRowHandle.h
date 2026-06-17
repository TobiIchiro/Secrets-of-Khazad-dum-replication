#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorConsumableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorConsumableRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorConsumableRowHandle();
};

