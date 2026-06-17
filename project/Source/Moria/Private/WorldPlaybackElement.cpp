#include "WorldPlaybackElement.h"

AWorldPlaybackElement::AWorldPlaybackElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->AttackTime = 0.20f;
    this->DecayTime = 0.35f;
    this->PeakScaleFactor = 1.40f;
    this->LifeTime = 20.00f;
    this->FinalMaterial = NULL;
}


