#pragma once
#include "CoreMinimal.h"
#include "EMorAmbienceEventType.generated.h"

UENUM(BlueprintType)
enum class EMorAmbienceEventType : uint8 {
    Development,
    Mine,
    HitBreakable,
    DwarfHittingTarget,
    MonsterHittingTarget,
    CharacterSpeaksVOLine,
    Count,
};

