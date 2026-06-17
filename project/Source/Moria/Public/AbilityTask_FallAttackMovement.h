#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "AbilityTask_FallAttackMovement.generated.h"

class UAbilityTask_FallAttackMovement;
class UGameplayAbility;

UCLASS(Blueprintable)
class MORIA_API UAbilityTask_FallAttackMovement : public UAbilityTask {
    GENERATED_BODY()
public:
    UAbilityTask_FallAttackMovement();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_FallAttackMovement* CreateFallAttackMovementTask(UGameplayAbility* OwningAbility, float FallSpeed, float CloseToGroundAltitude, bool bProbeForGround);
    
};

