#pragma once
#include "CoreMinimal.h"
#include "EFGKInteractionType.generated.h"

UENUM(BlueprintType)
enum class EFGKInteractionType : uint8 {
    Character,
    Input,
    Sequencer,
    Camera,
};

