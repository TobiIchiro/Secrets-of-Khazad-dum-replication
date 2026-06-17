#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorItemRecipeRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorItemRecipeRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorItemRecipeRowHandle();
};

