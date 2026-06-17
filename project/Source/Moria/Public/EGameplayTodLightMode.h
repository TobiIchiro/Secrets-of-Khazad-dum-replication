#pragma once
#include "CoreMinimal.h"
#include "EGameplayTodLightMode.generated.h"

UENUM(BlueprintType)
enum class EGameplayTodLightMode : uint8 {
    None,
    Both,
    Day,
    Night,
};

