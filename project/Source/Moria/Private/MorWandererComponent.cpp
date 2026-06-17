#include "MorWandererComponent.h"

UMorWandererComponent::UMorWandererComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRecruitInteractionRegister = false;
    this->bRecruitInteractionEnabled = false;
    this->bBuffInteractionRegister = false;
    this->bBuffInteractionEnabled = false;
    this->InteractBuffEffect = NULL;
    this->Character = NULL;
    this->NPCComponent = NULL;
    this->NpcManager = NULL;
}

void UMorWandererComponent::SetRecruitInteractionEnabled(bool Val) {
}

bool UMorWandererComponent::IsNpcRecruited() const {
    return false;
}


