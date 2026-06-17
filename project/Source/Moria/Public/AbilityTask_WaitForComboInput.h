#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "InputPressDelegateDelegate2.h"
#include "AbilityTask_WaitForComboInput.generated.h"

class UAbilityTask_WaitForComboInput;
class UAnimSequenceBase;
class UFGKAnimNotifyState;
class UGameplayAbility;

UCLASS(Blueprintable)
class MORIA_API UAbilityTask_WaitForComboInput : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputPressDelegate OnPress;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKAnimNotifyState* State;
    
public:
    UAbilityTask_WaitForComboInput();

    UFUNCTION(BlueprintCallable)
    void OnPressCallback();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNotifyStateEndReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation);
    
public:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitForComboInput* CreateWaitForComboInputTask(UGameplayAbility* OwningAbility, const UFGKAnimNotifyState* NewState, bool bTestAlreadyPressed);
    
};

