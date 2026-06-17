#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "AbilityTask_WaitForInput.generated.h"

class AFGKCombatManager;
class UAbilityTask_WaitForInput;
class UGameplayAbility;

UCLASS(Blueprintable)
class MORIA_API UAbilityTask_WaitForInput : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKCombatManager* CombatManager;
    
public:
    UAbilityTask_WaitForInput();

protected:
    UFUNCTION(BlueprintCallable)
    void PrimaryAttackPressed();
    
    UFUNCTION(BlueprintCallable)
    void JumpPressed();
    
public:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitForInput* CreateWaitFotInputTask(UGameplayAbility* OwningAbility);
    
};

