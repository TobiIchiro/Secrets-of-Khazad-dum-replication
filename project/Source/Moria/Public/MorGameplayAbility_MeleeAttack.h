#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ItemHandle.h"
#include "GameplayTagContainer.h"
#include "EReactionSeverity.h"
#include "MeleeHitInfo.h"
#include "MontageGameplayAbility.h"
#include "MorCombatHitSettings.h"
#include "Templates/SubclassOf.h"
#include "MorGameplayAbility_MeleeAttack.generated.h"

class AActor;
class AMorInventoryItem;
class UAbilityTask_MeleeMovement;
class UAnimMontage;
class UFGKAnimNotifyState_HitWindow;
class UMorGameplayAbility_MeleeAttack;

UCLASS(Abstract, Blueprintable)
class MORIA_API UMorGameplayAbility_MeleeAttack : public UMontageGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AltNoMovementAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MissTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDummyProp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorCombatHitSettings> HitSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReactionSeverity PerfectBlockSeverity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationAdjustSpeedLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityAdjustSpeedLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTargetRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyUseRootMotionIfPlayerRequestingMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRootMotionStretching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStretchOnlyForwardMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitPauseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactDirectionKnockbackFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMorGameplayAbility_MeleeAttack>> ComboAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChargedLowAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChargedFullAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackOnPerfectBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockUpOnPerfectBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_MeleeMovement* MovementTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemHandle TargetItem;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint16 RootMotionSourceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UFGKAnimNotifyState_HitWindow*, AMorInventoryItem*> TrailingWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorInventoryItem* ChargedWeapon;
    
public:
    UMorGameplayAbility_MeleeAttack();

protected:
    UFUNCTION(BlueprintCallable)
    void OnHitEndDetected(int32 HitIndex, FMeleeHitInfo& HitInfo, FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnHitDetected(int32 HitIndex, FMeleeHitInfo& HitInfo, FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnComboInput(float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    void ChooseAndActivateComboAttack();
    
};

