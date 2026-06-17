#include "MorKegSongComponent.h"
#include "EMSongType.h"

UMorKegSongComponent::UMorKegSongComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SongType = EMSongType::Keg;
}

void UMorKegSongComponent::ClientJoinSong_Implementation() {
}
bool UMorKegSongComponent::ClientJoinSong_Validate() {
    return true;
}


