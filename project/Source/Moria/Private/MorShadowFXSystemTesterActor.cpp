#include "MorShadowFXSystemTesterActor.h"
#include "MorShadowFogRepellerComponent.h"

AMorShadowFXSystemTesterActor::AMorShadowFXSystemTesterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEnabled = true;
    this->RepellerComponent = CreateDefaultSubobject<UMorShadowFogRepellerComponent>(TEXT("RepellerComponent"));
}


