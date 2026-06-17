#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorLoreAppendixRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorLoreAppendixRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorLoreAppendixRowHandle();
};

