#include "FGKActionEffect_FX.h"

UFGKActionEffect_FX::UFGKActionEffect_FX() {
    this->SystemTemplate = NULL;
    this->bAttach = false;
    this->bAutoDestroy = true;
    this->DestroyDelay = 0.00f;
    this->bAutoActivate = true;
    this->PoolingMethod = ENCPoolMethod::None;
}

void UFGKActionEffect_FX::DestroyParticles(UNiagaraComponent* Particles) {
}


