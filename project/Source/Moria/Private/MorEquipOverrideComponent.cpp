#include "MorEquipOverrideComponent.h"

UMorEquipOverrideComponent::UMorEquipOverrideComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMorEquipOverrideComponent::RemoveHideAllRequest() {
}

void UMorEquipOverrideComponent::OnNotifyStateEndReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation) {
}

void UMorEquipOverrideComponent::OnNotifyStateBeginReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation, float TotalAnimationTime) {
}

void UMorEquipOverrideComponent::OnItemEquipped(const FItemHandle& Item) {
}

bool UMorEquipOverrideComponent::HasHidePrimaryRequest() const {
    return false;
}

bool UMorEquipOverrideComponent::HasHideOffhandRequest() const {
    return false;
}

bool UMorEquipOverrideComponent::HasHideHolsterRequest() const {
    return false;
}

void UMorEquipOverrideComponent::AddHideAllRequest() {
}


