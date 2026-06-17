#include "MorAIBehaviorPointComponent.h"

UMorAIBehaviorPointComponent::UMorAIBehaviorPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Preference = 50;
    this->bUseAsLinkedBehaviorPoint = false;
    this->bPlayAmbientVO = false;
    this->AVORequiredOccupants = 2;
    this->SpeakerDwarf = NULL;
}

void UMorAIBehaviorPointComponent::PostAmbientVO(TSoftObjectPtr<UAkAudioEvent> Event) {
}

void UMorAIBehaviorPointComponent::OnBubbleUpdate(const UWorldLayoutBubble* Bubble, EBubbleUpdateState NewState) {
}

void UMorAIBehaviorPointComponent::OnAkEventEnd(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}


