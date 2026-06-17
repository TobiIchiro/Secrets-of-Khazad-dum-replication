#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "AbilityTask_NotifyStateEffect.generated.h"

class UAbilityTask_NotifyStateEffect;
class UAnimSequenceBase;
class UFGKAnimNotifyState;
class UMoriaAnimNotifyState_Effect;
class UMoriaGameplayAbility;

UCLASS(Blueprintable)
class MORIA_API UAbilityTask_NotifyStateEffect : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoriaAnimNotifyState_Effect* State;
    
public:
    UAbilityTask_NotifyStateEffect();

protected:
    UFUNCTION(BlueprintCallable)
    void OnNotifyStateEndReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation);
    
public:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_NotifyStateEffect* CreateNotifyStateEffectTask(UMoriaGameplayAbility* OwningAbility, const UFGKAnimNotifyState* NotifyState);
    
};

