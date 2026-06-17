#pragma once
#include "CoreMinimal.h"
#include "EFGKAnimNotifyState.generated.h"

UENUM(BlueprintType)
enum class EFGKAnimNotifyState : uint8 {
    ComboWindow,
    HitWindow,
    EarlyBlendOut,
    MovementAction,
    OverlayOverride,
    TimeScaleWindow,
    MoveWindow,
    Custom01 = 32,
    Custom02,
    Custom03,
    Custom04,
    Custom05,
    Custom06,
    Custom07,
    Custom08,
    Custom09,
    Default = 255,
};

