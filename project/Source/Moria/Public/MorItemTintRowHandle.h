#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorItemTintRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorItemTintRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorItemTintRowHandle();
};

