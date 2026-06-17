#include "FGKAIPatrolPath.h"
#include "Components/SceneComponent.h"

AFGKAIPatrolPath::AFGKAIPatrolPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PositionComponent"));
    this->Type = EPatrolPathType::PingPong;
    this->bCanStartAnywhere = true;
}


