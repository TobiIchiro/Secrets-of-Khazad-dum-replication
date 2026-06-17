#pragma once
#include "CoreMinimal.h"
#include "EMorGrowthStage.generated.h"

UENUM(BlueprintType)
enum class EMorGrowthStage : uint8 {
    None,
    Sprout,
    Growing,
    Ready,
    Spoiled,
};

