#include "FGKAIPatrolComponent.h"

UFGKAIPatrolComponent::UFGKAIPatrolComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PatrolPath = NULL;
    this->ControllerOwner = NULL;
    this->OccupiedPatrolPoint = NULL;
}


