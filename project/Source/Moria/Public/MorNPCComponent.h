#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ItemHandle.h"
#include "GameplayTagContainer.h"
#include "EMorInteractableType.h"
#include "MorAccessibleStorageInterface.h"
#include "MorFilteredStringHandle.h"
#include "MorInteractableInterface.h"
#include "MorInteraction.h"
#include "MorNPCActivityRowHandle.h"
#include "MorNPCRoleRowHandle.h"
#include "MorNPCSkillRowHandle.h"
#include "MorNPCTraitRowHandle.h"
#include "MorNpcBaseSelectionRequestDelegate.h"
#include "MorNpcOnDetailsInteractionDelegate.h"
#include "MorNpcOnManageInteractionDelegate.h"
#include "MorNpcOnManageLocalInteractionDelegate.h"
#include "MorNpcOnNpcLimitReachedDelegate.h"
#include "MorNpcOnTalkInteractionDelegate.h"
#include "MorNpcSettlementSelectionRequestDelegate.h"
#include "MorNpcUpdateActivityDelegate.h"
#include "MorNpcUpdateNameDelegate.h"
#include "MorNpcUpdateRoleDelegate.h"
#include "MorNpcUpdateTraitTextDelegate.h"
#include "MorNpcUpdateTraitsDelegate.h"
#include "MorOnInteractableNameFilteredDynamicDelegate.h"
#include "MorOnNPCAcquiredSkillsChangedDelegate.h"
#include "MorOnNPCEquipmentChangedDelegate.h"
#include "MorNPCComponent.generated.h"

class AActor;
class ACharacter;
class AMorCharacter;
class AMorInteractableManager;
class AMorSitSpot;
class UMorAIBehaviorPointComponent;
class UMorNPCConversationComponent;
class UNiagaraSystem;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorNPCComponent : public UActorComponent, public IMorInteractableInterface, public IMorAccessibleStorageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_NpcGuid, meta=(AllowPrivateAccess=true))
    FGuid NpcGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInteractable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManagerInteractionRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManageInteractionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction ManageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReviveInteractionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReviveInteractionRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction ReviveInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRescueInteractionRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRescueInteractionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction RescueInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecruitInteractionRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecruitInteractionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction RecruitInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeliverResearchInteractionRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeliverResearchInteractionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction DeliverResearchInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetailsInteractionRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetailsInteractionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction DetailsInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTalkInteractionRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTalkInteractionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction TalkInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RecruitNPCWorldCapReachedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNpcUpdateName OnUpdateName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNpcOnNpcLimitReached OnInformNpcLimitReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNpcUpdateTraitText OnUpdateTraitText;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNpcUpdateTraits OnUpdateTraits;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNpcUpdateActivity OnUpdateActivity;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNpcUpdateRole OnUpdateRole;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNpcOnManageInteraction OnManageInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNpcOnManageLocalInteraction OnManageLocalInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnNPCEquipmentChanged OnNPCEquipmentChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnNPCAcquiredSkillsChanged OnNPCAcquiredSkillsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNpcBaseSelectionRequest OnBaseSelectionRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNpcSettlementSelectionRequest OnSettlementSelectionRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNpcOnDetailsInteraction OnDetailsInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNpcOnTalkInteraction OnTalkInteraction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* LastInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorInteractableManager* InteractableManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* NPCCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorNPCConversationComponent* ConversationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkillsInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SkillsAcquired, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkillsAcquired;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_HidePrimaryRequestCount, meta=(AllowPrivateAccess=true))
    uint32 HidePrimaryRequestCount;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_HideOffhandRequestCount, meta=(AllowPrivateAccess=true))
    uint32 HideOffhandRequestCount;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_HolsterRequestCount, meta=(AllowPrivateAccess=true))
    uint32 HideHolsterRequestCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorSitSpot* InteractingSitSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> ActivityPointGainedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> SoftMugAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HoldingMug, meta=(AllowPrivateAccess=true))
    bool bHoldingMug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SpawnedMug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorAIBehaviorPointComponent* InteractingBehaviorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange BarkEvaluationInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarkDistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange BarkCooldownTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BarkWhitelistTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastBarkedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentBarkCooldownTime;
    
public:
    UMorNPCComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetRoleFuzzy(const FString& RoleString);
    
    UFUNCTION(BlueprintCallable)
    void SetRole(const FMorNPCRoleRowHandle& MorNPCRoleRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetInteracting(bool bCurrentlyInteracting);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentActivity(const FMorNPCActivityRowHandle& ActivityHandle);
    
    UFUNCTION(BlueprintCallable)
    void SendToSettlement(int32 SettlementWaypointID);
    
    UFUNCTION(BlueprintCallable)
    void SendToBase(int32 BaseWaypointID);
    
    UFUNCTION(BlueprintCallable)
    void SendBackToSettlement();
    
private:
    UFUNCTION(BlueprintCallable)
    void ResolveEquipmentChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ResetResearchProgress() const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveNpcFromSettlement();
    
    UFUNCTION(BlueprintCallable)
    void RegisterWithNPCManager();
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterToInteractableManager();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SkillsAcquired();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NpcGuid();
    
    UFUNCTION()
    void OnRep_HolsterRequestCount(uint32 OldValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HoldingMug();
    
private:
    UFUNCTION()
    void OnRep_HidePrimaryRequestCount(uint32 OldValue);
    
    UFUNCTION()
    void OnRep_HideOffhandRequestCount(uint32 OldValue);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSpawnActivityPointGainedFX();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteracting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialSkill(FMorNPCSkillRowHandle SkillHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMaxActivityPoints() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleEquipmentChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorNPCTraitRowHandle> GetTraits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTraitNameText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorNPCSkillRowHandle> GetSkills() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResearchProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNpcRoleDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNpcRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNpcName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNpcFlavorText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNpcDepartureTimestamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNpcDepartureTime(int32& Days, int32& Hours, int32& Minutes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxActivityPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorNPCActivityRowHandle GetInterruptedActivity() const;
    
    UFUNCTION(BlueprintCallable)
    FMorNPCActivityRowHandle GetGatherNothingFoundActivity() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetGatherFilter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorNPCRoleRowHandle GetCurrentRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorNPCActivityRowHandle GetCurrentActivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActivityPoints() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSetRole(const FMorNPCRoleRowHandle& NewRole);
    
    UFUNCTION(BlueprintCallable)
    void ClearLocationHistory();
    
    UFUNCTION(BlueprintCallable)
    float AddResearchProgress(float ProgressAmount);
    
    UFUNCTION(BlueprintCallable)
    void AddActivityPoints(int32 Amount);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool ShouldCheckInteractorInFov() const override PURE_VIRTUAL(ShouldCheckInteractorInFov, return false;);
    
    UFUNCTION(BlueprintCallable)
    void SetLastInteractor(AMorCharacter* Interactor) override PURE_VIRTUAL(SetLastInteractor,);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIsInteractive(bool bValue) override PURE_VIRTUAL(SetIsInteractive,);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsUsableBy(ACharacter* Interactor) const override PURE_VIRTUAL(IsUsableBy, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsMissingConstructionRequirements() const override PURE_VIRTUAL(IsMissingConstructionRequirements, return false;);
    
    UFUNCTION(BlueprintCallable)
    FText GetUnfilteredFullInteractableName(const ACharacter* Interactor) const override PURE_VIRTUAL(GetUnfilteredFullInteractableName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    AMorCharacter* GetLastInteractor() const override PURE_VIRTUAL(GetLastInteractor, return NULL;);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetIsInteractive() const override PURE_VIRTUAL(GetIsInteractive, return false;);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetInteractionTargetLocation() const override PURE_VIRTUAL(GetInteractionTargetLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    EMorInteractableType GetInteractableType() const override PURE_VIRTUAL(GetInteractableType, return EMorInteractableType::MorInteractable;);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetInteractableActor() override PURE_VIRTUAL(GetInteractableActor, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    void GetFilteredInteractableName(const ACharacter* Interactor, UPARAM(Ref) FMorFilteredStringHandle& FilterHandle, const FMorOnInteractableNameFilteredDynamic& OnDisplayNameFiltered) const override PURE_VIRTUAL(GetFilteredInteractableName,);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetDisplayIcon() const override PURE_VIRTUAL(GetDisplayIcon, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool CheckInteractorInFov(const FVector& InteractorLocation, const FVector& InteractorForward) override PURE_VIRTUAL(CheckInteractorInFov, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanSetCustomDisplayName() const override PURE_VIRTUAL(CanSetCustomDisplayName, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAccessibleStorage() const override PURE_VIRTUAL(HasAccessibleStorage, return false;);
    
    UFUNCTION(BlueprintCallable)
    FItemHandle GetAccessibleStorageRoot() const override PURE_VIRTUAL(GetAccessibleStorageRoot, return FItemHandle{};);
    
};

