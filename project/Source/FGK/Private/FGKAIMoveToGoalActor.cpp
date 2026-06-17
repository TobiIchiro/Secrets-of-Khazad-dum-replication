#include "FGKAIMoveToGoalActor.h"
#include "Components/SceneComponent.h"

AFGKAIMoveToGoalActor::AFGKAIMoveToGoalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}


