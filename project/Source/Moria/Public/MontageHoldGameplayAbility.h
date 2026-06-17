#pragma once
#include "CoreMinimal.h"
#include "MontageGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "MontageHoldGameplayAbility.generated.h"

class UAnimMontage;
class UGameplayEffect;

UCLASS(Blueprintable)
class MORIA_API UMontageHoldGameplayAbility : public UMontageGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MontageLoopSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHolding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndOnHoldFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAppendChargeToTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndHoldOnNoStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> HoldEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HoldReleasedMontage;
    
public:
    UMontageHoldGameplayAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void StaminaDepleted();
    
    UFUNCTION(BlueprintCallable)
    void HoldFinished(float HoldTime);
    
    UFUNCTION(BlueprintCallable)
    void FullCharged();
    
    UFUNCTION(BlueprintCallable)
    void ChargeTimerFinished();
    
};

