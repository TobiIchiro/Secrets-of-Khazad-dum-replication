#include "MoriaProjectileShadow.h"
#include "MorShadowFogEmitterComponent.h"
#include "MorShadowNiagaraComponent.h"
#include "MorShadowProximityFXComponent.h"

AMoriaProjectileShadow::AMoriaProjectileShadow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EmitterComponent = CreateDefaultSubobject<UMorShadowFogEmitterComponent>(TEXT("EmitterComponent"));
    this->ProximityFXComponent = CreateDefaultSubobject<UMorShadowProximityFXComponent>(TEXT("ProximityFXComponent"));
    this->ShadowNiagaraComponent = CreateDefaultSubobject<UMorShadowNiagaraComponent>(TEXT("ShadowNiagaraComponent"));
    this->EmitterComponent->SetupAttachment(RootComponent);
    this->ProximityFXComponent->SetupAttachment(RootComponent);
    this->ShadowNiagaraComponent->SetupAttachment(RootComponent);
}


