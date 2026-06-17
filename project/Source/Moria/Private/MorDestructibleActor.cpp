#include "MorDestructibleActor.h"
#include "DestructibleComponent.h"

AMorDestructibleActor::AMorDestructibleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDestructibleComponent>(TEXT("DestructibleComponent"));
    this->DestructibleComponent = (UDestructibleComponent*)RootComponent;
}


