#pragma once
#include "CoreMinimal.h"
#include "EMorSinglePlayerStatus.generated.h"

UENUM(BlueprintType)
enum class EMorSinglePlayerStatus : uint8 {
    Inactive,
    ReadyToLaunch,
    Launched,
    Failed,
};

