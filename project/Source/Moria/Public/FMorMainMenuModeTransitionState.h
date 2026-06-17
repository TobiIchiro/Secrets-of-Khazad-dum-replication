#pragma once
#include "CoreMinimal.h"
#include "FMorMainMenuModeTransitionState.generated.h"

UENUM(BlueprintType)
enum class FMorMainMenuModeTransitionState : uint8 {
    PreparingToChangeMode,
    PreModeChange,
    PostModeChange,
};

