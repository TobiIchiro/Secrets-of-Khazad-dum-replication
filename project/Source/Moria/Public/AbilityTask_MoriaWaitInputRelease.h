#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "EMoriaCharacterAction.h"
#include "MoriaInputPrimeDelegateDelegate.h"
#include "MoriaInputReleaseDelegateDelegate.h"
#include "AbilityTask_MoriaWaitInputRelease.generated.h"

class UAbilityTask_MoriaWaitInputRelease;
class UGameplayAbility;

UCLASS(Blueprintable)
class MORIA_API UAbilityTask_MoriaWaitInputRelease : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoriaInputReleaseDelegate OnRelease;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoriaInputPrimeDelegate OnPrimed;
    
    UAbilityTask_MoriaWaitInputRelease();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_MoriaWaitInputRelease* WaitInputRelease(UGameplayAbility* OwningAbility, float PrimeTime, bool bTestAlreadyReleased, EMoriaCharacterAction Action, bool bFireOne, bool bLatching);
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseCallback();
    
    UFUNCTION(BlueprintCallable)
    void LatchRelease();
    
};

