#pragma once
#include "CoreMinimal.h"
#include "EMorBossBattleMusicState.generated.h"

UENUM(BlueprintType)
enum class EMorBossBattleMusicState : uint8 {
    None,
    Intro,
    Battle,
    BattleWon,
    BattleLost,
};

