#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EFGKHitDetectionSource.h"
#include "AbilityTask.h"
#include "GameplayTagContainer.h"
#include "EHitsTeam.h"
#include "AbilityTask_DetectMeleeHits.generated.h"

class AActor;
class UAbilityTask_DetectMeleeHits;
class UAnimSequenceBase;
class UFGKAnimNotify;
class UFGKAnimNotifyState;
class UFGKAnimNotifyState_HitWindow;
class UGameplayAbility;
class UPrimitiveComponent;
class UTransformLocatorComponent;

UCLASS(Blueprintable)
class MORIA_API UAbilityTask_DetectMeleeHits : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, TWeakObjectPtr<UTransformLocatorComponent>> HitDetectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HitIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKAnimNotifyState_HitWindow* State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFGKHitDetectionSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName TraceBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHitsTeam HitsTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MissTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProximityRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProximityAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldCheckObstruction;
    
public:
    UAbilityTask_DetectMeleeHits();

protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyStateEndReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyReceived(const UFGKAnimNotify* Notify);
    
public:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_DetectMeleeHits* CreateDetectMeleeHitsTask(UGameplayAbility* OwningAbility, int32 Index, const UFGKAnimNotifyState_HitWindow* NewState, EHitsTeam NewHitsTeam, const FGameplayTagContainer& NewMissTags, float NewProximityRadius, float NewProximityAngle, bool NewBShouldCheckObstruction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckForProximityHits();
    
};

