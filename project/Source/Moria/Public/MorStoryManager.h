#pragma once
#include "CoreMinimal.h"
#include "ENotifyRule.h"
#include "MorAnyItemRowHandle.h"
#include "MorConstructionRecipeDefinition.h"
#include "MorEntitlementStatus.h"
#include "MorGoalCompleteSignatureDelegate.h"
#include "MorItemRecipeDefinition.h"
#include "MorItemRowHandle.h"
#include "MorLoreRowHandle.h"
#include "MorOathRingSummonsDelegate.h"
#include "MorOnLoreDiscoveredReplicatedDelegate.h"
#include "MorOnStoryFragmentReceivedDelegate.h"
#include "MorProgressRowHandle.h"
#include "MorReplicatedManager.h"
#include "MorSaveGameObjectCallbacks.h"
#include "MorSaveGameObjectNative.h"
#include "MorSongRowHandle.h"
#include "MorStorySnapshotAppliedDelegate.h"
#include "MorStoryManager.generated.h"

class AActor;
class ACharacter;
class AMorCharacter;

UCLASS(Blueprintable)
class MORIA_API AMorStoryManager : public AMorReplicatedManager, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorStorySnapshotApplied OnSnapshotApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorGoalCompleteSignature GoalComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnLoreDiscoveredReplicated OnLoreDiscoveredAndReplicated;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnStoryFragmentReceived OnStoryFragmentReceivedCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOathRingSummons OnOathRingSummonsSent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOathRingSummons OnOathRingSummonsRetracted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_DiscoveredLoreEntries, meta=(AllowPrivateAccess=true))
    TArray<FMorLoreRowHandle> DiscoveredLoreEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_AllCompletedGoals, meta=(AllowPrivateAccess=true))
    TArray<FMorLoreRowHandle> AllCompletedGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorProgressRowHandle, int32> SongOfRitesRequiredProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorProgressRowHandle, int32> SongOfRitesUpdateProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSongRowHandle SongOfRitesHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SongOfRitesSectionIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorItemRowHandle OldRingItemRowHandle;
    
public:
    AMorStoryManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void VoiceOverBark(const FMorLoreRowHandle& LoreRowHandle, AMorCharacter* MorCharacter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SendOathRingSummons();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RetractOathRingSummons();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DiscoveredLoreEntries();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AllCompletedGoals();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnItemRecipeDiscovered(const FMorItemRecipeDefinition& ItemRecipeDefinition);
    
    UFUNCTION(BlueprintCallable)
    void OnItemDiscovered(const FMorAnyItemRowHandle& ItemHandle, AActor* Discoverer);
    
    UFUNCTION(BlueprintCallable)
    void OnEntitlementUpdate(const FName& EntitlementID, const FMorEntitlementStatus& Status);
    
    UFUNCTION(BlueprintCallable)
    void OnConstructionRecipeDiscovered(const FMorConstructionRecipeDefinition& ConstructionRecipeDefinition);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStoryFragmentReceivedNotif(const FMorLoreRowHandle& LoreRowHandle, const TArray<FMorLoreRowHandle>& CompletedGoalEntries, bool NewDiscovery, ENotifyRule NotifyRules, const ACharacter* Discoverer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastGoalComplete(const ACharacter* Dwarf, const FMorLoreRowHandle& LoreRowHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsGoalEntryCompleted(const FMorLoreRowHandle& LoreRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeStoryInBlueprints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDiscoveredLore(const FMorLoreRowHandle& LoreRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorItemRowHandle GetOldRingItemRowHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorLoreRowHandle> GetAllDiscoveredLoreEntries() const;
    
    UFUNCTION(BlueprintCallable)
    void DiscoverStoryFragment(const FMorLoreRowHandle& LoreRowHandle, ENotifyRule NotifyRule, const ACharacter* Discoverer);
    
    UFUNCTION(BlueprintCallable)
    void CompleteGoalEntry(const ACharacter* Dwarf, const FMorLoreRowHandle& LoreRowHandle);
    

    // Fix for true pure virtual functions not being implemented
};

