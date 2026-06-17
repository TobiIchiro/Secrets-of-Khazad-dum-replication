#pragma once
#include "CoreMinimal.h"
#include "EPlayerJoinStatus.generated.h"

UENUM(BlueprintType)
enum class EPlayerJoinStatus : uint8 {
    NotJoining,
    JoiningSession,
    Connecting,
    Connected,
    Failed,
};

