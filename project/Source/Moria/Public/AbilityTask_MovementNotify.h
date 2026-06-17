#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "AbilityTask_MovementNotify.generated.h"

class UAbilityTask_MovementNotify;
class UAnimSequenceBase;
class UFGKAnimNotifyState;
class UMorGameplayAbility_MeleeAttack;
class UMoriaAnimNotifyState_MovementWindow;

UCLASS(Blueprintable)
class MORIA_API UAbilityTask_MovementNotify : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoriaAnimNotifyState_MovementWindow* State;
    
public:
    UAbilityTask_MovementNotify();

protected:
    UFUNCTION(BlueprintCallable)
    void OnNotifyStateEndReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation);
    
public:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_MovementNotify* CreateMovementNotifyTask(UMorGameplayAbility_MeleeAttack* OwningAbility, const UFGKAnimNotifyState* NotifyState);
    
};

