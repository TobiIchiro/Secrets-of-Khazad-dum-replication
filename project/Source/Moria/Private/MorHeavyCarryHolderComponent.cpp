#include "MorHeavyCarryHolderComponent.h"
#include "Net/UnrealNetwork.h"

UMorHeavyCarryHolderComponent::UMorHeavyCarryHolderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveAttachedActorWithOwner = false;
    this->CurrentWrapperItem = NULL;
    this->ReplicatedTarget = NULL;
}

void UMorHeavyCarryHolderComponent::OnRep_ReplicatedTarget() {
}

void UMorHeavyCarryHolderComponent::OnActorDetached(AActor* Actor) {
}

void UMorHeavyCarryHolderComponent::OnActorAttached(AActor* Actor) {
}

void UMorHeavyCarryHolderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorHeavyCarryHolderComponent, ReplicatedTarget);
}


