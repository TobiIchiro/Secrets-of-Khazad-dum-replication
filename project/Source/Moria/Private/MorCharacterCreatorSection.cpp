#include "MorCharacterCreatorSection.h"

UMorCharacterCreatorSection::UMorCharacterCreatorSection() : UUserWidget(FObjectInitializer::Get()) {
    this->bSectionHovered = false;
    this->bSectionSelected = false;
}

void UMorCharacterCreatorSection::SetSectionSelected(bool bSelected) {
}

void UMorCharacterCreatorSection::SetSectionHovered(bool bHovered) {
}

EMorCharacterCreatorSectionState UMorCharacterCreatorSection::GetSectionState() const {
    return EMorCharacterCreatorSectionState::SectionState_Normal;
}


