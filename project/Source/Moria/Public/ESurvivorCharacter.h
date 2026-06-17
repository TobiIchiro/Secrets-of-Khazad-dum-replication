#pragma once
#include "CoreMinimal.h"
#include "ESurvivorCharacter.generated.h"

UENUM(BlueprintType)
enum class ESurvivorCharacter : uint8 {
    None,
    Preset,
    Random,
};

