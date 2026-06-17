#include "TutorialListItem.h"

FTutorialListItem::FTutorialListItem() {
    this->TutorialAction = EMorTutorialAction::None;
    this->Amount = 0;
    this->CompletesPreviousSteps = false;
    this->bCompleteForAllPlayers = false;
    this->AnimToPlayOnCompletingThisStep = NULL;
    this->bCheckIfStepAlreadyCompleted = false;
}

