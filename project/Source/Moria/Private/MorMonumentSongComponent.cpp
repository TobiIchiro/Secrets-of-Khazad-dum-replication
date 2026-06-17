#include "MorMonumentSongComponent.h"
#include "EMSongType.h"

UMorMonumentSongComponent::UMorMonumentSongComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SongType = EMSongType::Monument;
}


