#pragma once
#include "CoreMinimal.h"
#include "EFGKAnimNotify.generated.h"

UENUM(BlueprintType)
enum class EFGKAnimNotify : uint8 {
    ComboIdeal,
    HitIdeal,
    EarlyExit,
    Reload,
    Equip,
    Unequip,
    UseConsumable,
    Ragdoll_On,
    Ragdoll_Off,
    VoiceLine,
    CameraShake,
    Footstep,
    GroundedEntry,
    MotionCorrection,
    AkSwitchedEvent,
    Rotate,
    Default = 255,
};

