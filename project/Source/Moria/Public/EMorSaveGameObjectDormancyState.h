#pragma once
#include "CoreMinimal.h"
#include "EMorSaveGameObjectDormancyState.generated.h"

UENUM(BlueprintType)
enum class EMorSaveGameObjectDormancyState : uint8 {
    Awake,
    Dormant,
};

