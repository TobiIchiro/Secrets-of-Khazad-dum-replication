#pragma once
#include "CoreMinimal.h"
#include "EMorForceFeedBackType.generated.h"

UENUM(BlueprintType)
enum class EMorForceFeedBackType : uint8 {
    Mining,
    MeleeHit_Outgoing,
    MeleeHit_Incoming,
    RangeShot,
    RangeHit_Incoming,
    Block_Standard,
    Block_Perfect,
    Landing_Safe,
    Landing_Damage,
    Landing_Lethal,
    DoT,
    Construction,
    Deconstruction,
    Num,
};

