#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorResourceRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorResourceRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorResourceRowHandle();
};

