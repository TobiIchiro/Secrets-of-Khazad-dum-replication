#include "MorItemTintStation.h"
#include "FGKActorFSMComponent.h"

AMorItemTintStation::AMorItemTintStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FSMComp = CreateDefaultSubobject<UFGKActorFSMComponent>(TEXT("InteractableFSMComp"));
}

void AMorItemTintStation::ShowTintCraftingScreen(ACharacter* Interactor) const {
}


