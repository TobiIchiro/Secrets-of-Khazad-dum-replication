#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EWatcherBState.h"
#include "EWatcherBodyCState.h"
#include "EWatcherTentacleCState.h"
#include "EWatcherVerticalMovement.h"
#include "MorCharacter.h"
#include "Templates/SubclassOf.h"
#include "WatcherGuardPlace.h"
#include "WatcherTarget.h"
#include "WatcherTentacleAttackTypeAbilities.h"
#include "WatcherTentacleTarget.h"
#include "WatcherCharacter.generated.h"

class AActor;
class AWatcherGuardPoint;
class AWatcherKnockbackLandingSpot;
class AWatcherZoneCenter;
class UCameraShakeBase;
class UGameplayEffect;
class UPrimitiveComponent;
class UWatcherAnimInstance;
class UWatcherBodyMachine;
class UWatcherTentacleMachines;

UCLASS(Blueprintable)
class MORIA_API AWatcherCharacter : public AMorCharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FWatcherGuardPlace CurrentGuardPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FWatcherGuardPlace NextGuardPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EWatcherVerticalMovement VerticalMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWatcherTarget> AttackTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FWatcherTarget MainAttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWatcherTentacleTarget> TentacleAttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> TentacleRagdollEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> TentacleRagdollBlendTimeout;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWatcherGuardPoint*> GuardPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWatcherKnockbackLandingSpot*> KnockbackLandingSpots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWatcherZoneCenter*> ZoneCenters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWatcherAnimInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWatcherBodyMachine* BodyMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWatcherTentacleMachines* TentacleMachines;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckCollisionWhenMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> IgnoreActorsWhenMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float bAutomaticSurfaceZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwimmingOnSurfaceAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwimmingSubmergedAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwimmingWhileMovingVerticallyAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseZoneCenters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubmergedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuardPointNearThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuardPointFarThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BestAttackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TentacleRootBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TentacleRagdollBelowBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> TentacleAimAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentacleRagdollDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoutingMinDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleSubmergedMinDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleSurfacedMinDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvisibleMinDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoneSwipeAnticipateMinDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandardAttackAnticipateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandardAttackSlashDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWatcherTentacleAttackTypeAbilities> AttackAbilityBlackboardKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KnockbackPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackRelativeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackDirectionAngleTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackDirectionMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ZoneSwipeDamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> ZoneSwipeCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoneSwipeCameraShakeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWasSpawned;
    
    AWatcherCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void WatcherDied(AActor* DeadActor);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZoneCenterNear(AWatcherZoneCenter* ZoneCenter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZoneCenterFar(AWatcherZoneCenter* ZoneCenter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTentacleAttackTargetInReach(int32 TentacleIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSurfaced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubmerged() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsMovingVertically();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMainAttackTargetInReach() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuardPlaceNear(FWatcherGuardPlace& TargetGuardPlace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuardPlaceFar(FWatcherGuardPlace& TargetGuardPlace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWatcherBodyState(AActor* InCharacter, EWatcherBodyCState& OutState, bool& OutValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWatcherBehaviorState(AActor* InController, EWatcherBState& OutState, bool& OutValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWatcherTentacleCState GetTentacleState(int32 TentacleIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTentacleCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWatcherTentacleTarget GetTentacleAttackTarget(int32 TentacleIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWatcherGuardPlace GetNextGuardPlace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWatcherTarget GetMainAttackTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWatcherGuardPlace GetCurrentGuardPlace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWatcherBodyCState GetBodyState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWatcherBState GetBehaviorState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWatcherAnimInstance* GetAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMoveToLocation(const FVector& TargetLocation, bool Teleport) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanMoveToGuardPlace(const FWatcherGuardPlace& TargetGuardPlace, bool Teleport);
    
};

