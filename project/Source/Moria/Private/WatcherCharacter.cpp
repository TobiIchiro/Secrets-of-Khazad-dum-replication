#include "WatcherCharacter.h"
#include "Net/UnrealNetwork.h"

AWatcherCharacter::AWatcherCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VerticalMovement = EWatcherVerticalMovement::EWatcherVerticalMovement_Submerged;
    this->TentacleAttackTarget.AddDefaulted(1);
    this->TentacleRagdollEnabled.AddDefaulted(1);
    this->TentacleRagdollBlendTimeout.AddDefaulted(1);
    this->AnimInstance = NULL;
    this->BodyMachine = NULL;
    this->TentacleMachines = NULL;
    this->bCheckCollisionWhenMoving = true;
    this->bAutomaticSurfaceZ = 1.00f;
    this->SurfaceZ = 0.00f;
    this->bSwimmingOnSurfaceAllowed = true;
    this->bSwimmingSubmergedAllowed = true;
    this->bSwimmingWhileMovingVerticallyAllowed = true;
    this->bUseZoneCenters = false;
    this->SwimmingDelay = 0.50f;
    this->SubmergedSpeed = 600.00f;
    this->SurfaceSpeed = 300.00f;
    this->RotationSpeed = 45.00f;
    this->GuardPointNearThreshold = 50.00f;
    this->GuardPointFarThreshold = 2000.00f;
    this->MinReach = 200.00f;
    this->MaxReach = 2800.00f;
    this->BestAttackDistance = 2000.00f;
    this->TentacleRagdollBelowBones.AddDefaulted(1);
    this->TentacleAimAdjustment.AddDefaulted(1);
    this->TentacleRagdollDelay = 0.50f;
    this->ScoutingMinDuration = 2.00f;
    this->IdleSubmergedMinDuration = 8.00f;
    this->IdleSurfacedMinDuration = 8.00f;
    this->InvisibleMinDuration = 2.00f;
    this->ZoneSwipeAnticipateMinDuration = 3.00f;
    this->StandardAttackAnticipateDuration = 3.00f;
    this->StandardAttackSlashDuration = 4.00f;
    this->AttackAbilityBlackboardKeys.AddDefaulted(1);
    this->KnockbackPriority = 1024;
    this->KnockbackMaxDistance = 1500.00f;
    this->KnockbackSpeed = 1000.00f;
    this->KnockbackRelativeHeight = 0.33f;
    this->KnockbackDirectionAngleTolerance = 15.00f;
    this->KnockbackDirectionMaxAngle = 60.00f;
    this->ZoneSwipeDamageEffect = NULL;
    this->ZoneSwipeCameraShake = NULL;
    this->ZoneSwipeCameraShakeScale = 1.00f;
    this->bWasSpawned = false;
}

void AWatcherCharacter::WatcherDied(AActor* DeadActor) {
}

void AWatcherCharacter::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AWatcherCharacter::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AWatcherCharacter::IsZoneCenterNear(AWatcherZoneCenter* ZoneCenter) const {
    return false;
}

bool AWatcherCharacter::IsZoneCenterFar(AWatcherZoneCenter* ZoneCenter) const {
    return false;
}

bool AWatcherCharacter::IsTentacleAttackTargetInReach(int32 TentacleIndex) const {
    return false;
}

bool AWatcherCharacter::IsSurfaced() const {
    return false;
}

bool AWatcherCharacter::IsSubmerged() const {
    return false;
}

bool AWatcherCharacter::IsMovingVertically() {
    return false;
}

bool AWatcherCharacter::IsMainAttackTargetInReach() const {
    return false;
}

bool AWatcherCharacter::IsGuardPlaceNear(FWatcherGuardPlace& TargetGuardPlace) const {
    return false;
}

bool AWatcherCharacter::IsGuardPlaceFar(FWatcherGuardPlace& TargetGuardPlace) const {
    return false;
}

void AWatcherCharacter::GetWatcherBodyState(AActor* InCharacter, EWatcherBodyCState& OutState, bool& OutValid) {
}

void AWatcherCharacter::GetWatcherBehaviorState(AActor* InController, EWatcherBState& OutState, bool& OutValid) {
}

EWatcherTentacleCState AWatcherCharacter::GetTentacleState(int32 TentacleIndex) const {
    return EWatcherTentacleCState::CSt_WatcherTentacle_FromBody;
}

int32 AWatcherCharacter::GetTentacleCount() {
    return 0;
}

FWatcherTentacleTarget AWatcherCharacter::GetTentacleAttackTarget(int32 TentacleIndex) const {
    return FWatcherTentacleTarget{};
}

FWatcherGuardPlace AWatcherCharacter::GetNextGuardPlace() const {
    return FWatcherGuardPlace{};
}

FWatcherTarget AWatcherCharacter::GetMainAttackTarget() const {
    return FWatcherTarget{};
}

FWatcherGuardPlace AWatcherCharacter::GetCurrentGuardPlace() const {
    return FWatcherGuardPlace{};
}

EWatcherBodyCState AWatcherCharacter::GetBodyState() const {
    return EWatcherBodyCState::CSt_WatcherBody_Invisible;
}

EWatcherBState AWatcherCharacter::GetBehaviorState() const {
    return EWatcherBState::BSt_Watcher_Invisible;
}

UWatcherAnimInstance* AWatcherCharacter::GetAnimInstance() const {
    return NULL;
}

bool AWatcherCharacter::CanMoveToLocation(const FVector& TargetLocation, bool Teleport) const {
    return false;
}

bool AWatcherCharacter::CanMoveToGuardPlace(const FWatcherGuardPlace& TargetGuardPlace, bool Teleport) {
    return false;
}

void AWatcherCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWatcherCharacter, CurrentGuardPlace);
    DOREPLIFETIME(AWatcherCharacter, NextGuardPlace);
    DOREPLIFETIME(AWatcherCharacter, VerticalMovement);
    DOREPLIFETIME(AWatcherCharacter, AttackTargets);
    DOREPLIFETIME(AWatcherCharacter, MainAttackTarget);
    DOREPLIFETIME(AWatcherCharacter, TentacleAttackTarget);
    DOREPLIFETIME(AWatcherCharacter, TentacleRagdollEnabled);
    DOREPLIFETIME(AWatcherCharacter, TentacleRagdollBlendTimeout);
    DOREPLIFETIME(AWatcherCharacter, bWasSpawned);
}


