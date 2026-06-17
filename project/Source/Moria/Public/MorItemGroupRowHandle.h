#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorItemGroupRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorItemGroupRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorItemGroupRowHandle();
};

