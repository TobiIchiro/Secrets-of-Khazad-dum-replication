#include "MorNPCChallengeSpawnsComponent.h"

UMorNPCChallengeSpawnsComponent::UMorNPCChallengeSpawnsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FallbackQueryTemplate = NULL;
    this->SurvivorSpawner = ESurvivorSpawner::CaptiveNPC;
}

void UMorNPCChallengeSpawnsComponent::OnFallbackQueryReady(const FIntVector& CellPosition, EMorAINavigationQueryStatus Status, FVector ValidNavLocation) {
}


