#pragma once
#include "CoreMinimal.h"
#include "EALSFootstepType.generated.h"

UENUM(BlueprintType)
enum class EALSFootstepType : uint8 {
    Step,
    WalkRun,
    Jump,
    Land,
};

