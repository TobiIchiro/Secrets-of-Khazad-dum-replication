#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorExpeditionDifficultyRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorExpeditionDifficultyRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorExpeditionDifficultyRowHandle();
};

