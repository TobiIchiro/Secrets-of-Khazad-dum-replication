#include "HintManager.h"

AHintManager::AHintManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LineDuration = 3.00f;
    this->InterlineDuration = 1.00f;
}

void AHintManager::Display(const FText& Line) {
}


