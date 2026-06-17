#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorThresholdEffectRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorThresholdEffectRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorThresholdEffectRowHandle();
};

