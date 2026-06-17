#include "MorBreakableComponent.h"
#include "Net/UnrealNetwork.h"

UMorBreakableComponent::UMorBreakableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DestructImpulseRadius = 200.00f;
    this->DestructImpulseForce = 500.00f;
    this->DestructEffectLifetime = 5.00f;
    this->bDestroyActor = true;
    this->FXComponent = NULL;
    this->Team = EMoriaTeam::Environment;
    this->bBreakable = false;
    this->bRestorable = false;
    this->MaxHealth = 1.00f;
    this->BreakSfx = NULL;
    this->CurrentTeam = EMoriaTeam::Environment;
    this->bBrokenStateSaved = false;
}

void UMorBreakableComponent::SetTeam(EMoriaTeam NewTeam) {
}

void UMorBreakableComponent::OnRep_HealthChangedState() {
}

void UMorBreakableComponent::OnRep_CurrentTeam() {
}

void UMorBreakableComponent::OnRep_BrokenState() {
}

EMoriaTeam UMorBreakableComponent::GetTeam() const {
    return EMoriaTeam::Dwarves;
}

void UMorBreakableComponent::ForceBreak(float OverrideDestructEffectLifetime) {
}

void UMorBreakableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorBreakableComponent, CurrentTeam);
    DOREPLIFETIME(UMorBreakableComponent, BrokenState);
    DOREPLIFETIME(UMorBreakableComponent, HealthChangedState);
}


