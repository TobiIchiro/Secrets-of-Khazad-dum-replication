#include "DecorationBlockingVolume.h"
#include "Components/SceneComponent.h"
#include "DecorationBlockingComponent.h"

ADecorationBlockingVolume::ADecorationBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->BlockingComponent = CreateDefaultSubobject<UDecorationBlockingComponent>(TEXT("Blocking Component"));
    this->BlockingComponent->SetupAttachment(RootComponent);
}


