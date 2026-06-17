#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorMonumentRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorMonumentRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorMonumentRowHandle();
};

