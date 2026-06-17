#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffect_RuneOnHitApplicationFrequency.generated.h"

UENUM(BlueprintType)
enum class EGameplayEffect_RuneOnHitApplicationFrequency : uint8 {
    AllTargetsAllHits,
    FirstHit,
};

