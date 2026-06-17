#include "MorAISpawnerComponent.h"
#include "Templates/SubclassOf.h"

UMorAISpawnerComponent::UMorAISpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BehaviorPointDelay = 2.00f;
    this->ControllerOverrideClass = NULL;
}

void UMorAISpawnerComponent::StartBehaviorPoints(TSoftObjectPtr<AMorCharacter> Character) {
}

AMorCharacter* UMorAISpawnerComponent::SpawnMorAI(TSubclassOf<AMorCharacter> InCharacterClass, const FTransform& InSpawnTransform, ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod, bool bSuppressWarning, bool bIgnorePopulationLimits) {
    return NULL;
}

void UMorAISpawnerComponent::RemoveSpawnerRequests() {
}

void UMorAISpawnerComponent::OnStoppedUsingBehaviorPoint(AFGKAIController* AIController, UFGKAIBehaviorPointComponent* BehaviorPoint) {
}


