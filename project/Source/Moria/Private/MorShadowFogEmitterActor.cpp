#include "MorShadowFogEmitterActor.h"
#include "MorShadowFogEmitterComponent.h"
#include "MorShadowNiagaraComponent.h"
#include "MorShadowProximityFXComponent.h"

AMorShadowFogEmitterActor::AMorShadowFogEmitterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EmitterComponent = CreateDefaultSubobject<UMorShadowFogEmitterComponent>(TEXT("EmitterComponent"));
    this->ShadowProximityFXComponent = CreateDefaultSubobject<UMorShadowProximityFXComponent>(TEXT("ProximityFXComponent"));
    this->ShadowNiagaraComponent = CreateDefaultSubobject<UMorShadowNiagaraComponent>(TEXT("ShadowNiagaraComponent"));
}


