#pragma once
#include "CoreMinimal.h"
#include "EMusicState.generated.h"

UENUM(BlueprintType)
enum class EMusicState : uint8 {
    None,
    Silent,
    Humming,
    Singing,
};

