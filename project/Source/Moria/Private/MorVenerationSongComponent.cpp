#include "MorVenerationSongComponent.h"
#include "EMSongType.h"

UMorVenerationSongComponent::UMorVenerationSongComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SongType = EMSongType::Veneration;
}


