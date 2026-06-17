#include "MorConstructionPermitComponent.h"
#include "Net/UnrealNetwork.h"

UMorConstructionPermitComponent::UMorConstructionPermitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPlaysHomeMusic = true;
    this->PermitRadius = 2000.00f;
    this->ExtraFoliageClearingRadius = 0.00f;
    this->PermitSize = EMorConstructionPermitSize::Small;
}

void UMorConstructionPermitComponent::SetBaseBoundsVisibility(bool bVisible) {
}

void UMorConstructionPermitComponent::OnRep_ContainedConstructions() {
}

void UMorConstructionPermitComponent::OnBubbleStateChanged(const UWorldLayoutBubble* Bubble, EBubbleState BubbleState) {
}

FVector UMorConstructionPermitComponent::GetPermitLocation() const {
    return FVector{};
}

void UMorConstructionPermitComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorConstructionPermitComponent, ContainedConstructions);
}


