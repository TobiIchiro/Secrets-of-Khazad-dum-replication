#pragma once
#include "CoreMinimal.h"
#include "EMorNpcActivityCategory.generated.h"

UENUM(BlueprintType)
enum class EMorNpcActivityCategory : uint8 {
    Normal,
    NeedPlayerIntervention,
};

