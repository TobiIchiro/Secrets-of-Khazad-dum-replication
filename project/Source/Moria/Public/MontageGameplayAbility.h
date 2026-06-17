#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "GameplayTagContainer.h"
#include "EHitsTeam.h"
#include "EInputType.h"
#include "FStartTimeType.h"
#include "MoriaGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "MontageGameplayAbility.generated.h"

class AGameplayAbilityTargetActor;
class UAnimMontage;
class UAnimSequenceBase;
class UFGKAnimNotify;
class UFGKAnimNotifyState;
class UGameplayEffect;

UCLASS(Blueprintable)
class MORIA_API UMontageGameplayAbility : public UMoriaGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaxDurationCompletes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ChargeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExecuteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndMontageWithAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndMontageOnEarlyExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontInterruptPlayingMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGameplayAbilityTargetActor> TargetUsingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitsTeam HitsTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> TargetEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetriggerIfHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEarlyExitFastRetrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrooves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ChargeOwnedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToApplyWhileAbilityActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<FStartTimeType> StartTimeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowActivationWithoutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameplayAbilityTargetActor* CurrentTargetActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockRotation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubscribeToAnimNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteOnHitIdeal;
    
public:
    UMontageGameplayAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void TimerReady();
    
    UFUNCTION(BlueprintCallable)
    void TargetValidData(const FGameplayAbilityTargetDataHandle& Data);
    
    UFUNCTION(BlueprintCallable)
    void TargetCancelled(const FGameplayAbilityTargetDataHandle& Data);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNotifyStateEndReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyStateBeginReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation, float TotalAnimationTime);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyReceived(const UFGKAnimNotify* Notify);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MontageInterruptedCallback();
    
    UFUNCTION(BlueprintCallable)
    void MontageCompletedCallback();
    
    UFUNCTION(BlueprintCallable)
    void MontageCancelledCallback();
    
    UFUNCTION(BlueprintCallable)
    void MontageBlendOutCallback();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSync();
    
    UFUNCTION(BlueprintCallable)
    void EarlyExitInput(EInputType Type);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
};

