#pragma once
#include "CoreMinimal.h"
#include "EFGKFootstepType.generated.h"

UENUM(BlueprintType)
enum class EFGKFootstepType : uint8 {
    Step,
    WalkRun,
    Jump,
    Land,
};

