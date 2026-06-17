#pragma once
#include "CoreMinimal.h"
#include "EMorTourState.generated.h"

UENUM(BlueprintType)
enum class EMorTourState : uint8 {
    Stopped,
    Running,
    Teleporting,
    Delegating,
    Cleanup,
    Bombing,
};

