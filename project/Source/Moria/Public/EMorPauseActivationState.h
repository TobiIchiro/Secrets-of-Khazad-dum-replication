#pragma once
#include "CoreMinimal.h"
#include "EMorPauseActivationState.generated.h"

UENUM(BlueprintType)
enum class EMorPauseActivationState : uint8 {
    Inactive,
    Activating,
    Active,
    Deactivating,
};

