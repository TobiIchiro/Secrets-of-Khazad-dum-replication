#include "MorSnappedContainerProxy.h"
#include "Components/SceneComponent.h"

AMorSnappedContainerProxy::AMorSnappedContainerProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->Root = (USceneComponent*)RootComponent;
}


