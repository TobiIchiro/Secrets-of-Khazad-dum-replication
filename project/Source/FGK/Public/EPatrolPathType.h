#pragma once
#include "CoreMinimal.h"
#include "EPatrolPathType.generated.h"

UENUM(BlueprintType)
enum class EPatrolPathType : uint8 {
    Default,
    PingPong,
    Restart,
};

