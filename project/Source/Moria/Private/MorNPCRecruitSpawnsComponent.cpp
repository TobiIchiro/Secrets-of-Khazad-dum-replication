#include "MorNPCRecruitSpawnsComponent.h"

UMorNPCRecruitSpawnsComponent::UMorNPCRecruitSpawnsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DestinationWaypoint = NULL;
    this->DaysUntilLeaveMin = 1;
    this->DaysUntilLeaveMax = 3;
    this->SpawnerIndex = 0;
}


