#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorDifficultySettingRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDifficultySettingRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorDifficultySettingRowHandle();
};

