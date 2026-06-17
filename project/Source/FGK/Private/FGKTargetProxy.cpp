#include "FGKTargetProxy.h"
#include "Components/SceneComponent.h"

AFGKTargetProxy::AFGKTargetProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SceneComponent = (USceneComponent*)RootComponent;
}


