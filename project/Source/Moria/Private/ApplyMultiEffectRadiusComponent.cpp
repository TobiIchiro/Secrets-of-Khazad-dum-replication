#include "ApplyMultiEffectRadiusComponent.h"
#include "Templates/SubclassOf.h"

UApplyMultiEffectRadiusComponent::UApplyMultiEffectRadiusComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPermanentEffects = false;
}

void UApplyMultiEffectRadiusComponent::OverlapEnd(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UApplyMultiEffectRadiusComponent::OverlapBegin(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UApplyMultiEffectRadiusComponent::ApplyEffect(const TSubclassOf<UGameplayEffect>& EffectToApply, AActor* OtherActor, UPrimitiveComponent* OtherComp, bool bFromSweep, const FHitResult& SweepResult) {
}


