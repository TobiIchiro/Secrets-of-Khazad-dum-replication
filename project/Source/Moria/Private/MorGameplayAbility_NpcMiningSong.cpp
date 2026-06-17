#include "MorGameplayAbility_NpcMiningSong.h"

UMorGameplayAbility_NpcMiningSong::UMorGameplayAbility_NpcMiningSong() {
    this->bEndMontageWithAbility = true;
    this->MontageToUse = NULL;
}

void UMorGameplayAbility_NpcMiningSong::SongEnded(bool bIsAborted, const uint8 SongID, const FMorSongInstanceData& SongInstanceData) {
}


