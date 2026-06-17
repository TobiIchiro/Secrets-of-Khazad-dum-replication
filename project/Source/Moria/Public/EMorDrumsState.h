#pragma once
#include "CoreMinimal.h"
#include "EMorDrumsState.generated.h"

UENUM(BlueprintType)
enum class EMorDrumsState : uint8 {
    None,
    Started,
    Building,
    BattleStarted,
    BattleWinning,
    BattleLosing,
    BattleWon,
    BattleLost,
    Stopped,
};

