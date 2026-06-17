#include "ResourceContextMarker.h"
#include "Components/SceneComponent.h"
#include "ResourceContextComponent.h"

AResourceContextMarker::AResourceContextMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ContextComponent = CreateDefaultSubobject<UResourceContextComponent>(TEXT("Context"));
    this->ContextComponent->SetupAttachment(RootComponent);
}


