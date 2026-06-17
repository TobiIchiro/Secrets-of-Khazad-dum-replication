#include "MorShadowFluid.h"

AMorShadowFluid::AMorShadowFluid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OriginatingActor = NULL;
    this->bShallow = false;
    this->bOptional = false;
    this->Probability = 1.00f;
    this->PlayerTriggerSizeExtend = 400.00f;
}

void AMorShadowFluid::SetOriginatingActor(AActor* OriginatingActorIn) {
}

UStaticMeshComponent* AMorShadowFluid::GetShadowMeshComponent_Implementation() const {
    return NULL;
}

UBoxComponent* AMorShadowFluid::GetShadowFXBox_Implementation() const {
    return NULL;
}

UBoxComponent* AMorShadowFluid::GetPlayerTriggerBox_Implementation() const {
    return NULL;
}

AActor* AMorShadowFluid::GetOriginatingActor() const {
    return NULL;
}


