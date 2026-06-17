#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorConstructionRecipeRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorConstructionRecipeRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorConstructionRecipeRowHandle();
};

