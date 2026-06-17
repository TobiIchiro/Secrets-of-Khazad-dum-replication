#include "MorRuneCraftingStation.h"
#include "FGKActorFSMComponent.h"

AMorRuneCraftingStation::AMorRuneCraftingStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RuneCraftingScreen = NULL;
    this->FSMComp = CreateDefaultSubobject<UFGKActorFSMComponent>(TEXT("InteractableFSMComp"));
}

void AMorRuneCraftingStation::ShowRuneCraftingScreen(ACharacter* Interactor) const {
}


