#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "GameplayTagContainer.h"
#include "EInputType.h"
#include "EMSongType.h"
#include "EMorSongExitReason.h"
#include "EMusicState.h"
#include "MontageGameplayAbility.h"
#include "MorMontageStartTimeSettings.h"
#include "MorSongInstanceData.h"
#include "MorSongRowHandle.h"
#include "Templates/SubclassOf.h"
#include "MorGameplayAbility_ChargeSing.generated.h"

class AActor;
class AMorChargeSingingBaseInteractable;
class UAbilityTask_MoriaWaitInputRelease;
class UAbilityTask_Rotate;
class UAbilityTask_WaitForInput;
class UAnimMontage;
class UGameplayEffect;

UCLASS(Blueprintable)
class MORIA_API UMorGameplayAbility_ChargeSing : public UMontageGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMSongType SongType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSongRowHandle SpecificSong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SpecificSongSectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorChargeSingingBaseInteractable> PrimeInteractableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> SingingMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> CompleteMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CompleteSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMontageStartTimeSettings CompleteMontagesStartSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> IncompleteMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IncompleteSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMontageStartTimeSettings IncompleteMontagesStartSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SongPrimedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> TerminalEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SongCompletedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SongCompletedDialogueTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorChargeSingingBaseInteractable* CurrentInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorChargeSingingBaseInteractable* PrimeInteractable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorChargeSingingBaseInteractable> InteractableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAfterPrimeInteractConfirmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAfterPrimeRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterruptibleMonatage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterruptionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoTerminate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoTerminateAfterPrime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTerminateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRotationTowardsInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTargetLockRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetInteractionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_Rotate* RotationTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitForInput* WaitForInputTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_MoriaWaitInputRelease* PrimeWaitForInputReleaseTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_MoriaWaitInputRelease* ExtendedPrimeWaitForInputReleaseTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopOnPrimaryHandItemEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopOnPrimaryHandItemUnequip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopOnAbilityItemUnequip;
    
public:
    UMorGameplayAbility_ChargeSing();

    UFUNCTION(BlueprintCallable)
    void SongEnded(bool bIsAborted, const uint8 SongID, const FMorSongInstanceData& SongInstanceData);
    
    UFUNCTION(BlueprintCallable)
    void Released(float HoldTime);
    
    UFUNCTION(BlueprintCallable)
    void Primed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerVoiceStateChanged(EMusicState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnInputPressedCallback(EInputType InputType);
    
    UFUNCTION(BlueprintCallable)
    void ItemUnequipped(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void ItemEquipped(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void ForcefullyExitedSong(const EMorSongExitReason ExitReason);
    
    UFUNCTION(BlueprintCallable)
    void ExtendedPrimeReleased(float HoldTime);
    
    UFUNCTION(BlueprintCallable)
    void ExtendedPrime();
    
public:
    UFUNCTION(BlueprintCallable)
    void AnimationEnd(bool bCompleted);
    
};

