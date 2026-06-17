#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EQuestState.h"
#include "EQuestTableEventType.h"
#include "QuestEventDelegate.h"
#include "RequirementInternal.h"
#include "Templates/SubclassOf.h"
#include "FGKQuestManager.generated.h"

class AFGKBaseCharacter;
class UAkAudioEvent;
class UDataTable;
class UFGKPOIMarkerComponent;
class UFGKQuest;
class UFGKQuestRequirement;

UCLASS(Blueprintable)
class FGK_API AFGKQuestManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* QuestCompleteAudioEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MusicDelay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestEvent QuestActiveEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestEvent QuestCompletedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestEvent QuestRemovedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKQuest*> AllQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKPOIMarkerComponent*> AllPOIs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UFGKQuestRequirement>, FRequirementInternal> Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FName> LoadedDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<EQuestState> QuestsStates;
    
public:
    AFGKQuestManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnloadQuests(const UDataTable* QuestDataTable);
    
    UFUNCTION(BlueprintCallable)
    void TriggerEntered(AFGKBaseCharacter* Char, FName Trigger);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRPCQuestTableEvent(FName TableId, EQuestTableEventType EventType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRPCQuestSetState(FName QuestId, EQuestState State);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadQuests(const UDataTable* QuestDataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasQuests() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFGKQuest*> GetQuestsByStateAndRequirement(EQuestState State, TSubclassOf<UFGKQuestRequirement> Requirement) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFGKQuest*> GetQuestsByState(EQuestState State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKQuest* GetQuest(FName QuestId) const;
    
    UFUNCTION(BlueprintCallable)
    FString GetDebugQuestSummary();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckQuestState(const FName QuestId, EQuestState State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckQuestPrerequisites(UFGKQuest* Quest) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckQuestComplete(UFGKQuest* Quest) const;
    
};

