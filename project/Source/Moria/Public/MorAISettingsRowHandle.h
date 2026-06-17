#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorAISettingsRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAISettingsRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorAISettingsRowHandle();
};

