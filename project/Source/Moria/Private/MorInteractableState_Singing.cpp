#include "MorInteractableState_Singing.h"

UMorInteractableState_Singing::UMorInteractableState_Singing() {
    this->CharInteractor = NULL;
    this->FinishEvenIfAborted = false;
}

void UMorInteractableState_Singing::SongEnded(bool bIsAborted, uint8 EndedSongID, const FMorSongInstanceData& SongInstanceData) {
}



