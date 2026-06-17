#include "MorSettlementSongComponent.h"
#include "EMSongType.h"

UMorSettlementSongComponent::UMorSettlementSongComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SongType = EMSongType::Settlement;
}


