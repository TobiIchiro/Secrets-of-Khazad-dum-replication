#include "MorInteractableState_VenerationActivating.h"
#include "Templates/SubclassOf.h"

UMorInteractableState_VenerationActivating::UMorInteractableState_VenerationActivating() {
    this->bFinishAfterFirstActivation = false;
    this->CharInteractor = NULL;
    this->FinishEvenIfAborted = false;
}

void UMorInteractableState_VenerationActivating::SongEnded(bool bIsAborted, uint8 SongID, const FMorSongInstanceData& SongInstanceData) {
}

void UMorInteractableState_VenerationActivating::JoinSongExternal(ACharacter* TargetCharacter) {
}

TSubclassOf<UGameplayAbility> UMorInteractableState_VenerationActivating::GetGameplayAbility_Implementation() {
    return NULL;
}


