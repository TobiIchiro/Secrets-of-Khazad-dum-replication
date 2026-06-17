#include "ApplyEffectBoxComponent.h"

UApplyEffectBoxComponent::UApplyEffectBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysCreatePhysicsState = true;
    this->ShapeBodySetup = NULL;
    this->EffectToApply = NULL;
    this->OurAbilitySystem = NULL;
}

void UApplyEffectBoxComponent::OverlapEnd(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UApplyEffectBoxComponent::OverlapBegin(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


