#include "MorTrollTurnToStone.h"

UMorTrollTurnToStone::UMorTrollTurnToStone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTrollStoningEnabled = true;
    this->bTrollStoningUnlocked = false;
    this->LightAmountNeeded = 5.00f;
    this->TransitionDelay = 0.00f;
    this->TransitionLength = 5.00f;
    this->LightSamplerComponent = NULL;
    this->VfxDelay = 0.00f;
    this->VFXSystem = NULL;
    this->SunlightEffect = NULL;
    this->WorldLighting = NULL;
    this->MorCharacterOwner = NULL;
}

void UMorTrollTurnToStone::BeginTransition() {
}


