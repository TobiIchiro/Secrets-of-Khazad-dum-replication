#include "MoriaAttributeSet.h"
#include "Net/UnrealNetwork.h"

UMoriaAttributeSet::UMoriaAttributeSet() {
}

void UMoriaAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) {
}

void UMoriaAttributeSet::OnRep_HealthRegen(const FGameplayAttributeData& OldHealthRegen) {
}

void UMoriaAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) {
}

void UMoriaAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoriaAttributeSet, Health);
    DOREPLIFETIME(UMoriaAttributeSet, MaxHealth);
    DOREPLIFETIME(UMoriaAttributeSet, HealthRegen);
}


