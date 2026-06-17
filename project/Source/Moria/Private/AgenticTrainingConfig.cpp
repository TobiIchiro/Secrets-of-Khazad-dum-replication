#include "AgenticTrainingConfig.h"
#include "Components/SceneComponent.h"

AAgenticTrainingConfig::AAgenticTrainingConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

void AAgenticTrainingConfig::StartTest() {
}

void AAgenticTrainingConfig::RestartTest(EpisodeState State) {
}

void AAgenticTrainingConfig::OnTick_Implementation(float DeltaTime) {
}





void AAgenticTrainingConfig::EndTest(bool Success) {
}


