#include "ConversationComponent.h"
#include "Net/UnrealNetwork.h"

UConversationComponent::UConversationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IdleAnim = NULL;
    this->CurrentConversationIndex = -1;
    this->bRandomizeOffset = false;
    this->bRandomizePlaybackSpeed = false;
    this->AnimationOffsetMin = 0.00f;
    this->AnimationOffsetMax = 1.00f;
    this->AnimationPlaySpeedMin = 0.80f;
    this->AnimationPlaySpeedMax = 1.20f;
}

void UConversationComponent::OnConversationMontageChanged() {
}

void UConversationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UConversationComponent, ConversationMontage);
}


