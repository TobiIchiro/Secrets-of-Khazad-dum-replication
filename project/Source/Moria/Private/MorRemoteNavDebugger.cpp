#include "MorRemoteNavDebugger.h"
#include "Components/SceneComponent.h"

AMorRemoteNavDebugger::AMorRemoteNavDebugger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
}


