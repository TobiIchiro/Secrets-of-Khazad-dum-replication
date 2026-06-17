#pragma once
#include "CoreMinimal.h"
#include "ELoadingScreenState.generated.h"

UENUM(BlueprintType)
enum class ELoadingScreenState : uint8 {
    None,
    Opening,
    Opened,
    Loading,
    Loaded,
    Closing,
    Closed,
};

