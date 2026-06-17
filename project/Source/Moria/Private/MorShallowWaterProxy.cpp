#include "MorShallowWaterProxy.h"

AMorShallowWaterProxy::AMorShallowWaterProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShallow = false;
    this->bOptional = false;
    this->Probability = 1.00f;
    this->PlayerTriggerSizeExtend = 400.00f;
}

UStaticMeshComponent* AMorShallowWaterProxy::GetWaterMeshComponent_Implementation() const {
    return NULL;
}

UBoxComponent* AMorShallowWaterProxy::GetWaterFXBox_Implementation() const {
    return NULL;
}

UBoxComponent* AMorShallowWaterProxy::GetPlayerTriggerBox_Implementation() const {
    return NULL;
}


