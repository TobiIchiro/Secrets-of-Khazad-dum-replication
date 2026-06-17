#include "MorAIWaveEncounter.h"
#include "Components/SceneComponent.h"
#include "MorAISpawnerComponent.h"

AMorAIWaveEncounter::AMorAIWaveEncounter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->SpawnerComponent = CreateDefaultSubobject<UMorAISpawnerComponent>(TEXT("SpawnerComponent"));
    this->TargetCharacter = NULL;
    this->EncounterSettings = NULL;
    this->TargetNumberOfWaves = 4;
    this->TimeOfLastWaveEnd = -1.00f;
    this->Drums = NULL;
}

void AMorAIWaveEncounter::RequestStateChangeDialogue() {
}

void AMorAIWaveEncounter::QueueWave() {
}

void AMorAIWaveEncounter::OnTargetDeadOrDestroyed(AActor* OldTarget) {
}

void AMorAIWaveEncounter::OnPlayerEnteredZone(ACharacter* Character, const UWorldLayoutZone* Zone) {
}

void AMorAIWaveEncounter::OnMemberExitedCombat(AMorAIController* MemberController) {
}

void AMorAIWaveEncounter::OnMemberDied(AActor* Member) {
}

bool AMorAIWaveEncounter::IsEncounterFinished() const {
    return false;
}

EMorAIWaveEncounterState AMorAIWaveEncounter::GetCurrentState() const {
    return EMorAIWaveEncounterState::None;
}

void AMorAIWaveEncounter::FinishEncounter(EMorAIWaveEncounterState FinishType) {
}


