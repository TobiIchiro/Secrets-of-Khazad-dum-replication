#pragma once
#include "CoreMinimal.h"
#include "EPlayerHostStatus.generated.h"

UENUM(BlueprintType)
enum class EPlayerHostStatus : uint8 {
    NotHosting,
    InProgress,
    ReadyToLaunch,
    Launched,
    Failed,
};

