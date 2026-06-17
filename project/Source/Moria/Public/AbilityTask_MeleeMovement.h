#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "AbilityTask_MeleeMovement.generated.h"

class UAbilityTask_MeleeMovement;
class UGameplayAbility;

UCLASS(Blueprintable)
class MORIA_API UAbilityTask_MeleeMovement : public UAbilityTask {
    GENERATED_BODY()
public:
    UAbilityTask_MeleeMovement();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_MeleeMovement* CreateMeleeMovementTask(UGameplayAbility* OwningAbility, bool bForceAiming);
    
};

