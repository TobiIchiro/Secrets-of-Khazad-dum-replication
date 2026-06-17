#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "EBoneHitFilter.h"
#include "EHitFromDirection.h"
#include "EInputType.h"
#include "EReactionSeverity.h"
#include "Templates/SubclassOf.h"
#include "MorGameplayAbility_Reaction.generated.h"

class AActor;
class UAbilityTask_Rotate;
class UAnimMontage;
class UAnimSequenceBase;
class UFGKAnimNotify;
class UFGKAnimNotifyState;
class UGameplayEffect;

UCLASS(Abstract, Blueprintable)
class MORIA_API UMorGameplayAbility_Reaction : public UGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapToFace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReactionSeverity Severity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitFromDirection HitFromDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoneHitFilter BoneHitFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MontageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootMotionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ReactingEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateToSpawnRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnRemainsOnActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RemainsToSpawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_Rotate* RotateTask;
    
public:
    UMorGameplayAbility_Reaction();

protected:
    UFUNCTION(BlueprintCallable)
    void OnNotifyStateEndReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyStateBeginReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation, float TotalAnimationTime);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyReceived(const UFGKAnimNotify* Notify);
    
    UFUNCTION(BlueprintCallable)
    void EarlyExitInput(EInputType Type);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
};

