#include "MorOathRingInteractable.h"

AMorOathRingInteractable::AMorOathRingInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RiteSongGameplayAbility = NULL;
    this->RitesLevelSequenceActor = NULL;
    this->AcceptableGatheredDistance = 2000.00f;
    this->SummonsDebounceTime = 2.00f;
    this->SummonsSafetyClearTime = 300.00f;
    this->Summoner = NULL;
}

void AMorOathRingInteractable::StartSinging() {
}

void AMorOathRingInteractable::PlacePlayerDwarves() {
}

void AMorOathRingInteractable::OnRitesCompleted() {
}


