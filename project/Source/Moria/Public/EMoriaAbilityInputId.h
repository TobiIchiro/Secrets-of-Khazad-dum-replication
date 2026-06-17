#pragma once
#include "CoreMinimal.h"
#include "EMoriaAbilityInputId.generated.h"

UENUM(BlueprintType)
enum class EMoriaAbilityInputId : uint8 {
    None,
    Confirm,
    Cancel,
    Use,
    Fire,
    Fire2,
    Construction,
    Callout,
    KillSelf,
};

