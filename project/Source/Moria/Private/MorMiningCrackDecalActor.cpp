#include "MorMiningCrackDecalActor.h"
#include "Components/DecalComponent.h"

AMorMiningCrackDecalActor::AMorMiningCrackDecalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("RootComponent"));
    this->HitsRemaining = 0;
    this->MaxHits = 0;
    this->FadeTime = 5.00f;
    this->FadeCurve = NULL;
    this->Scale = 1.00f;
    this->DecalComponent = (UDecalComponent*)RootComponent;
    this->Mid = NULL;
}

void AMorMiningCrackDecalActor::ShowDecalIfNeeded() {
}


