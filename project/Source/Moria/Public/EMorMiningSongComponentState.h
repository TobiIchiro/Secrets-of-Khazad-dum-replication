#pragma once
#include "CoreMinimal.h"
#include "EMorMiningSongComponentState.generated.h"

UENUM(BlueprintType)
enum class EMorMiningSongComponentState : uint8 {
    Idle,
    PreHumming,
    Humming,
    AwaitingJoin,
    Singing,
    SingingRejected,
};

