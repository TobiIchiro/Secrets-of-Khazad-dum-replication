#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorRecipeFragmentRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorRecipeFragmentRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorRecipeFragmentRowHandle();
};

