#include "DecorationPlacementVolume.h"
#include "Components/SceneComponent.h"
#include "DecoractionPlacementComponent.h"

ADecorationPlacementVolume::ADecorationPlacementVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->PlacementComponent = CreateDefaultSubobject<UDecoractionPlacementComponent>(TEXT("PlacementComponent"));
    this->PlacementComponent->SetupAttachment(RootComponent);
}


