#pragma once
#include "CoreMinimal.h"
#include "EMiningSongInteractableState.generated.h"

UENUM(BlueprintType)
enum class EMiningSongInteractableState : uint8 {
    Idle,
    Singing,
};

