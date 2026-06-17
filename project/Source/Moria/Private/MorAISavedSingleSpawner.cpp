#include "MorAISavedSingleSpawner.h"
#include "Components/CapsuleComponent.h"
#include "MorAISpawnerComponent.h"

AMorAISavedSingleSpawner::AMorAISavedSingleSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->SpawnerType = EMorAISingleSpawnerType::Explicit;
    this->ExplicitControllerOverrideClass = NULL;
    this->SpawnedCharacter = NULL;
    this->bSpawnedCharacterKilled = false;
    this->bDontAutoSpawn = false;
    this->bIgnoreKilledSave = false;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->SpawnerComponent = CreateDefaultSubobject<UMorAISpawnerComponent>(TEXT("SpawnerComponent"));
}

void AMorAISavedSingleSpawner::SpawnAiCharacter() {
}

void AMorAISavedSingleSpawner::SaveCharacterDeath() {
}

void AMorAISavedSingleSpawner::OnWorldGenDone() {
}

void AMorAISavedSingleSpawner::OnSpawnedCharacterKilled(AActor* KilledCharacter) {
}

void AMorAISavedSingleSpawner::OnBubbleStateChange(const UWorldLayoutBubble* Bubble, EBubbleState NewState) {
}

AMorCharacter* AMorAISavedSingleSpawner::GetSpawnedCharacter() const {
    return NULL;
}


