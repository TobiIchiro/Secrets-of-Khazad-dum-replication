#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorDifficultySliderRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDifficultySliderRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorDifficultySliderRowHandle();
};

