#include "MorAIBossComponent.h"
#include "Net/UnrealNetwork.h"

UMorAIBossComponent::UMorAIBossComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldShowHealthBar = false;
    this->NearbyEnterDistanceThreshold = 5000.00f;
    this->NearbyExitDistanceThreshold = 6250.00f;
}

void UMorAIBossComponent::ShowHealthBar(bool bInShowHealthBar) {
}

bool UMorAIBossComponent::ShouldShowHealthBar() const {
    return false;
}

void UMorAIBossComponent::PreformLocalPlayerDistanceCheck() {
}

void UMorAIBossComponent::OnRep_ShouldShowHealthBar() {
}

void UMorAIBossComponent::GetHealth(float& Health, float& MaxHealth) const {
}

FText UMorAIBossComponent::GetBossDisplayName() const {
    return FText::GetEmpty();
}

void UMorAIBossComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorAIBossComponent, bShouldShowHealthBar);
}


