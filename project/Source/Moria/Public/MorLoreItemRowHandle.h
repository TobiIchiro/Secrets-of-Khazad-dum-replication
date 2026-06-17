#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorLoreItemRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorLoreItemRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorLoreItemRowHandle();
};

