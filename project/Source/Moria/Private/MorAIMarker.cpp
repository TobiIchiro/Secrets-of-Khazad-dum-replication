#include "MorAIMarker.h"
#include "Components/SceneComponent.h"

AMorAIMarker::AMorAIMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MarkerType = EMarkerType::PatrolWaypoint;
    this->Value = 0.00f;
}


