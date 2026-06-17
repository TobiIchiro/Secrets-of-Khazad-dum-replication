#pragma once
#include "CoreMinimal.h"
#include "MorGameplayAbility_MeleeAttack.h"
#include "MorGameplayAbility_PickAttack.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorGameplayAbility_PickAttack : public UMorGameplayAbility_MeleeAttack {
    GENERATED_BODY()
public:
    UMorGameplayAbility_PickAttack();

};

