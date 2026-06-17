#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorItemRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorItemRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorItemRowHandle();
};

