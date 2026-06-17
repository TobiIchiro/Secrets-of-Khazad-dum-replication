#include "MorRavenGuide.h"
#include "Net/UnrealNetwork.h"

AMorRavenGuide::AMorRavenGuide(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsSpawnedByRavenConstruction = false;
    this->ConversationTable = NULL;
    this->bConversationInProgress = false;
    this->bWasConversationCanceled = false;
    this->bHasFinishedConversation = false;
    this->bHasConvertedToConversation = false;
    this->bHasConversationsAvailable = false;
    this->bTalkInteractionRegister = false;
    this->bTalkInteractionEnabled = true;
    this->POIMarkerComponent = NULL;
    this->ConversationComponent = NULL;
}

void AMorRavenGuide::UnlockLore() {
}

void AMorRavenGuide::StartConversation(AMorCharacter* FirstSpeaker) {
}

void AMorRavenGuide::SpawnedByRavenConstructionMulticast_Implementation(const AMorRavenConstruction* Construction) {
}

void AMorRavenGuide::SetAllowPOIMarkerShowing(bool bVal) {
}


void AMorRavenGuide::OnRep_WasConversationCanceled() {
}

void AMorRavenGuide::OnRep_HasFinishedConversation() {
}

void AMorRavenGuide::OnRep_HasConvertedToConversation() {
}

void AMorRavenGuide::OnRep_HasConversationsAvailable() {
}



void AMorRavenGuide::OnConversationFinished(int32 ConversationID) {
}

void AMorRavenGuide::OnConversationCanceled(int32 ConversationID) {
}

void AMorRavenGuide::Init(const TArray<FMorLoreRowHandle>& InLoreRows, UDataTable* InConversationTable) {
}

bool AMorRavenGuide::HasUnlockedLore() const {
    return false;
}




void AMorRavenGuide::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorRavenGuide, bIsSpawnedByRavenConstruction);
    DOREPLIFETIME(AMorRavenGuide, bConversationInProgress);
    DOREPLIFETIME(AMorRavenGuide, bWasConversationCanceled);
    DOREPLIFETIME(AMorRavenGuide, bHasFinishedConversation);
    DOREPLIFETIME(AMorRavenGuide, bHasConvertedToConversation);
    DOREPLIFETIME(AMorRavenGuide, bHasConversationsAvailable);
}


