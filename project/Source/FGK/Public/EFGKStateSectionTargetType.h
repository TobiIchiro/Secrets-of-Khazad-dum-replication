#pragma once
#include "CoreMinimal.h"
#include "EFGKStateSectionTargetType.generated.h"

UENUM(BlueprintType)
enum class EFGKStateSectionTargetType : uint8 {
    OnlyInteractor,
    Everyone,
    EveryoneBesidesInteractor,
    EveryoneInRange,
    EveryoneInRangeBesidesInteractor,
};

