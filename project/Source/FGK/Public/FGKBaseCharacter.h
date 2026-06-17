#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Animation/AnimInstance.h"
#include "Components/SceneComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFGKBodySocket.h"
#include "EFGKGait.h"
#include "EFGKMovementAction.h"
#include "EFGKOverlayState.h"
#include "EFGKRotationMode.h"
#include "EFGKStance.h"
#include "EFGKViewMode.h"
#include "FGKAITargetingQueryInterface.h"
#include "FGKBaseCharacterRepControlRotation.h"
#include "FGKBaseCharacterRepCurrentAcceleration.h"
#include "FGKCombatStat.h"
#include "FGKGameplayTagQueryInterface.h"
#include "FGKGameplayTagTime.h"
#include "FGKHitReactionRequest.h"
#include "FGKMovementSettings.h"
#include "FGKMovementStateSettings.h"
#include "FGKPointDamageEvent.h"
#include "FGKRadialDamageEvent.h"
#include "FGKTargetPerAttacker.h"
#include "FGKTurnInPlaceMontages.h"
#include "InventoryQueryInterface.h"
#include "ItemHandle.h"
#include "OnAddAnyTagSignatureDelegate.h"
#include "OnBodyFSMCreatedDelegate.h"
#include "OnCanBeDamagedChangedDelegate.h"
#include "OnFGKAnimNotifySignatureDelegate.h"
#include "OnFGKAnimNotifyStateBeginSignatureDelegate.h"
#include "OnFGKAnimNotifyStateEndSignatureDelegate.h"
#include "OnMeleeAttackDelegate.h"
#include "OnPossessedDelegate.h"
#include "OnProjectileSpawnedDelegate.h"
#include "OnProjectileTypeChangedDelegate.h"
#include "OnReceiveHitFromLocalAttackerDelegate.h"
#include "OnRemoveAnyTagSignatureDelegate.h"
#include "OnRepPlayerStateDelegate.h"
#include "OnRestartDelegate.h"
#include "OnScoreMeleeHitDelegate.h"
#include "OnTeleportFinishedDelegate.h"
#include "OnWorldTargetSpawnedDelegate.h"
#include "PickUpStat.h"
#include "Templates/SubclassOf.h"
#include "FGKBaseCharacter.generated.h"

class AActor;
class AController;
class AFGKAIController;
class AFGKBaseCharacter;
class AFGKBowWeapon;
class AFGKCharacterDebugText;
class UAbilitySystemComponent;
class UActorComponent;
class UAkComponent;
class UAnimInstance;
class UAnimMontage;
class UDamageType;
class UDataTable;
class UEquipComponent;
class UFGKAISettings;
class UFGKActorFSMComponent;
class UFGKCharacterAnimInstance;
class UFGKCharacterData;
class UFGKCharacterHealthComponent;
class UFGKCharacterMovementComponent;
class UFGKCombatComponent;
class UFGKFootprintComponent;
class UFGKHealthComponent;
class UFGKParkourComponent;
class UFGKState;
class UFGKTargetableComponent;
class UFGKTargetingComponent;
class UInventoryComponent;
class UNiagaraSystem;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FGK_API AFGKBaseCharacter : public ACharacter, public IFGKGameplayTagQueryInterface, public IGenericTeamAgentInterface, public IFGKAITargetingQueryInterface, public IInventoryQueryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRestart OnRestart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPossessed OnPossessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRepPlayerState OnRepPlayerState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKCharacterData* CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKAISettings* AISettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPersistWhenDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableAllIK;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StartingGameplayTags;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddAnyTagSignature OnAnyTagAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveAnyTagSignature OnAnyTagRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FFGKGameplayTagTime> GameplayTagTimeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEquipComponent* EquipComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBowWeapon* EquippedBow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bMostRecentlyEquippedRanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LastWeaponEquipTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKTargetingComponent* TargetingComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKTargetableComponent* DefaultTargetableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKTargetableComponent*> TargetableComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFGKTargetPerAttacker> TargetPerAttackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForcedTargeted;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFGKAnimNotifySignature OnNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFGKAnimNotifyStateBeginSignature OnNotifyStateBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFGKAnimNotifyStateEndSignature OnNotifyStateEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 MontageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKCharacterAnimInstance* MainAnimInstance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ForcedInteractable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OverlayState, meta=(AllowPrivateAccess=true))
    EFGKOverlayState OverlayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFGKMovementAction MovementAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RotationMode, meta=(AllowPrivateAccess=true))
    EFGKRotationMode RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFGKGait Gait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ViewMode, meta=(AllowPrivateAccess=true))
    EFGKViewMode ViewMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKState> RootBehaviorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFGKRotationMode DefaultRotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceOffCharMeshIfExtentThisBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LastVelocityRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LastMovementInputRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector NextPathingPointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MovementInputAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimYawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EasedMaxAcceleration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentAcceleration, meta=(AllowPrivateAccess=true))
    FFGKBaseCharacterRepCurrentAcceleration ReplicatedCurrentAcceleration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ControlRotation, meta=(AllowPrivateAccess=true))
    FFGKBaseCharacterRepControlRotation ReplicatedControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CurrentAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator ControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKCharacterMovementComponent* MoveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKMovementStateSettings MovementStateSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFGKMovementStateSettings> MovementDataOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float OverrideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTurnSpeed_VelocityDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTurnSpeed_LookingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTurnSpeed_Aiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTurnSpeed_PathingDirection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TurnInPlaceMontages[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CrouchingTurnInPlaceMontages[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FFGKTurnInPlaceMontages> TurnInPlaceTagOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnInPlaceThreshold45;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnInPlaceThreshold90_When45Exists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnInPlaceThreshold90_When45Missing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnInPlaceThreshold180;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowJumpFromCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator TargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float YawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRagdollOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRagdollFaceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastRagdollVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetRagdollLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKParkourComponent* ParkourComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBodyFSMCreated OnBodyFSMCreated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Possessed, meta=(AllowPrivateAccess=true))
    bool bPossessed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKActorFSMComponent* BodyFSMComp;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceiveHitFromLocalAttacker OnReceiveHitFromLocalAttacker;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScoreMeleeHit OnScoreMeleeHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScoreMeleeHit OnScoreRangeHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeleeAttack OnMeleeAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileSpawned OnProjectileSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileTypeChanged OnProjectileTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorldTargetSpawned OnWorldTargetSpawned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKCombatComponent* CombatComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFGKCombatStat> CombatStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPickUpStat> PickUpStats;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCanBeDamagedChanged OnCanBeDamagedChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKCharacterHealthComponent* HealthComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGenericTeamId CharacterTeamId;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKFootprintComponent* FootprintComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult LastFootHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastFootHitFootDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLastFootHitResultIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VfxDataTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RayOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RayDirection;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleportFinished OnTeleportFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugMe;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKCharacterDebugText* DebugText;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ReloadTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AISpawnWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowHeadTrackingDuringAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> HeadTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFGKBodySocket HeadTargetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector HeadLookAt;
    
public:
    AFGKBaseCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetViewMode(EFGKViewMode NewViewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float NewSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationMode(EFGKRotationMode NewRotationMode);
    
    UFUNCTION(BlueprintCallable)
    void SetRequestedGait(EFGKGait NewGait);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideAimingRotation(const FRotator& AimingOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayState(EFGKOverlayState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementInputAmount(float NewMovementInputAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementAction(EFGKMovementAction NewAction);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadTracking(AActor* InHeadTarget, EFGKBodySocket InSocket);
    
    UFUNCTION(BlueprintCallable)
    void SetGait(EFGKGait NewGait);
    
    UFUNCTION(BlueprintCallable)
    void SetAimYawRate(float NewAimYawRate);
    
    UFUNCTION(BlueprintCallable)
    void SetAcceleration(const FVector& NewAcceleration);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateCombatStat(AFGKBaseCharacter* Victim);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TeleportTo(const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetViewMode(EFGKViewMode NewViewMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetRotationMode(EFGKRotationMode NewRotationMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetOverrideAimingRotation(const FRotator& AimingOverride);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetOverlayState(EFGKOverlayState NewState);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_SetMeshLocationDuringRagdoll(const FVector& MeshLocation);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_SetHeadTracking(AActor* InHeadTarget, EFGKBodySocket InSocket, bool bOverrideLocallyControllerValues);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetAimRay(const FVector& NewRayOrigin, const FVector& NewRayDirection);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Replenish(TSubclassOf<UActorComponent> Type, float Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_OnPickUp(TSubclassOf<AActor> ActorType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AskForFollow();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ApplyRadialDamageToVictimOnLocallyControlled(AActor* Victim, float DamageAmount, const FFGKRadialDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ApplyRadialDamageToVictim(AActor* Victim, float DamageAmount, const FFGKRadialDamageEvent& DamageEvent, const FFGKHitReactionRequest& HitReactRequest);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ApplyPointDamageToVictim(AActor* Victim, float DamageAmount, const FFGKPointDamageEvent& DamageEvent, const FFGKHitReactionRequest& HitReactRequest);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ApplyBoopForceToVictim(AActor* Victim, const FVector& Knockback, bool bOverride);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectConversationOption(const FString& ConversationOption);
    
    UFUNCTION(BlueprintCallable)
    float RemovePersistentRequestTag(FGameplayTag RequestTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHeadTracking();
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTags(const FGameplayTagContainer& TagContainer);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFramewiseRequestTag(FGameplayTag RequestTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVictimDie(UFGKHealthComponent* NewHealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ViewMode(EFGKViewMode PrevViewMode);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RotationMode(EFGKRotationMode PrevRotMode);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Possessed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OverlayState(EFGKOverlayState PrevOverlayState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentAcceleration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ControlRotation();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageStarted(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnItemUnEquipped(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDie(UFGKHealthComponent* NewHealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetOverrideAimingRotation(const FRotator& AimingOverride);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_SetHeadTracking(AActor* InHeadTarget, EFGKBodySocket InSocket, bool bOverrideLocallyControllerValues);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetAimRay(const FVector& NewRayOrigin, const FVector& NewRayDirection);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnLanded();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_MontagePlay(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_GenerateEffect(UNiagaraSystem* EffectTemplate, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_FinishedTeleport(const FVector& Location, const FQuat& Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_ClearOverrideAimingRotation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyRadialDamageToVictim(AActor* Victim, float DamageAmount, const FFGKRadialDamageEvent& DamageEvent, const FFGKHitReactionRequest& HitReactRequest);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyPointDamageToVictim(AActor* Victim, float DamageAmount, const FFGKPointDamageEvent& DamageEvent, const FFGKHitReactionRequest& HitReactRequest);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyBoopForceToVictim(AActor* Victim, const FVector& Knockback, bool bOverride);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyBoopForce(const FVector& Knockback, bool bOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReacting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnGround(bool bCheckFloor, float MaxFloorDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInStance(EFGKStance Stance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrouching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAimRequested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPersistentRequestTag(FGameplayTag RequestTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMovementInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHadTagRecently(FGameplayTag Tag, float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFramewiseRequestTag(FGameplayTag RequestTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyPersistentRequestTags(FGameplayTagContainer RequestTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyFramewiseRequestTags(FGameplayTagContainer RequestTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllPersistentRequestTags(FGameplayTagContainer RequestTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllFramewiseRequestTags(FGameplayTagContainer RequestTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkComponent* GetVoiceComp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFGKViewMode GetViewMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFGKMovementSettings GetTargetMovementSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetLocation(AActor* RequestedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKTargetingComponent* GetTargetingComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFGKStance GetStance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkComponent* GetSoundComp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetSocketTransformOut(FTransform& OutTransform, FName SocketName, ERelativeTransformSpace TransformSpace) const;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetSocketTransform(FName SocketName, ERelativeTransformSpace TransformSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FRotator GetSocketRotation(FName SocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetSocketLocation(FName SocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UFGKActorFSMComponent* GetSequencerFSMComp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFGKRotationMode GetRotationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetReplicatedMoveInput() const;
    
    UFUNCTION(BlueprintCallable)
    float GetRemoveTagTime(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetRawInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPickUpStat(TSubclassOf<AActor> ActorType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFGKOverlayState GetOverlayState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementInputAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMovementDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFGKMovementAction GetMovementAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKCharacterHealthComponent* GetHealthComp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameplayTagDuration(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFGKGait GetGait() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKCharacterMovementComponent* GetFGKMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetFaceMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetControlForwardRightVector(FVector& Forward, FVector& Right) const;
    
    UFUNCTION(BlueprintCallable)
    UFGKCombatComponent* GetCombatComp() const;
    
    UFUNCTION(BlueprintCallable)
    UFGKActorFSMComponent* GetBodyFSMComp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimCurveValue(FName CurveName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimYawRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetAimingRotation() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAddTagTime(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFGKGait GetActualGait() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAcceleration() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EventOnLanded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawDebugSpheres();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool DoesSocketExist(FName SocketName) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ApplyRadialDamageToVictimOnLocallyControlled(AActor* Victim, float DamageAmount, const FFGKRadialDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void ClearPersistentRequestTags();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideAimingRotation();
    
    UFUNCTION(BlueprintCallable)
    void ClearFramewiseRequestTags();
    
    UFUNCTION(BlueprintCallable)
    void ClearFramewiseConditions();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMesh(USkeletalMesh* NewSkeletalMesh, TSubclassOf<UAnimInstance> NewAnimClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure=false)
    void AttachToSocket(USceneComponent* ChildComponent, FName SocketName) const;
    
    UFUNCTION(BlueprintCallable)
    void AskForFollow();
    
    UFUNCTION(BlueprintCallable)
    void ApplyPointDamageToVictim_Deprecated(AActor* Victim, float DamageAmount, FVector Location, FVector Direction);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPointDamageToVictim(AActor* Victim, float DamageAmount, const FFGKPointDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBoopForceToVictim(AActor* Victim, const FVector& Knockback, bool bOverride);
    
    UFUNCTION(BlueprintCallable)
    void AddStartingGameplayTags(const FGameplayTagContainer& TagContainer);
    
    UFUNCTION(BlueprintCallable)
    void AddPersistentRequestTag(FGameplayTag RequestTag);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTags(const FGameplayTagContainer& TagContainer);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddFramewiseRequestTag(FGameplayTag RequestTag);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UInventoryComponent* GetInventory() const override PURE_VIRTUAL(GetInventory, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UEquipComponent* GetEquip() const override PURE_VIRTUAL(GetEquip, return NULL;);
    
};

