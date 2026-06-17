#include "FGKQuestManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AFGKQuestManager::AFGKQuestManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->QuestCompleteAudioEffect = NULL;
    this->MusicDelay = 1.00f;
}

void AFGKQuestManager::UnloadQuests(const UDataTable* QuestDataTable) {
}

void AFGKQuestManager::TriggerEntered(AFGKBaseCharacter* Char, FName Trigger) {
}

void AFGKQuestManager::MulticastRPCQuestTableEvent_Implementation(FName TableId, EQuestTableEventType EventType) {
}

void AFGKQuestManager::MulticastRPCQuestSetState_Implementation(FName QuestId, EQuestState State) {
}

void AFGKQuestManager::LoadQuests(const UDataTable* QuestDataTable) {
}

bool AFGKQuestManager::HasQuests() const {
    return false;
}

TArray<UFGKQuest*> AFGKQuestManager::GetQuestsByStateAndRequirement(EQuestState State, TSubclassOf<UFGKQuestRequirement> Requirement) const {
    return TArray<UFGKQuest*>();
}

TArray<UFGKQuest*> AFGKQuestManager::GetQuestsByState(EQuestState State) const {
    return TArray<UFGKQuest*>();
}

UFGKQuest* AFGKQuestManager::GetQuest(FName QuestId) const {
    return NULL;
}

FString AFGKQuestManager::GetDebugQuestSummary() {
    return TEXT("");
}

bool AFGKQuestManager::CheckQuestState(const FName QuestId, EQuestState State) const {
    return false;
}

bool AFGKQuestManager::CheckQuestPrerequisites(UFGKQuest* Quest) const {
    return false;
}

bool AFGKQuestManager::CheckQuestComplete(UFGKQuest* Quest) const {
    return false;
}

void AFGKQuestManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFGKQuestManager, LoadedDataTables);
    DOREPLIFETIME(AFGKQuestManager, QuestsStates);
}


