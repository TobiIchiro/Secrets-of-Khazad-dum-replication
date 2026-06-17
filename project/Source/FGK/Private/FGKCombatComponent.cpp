#include "FGKCombatComponent.h"

UFGKCombatComponent::UFGKCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoneHitDetectorClass = NULL;
    this->Character = NULL;
    this->CurrentComboState = NULL;
}

void UFGKCombatComponent::OnHitDetectorOverlapBegin(UPrimitiveComponent* HitterComp, AActor* OtherActor, UPrimitiveComponent* HitComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UFGKCombatComponent::OnHitDetectorHit(UPrimitiveComponent* HitterComp, AActor* OtherActor, UPrimitiveComponent* HitComp, FVector NormalImpulse, const FHitResult& HitResult) {
}

void UFGKCombatComponent::CheckComboAttacks() {
}

void UFGKCombatComponent::ApplyHit(int32 WhichActiveHit, AActor* Victim, const FHitResult& Hit, UPrimitiveComponent* HitterComp, UPrimitiveComponent* HitComp) {
}


