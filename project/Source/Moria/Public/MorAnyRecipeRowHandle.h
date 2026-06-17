#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorAnyRecipeRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAnyRecipeRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorAnyRecipeRowHandle();
};

