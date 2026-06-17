#include "MorCharacter.h"
#include "AkComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "FGKParkourComponent.h"
#include "FGKTargetableComponent.h"
#include "FGKTargetingComponent.h"
#include "CharacterAttributeSet.h"
#include "ModularCharacterComponent.h"
#include "MorCharacterComponentReplicator.h"
#include "MorCharacterDespawnFXComponent.h"
#include "MorCharacterMovementComponent.h"
#include "MorEquipComponent.h"
#include "MorEquipOverrideComponent.h"
#include "MorInventoryComponent.h"
#include "MoriaAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "PersonalityComponent.h"
#include "Templates/SubclassOf.h"
#include "VoiceComponent.h"

AMorCharacter::AMorCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMorCharacterMovementComponent>(TEXT("CharMoveComp")).SetDefaultSubobjectClass<UMoriaAbilitySystemComponent>(TEXT("AbilitySystem"))) {
    this->InventoryComp = CreateDefaultSubobject<UMorInventoryComponent>(TEXT("InventoryComp"));
    this->EquipComp = CreateDefaultSubobject<UMorEquipComponent>(TEXT("EquipComp"));
    this->TargetingComponent = CreateDefaultSubobject<UFGKTargetingComponent>(TEXT("TargetingComp"));
    this->DefaultTargetableComponent = CreateDefaultSubobject<UFGKTargetableComponent>(TEXT("DefaultTargetableComp"));
    this->MoveComp = Cast<UFGKCharacterMovementComponent>(GetCharacterMovement());
    this->ParkourComponent = CreateDefaultSubobject<UFGKParkourComponent>(TEXT("ParkourComp"));
    this->FixFrameCounter = 0;
    this->CurrentCallout = NULL;
    this->Team = EMoriaTeam::Environment;
    this->bIsPlayerCharacter = false;
    this->bIsPlayerCharacterPrepared = false;
    this->bModifyForTeleportIsSet = false;
    this->DefaultAnimVisibilityTickSetting = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
    this->SandboxStars = 0;
    this->RequestedInvisibilityDuration = 0.00f;
    this->RequestedInvulnerabilityDuration = 0.00f;
    this->CharacterWidgetClass = NULL;
    this->AttributeSet = CreateDefaultSubobject<UCharacterAttributeSet>(TEXT("AttributeSet"));
    this->MoriaAbSystem = (UMoriaAbilitySystemComponent*)AbilitySystem;
    this->bCanClimbRopes = false;
    this->CharacterWidgetComponent = NULL;
    this->Crafting = NULL;
    this->Building = NULL;
    this->LightReflector = NULL;
    this->SurvivalEffects = NULL;
    this->NPC = NULL;
    this->SoundComp = CreateDefaultSubobject<UAkComponent>(TEXT("SoundComp"));
    this->VoiceAk = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent_Voice"));
    this->Voice = CreateDefaultSubobject<UVoiceComponent>(TEXT("VoiceComponent"));
    this->AkVoice = NULL;
    this->Personality = CreateDefaultSubobject<UPersonalityComponent>(TEXT("PersonalityComponent"));
    this->Interact = NULL;
    this->LastingInteract = NULL;
    this->ModularCharacter = CreateDefaultSubobject<UModularCharacterComponent>(TEXT("ModularCharacterComponent"));
    this->EquipOverride = CreateDefaultSubobject<UMorEquipOverrideComponent>(TEXT("EquipOverrideComponent"));
    this->DespawnFXComponent = CreateDefaultSubobject<UMorCharacterDespawnFXComponent>(TEXT("Character Despawn FX"));
    this->WaterColliderGroupComponent = NULL;
    this->BoneHitDetectorClass = NULL;
    this->bAllowPhysicsHits = true;
    this->PhysicsHitWeightInterpolationType = EFGKInterpolationType::Smooth;
    this->PhysicsHitWeightCurve = NULL;
    this->PhysHit_ForceMin = 50.00f;
    this->PhysicHit_ForceMax = 1000.00f;
    this->PhysicHit_DurationMin = 0.40f;
    this->PhysicHit_DurationMax = 1.00f;
    this->PhysicHitReact_PerBoneWeightScale = 0.50f;
    this->PhysicHitReact_KnockbackScale = 1.00f;
    this->PhysicHitReact_ChestScale = 1.00f;
    this->KickAttack = NULL;
    this->LeapAbility = NULL;
    this->UnarmedBlockAbility = NULL;
    this->bDontMeleeSnapToMe = false;
    this->StartingAttributes = NULL;
    this->NotPlayingEffect = NULL;
    this->ConstructionAbility = NULL;
    this->ConstructionQuickPlatformAbility = NULL;
    this->ConstructionQuickRopeAbility = NULL;
    this->DeconstructionAbility = NULL;
    this->CalloutAbility = NULL;
    this->FatalDamageAbility = NULL;
    this->ThrowLeftAbility = NULL;
    this->ThrowRightAbility = NULL;
    this->OffhandUseAbility = NULL;
    this->DodgeAbility = NULL;
    this->bDodgeOnDoubleTapVelocityDirection = false;
    this->bDodgeOnDoubleTapLookingDirection = true;
    this->bDodgeOnDoubleTapAiming = true;
    this->bDodgeOnDoubleTapBlocking = true;
    this->DodgeInputTolerance = 0.90f;
    this->DodgeTimeout = 0.30f;
    this->bIgnoreKnockback = false;
    this->HitReactionResistance = 0;
    this->ReactionRetriggerCooldownFactor = 1.00f;
    this->MaxReactionRetriggerCooldown = 1.00f;
    this->ArmorMultiplier = 1.00f;
    this->Tier = 0;
    this->RagdollBone = TEXT("Hips_JNT");
    this->LastReactionSeverity = EReactionSeverity::Cosmetic;
    this->LastReactionTimeStamp = -1.00f;
    this->ReactionRetriggerCooldown = -1.00f;
    this->RespawnInventoryLoadout = NULL;
    this->SafeGroundTransformRefreshIntervalSeconds = -1.00f;
    this->bRespawn = false;
    this->DisabledCollisionProfileName = TEXT("PawnDead");
    this->bIsInvulnerableFromRevive = false;
    this->InvulnerabilityTimeAfterRevive = 10.00f;
    this->bIsInvulnerableFromTeleport = false;
    this->InvulnerabilityTimeAfterTeleport = 3.00f;
    this->MaxDistToAllowForTeleportlessRespawn = 1000;
    this->bKillUnderwater = false;
    this->UnderwaterKillHeight = 100.00f;
    this->bIsDead = false;
    this->bIsUnkillable = false;
    this->ReviveInteract = NULL;
    this->InteractedBed = NULL;
    this->ReviveInteractClass = NULL;
    this->ReviveEffect = NULL;
    this->RevivedAbility = NULL;
    this->WaypointDeathDropItem = NULL;
    this->DespawnAbility = NULL;
    this->InteractBehaviorPoint = NULL;
    this->AILevel = 1;
    this->bShouldMakeMovementSounds = false;
    this->SkeletonTypeSwitch = NULL;
    this->StoredBuildCamMode = EBuildCameraMode::Build;
    this->ComponentReplicator = CreateDefaultSubobject<UMorCharacterComponentReplicator>(TEXT("ComponentReplicator"));
    // SetupAttachment to Mesh removed — causes GC crash during CDO construction
    // (attachment hierarchy is not needed for this stub project)
}

void AMorCharacter::TeleportToSafeGroundTransform() {
}

EQuickBuildType AMorCharacter::SwapQuickBuildRecipe() {
    return EQuickBuildType::Platform;
}

void AMorCharacter::SpawnVfxAndSound_Implementation(const FHitResult& OutHit, UNiagaraSystem* NiagaraSystem, UAkAudioEvent* Sound) {
}

void AMorCharacter::SpawnCrackDecalVFX_Implementation(TSubclassOf<AMorMiningCrackDecalActor> CrackDecal, FVector Loc, FVector Normal, const uint8 HitsRemaining, const uint8 MaxHits, bool bForceNew) {
}

void AMorCharacter::SetTeam(EMoriaTeam NewTeam) {
}

void AMorCharacter::SetStartLocation(FTransform NewLocation) {
}

void AMorCharacter::SetShadowCapsulesEnabled(bool bEnabled) {
}

void AMorCharacter::SetIsUnkillable(bool bUnkillable) {
}

void AMorCharacter::SetIsDead(bool NewDead) {
}

void AMorCharacter::ServerTeleportToSafeGroundTransform_Implementation() {
}

void AMorCharacter::ServerTeleportTo_Implementation(FVector DestLocation, FRotator DestRotation) {
}
bool AMorCharacter::ServerTeleportTo_Validate(FVector DestLocation, FRotator DestRotation) {
    return true;
}

void AMorCharacter::ServerRevive_Implementation() {
}

void AMorCharacter::ServerGiveAbilityAndTrigger_Implementation(TSubclassOf<UGameplayAbility> Ability) {
}

void AMorCharacter::Server_SendAttachTransform_Implementation(FTransform AttachT) {
}

void AMorCharacter::Server_ApplyPhysicsImpulseToVictim_Implementation(AActor* Victim, int32 StartBone, int32 ImpulseBone, FVector Impulse) {
}

void AMorCharacter::Revive() {
}

void AMorCharacter::RequestServerBreak_Implementation(UMorBreakableComponent* Breakable, const FMoriaDamageEvent& DamageEvent, float OverrideDestructEffectLifetime) {
}
bool AMorCharacter::RequestServerBreak_Validate(UMorBreakableComponent* Breakable, const FMoriaDamageEvent& DamageEvent, float OverrideDestructEffectLifetime) {
    return true;
}

void AMorCharacter::RequestRevive_Implementation() {
}

void AMorCharacter::OnTeleportInvulnerabilityTimerEnd() {
}

void AMorCharacter::OnReviveInvulnerabilityTimerEnd() {
}

void AMorCharacter::OnRep_TickScalabilityInformation() {
}

void AMorCharacter::OnRep_RequestedInvulnerabilityDuration() {
}

void AMorCharacter::OnRep_RequestedInvisibilityDuration() {
}

void AMorCharacter::OnRep_ModifyForTeleportIsSet() {
}

void AMorCharacter::OnRep_IsPlayerCharacterPrepared() {
}

void AMorCharacter::OnRep_bIsDead() {
}



void AMorCharacter::OnAttributeSetsRestoredFromSaveData(TArray<UAttributeSet*>& RestoredAttributeSets) {
}

void AMorCharacter::MulticastNpcGoToBed_Implementation(AMorBed* InInteractedBed) {
}

void AMorCharacter::MulticastNpcExitBed_Implementation() {
}

void AMorCharacter::MulticastGoToBed_Implementation(AMorBed* InInteractedBed) {
}

void AMorCharacter::MulticastEndMeleeRootMotion_Implementation(uint16 ServerId, UClass* GameplayAbility) {
}

void AMorCharacter::MulticastDisableCapsuleCollision_Implementation() {
}

void AMorCharacter::MulticastBeginMeleeRootMotion_Implementation(uint16 ServerId, UClass* GameplayAbility, AActor* InTargetActor, const FVector& InTargetLocation, float InMontageStartTime, float InMontageRate, float InConnectTime) {
}

void AMorCharacter::Multicast_SendAttachTransform_Implementation(FTransform AttachT) {
}

void AMorCharacter::Multicast_Revive_Implementation() {
}

void AMorCharacter::Multicast_ApplyPhysicsImpulseToVictim_Implementation(AActor* Victim, int32 StartBone, int32 ImpulseBone, FVector Impulse) {
}

void AMorCharacter::ModifyForTeleport(bool bSetToInvisible) {
}

bool AMorCharacter::IsInvulnerable() const {
    return false;
}

bool AMorCharacter::IsADS() const {
    return false;
}

void AMorCharacter::InformServerThatClientIsReadyToTeleport_Implementation() {
}

bool AMorCharacter::HasTagToPreventMostActions() const {
    return false;
}

bool AMorCharacter::HasCharacterBegunPlay(bool bOrIsBeginningPlay) const {
    return false;
}

void AMorCharacter::HandleVisibilityOnEquippedChanged() {
}

void AMorCharacter::GiveAbilityAndTrigger(TSubclassOf<UGameplayAbility> Ability) {
}

FTransform AMorCharacter::GetStartLocation() const {
    return FTransform{};
}

FTransform AMorCharacter::GetSafeGroundTransform() const {
    return FTransform{};
}

bool AMorCharacter::GetPlayerCharacterNames(const AActor* Actor, FString& OutPlayerName, FString& OutCharacterName, bool& bOutIsPlayer) {
    return false;
}

UMorNPCComponent* AMorCharacter::GetNPCComponent() const {
    return NULL;
}


bool AMorCharacter::GetIsUnkillable() const {
    return false;
}

AMorBed* AMorCharacter::GetInteractedBed() const {
    return NULL;
}

void AMorCharacter::GetFireActionDisplayText(bool bIsRight, FText& OutText, bool& bOutIsHold) {
}

bool AMorCharacter::GetDisplayCharacterName(const AActor* Actor, FString& OutDisplayCharacterName, bool& bOutFilterDisplayCharacterName) {
    return false;
}

FString AMorCharacter::GetCharacterName_Implementation(bool bUseUGC) const {
    return TEXT("");
}


TMap<FGameplayTag, float> AMorCharacter::GetAllMultipliersByDamageType(const TArray<FGameplayTag> DamageTypes) const {
    return TMap<FGameplayTag, float>();
}

void AMorCharacter::Die(bool bForce) {
}

void AMorCharacter::DeconstructMode() {
}

void AMorCharacter::ConstructQuickRopeMode() {
}

void AMorCharacter::ConstructQuickPlatformMode() {
}

void AMorCharacter::ConstructQuickBuildMode() {
}

void AMorCharacter::ConstructMode() {
}

void AMorCharacter::ClientRequestLadder_Implementation(ALadderInteractable* Ladder) {
}

void AMorCharacter::CheckForEnteringInvalidBubble() {
}

bool AMorCharacter::CanChangeEquipment() const {
    return false;
}

void AMorCharacter::ApplyPhysicsImpulseToVictim(AActor* Victim, FName Bone, FVector Impulse) {
}

bool AMorCharacter::AllowCosmeticSim() const {
    return false;
}

void AMorCharacter::AddAbilityToQueue(FGameplayAbilitySpec AbilitySpecHandle, FGameplayEventData TriggerEventData) {
}

void AMorCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorCharacter, bIsPlayerCharacterPrepared);
    DOREPLIFETIME(AMorCharacter, bModifyForTeleportIsSet);
    DOREPLIFETIME(AMorCharacter, SandboxStars);
    DOREPLIFETIME(AMorCharacter, RequestedInvulnerabilityDuration);
    DOREPLIFETIME(AMorCharacter, TickScalabilityInformation);
    DOREPLIFETIME(AMorCharacter, ServerCurrentBubble);
    DOREPLIFETIME(AMorCharacter, bIsDead);
    DOREPLIFETIME(AMorCharacter, InteractBehaviorPoint);
    DOREPLIFETIME(AMorCharacter, AILevel);
    DOREPLIFETIME(AMorCharacter, ComponentReplicator);
}



#include "MoriaAbilitySystemComponent.h"

UAbilitySystemComponent* AMorCharacter::GetAbilitySystemComponent() const {
    return MoriaAbSystem;
}

