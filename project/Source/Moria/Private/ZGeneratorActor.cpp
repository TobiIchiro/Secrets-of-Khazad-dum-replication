#include "ZGeneratorActor.h"
#include "Components/SceneComponent.h"
#include "ZGeneratorComponent.h"

AZGeneratorActor::AZGeneratorActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->GeneratorComponent = CreateDefaultSubobject<UZGeneratorComponent>(TEXT("Generator Component"));
}


