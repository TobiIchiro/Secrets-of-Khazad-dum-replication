#include "MorViewTrigger.h"

UMorViewTrigger::UMorViewTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->DotProductThreshold = 0.80f;
    this->Radius = 10000.00f;
}


