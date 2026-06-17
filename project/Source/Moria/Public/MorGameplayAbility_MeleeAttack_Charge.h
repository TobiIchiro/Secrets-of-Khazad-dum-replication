#pragma once
#include "CoreMinimal.h"
#include "MorGameplayAbility_MeleeAttack.h"
#include "MorGameplayAbility_MeleeAttack_Charge.generated.h"

class UAbilityTask_WaitAttributeChange;
class UAbilityTask_WaitDelay;
class UMorAbilityTask_DetectBlockedMove;

UCLASS(Blueprintable)
class MORIA_API UMorGameplayAbility_MeleeAttack_Charge : public UMorGameplayAbility_MeleeAttack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunnedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakoutDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorAbilityTask_DetectBlockedMove* CheckForBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitAttributeChange* WaitForDamageDoneTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitDelay* WaitDelayTask;
    
public:
    UMorGameplayAbility_MeleeAttack_Charge();

protected:
    UFUNCTION(BlueprintCallable)
    void StartStunnedLoop();
    
    UFUNCTION(BlueprintCallable)
    void OnWaitDelayFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageThresholdReached();
    
    UFUNCTION(BlueprintCallable)
    void OnBlocked();
    
};

