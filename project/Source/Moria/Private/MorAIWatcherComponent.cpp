#include "MorAIWatcherComponent.h"

UMorAIWatcherComponent::UMorAIWatcherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EmergeDistance = 900.00f;
    this->EmergeVolume = NULL;
    this->AttackVolume = NULL;
    this->NoGoVolume = NULL;
    this->AnchorActor = NULL;
}

bool UMorAIWatcherComponent::IsPointInVolume(FVector Point, EMorWatcherTriggerType VolumeType) const {
    return false;
}

void UMorAIWatcherComponent::InitializeWatcherComponent(AVolume* InEmergeVolume, AVolume* InAttackVolume, AVolume* InNoGoVolume, AActor* InAnchorActor) {
}

AActor* UMorAIWatcherComponent::GetAnchorActor() const {
    return NULL;
}

TArray<AMorCharacter*> UMorAIWatcherComponent::AllPlayersInTriggerType(EMorWatcherTriggerType TriggerType) const {
    return TArray<AMorCharacter*>();
}


