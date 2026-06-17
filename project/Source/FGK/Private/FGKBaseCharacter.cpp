#include "FGKBaseCharacter.h"
#include "AbilitySystemComponent.h"
#include "FGKAIController.h"
#include "FGKActorFSMComponent.h"
#include "FGKCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AFGKBaseCharacter::AFGKBaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFGKCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    this->AIControllerClass = AFGKAIController::StaticClass();
    this->DisplayName = FText::FromString(TEXT("UNKNOWN"));
    this->FaceMesh = NULL;
    this->CharacterData = NULL;
    this->AISettings = NULL;
    this->bPersistWhenDead = false;
    this->bDisableAllIK = false;
    this->AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystem"));
    this->InventoryComp = NULL;
    this->EquipComp = NULL;
    this->EquippedBow = NULL;
    this->bMostRecentlyEquippedRanged = false;
    this->LastWeaponEquipTime = 340282346638528859811704183484516925440.00f;
    this->TargetingComponent = NULL;
    this->DefaultTargetableComponent = NULL;
    this->bForcedTargeted = false;
    this->MontageIndex = -1;
    this->MainAnimInstance = NULL;
    this->ForcedInteractable = NULL;
    this->OverlayState = EFGKOverlayState::Default;
    this->MovementAction = EFGKMovementAction::None;
    this->RotationMode = EFGKRotationMode::LookingDirection;
    this->Gait = EFGKGait::Walking;
    this->ViewMode = EFGKViewMode::ThirdPerson;
    this->RootBehaviorState = NULL;
    this->DefaultRotationMode = EFGKRotationMode::VelocityDirection;
    this->CameraTarget = NULL;
    this->BounceOffCharMeshIfExtentThisBig = 200.00f;
    this->Speed = 0.00f;
    this->MovementInputAmount = 0.00f;
    this->AimYawRate = 0.00f;
    this->EasedMaxAcceleration = 0.00f;
    FProperty* p_CharacterMovement_Prior = GetClass()->FindPropertyByName("CharacterMovement");
    this->MoveComp = (UFGKCharacterMovementComponent*)*p_CharacterMovement_Prior->ContainerPtrToValuePtr<UFGKCharacterMovementComponent*>(this);
    this->OverrideSpeed = 0.00f;
    this->MaxTurnSpeed_VelocityDirection = 180.00f;
    this->MaxTurnSpeed_LookingDirection = 360.00f;
    this->MaxTurnSpeed_Aiming = 360.00f;
    this->MaxTurnSpeed_PathingDirection = 180.00f;
    this->TurnInPlaceMontages[0] = NULL;
    this->TurnInPlaceMontages[1] = NULL;
    this->TurnInPlaceMontages[2] = NULL;
    this->TurnInPlaceMontages[3] = NULL;
    this->TurnInPlaceMontages[4] = NULL;
    this->TurnInPlaceMontages[5] = NULL;
    this->CrouchingTurnInPlaceMontages[0] = NULL;
    this->CrouchingTurnInPlaceMontages[1] = NULL;
    this->CrouchingTurnInPlaceMontages[2] = NULL;
    this->CrouchingTurnInPlaceMontages[3] = NULL;
    this->CrouchingTurnInPlaceMontages[4] = NULL;
    this->CrouchingTurnInPlaceMontages[5] = NULL;
    this->TurnInPlaceThreshold45 = 33.75f;
    this->TurnInPlaceThreshold90_When45Exists = 67.50f;
    this->TurnInPlaceThreshold90_When45Missing = 50.00f;
    this->TurnInPlaceThreshold180 = 135.00f;
    this->bAllowJumpFromCrouch = true;
    this->YawOffset = 0.00f;
    this->bRagdollOnGround = false;
    this->bRagdollFaceUp = false;
    this->ParkourComponent = NULL;
    this->bPossessed = false;
    this->BodyFSMComp = CreateDefaultSubobject<UFGKActorFSMComponent>(TEXT("BodyFSMComp"));
    this->CombatComp = NULL;
    this->HealthComp = NULL;
    this->FootprintComponent = NULL;
    this->bLastFootHitResultIsValid = false;
    this->VfxDataTable = NULL;
    this->bDebugMe = false;
    this->DebugText = NULL;
    this->AIController = NULL;
    this->ReloadTime = 0.00f;
    this->AISpawnWeight = 1.00f;
    this->bIsBoss = false;
    this->bAllowHeadTrackingDuringAttacks = false;
    this->HeadTargetSocket = EFGKBodySocket::Root;
}

void AFGKBaseCharacter::SetViewMode(EFGKViewMode NewViewMode) {
}

void AFGKBaseCharacter::SetSpeed(float NewSpeed) {
}

void AFGKBaseCharacter::SetRotationMode(EFGKRotationMode NewRotationMode) {
}

void AFGKBaseCharacter::SetRequestedGait(EFGKGait NewGait) {
}

void AFGKBaseCharacter::SetOverrideAimingRotation(const FRotator& AimingOverride) {
}

void AFGKBaseCharacter::SetOverlayState(EFGKOverlayState NewState) {
}

void AFGKBaseCharacter::SetMovementInputAmount(float NewMovementInputAmount) {
}

void AFGKBaseCharacter::SetMovementAction(EFGKMovementAction NewAction) {
}

void AFGKBaseCharacter::SetHeadTracking(AActor* InHeadTarget, EFGKBodySocket InSocket) {
}

void AFGKBaseCharacter::SetGait(EFGKGait NewGait) {
}

void AFGKBaseCharacter::SetAimYawRate(float NewAimYawRate) {
}

void AFGKBaseCharacter::SetAcceleration(const FVector& NewAcceleration) {
}

void AFGKBaseCharacter::Server_UpdateCombatStat_Implementation(AFGKBaseCharacter* Victim) {
}

void AFGKBaseCharacter::Server_TeleportTo_Implementation(const FVector& Location, const FRotator& Rotation) {
}

void AFGKBaseCharacter::Server_SetViewMode_Implementation(EFGKViewMode NewViewMode) {
}

void AFGKBaseCharacter::Server_SetRotationMode_Implementation(EFGKRotationMode NewRotationMode) {
}

void AFGKBaseCharacter::Server_SetOverrideAimingRotation_Implementation(const FRotator& AimingOverride) {
}

void AFGKBaseCharacter::Server_SetOverlayState_Implementation(EFGKOverlayState NewState) {
}

void AFGKBaseCharacter::Server_SetMeshLocationDuringRagdoll_Implementation(const FVector& MeshLocation) {
}

void AFGKBaseCharacter::Server_SetHeadTracking_Implementation(AActor* InHeadTarget, EFGKBodySocket InSocket, bool bOverrideLocallyControllerValues) {
}

void AFGKBaseCharacter::Server_SetAimRay_Implementation(const FVector& NewRayOrigin, const FVector& NewRayDirection) {
}

void AFGKBaseCharacter::Server_Replenish_Implementation(TSubclassOf<UActorComponent> Type, float Value) {
}

void AFGKBaseCharacter::Server_OnPickUp_Implementation(TSubclassOf<AActor> ActorType) {
}

void AFGKBaseCharacter::Server_AskForFollow_Implementation() {
}

void AFGKBaseCharacter::Server_ApplyRadialDamageToVictimOnLocallyControlled_Implementation(AActor* Victim, float DamageAmount, const FFGKRadialDamageEvent& DamageEvent) {
}

void AFGKBaseCharacter::Server_ApplyRadialDamageToVictim_Implementation(AActor* Victim, float DamageAmount, const FFGKRadialDamageEvent& DamageEvent, const FFGKHitReactionRequest& HitReactRequest) {
}

void AFGKBaseCharacter::Server_ApplyPointDamageToVictim_Implementation(AActor* Victim, float DamageAmount, const FFGKPointDamageEvent& DamageEvent, const FFGKHitReactionRequest& HitReactRequest) {
}

void AFGKBaseCharacter::Server_ApplyBoopForceToVictim_Implementation(AActor* Victim, const FVector& Knockback, bool bOverride) {
}

void AFGKBaseCharacter::SelectConversationOption(const FString& ConversationOption) {
}

float AFGKBaseCharacter::RemovePersistentRequestTag(FGameplayTag RequestTag) {
    return 0.0f;
}

void AFGKBaseCharacter::RemoveHeadTracking() {
}

void AFGKBaseCharacter::RemoveGameplayTags(const FGameplayTagContainer& TagContainer) {
}

void AFGKBaseCharacter::RemoveGameplayTag(const FGameplayTag& Tag) {
}

void AFGKBaseCharacter::RemoveFramewiseRequestTag(FGameplayTag RequestTag) {
}

void AFGKBaseCharacter::OnVictimDie(UFGKHealthComponent* NewHealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void AFGKBaseCharacter::OnRep_ViewMode(EFGKViewMode PrevViewMode) {
}

void AFGKBaseCharacter::OnRep_RotationMode(EFGKRotationMode PrevRotMode) {
}

void AFGKBaseCharacter::OnRep_Possessed() {
}

void AFGKBaseCharacter::OnRep_OverlayState(EFGKOverlayState PrevOverlayState) {
}

void AFGKBaseCharacter::OnRep_CurrentAcceleration() {
}

void AFGKBaseCharacter::OnRep_ControlRotation() {
}

void AFGKBaseCharacter::OnMontageStarted(UAnimMontage* Montage) {
}

void AFGKBaseCharacter::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void AFGKBaseCharacter::OnItemUnEquipped(const FItemHandle& Item) {
}

void AFGKBaseCharacter::OnItemEquipped(const FItemHandle& Item) {
}

void AFGKBaseCharacter::OnDie(UFGKHealthComponent* NewHealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void AFGKBaseCharacter::Multicast_SetOverrideAimingRotation_Implementation(const FRotator& AimingOverride) {
}

void AFGKBaseCharacter::Multicast_SetHeadTracking_Implementation(AActor* InHeadTarget, EFGKBodySocket InSocket, bool bOverrideLocallyControllerValues) {
}

void AFGKBaseCharacter::Multicast_SetAimRay_Implementation(const FVector& NewRayOrigin, const FVector& NewRayDirection) {
}

void AFGKBaseCharacter::Multicast_OnLanded_Implementation() {
}

void AFGKBaseCharacter::Multicast_MontagePlay_Implementation(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages) {
}

void AFGKBaseCharacter::Multicast_GenerateEffect_Implementation(UNiagaraSystem* EffectTemplate, const FTransform& Transform) {
}

void AFGKBaseCharacter::Multicast_FinishedTeleport_Implementation(const FVector& Location, const FQuat& Rotation) {
}

void AFGKBaseCharacter::Multicast_ClearOverrideAimingRotation_Implementation() {
}

void AFGKBaseCharacter::Multicast_ApplyRadialDamageToVictim_Implementation(AActor* Victim, float DamageAmount, const FFGKRadialDamageEvent& DamageEvent, const FFGKHitReactionRequest& HitReactRequest) {
}

void AFGKBaseCharacter::Multicast_ApplyPointDamageToVictim_Implementation(AActor* Victim, float DamageAmount, const FFGKPointDamageEvent& DamageEvent, const FFGKHitReactionRequest& HitReactRequest) {
}

void AFGKBaseCharacter::Multicast_ApplyBoopForceToVictim_Implementation(AActor* Victim, const FVector& Knockback, bool bOverride) {
}

void AFGKBaseCharacter::Multicast_ApplyBoopForce_Implementation(const FVector& Knockback, bool bOverride) {
}

bool AFGKBaseCharacter::IsReacting() const {
    return false;
}

bool AFGKBaseCharacter::IsOnGround(bool bCheckFloor, float MaxFloorDistance) const {
    return false;
}

bool AFGKBaseCharacter::IsMoving() const {
    return false;
}

bool AFGKBaseCharacter::IsInStance(EFGKStance Stance) const {
    return false;
}

bool AFGKBaseCharacter::IsDead() const {
    return false;
}

bool AFGKBaseCharacter::IsCrouching() const {
    return false;
}

bool AFGKBaseCharacter::IsAlive() const {
    return false;
}

bool AFGKBaseCharacter::IsAimRequested() const {
    return false;
}

bool AFGKBaseCharacter::HasPersistentRequestTag(FGameplayTag RequestTag) const {
    return false;
}

bool AFGKBaseCharacter::HasMovementInput() const {
    return false;
}

bool AFGKBaseCharacter::HasMatchingGameplayTag(FGameplayTag TagToCheck) const {
    return false;
}

bool AFGKBaseCharacter::HasHadTagRecently(FGameplayTag Tag, float Time) const {
    return false;
}

bool AFGKBaseCharacter::HasFramewiseRequestTag(FGameplayTag RequestTag) const {
    return false;
}

bool AFGKBaseCharacter::HasAnyPersistentRequestTags(FGameplayTagContainer RequestTags) const {
    return false;
}

bool AFGKBaseCharacter::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const {
    return false;
}

bool AFGKBaseCharacter::HasAnyFramewiseRequestTags(FGameplayTagContainer RequestTags) const {
    return false;
}

bool AFGKBaseCharacter::HasAllPersistentRequestTags(FGameplayTagContainer RequestTags) const {
    return false;
}

bool AFGKBaseCharacter::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const {
    return false;
}

bool AFGKBaseCharacter::HasAllFramewiseRequestTags(FGameplayTagContainer RequestTags) const {
    return false;
}

UAkComponent* AFGKBaseCharacter::GetVoiceComp() const {
    return NULL;
}

EFGKViewMode AFGKBaseCharacter::GetViewMode() const {
    return EFGKViewMode::ThirdPerson;
}

FFGKMovementSettings AFGKBaseCharacter::GetTargetMovementSettings() const {
    return FFGKMovementSettings{};
}

FVector AFGKBaseCharacter::GetTargetLocation(AActor* RequestedBy) const {
    return FVector{};
}

UFGKTargetingComponent* AFGKBaseCharacter::GetTargetingComponent() const {
    return NULL;
}

EFGKStance AFGKBaseCharacter::GetStance() const {
    return EFGKStance::Standing;
}

float AFGKBaseCharacter::GetSpeed() const {
    return 0.0f;
}

UAkComponent* AFGKBaseCharacter::GetSoundComp() const {
    return NULL;
}

void AFGKBaseCharacter::GetSocketTransformOut_Implementation(FTransform& OutTransform, FName SocketName, ERelativeTransformSpace TransformSpace) const {
}

FTransform AFGKBaseCharacter::GetSocketTransform_Implementation(FName SocketName, ERelativeTransformSpace TransformSpace) const {
    return FTransform{};
}

FRotator AFGKBaseCharacter::GetSocketRotation_Implementation(FName SocketName) const {
    return FRotator{};
}

FVector AFGKBaseCharacter::GetSocketLocation_Implementation(FName SocketName) const {
    return FVector{};
}


EFGKRotationMode AFGKBaseCharacter::GetRotationMode() const {
    return EFGKRotationMode::VelocityDirection;
}

FVector AFGKBaseCharacter::GetReplicatedMoveInput() const {
    return FVector{};
}

float AFGKBaseCharacter::GetRemoveTagTime(FGameplayTag Tag) {
    return 0.0f;
}

FVector2D AFGKBaseCharacter::GetRawInput() const {
    return FVector2D{};
}

float AFGKBaseCharacter::GetPickUpStat(TSubclassOf<AActor> ActorType) const {
    return 0.0f;
}

void AFGKBaseCharacter::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const {
}

EFGKOverlayState AFGKBaseCharacter::GetOverlayState() const {
    return EFGKOverlayState::Default;
}

float AFGKBaseCharacter::GetMovementInputAmount() const {
    return 0.0f;
}

FVector AFGKBaseCharacter::GetMovementDirection() const {
    return FVector{};
}

EFGKMovementAction AFGKBaseCharacter::GetMovementAction() const {
    return EFGKMovementAction::None;
}

UFGKCharacterHealthComponent* AFGKBaseCharacter::GetHealthComp() const {
    return NULL;
}

float AFGKBaseCharacter::GetGameplayTagDuration(FGameplayTag Tag) const {
    return 0.0f;
}

EFGKGait AFGKBaseCharacter::GetGait() const {
    return EFGKGait::Walking;
}

UFGKCharacterMovementComponent* AFGKBaseCharacter::GetFGKMovementComponent() const {
    return NULL;
}

USkeletalMeshComponent* AFGKBaseCharacter::GetFaceMesh() const {
    return NULL;
}

FText AFGKBaseCharacter::GetDisplayName() const {
    return FText::GetEmpty();
}

void AFGKBaseCharacter::GetControlForwardRightVector(FVector& Forward, FVector& Right) const {
}

UFGKCombatComponent* AFGKBaseCharacter::GetCombatComp() const {
    return NULL;
}

UFGKActorFSMComponent* AFGKBaseCharacter::GetBodyFSMComp() const {
    return NULL;
}

float AFGKBaseCharacter::GetAnimCurveValue(FName CurveName) const {
    return 0.0f;
}

float AFGKBaseCharacter::GetAimYawRate() const {
    return 0.0f;
}

FRotator AFGKBaseCharacter::GetAimingRotation() const {
    return FRotator{};
}

float AFGKBaseCharacter::GetAddTagTime(FGameplayTag Tag) {
    return 0.0f;
}

EFGKGait AFGKBaseCharacter::GetActualGait() const {
    return EFGKGait::Walking;
}

FVector AFGKBaseCharacter::GetAcceleration() const {
    return FVector{};
}

void AFGKBaseCharacter::EventOnLanded() {
}


bool AFGKBaseCharacter::DoesSocketExist_Implementation(FName SocketName) const {
    return false;
}

void AFGKBaseCharacter::Client_ApplyRadialDamageToVictimOnLocallyControlled_Implementation(AActor* Victim, float DamageAmount, const FFGKRadialDamageEvent& DamageEvent) {
}

void AFGKBaseCharacter::ClearPersistentRequestTags() {
}

void AFGKBaseCharacter::ClearOverrideAimingRotation() {
}

void AFGKBaseCharacter::ClearFramewiseRequestTags() {
}

void AFGKBaseCharacter::ClearFramewiseConditions() {
}

void AFGKBaseCharacter::ChangeMesh(USkeletalMesh* NewSkeletalMesh, TSubclassOf<UAnimInstance> NewAnimClass) {
}

void AFGKBaseCharacter::AttachToSocket_Implementation(USceneComponent* ChildComponent, FName SocketName) const {
}

void AFGKBaseCharacter::AskForFollow() {
}

void AFGKBaseCharacter::ApplyPointDamageToVictim_Deprecated(AActor* Victim, float DamageAmount, FVector Location, FVector Direction) {
}

void AFGKBaseCharacter::ApplyPointDamageToVictim(AActor* Victim, float DamageAmount, const FFGKPointDamageEvent& DamageEvent) {
}

void AFGKBaseCharacter::ApplyBoopForceToVictim(AActor* Victim, const FVector& Knockback, bool bOverride) {
}

void AFGKBaseCharacter::AddStartingGameplayTags(const FGameplayTagContainer& TagContainer) {
}

void AFGKBaseCharacter::AddPersistentRequestTag(FGameplayTag RequestTag) {
}

void AFGKBaseCharacter::AddGameplayTags(const FGameplayTagContainer& TagContainer) {
}

void AFGKBaseCharacter::AddGameplayTag(const FGameplayTag& Tag) {
}

void AFGKBaseCharacter::AddFramewiseRequestTag(FGameplayTag RequestTag) {
}

void AFGKBaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFGKBaseCharacter, DisplayName);
    DOREPLIFETIME(AFGKBaseCharacter, bMostRecentlyEquippedRanged);
    DOREPLIFETIME(AFGKBaseCharacter, LastWeaponEquipTime);
    DOREPLIFETIME(AFGKBaseCharacter, TargetPerAttackers);
    DOREPLIFETIME(AFGKBaseCharacter, MontageIndex);
    DOREPLIFETIME(AFGKBaseCharacter, OverlayState);
    DOREPLIFETIME(AFGKBaseCharacter, RotationMode);
    DOREPLIFETIME(AFGKBaseCharacter, ViewMode);
    DOREPLIFETIME(AFGKBaseCharacter, DefaultRotationMode);
    DOREPLIFETIME(AFGKBaseCharacter, NextPathingPointLocation);
    DOREPLIFETIME(AFGKBaseCharacter, ReplicatedCurrentAcceleration);
    DOREPLIFETIME(AFGKBaseCharacter, ReplicatedControlRotation);
    DOREPLIFETIME(AFGKBaseCharacter, OverrideSpeed);
    DOREPLIFETIME(AFGKBaseCharacter, TargetRagdollLocation);
    DOREPLIFETIME(AFGKBaseCharacter, bPossessed);
    DOREPLIFETIME(AFGKBaseCharacter, CombatStats);
    DOREPLIFETIME(AFGKBaseCharacter, PickUpStats);
    DOREPLIFETIME(AFGKBaseCharacter, CharacterTeamId);
    DOREPLIFETIME(AFGKBaseCharacter, bDebugMe);
    DOREPLIFETIME(AFGKBaseCharacter, ReloadTime);
}


