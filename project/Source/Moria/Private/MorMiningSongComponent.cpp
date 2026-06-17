#include "MorMiningSongComponent.h"

UMorMiningSongComponent::UMorMiningSongComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractableClass = NULL;
    this->PreHummingDelaySeconds = 3.00f;
    this->SongJoinTimeoutSeconds = 10.00f;
    this->SongJoinRejectedTimeinSeconds = 5.00f;
    this->SongJoinRejectedTimeStamp = 0.00f;
    this->StopSingingTimeoutSeconds = 3.00f;
    this->SingingRejectedTimeoutSeconds = 3.00f;
    this->bStartSongOnHitPromisingRock = true;
    this->bStartSongOnHitVein = true;
    this->bStartWithPickaxeOnly = false;
    this->bRejectHummingAfterNoHits = true;
    this->RejectHummingAfterNoHitsTimeoutSeconds = 2.00f;
    this->bCanJoinWithoutHumming = true;
    this->bStopSingingAfterNoHits = false;
    this->StopSingingAfterNoHitsTimeoutSeconds = 20.00f;
    this->bStopOnPickaxeUnequip = false;
    this->CurrentInteractable = NULL;
    this->MusicManager = NULL;
    this->OwnerCharacter = NULL;
    this->OwnVoice = NULL;
}

void UMorMiningSongComponent::OnItemUnEquipped(const FItemHandle& Item) {
}

void UMorMiningSongComponent::OnItemEquipped(const FItemHandle& Item) {
}

void UMorMiningSongComponent::MusicStateChanged(EMusicState NewState) {
}


