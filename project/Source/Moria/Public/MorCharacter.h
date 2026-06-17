#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkinnedMeshComponent.h"
#include "Engine/EngineTypes.h"
#include "EFGKInterpolationType.h"
#include "EModularCharacterSlot.h"
#include "FGKBaseCharacter.h"
#include "ItemHandle.h"
#include "AbilitySystemInterface.h"
#include "GameplayAbilitySpec.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayEventData.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EBuildCameraMode.h"
#include "EMoriaCharacterAction.h"
#include "EMoriaTeam.h"
#include "EQuickBuildType.h"
#include "EReactionSeverity.h"
#include "ExtraLimbBones.h"
#include "HitDetector.h"
#include "ModularCharacterInterface.h"
#include "MorAILevelSetDelegate.h"
#include "MorAISettingsRowHandle.h"
#include "MorCharacterGridWeightRowHandle.h"
#include "MorDamageModifierRowHandle.h"
#include "MorDamageSourceInterface.h"
#include "MorDamageTargetInterface.h"
#include "MorProxyActorInterface.h"
#include "MorRecreatedModularMesh.h"
#include "MorRespawnedSignatureDelegate.h"
#include "MorRevivedSignatureDelegate.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "MorTierInterface.h"
#include "MorWaypointData.h"
#include "MoriaDamageEvent.h"
#include "OnDeathSignatureDelegate.h"
#include "OnFreeCamDeathSignatureDelegate.h"
#include "OnReactionSignatureDelegate.h"
#include "ShadowCapsuleInformation.h"
#include "Templates/SubclassOf.h"
#include "TickScalabilityInformation.h"
#include "VoiceInterface.h"
#include "MorCharacter.generated.h"

class AActor;
class ACalloutPOI;
class AInventoryItem;
class ALadderInteractable;
class AMorBed;
class AMorDroppedItem;
class AMorMiningCrackDecalActor;
class AMorReviveInteract;
class UAkAudioEvent;
class UAkComponent;
class UAkSwitchValue;
class UAttributeSet;
class UCharacterAttributeSet;
class UCurveFloat;
class UFGKComponentReplicator;
class UGameplayAbility;
class UGameplayEffect;
class UInventoryLoadout;
class ULastingInteractComponent;
class UModularCharacterComponent;
class UMorAIBehaviorPointComponent;
class UMorBreakableComponent;
class UMorBuildingComponent;
class UMorCharacterDespawnFXComponent;
class UMorCharacterLightReflectorComponent;
class UMorCraftingComponent;
class UMorEquipOverrideComponent;
class UMorGameplayAbility_MeleeAttack;
class UMorGameplayAbility_RangedAttack;
class UMorGameplayAbility_Reaction;
class UMorInteractComponent;
class UMorNPCComponent;
class UMorSurvivalEffectsComponent;
class UMorWaterColliderGroupComponent;
class UMoriaAbilitySystemComponent;
class UMoriaWidgetComponent;
class UNiagaraSystem;
class UPersonalityComponent;
class USkeletalMeshComponent;
class UUserWidget;
class UVoiceComponent;

UCLASS(Blueprintable)
class MORIA_API AMorCharacter : public AFGKBaseCharacter, public IVoiceInterface, public IModularCharacterInterface, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative, public IMorDamageSourceInterface, public IMorDamageTargetInterface, public IMorProxyActorInterface, public IMorTierInterface, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FixFrameCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACalloutPOI* CurrentCallout;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoriaTeam Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPlayerCharacterPrepared, meta=(AllowPrivateAccess=true))
    bool bIsPlayerCharacterPrepared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ModifyForTeleportIsSet, meta=(AllowPrivateAccess=true))
    bool bModifyForTeleportIsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisableLatentAbilityTags;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EVisibilityBasedAnimTickOption DefaultAnimVisibilityTickSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 SandboxStars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorAISettingsRowHandle CharacterSettingsRowHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestedInvisibilityDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RequestedInvulnerabilityDuration, meta=(AllowPrivateAccess=true))
    float RequestedInvulnerabilityDuration;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> CharacterWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCharacterAttributeSet* AttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMoriaAbilitySystemComponent* MoriaAbSystem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAbilitySpec> QueuedAbilitySpecs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEventData> QueuedTriggerEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanClimbRopes;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMoriaWidgetComponent* CharacterWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorCraftingComponent* Crafting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorBuildingComponent* Building;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorCharacterLightReflectorComponent* LightReflector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorSurvivalEffectsComponent* SurvivalEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorNPCComponent* NPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* SoundComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* VoiceAk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVoiceComponent* Voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersonalityComponent* Personality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorInteractComponent* Interact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULastingInteractComponent* LastingInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModularCharacterComponent* ModularCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorEquipOverrideComponent* EquipOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorCharacterDespawnFXComponent* DespawnFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorWaterColliderGroupComponent* WaterColliderGroupComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AimFromBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> BoneHitDetectorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HeadHitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ChestHitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LeftArmHitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RightArmHitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LeftLegHitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RightLegHitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExtraLimbBones> ExtraLimbBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FHitDetector> BoneHitDetectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPhysicsHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKInterpolationType PhysicsHitWeightInterpolationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PhysicsHitWeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysHit_ForceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicHit_ForceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicHit_DurationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicHit_DurationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicHitReact_PerBoneWeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicHitReact_KnockbackScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicHitReact_ChestScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TickScalabilityInformation, meta=(AllowPrivateAccess=true))
    FTickScalabilityInformation TickScalabilityInformation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ShadowCapsuleComponentNames;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FShadowCapsuleInformation> ShadowCapsuleComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> SkeletalMeshComponents;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorCharacterGridWeightRowHandle GridWeightRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorGameplayAbility_MeleeAttack> KickAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> LeapAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> UnarmedBlockAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMorGameplayAbility_MeleeAttack>> UnarmedMeleeAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMorGameplayAbility_RangedAttack>> UnarmedRangedAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAbilitySpecHandle> UnarmedMeleeAttackHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAbilitySpecHandle> UnarmedRangedAttackHandles;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontMeleeSnapToMe;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> StartingAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> NotPlayingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMoriaCharacterAction, TSubclassOf<UGameplayAbility>> AbilityMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayAbility>> AbilityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> ConstructionAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> ConstructionQuickPlatformAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> ConstructionQuickRopeAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> DeconstructionAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> CalloutAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> FatalDamageAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> ThrowLeftAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> ThrowRightAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> OffhandUseAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> DodgeAbility;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDodgeOnDoubleTapVelocityDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDodgeOnDoubleTapLookingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDodgeOnDoubleTapAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDodgeOnDoubleTapBlocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DodgeInputTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DodgeTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreKnockback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitReactionResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactionRetriggerCooldownFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxReactionRetriggerCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMorGameplayAbility_Reaction>> HitReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorDamageModifierRowHandle> DamageModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RagdollBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EReactionSeverity LastReactionSeverity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastReactionTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ReactionRetriggerCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInventoryLoadout* RespawnInventoryLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeGroundTransformRefreshIntervalSeconds;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DisabledCollisionProfileName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReactionSignature OnHitReact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeathSignature OnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFreeCamDeathSignature OnDeathFreeCam;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorRevivedSignature OnRevived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorRespawnedSignature OnRespawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInvulnerableFromRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvulnerabilityTimeAfterRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInvulnerableFromTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvulnerabilityTimeAfterTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDistToAllowForTeleportlessRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillUnderwater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnderwaterKillHeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FIntVector ServerCurrentBubble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsDead, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnkillable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorReviveInteract* ReviveInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorBed* InteractedBed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorReviveInteract> ReviveInteractClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ReviveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> RevivedAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorDroppedItem> WaypointDeathDropItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWaypointData CorpseWaypointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTransform VeryFirstStartLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EModularCharacterSlot, FMorRecreatedModularMesh> RecreatedModularMeshes;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> DespawnAbility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAILevelSet AILevelSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UMorAIBehaviorPointComponent* InteractBehaviorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AgentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 AILevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldMakeMovementSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* SkeletonTypeSwitch;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EBuildCameraMode StoredBuildCamMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UFGKComponentReplicator* ComponentReplicator;
    
public:
    AMorCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TeleportToSafeGroundTransform();
    
    UFUNCTION(BlueprintCallable)
    EQuickBuildType SwapQuickBuildRecipe();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void SpawnVfxAndSound(const FHitResult& OutHit, UNiagaraSystem* NiagaraSystem, UAkAudioEvent* Sound);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void SpawnCrackDecalVFX(TSubclassOf<AMorMiningCrackDecalActor> CrackDecal, FVector Loc, FVector Normal, const uint8 HitsRemaining, const uint8 MaxHits, bool bForceNew);
    
    UFUNCTION(BlueprintCallable)
    void SetTeam(EMoriaTeam NewTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetStartLocation(FTransform NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowCapsulesEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIsUnkillable(bool bUnkillable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDead(bool NewDead);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTeleportToSafeGroundTransform();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeleportTo(FVector DestLocation, FRotator DestRotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRevive();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerGiveAbilityAndTrigger(TSubclassOf<UGameplayAbility> Ability);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SendAttachTransform(FTransform AttachT);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ApplyPhysicsImpulseToVictim(AActor* Victim, int32 StartBone, int32 ImpulseBone, FVector Impulse);
    
    UFUNCTION(BlueprintCallable)
    void Revive();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RequestServerBreak(UMorBreakableComponent* Breakable, const FMoriaDamageEvent& DamageEvent, float OverrideDestructEffectLifetime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRevive();
    
    UFUNCTION(BlueprintCallable)
    void OnTeleportInvulnerabilityTimerEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnReviveInvulnerabilityTimerEnd();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TickScalabilityInformation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RequestedInvulnerabilityDuration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RequestedInvisibilityDuration();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ModifyForTeleportIsSet();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPlayerCharacterPrepared();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsDead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDecomposed(const AInventoryItem* Item);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsumableConsumed(FItemHandle ItemHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttributeSetsRestoredFromSaveData(TArray<UAttributeSet*>& RestoredAttributeSets);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNpcGoToBed(AMorBed* InInteractedBed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNpcExitBed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastGoToBed(AMorBed* InInteractedBed);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastEndMeleeRootMotion(uint16 ServerId, UClass* GameplayAbility);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDisableCapsuleCollision();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastBeginMeleeRootMotion(uint16 ServerId, UClass* GameplayAbility, AActor* InTargetActor, const FVector& InTargetLocation, float InMontageStartTime, float InMontageRate, float InConnectTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendAttachTransform(FTransform AttachT);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Revive();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyPhysicsImpulseToVictim(AActor* Victim, int32 StartBone, int32 ImpulseBone, FVector Impulse);
    
    UFUNCTION(BlueprintCallable)
    void ModifyForTeleport(bool bSetToInvisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvulnerable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsADS() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void InformServerThatClientIsReadyToTeleport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTagToPreventMostActions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCharacterBegunPlay(bool bOrIsBeginningPlay) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleVisibilityOnEquippedChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void GiveAbilityAndTrigger(TSubclassOf<UGameplayAbility> Ability);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetStartLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetSafeGroundTransform() const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerCharacterNames(const AActor* Actor, FString& OutPlayerName, FString& OutCharacterName, bool& bOutIsPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMorNPCComponent* GetNPCComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponent* GetModularMesh(EModularCharacterSlot Slot);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUnkillable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorBed* GetInteractedBed() const;
    
    UFUNCTION(BlueprintCallable)
    void GetFireActionDisplayText(bool bIsRight, FText& OutText, bool& bOutIsHold);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDisplayCharacterName(const AActor* Actor, FString& OutDisplayCharacterName, bool& bOutFilterDisplayCharacterName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetCharacterName(bool bUseUGC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAkComponent* GetAmbientAkComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, float> GetAllMultipliersByDamageType(const TArray<FGameplayTag> DamageTypes) const;
    
    UFUNCTION(BlueprintCallable)
    void Die(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void DeconstructMode();
    
    UFUNCTION(BlueprintCallable)
    void ConstructQuickRopeMode();
    
    UFUNCTION(BlueprintCallable)
    void ConstructQuickPlatformMode();
    
    UFUNCTION(BlueprintCallable)
    void ConstructQuickBuildMode();
    
    UFUNCTION(BlueprintCallable)
    void ConstructMode();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRequestLadder(ALadderInteractable* Ladder);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckForEnteringInvalidBubble();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeEquipment() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyPhysicsImpulseToVictim(AActor* Victim, FName Bone, FVector Impulse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowCosmeticSim() const;
    
    UFUNCTION(BlueprintCallable)
    void AddAbilityToQueue(FGameplayAbilitySpec AbilitySpecHandle, FGameplayEventData TriggerEventData);
    

    // Fix for true pure virtual functions not being implemented
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

};

