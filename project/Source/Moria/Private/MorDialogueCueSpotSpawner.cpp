#include "MorDialogueCueSpotSpawner.h"
#include "Components/SceneComponent.h"
#include "MorViewTrigger.h"

AMorDialogueCueSpotSpawner::AMorDialogueCueSpotSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ViewTrigger = CreateDefaultSubobject<UMorViewTrigger>(TEXT("ViewTrigger"));
    this->CueSpotToSpawn = NULL;
    this->CueSpotTargetLocation = CreateDefaultSubobject<USceneComponent>(TEXT("CueTargetLocation"));
    this->bIsTriggered = false;
    this->bIsCueSpotSpawned = false;
    this->SpawnedCueSpot = NULL;
    this->CueSpotTargetLocation->SetupAttachment(RootComponent);
}

void AMorDialogueCueSpotSpawner::SpawnCueSpot(EMorDialogueEventStatus DialogueEventStatus) {
}


void AMorDialogueCueSpotSpawner::OnViewed(AMorCharacter* Character) {
}

void AMorDialogueCueSpotSpawner::OnInteract(ACharacter* Interactor) {
}

void AMorDialogueCueSpotSpawner::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


