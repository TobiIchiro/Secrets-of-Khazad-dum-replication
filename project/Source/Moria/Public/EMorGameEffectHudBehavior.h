#pragma once
#include "CoreMinimal.h"
#include "EMorGameEffectHudBehavior.generated.h"

UENUM(BlueprintType)
enum class EMorGameEffectHudBehavior : uint8 {
    ShowOnMainHud,
    HideFromMainHud,
};

