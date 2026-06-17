#include "MorWaterColliderTriggerBoxActor.h"
#include "MorWaterColliderTriggerBoxComp.h"

AMorWaterColliderTriggerBoxActor::AMorWaterColliderTriggerBoxActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMorWaterColliderTriggerBoxComp>(TEXT("ColliderTriggerBox"));
    this->ColliderTriggerBoxComp = (UMorWaterColliderTriggerBoxComp*)RootComponent;
}


