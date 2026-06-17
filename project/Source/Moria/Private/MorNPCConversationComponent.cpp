#include "MorNPCConversationComponent.h"
#include "Net/UnrealNetwork.h"

UMorNPCConversationComponent::UMorNPCConversationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NpcTuningData = NULL;
}

void UMorNPCConversationComponent::SetSpeechBubbleVisibility(bool bIsVisble) {
}

bool UMorNPCConversationComponent::SetNextUnlockedConversation(FMorNPCConversationRowHandle& OutConversation, FMorNPCConversationTextRowHandle& OutText) {
    return false;
}

void UMorNPCConversationComponent::SetConversationCompleted() {
}

bool UMorNPCConversationComponent::HasConversation() const {
    return false;
}

void UMorNPCConversationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorNPCConversationComponent, SpeakerId);
}


