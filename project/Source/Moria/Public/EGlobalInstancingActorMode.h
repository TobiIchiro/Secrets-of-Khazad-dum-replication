#pragma once
#include "CoreMinimal.h"
#include "EGlobalInstancingActorMode.generated.h"

UENUM(BlueprintType)
enum class EGlobalInstancingActorMode : uint8 {
    AlwaysCreate,
    SkipIncompatibleSilent,
    SkipIncompatibleWarn,
};

