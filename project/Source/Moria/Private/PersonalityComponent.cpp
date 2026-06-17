#include "PersonalityComponent.h"
#include "Net/UnrealNetwork.h"

UPersonalityComponent::UPersonalityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTryAssignUnique = false;
    this->CurrentBasePersonality = NULL;
    this->CurrentModifiedPersonality = NULL;
}

void UPersonalityComponent::SetPersonality(UPersonalityInfo* NewPersonality) {
}

void UPersonalityComponent::ServerTogglePersonalityInternal_Implementation() {
}

void UPersonalityComponent::ServerStartEmoteInternal_Implementation(int32 EmoteIndex) {
}

void UPersonalityComponent::OnRep_CurrentBasePersonality() {
}

UPersonalityInfo* UPersonalityComponent::GetCurrent() const {
    return NULL;
}

void UPersonalityComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPersonalityComponent, CurrentBasePersonality);
}


