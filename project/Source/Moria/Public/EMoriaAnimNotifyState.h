#pragma once
#include "CoreMinimal.h"
#include "EMoriaAnimNotifyState.generated.h"

UENUM(BlueprintType)
enum class EMoriaAnimNotifyState : uint8 {
    ComboWindow,
    MovementWindow = 32,
    Effect,
};

