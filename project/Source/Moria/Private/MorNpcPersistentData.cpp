#include "MorNpcPersistentData.h"

FMorNpcPersistentData::FMorNpcPersistentData() {
    this->LastTimeEaten = 0;
    this->LastTimeSlept = 0;
    this->LastTimeActive = 0;
    this->LastTimeWorked = 0;
    this->LastTimeDrunk = 0;
    this->DepartureTime = 0;
    this->bIsRescued = false;
    this->bIsSavedFromExpedition = false;
    this->ActivityPoints = 0;
    this->ResearchProgress = 0.00f;
    this->bResearchRewardEarned = false;
    this->MainHandEquip = NULL;
    this->bIsKidnapped = false;
}

