#pragma once
#include "CoreMinimal.h"
#include "EMorHealOption.generated.h"

UENUM(Flags)
enum class EMorHealOption : uint16 {
    None,
    All,
    Health = 16,
    Stamina = 32,
    Energy = 64,
    Food = 128,
    Durability = 256,
    NoHeal = None,
    Default = 240,
    Full = 496,
    Negative = 4096,
    HealOnlyRevived = 8192,
    Revive = 16384,
    Kill = 32768,
};

