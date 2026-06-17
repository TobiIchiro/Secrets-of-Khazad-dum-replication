#include "MorShadowFogRepellerActor.h"
#include "MorShadowFogRepellerComponent.h"

AMorShadowFogRepellerActor::AMorShadowFogRepellerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMorShadowFogRepellerComponent>(TEXT("RepellerComponent"));
    this->RepellerComponent = (UMorShadowFogRepellerComponent*)RootComponent;
}


