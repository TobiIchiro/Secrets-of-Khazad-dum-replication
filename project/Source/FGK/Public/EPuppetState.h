#pragma once
#include "CoreMinimal.h"
#include "EPuppetState.generated.h"

UENUM(BlueprintType)
enum class EPuppetState : uint8 {
    None,
    Requested,
    Syncing,
    Failed,
};

