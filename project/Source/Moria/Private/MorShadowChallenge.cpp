#include "MorShadowChallenge.h"
#include "FGKActorFSMComponent.h"

AMorShadowChallenge::AMorShadowChallenge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FSMComp = CreateDefaultSubobject<UFGKActorFSMComponent>(TEXT("FSMComponent"));
}



