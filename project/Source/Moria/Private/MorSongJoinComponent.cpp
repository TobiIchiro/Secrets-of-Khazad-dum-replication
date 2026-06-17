#include "MorSongJoinComponent.h"

UMorSongJoinComponent::UMorSongJoinComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractableClass = NULL;
    this->SongType = EMSongType::None;
    this->bJoinSingingOnly = false;
    this->CurrentInteractable = NULL;
    this->MusicManager = NULL;
    this->OwnerCharacter = NULL;
    this->OwnVoice = NULL;
}

void UMorSongJoinComponent::InteractableInteracted(ACharacter* Interactor) {
}


