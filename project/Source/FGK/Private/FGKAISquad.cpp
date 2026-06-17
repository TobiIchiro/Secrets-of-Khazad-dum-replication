#include "FGKAISquad.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Navigation/PathFollowingComponent.h"
#include "Components/SceneComponent.h"
#include "FGKAISquadMovementComponent.h"
#include "FGKActorFSMComponent.h"

AFGKAISquad::AFGKAISquad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent"));
    this->BehaviorFSMComp = CreateDefaultSubobject<UFGKActorFSMComponent>(TEXT("BehaviorFSMComp"));
    this->Blackboard = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard"));
    this->PathFollowingComponent = CreateDefaultSubobject<UPathFollowingComponent>(TEXT("PathFollowingComponent"));
    this->MovementComponent = CreateDefaultSubobject<UFGKAISquadMovementComponent>(TEXT("MoveComp"));
    this->TransformComponent = (USceneComponent*)RootComponent;
}

void AFGKAISquad::OnMemberDestroyed(AActor* Member) {
}


