#pragma once
#include "CoreMinimal.h"
#include "BPMoriaInteractable.h"
#include "MorInteraction.h"
#include "MorLoreRowHandle.h"
#include "MorTalkInteractionDelegate.h"
#include "MorRavenGuide.generated.h"

class AMorCharacter;
class AMorRavenConstruction;
class UDataTable;
class UMorNPCConversationComponent;
class UPOIMarkerComponent;

UCLASS(Blueprintable)
class MORIA_API AMorRavenGuide : public ABPMoriaInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsSpawnedByRavenConstruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorLoreRowHandle> LoreRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ConversationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bConversationInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WasConversationCanceled, meta=(AllowPrivateAccess=true))
    bool bWasConversationCanceled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasFinishedConversation, meta=(AllowPrivateAccess=true))
    bool bHasFinishedConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasConvertedToConversation, meta=(AllowPrivateAccess=true))
    bool bHasConvertedToConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasConversationsAvailable, meta=(AllowPrivateAccess=true))
    bool bHasConversationsAvailable;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorTalkInteraction OnTalkInteraction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTalkInteractionRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction TalkInteraction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTalkInteractionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIMarkerComponent* POIMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorNPCConversationComponent* ConversationComponent;
    
public:
    AMorRavenGuide(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UnlockLore();
    
    UFUNCTION(BlueprintCallable)
    void StartConversation(AMorCharacter* FirstSpeaker);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SpawnedByRavenConstructionMulticast(const AMorRavenConstruction* Construction);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowPOIMarkerShowing(bool bVal);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RavenDespawnImmediate();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_WasConversationCanceled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasFinishedConversation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasConvertedToConversation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasConversationsAvailable();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInit();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConversationInteraction();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnConversationFinished(int32 ConversationID);
    
    UFUNCTION(BlueprintCallable)
    void OnConversationCanceled(int32 ConversationID);
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(const TArray<FMorLoreRowHandle>& InLoreRows, UDataTable* InConversationTable);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnlockedLore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SpawnedByRavenConstruction(const AMorRavenConstruction* Construction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnConversationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnConversationCanceled();
    
};

