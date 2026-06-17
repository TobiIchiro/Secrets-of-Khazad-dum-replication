#include "MorDialogueTriggerComponent.h"

UMorDialogueTriggerComponent::UMorDialogueTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
    this->bUseExplicitConversation = false;
    this->Conversation = NULL;
    this->ConversationPriority = EMorDialogueEventPriority::None;
    this->bFirstTimeVariant = false;
    this->bFirstTimeVariantPlayed = false;
    this->bUnlocksLoreEntry = false;
    this->DialogueManager = NULL;
    this->FirstLoreUnlock = true;
}

void UMorDialogueTriggerComponent::OnComplete(int32 ConversationID) {
}

void UMorDialogueTriggerComponent::OnCancelled(int32 ConversationID) {
}

void UMorDialogueTriggerComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


