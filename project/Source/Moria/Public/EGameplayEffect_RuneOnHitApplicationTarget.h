#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffect_RuneOnHitApplicationTarget.generated.h"

UENUM(BlueprintType)
enum class EGameplayEffect_RuneOnHitApplicationTarget : uint8 {
    Victim,
    Attacker,
};

