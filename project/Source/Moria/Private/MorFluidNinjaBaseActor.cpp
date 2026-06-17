#include "MorFluidNinjaBaseActor.h"

AMorFluidNinjaBaseActor::AMorFluidNinjaBaseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowReceiveTickEventOnDedicatedServer = false;
    this->OriginatingActor = NULL;
    this->FluidNinjaComponent = NULL;
}

void AMorFluidNinjaBaseActor::SetWaterIsOn_Implementation(bool IsPlaying) {
}

void AMorFluidNinjaBaseActor::SetTraceMeshScale_Implementation(const FVector& ScaleIn) {
}

void AMorFluidNinjaBaseActor::SetOriginatingActor(AActor* OriginatingActorIn) {
}

AActor* AMorFluidNinjaBaseActor::GetOriginatingActor() const {
    return NULL;
}


