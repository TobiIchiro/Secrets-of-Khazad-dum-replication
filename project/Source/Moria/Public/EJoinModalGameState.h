#pragma once
#include "CoreMinimal.h"
#include "EJoinModalGameState.generated.h"

UENUM(BlueprintType)
enum class EJoinModalGameState : uint8 {
    ReadyToJoin,
    WaitingForHostToStart,
    Cancelled,
    NotFound,
    PartyFull,
};

