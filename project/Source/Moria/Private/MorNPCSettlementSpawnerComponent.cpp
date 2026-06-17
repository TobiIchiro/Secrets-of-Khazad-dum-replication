#include "MorNPCSettlementSpawnerComponent.h"

UMorNPCSettlementSpawnerComponent::UMorNPCSettlementSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Owner = NULL;
    this->SettlementId = 0;
    this->SiblingSpawnerComponent = NULL;
    this->OwnBubble = NULL;
    this->QueryTemplate = NULL;
    this->DelayBetweenSpawnTries = 5.00f;
    this->DelayBetweenFullSpawnTries = 0.50f;
    this->MaxSpawnsPerSpawnCycle = 1;
    this->DelayPerSpawnCycle = 1.00f;
    this->EQSResetTimeSeconds = 45.00f;
}

void UMorNPCSettlementSpawnerComponent::OnBubbleUpdate(const UWorldLayoutBubble* Bubble, EBubbleState NewState) {
}


