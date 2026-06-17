#pragma once
#include "CoreMinimal.h"
#include "EAIActionType.generated.h"

UENUM(BlueprintType)
enum class EAIActionType : uint8 {
    GetUp,
    Taunt,
    Stomp,
    TurnLeft,
    TurnRight,
    Block,
    WindUp,
};

