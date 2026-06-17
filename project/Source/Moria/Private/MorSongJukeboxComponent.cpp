#include "MorSongJukeboxComponent.h"

UMorSongJukeboxComponent::UMorSongJukeboxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMorSongJukeboxComponent::SongEnded(bool bIsAborted, uint8 SongID, const FMorSongInstanceData& SongInstanceData) {
}

void UMorSongJukeboxComponent::LearnSong(const FName& SongDefName) {
}

bool UMorSongJukeboxComponent::IsSongKnown(const FName& SongDefName) const {
    return false;
}


