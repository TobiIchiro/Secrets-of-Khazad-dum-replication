#pragma once
#include "CoreMinimal.h"
#include "EMorBMModificator.generated.h"

UENUM(BlueprintType)
enum class EMorBMModificator : uint8 {
    BM_State,
    BM_Switch,
    BM_OverrideEvent,
    BM_Trigger,
    BM_Custom,
};

