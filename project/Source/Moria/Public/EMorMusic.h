#pragma once
#include "CoreMinimal.h"
#include "EMorMusic.generated.h"

UENUM(BlueprintType)
enum class EMorMusic : uint8 {
    None,
    BGM,
    OneShots,
    Encounters,
    DwarfSinging,
    Cinematics,
};

